function Viz3DSFunc(block)
    setup(block);
end

function setup(block)
    % Inputs:
    %  1 - centroids3D  [100×3]
    %  2 - bboxes3D     [100×6]
    %  3 - bboxes2D     [100×6]  (for labels: score + classID)
    %  4 - depth flat   [921600×1]
    block.NumInputPorts  = 5;
    block.NumOutputPorts = 0;

    block.InputPort(1).Dimensions        = [20, 3];
    block.InputPort(1).DatatypeID        = 0;
    block.InputPort(1).Complexity        = 'Real';
    block.InputPort(1).DirectFeedthrough = true;

    block.InputPort(2).Dimensions        = [20, 6];
    block.InputPort(2).DatatypeID        = 0;
    block.InputPort(2).Complexity        = 'Real';
    block.InputPort(2).DirectFeedthrough = true;

    block.InputPort(3).Dimensions        = [20, 6];
    block.InputPort(3).DatatypeID        = 0;
    block.InputPort(3).Complexity        = 'Real';
    block.InputPort(3).DirectFeedthrough = true;

    block.InputPort(4).Dimensions        = [720*1280, 1];
    block.InputPort(4).DatatypeID        = 0;
    block.InputPort(4).Complexity        = 'Real';
    block.InputPort(4).DirectFeedthrough = true;

    block.InputPort(5).Dimensions        = [20, 4];
    block.InputPort(5).DatatypeID        = 0;
    block.InputPort(5).Complexity        = 'Real';
    block.InputPort(5).DirectFeedthrough = true;

    % Dialog params: fx, fy, cx, cy, imgH, imgW, classNames (cell string)
    % classNames passed as a string: 'blue_cube,bottle,person'
    block.NumDialogPrms     = 7;
    block.DialogPrmsTunable = {'Nontunable','Nontunable','Nontunable',...
                               'Nontunable','Nontunable','Nontunable',...
                               'Nontunable'};

    block.SampleTimes = [-1 0];

    block.RegBlockMethod('Start',     @Start);
    block.RegBlockMethod('Outputs',   @Outputs);
    block.RegBlockMethod('Terminate', @Terminate);
end

% ----------------------------------------------------------------
function Start(block)
    global viz3D_fig viz3D_ax;

    % Create persistent figure
    viz3D_fig = figure('Name',        '3D Detection Viewer', ...
                       'NumberTitle', 'off', ...
                       'Color',       [0.1 0.1 0.1], ...
                       'Position',    [100 100 900 700]);

    viz3D_ax = axes('Parent',   viz3D_fig, ...
                    'Color',    [0.05 0.05 0.05], ...
                    'XColor',   [0.7 0.7 0.7], ...
                    'YColor',   [0.7 0.7 0.7], ...
                    'ZColor',   [0.7 0.7 0.7], ...
                    'GridColor',[0.3 0.3 0.3], ...
                    'GridAlpha', 0.4);

    grid(viz3D_ax, 'on');
    hold(viz3D_ax, 'on');
    xlabel(viz3D_ax, 'X (m)'); 
    ylabel(viz3D_ax, 'Y (m)');
    zlabel(viz3D_ax, 'Z / Depth (m)');
    title(viz3D_ax,  '3D Object Detection — Live', 'Color', 'w');
    view(viz3D_ax, [-35 25]);
    axis(viz3D_ax, 'equal');

    fprintf('Viz3DSFunc: Figure created.\n');
end

% ----------------------------------------------------------------
function Outputs(block)
    global viz3D_fig viz3D_ax;

    if ~isvalid(viz3D_fig); return; end

    % --- Read dialog params ---
    fx         = block.DialogPrm(1).Data;
    fy         = block.DialogPrm(2).Data;
    cx         = block.DialogPrm(3).Data;
    cy         = block.DialogPrm(4).Data;
    imgH       = block.DialogPrm(5).Data;
    imgW       = block.DialogPrm(6).Data;
    classStr   = block.DialogPrm(7).Data;
    classNames = strsplit(classStr, ',');

    % --- Read inputs ---
    centroids = block.InputPort(1).Data;   % [100×3]
    bboxes3D  = block.InputPort(2).Data;   % [100×6]
    bboxes2D  = block.InputPort(3).Data;   % [100×6]
    depthFlat = block.InputPort(4).Data;   % [921600×1]
    orientation = block.InputPort(5).Data;   % [20×4]
    depthImg  = reshape(depthFlat, [imgH, imgW]);

    % --- Clear previous frame ---
    cla(viz3D_ax);

    % --- Color palette per class ---
    colors = [0.2 0.6 1.0;   % blue
              1.0 0.4 0.2;   % orange
              0.2 1.0 0.4;   % green
              1.0 1.0 0.2;   % yellow
              0.8 0.2 1.0;   % purple
              1.0 0.2 0.4;   % red
              0.2 1.0 1.0];  % cyan

    % --- Build full scene point cloud from depth ---
    [uGrid, vGrid] = meshgrid(1:imgW, 1:imgH);
    validMask      = depthImg > 0 & isfinite(depthImg);
    uVec   = double(uGrid(validMask));
    vVec   = double(vGrid(validMask));
    zVec   = depthImg(validMask);

    % Backproject all valid pixels → 3D
    xAll = (uVec - cx) .* zVec / fx;
    yAll = (vVec - cy) .* zVec / fy;
    zAll = zVec;

    % Downsample for speed (every 8th point)
    step = 8;
    idx  = 1:step:length(xAll);
    scatter3(viz3D_ax, xAll(idx), zAll(idx), -yAll(idx), ...
             1, zAll(idx), 'filled');
    colormap(viz3D_ax, 'turbo');

    % --- Draw per-object overlays ---
    for i = 1:20
        if bboxes2D(i,5) == 0; continue; end   % skip empty

        classID = max(1, min(round(bboxes2D(i,6)), length(classNames)));
        score   = bboxes2D(i,5);
        cname   = strtrim(classNames{classID});
        col     = colors(mod(classID-1, size(colors,1))+1, :);

        cx3 = centroids(i,1);
        cy3 = centroids(i,2);
        cz3 = centroids(i,3);
        w3  = bboxes3D(i,4);
        h3  = bboxes3D(i,5);
        d3  = bboxes3D(i,6);

        % 1) Centroid marker
        scatter3(viz3D_ax, cx3, cz3, -cy3, ...
                 120, col, 'filled', 'MarkerEdgeColor', 'w', ...
                 'LineWidth', 1.5);

        % 2) Object point cloud (pixels inside bbox, colored)
        bx = bboxes2D(i,1); by = bboxes2D(i,2);
        bw = bboxes2D(i,3); bh = bboxes2D(i,4);
        x1 = max(round(bx),1);     y1 = max(round(by),1);
        x2 = min(round(bx+bw),imgW); y2 = min(round(by+bh),imgH);

        if x2 > x1 && y2 > y1
            patch   = depthImg(y1:y2, x1:x2);
            [pu,pv] = meshgrid(x1:x2, y1:y2);
            pmask   = patch > 0 & isfinite(patch);

            if any(pmask(:))
                puV = double(pu(pmask));
                pvV = double(pv(pmask));
                pzV = patch(pmask);
                pxV = (puV - cx) .* pzV / fx;
                pyV = (pvV - cy) .* pzV / fy;

                % Downsample object cloud
                si  = 1:max(1,floor(length(pxV)/200)):length(pxV);
                scatter3(viz3D_ax, pxV(si), pzV(si), -pyV(si), ...
                         8, repmat(col, length(si), 1), 'filled', ...
                         'MarkerFaceAlpha', 0.6);
            end
        end

        % 5) Draw principal axis arrow
        arrowDir = orientation(i, 1:3);
        dominantAxis = orientation(i, 4);

        % Arrow color by dominant axis
        if dominantAxis == 1
            arrowCol = [1 0.3 0.3];   % red  = X axis
        elseif dominantAxis == 2
            arrowCol = [0.3 1 0.3];   % green = Y axis (up)
        elseif dominantAxis == 3
            arrowCol = [0.3 0.3 1];   % blue  = Z axis (depth)
        else
            arrowCol = [1 1 1];       % white = symmetric box
        end

        drawArrow3D(viz3D_ax, cx3, cy3, cz3, arrowDir, 0.15, arrowCol);
        % 3) Draw 3D bounding box
       drawBox3D(viz3D_ax, cx3, cy3, cz3, w3, h3, d3, col);
        % 6) Label with axis info
        axisNames = {'box', 'X', 'Y(up)', 'Z'};
        axisLabel = axisNames{dominantAxis + 1};
        labelStr  = sprintf('%s %.0f%%  [%s]', cname, score*100, axisLabel);

        % 4) Label text
        % labelStr = sprintf('%s  %.0f%%', cname, score*100);
        text(viz3D_ax, cx3, cz3 + d3/2 + 0.05, -cy3, ...
             labelStr, ...
             'Color',              col, ...
             'FontSize',           10, ...
             'FontWeight',         'bold', ...
             'BackgroundColor',    [0.1 0.1 0.1], ...
             'EdgeColor',          col, ...
             'HorizontalAlignment','center');
    end

    xlabel(viz3D_ax, 'X (m)');
    ylabel(viz3D_ax, 'Depth / Z (m)');
    zlabel(viz3D_ax, 'Y (m)');
    drawnow limitrate;
end

% ----------------------------------------------------------------
function Terminate(~)
    fprintf('Viz3DSFunc: Simulation ended.\n');
end

% ----------------------------------------------------------------
function drawBox3D(ax, cx, cy, cz, w, h, d, col)
    % 8 corners of box centered at (cx, cy, cz)
    % Note: plot in (X, Z, -Y) space to match scatter axes
    hw = w/2; hh = h/2; hd = d/2;

    corners = [
        cx-hw,  cy-hh,  cz-hd;
        cx+hw,  cy-hh,  cz-hd;
        cx+hw,  cy+hh,  cz-hd;
        cx-hw,  cy+hh,  cz-hd;
        cx-hw,  cy-hh,  cz+hd;
        cx+hw,  cy-hh,  cz+hd;
        cx+hw,  cy+hh,  cz+hd;
        cx-hw,  cy+hh,  cz+hd;
    ];

    % Convert to plot space: (X, Z, -Y)
    px = corners(:,1);
    py = corners(:,3);
    pz = -corners(:,2);

    % 12 edges of a box
    edges = [1 2; 2 3; 3 4; 4 1; ...   % bottom face
             5 6; 6 7; 7 8; 8 5; ...   % top face
             1 5; 2 6; 3 7; 4 8];      % vertical edges

    for e = 1:size(edges,1)
        i1 = edges(e,1); i2 = edges(e,2);
        plot3(ax, [px(i1) px(i2)], ...
                  [py(i1) py(i2)], ...
                  [pz(i1) pz(i2)], ...
              'Color', [col 0.85], 'LineWidth', 1.8);
    end
end

function drawArrow3D(ax, cx, cy, cz, arrowDir, arrowLen, col)
    % arrowDir = [dx, dy, dz] unit vector (camera frame)
    % Plot space: (X, Z, -Y)

    dx = arrowDir(1);
    dy = arrowDir(2);
    dz = arrowDir(3);

    % Tail and tip in plot space
    tx = cx;           ty = cz;           tz = -cy;
    hx = cx + dx*arrowLen;
    hy = cz + dz*arrowLen;
    hz = -(cy + dy*arrowLen);

    % Shaft
    plot3(ax, [tx hx], [ty hy], [tz hz], ...
          '-', 'Color', col, 'LineWidth', 3);

    % Tip marker
    scatter3(ax, hx, hy, hz, 60, col, 'filled', ...
             'MarkerEdgeColor', 'w', 'LineWidth', 1);
end