function YOLOv8SFunc(block)
setup(block);
end

function setup(block)
    block.NumInputPorts  = 1;
    block.NumOutputPorts = 2;

    % ---- Input: flattened RGB image ----
    block.InputPort(1).Dimensions        = [720*1280*3  1];
    block.InputPort(1).DatatypeID        = 3;       % uint8
    block.InputPort(1).Complexity        = 'Real';
    block.InputPort(1).DirectFeedthrough = true;

    % ---- Output 1: annotated image (flattened) ----
    block.OutputPort(1).Dimensions       = [720*1280*3  1];
    block.OutputPort(1).DatatypeID       = 3;       % uint8
    block.OutputPort(1).Complexity       = 'Real';

    % ---- Output 2: bounding boxes [20x6] ----
    % Each row: [x y w h score classID]
    % Unused rows = zeros, max 20 detections per frame
    block.OutputPort(2).Dimensions       = [20  6];
    block.OutputPort(2).DatatypeID       = 0;       % double
    block.OutputPort(2).Complexity       = 'Real';

    % 2 dialog parameters: (1) model path, (2) ignore list (comma-separated)
    block.NumDialogPrms     = 2;
    block.DialogPrmsTunable = {'Nontunable', 'Nontunable'};

    block.SampleTimes = [-1 0];

    block.RegBlockMethod('Start',     @Start);
    block.RegBlockMethod('Outputs',   @Outputs);
    block.RegBlockMethod('Terminate', @Terminate);
end

function Start(block)
    fprintf('YOLOv8 S-Function initializing...\n');

    net_loaded        = evalin('base', 'net');
    classNames_loaded = evalin('base', 'classNames');

    ud.net        = net_loaded;
    ud.classNames = classNames_loaded;

    set_param(block.BlockHandle, 'UserData',           ud);
    set_param(block.BlockHandle, 'UserDataPersistent', true);

    fprintf('YOLOv8 model ready. Classes loaded: %d\n', numel(classNames_loaded));
end

function Outputs(block)
    ud         = get_param(block.BlockHandle, 'UserData');
    net        = ud.net;
    classNames = ud.classNames;

    % Reshape flat input to image
    flatImg = block.InputPort(1).Data(:);
    rgbImg  = reshape(flatImg, [720 1280 3]);

    % Read ignore list from dialog param 2
    ignoreStr  = block.DialogPrm(2).Data;
    ignoreList = strtrim(strsplit(ignoreStr, ','));

    % Run detection
    [annotated, bboxOut] = runYOLOv8(net, classNames, rgbImg, ignoreList);

    % Write outputs
    block.OutputPort(1).Data = reshape(annotated, [720*1280*3 1]);
    block.OutputPort(2).Data = bboxOut;
end

function Terminate(block)
    set_param(block.BlockHandle, 'UserData', []);
    fprintf('YOLOv8 S-Function terminated.\n');
end

% ============================================================
function [annotatedImg, bboxOut] = runYOLOv8(net, classNames, rgbImg, ignoreList)
    annotatedImg = rgbImg;
    bboxOut      = zeros(20, 6);

    inputSize = 640;
    threshold = 0.3;
    origH     = size(rgbImg, 1);
    origW     = size(rgbImg, 2);

    % ---- Letterbox ----
    scale   = min(inputSize/origH, inputSize/origW);
    newH    = round(origH * scale);
    newW    = round(origW * scale);
    padTop  = floor((inputSize - newH) / 2);
    padLeft = floor((inputSize - newW) / 2);

    resized = imresize(rgbImg, [newH newW]);
    canvas  = uint8(128 * ones(inputSize, inputSize, 3));
    canvas(padTop+1:padTop+newH, padLeft+1:padLeft+newW, :) = resized;

    % ---- Inference ----
    imgNorm = single(canvas) / 255.0;
    imgDL   = dlarray(reshape(imgNorm, [inputSize inputSize 3 1]), 'SSCB');

    try
        output  = predict(net, imgDL);
        outData = squeeze(extractdata(output));
    catch ME
        warning('YOLOv8: Inference failed: %s', ME.message);
        return;
    end

    if isvector(outData); return; end

    numClasses = length(classNames);
    if size(outData, 1) < 4 + numClasses; return; end

    % ---- Parse detections ----
    boxPreds              = outData(1:4, :);
    classPreds            = outData(5:5+numClasses-1, :);
    [maxScores, classIdx] = max(classPreds, [], 1);
    keepIdx               = maxScores >= threshold;

    if ~any(keepIdx); return; end

    fb = boxPreds(:, keepIdx);
    fs = maxScores(keepIdx);
    fc = classIdx(keepIdx);

    % Convert cx cy w h -> x y w h in original image coords
    x1 = (fb(1,:) - fb(3,:)/2 - padLeft) / scale;
    y1 = (fb(2,:) - fb(4,:)/2 - padTop)  / scale;
    bw = fb(3,:) / scale;
    bh = fb(4,:) / scale;

    x1 = max(x1, 1);
    y1 = max(y1, 1);
    bw = min(bw, double(origW) - x1);
    bh = min(bh, double(origH) - y1);

    % ---- NMS ----
    [bboxes, scores, nmsIdx] = selectStrongestBbox( ...
        double([x1' y1' bw' bh']), double(fs)', ...
        'RatioType',        'Union', ...
        'OverlapThreshold', 0.45);

    if isempty(bboxes); return; end

    % ---- Pack output [20x6]: [x y w h score classID] ----
    nDet   = min(size(bboxes, 1), 20);
    labels = {};
    rowIdx = 0;

    for i = 1:nDet
        classID   = double(fc(nmsIdx(i)));
        className = classNames{classID};

        % Skip ignored classes
        if any(strcmpi(className, ignoreList))
            continue;
        end

        rowIdx             = rowIdx + 1;
        bboxOut(rowIdx, :) = [bboxes(i,:), scores(i), classID];
        labels{rowIdx}     = sprintf('%s %.2f', className, scores(i));
    end

    if rowIdx == 0; return; end

    % ---- Annotate image ----
    try
        annotatedImg = insertObjectAnnotation( ...
            rgbImg, 'rectangle', bboxOut(1:rowIdx, 1:4), labels(1:rowIdx), ...
            'TextBoxOpacity', 0.8, ...
            'FontSize',       12,  ...
            'Color',          'yellow');
    catch
        annotatedImg = rgbImg;
    end
end