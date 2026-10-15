function FrustumDepthSFunc(block)
    setup(block);
end

function setup(block)
    block.NumInputPorts  = 2;
    block.NumOutputPorts = 3;

    block.InputPort(1).Dimensions        = [720*1280, 1];
    block.InputPort(1).DatatypeID        = 0;
    block.InputPort(1).Complexity        = 'Real';
    block.InputPort(1).DirectFeedthrough = true;

    block.InputPort(2).Dimensions        = [20, 6];
    block.InputPort(2).DatatypeID        = 0;
    block.InputPort(2).Complexity        = 'Real';
    block.InputPort(2).DirectFeedthrough = true;

    % Output 1: centroids [20×3]
    block.OutputPort(1).Dimensions       = [20, 3];
    block.OutputPort(1).DatatypeID       = 0;
    block.OutputPort(1).Complexity       = 'Real';

    % Output 2: 3D bboxes [20×6]
    block.OutputPort(2).Dimensions       = [20, 6];
    block.OutputPort(2).DatatypeID       = 0;
    block.OutputPort(2).Complexity       = 'Real';

    % Output 3: orientation [20×4] — roll, pitch, yaw, method
    block.OutputPort(3).Dimensions       = [20, 4];
    block.OutputPort(3).DatatypeID       = 0;
    block.OutputPort(3).Complexity       = 'Real';

    % Dialog: fx, fy, cx, cy, imgH, imgW
    block.NumDialogPrms     = 6;
    block.DialogPrmsTunable = {'Nontunable','Nontunable','Nontunable',...
                               'Nontunable','Nontunable','Nontunable'};

    block.SampleTimes = [-1 0];

    block.RegBlockMethod('Outputs',         @Outputs);
    block.RegBlockMethod('CheckParameters', @CheckParameters);
end

function CheckParameters(block)
    fx   = block.DialogPrm(1).Data;
    fy   = block.DialogPrm(2).Data;
    cx   = block.DialogPrm(3).Data;
    cy   = block.DialogPrm(4).Data;
    imgH = block.DialogPrm(5).Data;
    imgW = block.DialogPrm(6).Data;
    assert(fx > 0 && fy > 0, 'fx and fy must be positive');
    assert(imgH > 0 && imgW > 0, 'Image dimensions must be positive');
end

function Outputs(block)
    fx   = block.DialogPrm(1).Data;
    fy   = block.DialogPrm(2).Data;
    cx   = block.DialogPrm(3).Data;
    cy   = block.DialogPrm(4).Data;
    imgH = block.DialogPrm(5).Data;
    imgW = block.DialogPrm(6).Data;

    depthFlat = block.InputPort(1).Data(:);
    depthImg  = reshape(depthFlat, [imgH, imgW]);
    bboxMat   = block.InputPort(2).Data;

    centroids3D  = zeros(20, 3);
    bboxes3D     = zeros(20, 6);
    orientation  = zeros(20, 4);   % [roll, pitch, yaw, method]

    for i = 1:20
        row = bboxMat(i, :);
        if row(5) == 0; continue; end

        bx = row(1); by = row(2);
        bw = row(3); bh = row(4);

        x1 = max(round(bx), 1);
        y1 = max(round(by), 1);
        x2 = min(round(bx + bw), imgW);
        y2 = min(round(by + bh), imgH);

        if x2 <= x1 || y2 <= y1; continue; end

        depthPatch = depthImg(y1:y2, x1:x2);
        validMask  = depthPatch > 0 & isfinite(depthPatch);
        if ~any(validMask(:)); continue; end

        validDepths = depthPatch(validMask);
        zMedian     = median(validDepths);

        % Backproject patch pixels to 3D
        [uGrid, vGrid] = meshgrid(x1:x2, y1:y2);
        uVec = double(uGrid(validMask));
        vVec = double(vGrid(validMask));
        zVec = validDepths;

        xVec = (uVec - cx) .* zVec / fx;
        yVec = (vVec - cy) .* zVec / fy;

        pts3D = [xVec, yVec, zVec];   % [N×3] point cloud of object

        % Centroid
        uCenter = (x1 + x2) / 2.0;
        vCenter = (y1 + y2) / 2.0;
        xWorld  = (uCenter - cx) * zMedian / fx;
        yWorld  = (vCenter - cy) * zMedian / fy;
        centroids3D(i, :) = [xWorld, yWorld, zMedian];

        % 3D bbox size
        xMin3D   = (x1 - cx) * zMedian / fx;
        xMax3D   = (x2 - cx) * zMedian / fx;
        yMin3D   = (y1 - cy) * zMedian / fy;
        yMax3D   = (y2 - cy) * zMedian / fy;
        width3D  = abs(xMax3D - xMin3D);
        height3D = abs(yMax3D - yMin3D);
        zNear    = prctile(validDepths, 10);
        zFar     = prctile(validDepths, 90);
        depth3D  = max(abs(zFar - zNear), 0.01);
        bboxes3D(i, :) = [xWorld, yWorld, zMedian, width3D, height3D, depth3D];

        % ---- Orientation estimation ----
        % ---- Orientation: longest axis direction ----
        [arrowDir, dominantAxis] = findPrincipalAxis(pts3D, width3D, height3D, depth3D);
        orientation(i, :) = [arrowDir(1), arrowDir(2), arrowDir(3), dominantAxis];
    end

    block.OutputPort(1).Data = centroids3D;
    block.OutputPort(2).Data = bboxes3D;
    block.OutputPort(3).Data = orientation;
end

% ================================================================
% Find principal axis — which direction the object is pointing
% For elongated objects: longest dimension
% For symmetric/boxy objects: default upward (gravity axis)
% ================================================================
function [arrowDir, dominantAxis] = findPrincipalAxis(pts3D, width3D, height3D, depth3D)
    % Default: point upward (camera -Y = world up)
    arrowDir      = [0, -1, 0];
    dominantAxis  = 0;

    dims = [width3D, height3D, depth3D];   % [X, Y, Z] extents

    % Check if object is elongated enough to have a clear axis
    % Ratio of longest to second longest must be > 1.4
    sortedDims  = sort(dims, 'descend');
    elongRatio  = sortedDims(1) / max(sortedDims(2), 1e-6);

    if elongRatio < 1.4
        % Symmetric/boxy — just point upward
        arrowDir     = [0, -1, 0];   % -Y = up in camera frame
        dominantAxis = 0;
        return;
    end

    % Find which dimension is dominant
    [~, axisIdx] = max(dims);   % 1=X(width), 2=Y(height), 3=Z(depth)

    if size(pts3D, 1) >= 10
        % Use actual point spread to find direction within that axis
        mu     = mean(pts3D, 1);
        ptsCen = pts3D - mu;

        % Project points onto each candidate axis
        axisVecs = [1 0 0; 0 1 0; 0 0 1];   % X, Y, Z unit vectors
        mainVec  = axisVecs(axisIdx, :);

        % Refine: use mean of points in positive half to get arrow direction
        projections = ptsCen * mainVec';
        posPoints   = pts3D(projections > 0, :);
        negPoints   = pts3D(projections < 0, :);

        if ~isempty(posPoints) && ~isempty(negPoints)
            % Arrow points from centroid toward the "top" of the object
            % For Y axis: toward smaller Y value (up in image = up in world)
            % For X/Z axis: toward positive direction
            if axisIdx == 2
                % Y axis — point toward smaller Y (upward)
                arrowDir = [0, -1, 0];
            else
                arrowDir = mainVec;
            end
        else
            arrowDir = mainVec;
        end
    else
        % Not enough points — use bbox dimension axis directly
        axisVecs = [1 0 0; 0 -1 0; 0 0 1];
        arrowDir = axisVecs(axisIdx, :);
    end

    dominantAxis = axisIdx;

    % Normalize
    n = norm(arrowDir);
    if n > 1e-6
        arrowDir = arrowDir / n;
    end
end