# RoboCup ARM — Pick-and-Place Pipeline

A full perception-to-motion pipeline for a RoboCup pick-and-place competition, built in MATLAB Simulink using a UR5e robotic arm with a wrist-mounted RGB-D camera. The system runs YOLO-based object detection, 3D frustum-based pose estimation, and graph-ordered motion planning — all integrated as Level-2 MATLAB S-Functions inside a single Simulink model.

---

## Project Structure

```
RoboCup_ARM/
│
│   RoboCup_ARM.prj              # MATLAB project file (manages paths & startup)
│   RoboCup_ARM.slx              # Top-level Simulink model
│   YOLOv8SFunc.m                # Level-2 S-Function: YOLOv8 object detection
│   YOLOv8SFunc.asv              # Auto-save backup of YOLOv8SFunc
│   FrustumDepthSFunc.m          # Level-2 S-Function: frustum-based 3D pose estimation
│   Viz3DSFunc.m                 # Level-2 S-Function: 3D workspace visualization
│
├── modelData/                   # Model weights and workspace data
│       best.onnx                # Trained YOLOv8 detection model (ONNX)
│       yolov8_model.mat         # YOLOv8 model loaded into MATLAB format
│       arm_data.mat             # UR5e arm configuration and joint data
│       ur5e_gripper.mat         # Gripper model parameters
│       example_world.mat        # Example arena world state (scenario 1)
│       example_world2.mat       # Example arena world state (scenario 2)
│
├── +best/                       # Auto-generated ONNX import package
│   │   SplitLayer100*.m         # Custom split layer implementations
│   │   Reshape_To_*.m           # Custom reshape/transpose layer implementations
│   ├── +coder/                  # Coder-compatible layer variants
│   └── +ops/                    # ONNX operator helpers (concat, split, permute, etc.)
│
├── scripts/                     # Startup and utility scripts
│       arm_startup.m            # Project startup script (loads paths, data)
│       attachToTool.m           # Attaches object to gripper tool frame
│
├── Objects/                     # 3D simulation assets
│       *.fbx                    # Object meshes (bottles, cans, boxes, SPAM, scale, marker)
│       *_textures/              # PBR texture maps for each object
│
├── resources/                   # MATLAB project metadata (auto-managed)
└── slprj/                       # Simulink build artifacts (auto-generated, do not edit)
```

---

## Key Files

| File | Type | Purpose |
|------|------|---------|
| `RoboCup_ARM.slx` | `.slx` | Top-level Simulink model containing the full pipeline |
| `RoboCup_ARM.prj` | `.prj` | MATLAB project — opens the workspace and sets all paths |
| `YOLOv8SFunc.m` | `.m` (S-Function) | Level-2 S-Function wrapping YOLOv8 inference inside Simulink |
| `FrustumDepthSFunc.m` | `.m` (S-Function) | Level-2 S-Function for frustum-based 3D pose estimation from RGB-D |
| `Viz3DSFunc.m` | `.m` (S-Function) | Level-2 S-Function for real-time 3D workspace visualization |
| `modelData/best.onnx` | `.onnx` | YOLOv8 weights exported from training — loaded via `importNetworkFromONNX` |
| `modelData/yolov8_model.mat` | `.mat` | Pre-imported MATLAB network object (faster load than ONNX at runtime) |
| `modelData/arm_data.mat` | `.mat` | UR5e DH parameters, joint limits, and kinematic config |
| `modelData/ur5e_gripper.mat` | `.mat` | Gripper geometry and tool-frame transform |
| `modelData/example_world.mat` | `.mat` | Saved arena state for offline testing |
| `scripts/arm_startup.m` | `.m` | Run once on project open — loads model data into workspace |
| `scripts/attachToTool.m` | `.m` | Utility to attach a picked object to the gripper tool frame |

---

## Pipeline Architecture

```
RGB-D Camera Feed
       │
       ▼
┌─────────────────────┐
│   YOLOv8SFunc.m     │  ← Level-2 S-Function
│   (best.onnx)       │    Detects objects, returns bounding boxes + class IDs
└──────────┬──────────┘
           │  bboxes, classes
           ▼
┌─────────────────────┐
│ FrustumDepthSFunc.m │  ← Level-2 S-Function
│                     │    Projects 2D detections into 3D using depth channel
└──────────┬──────────┘
           │  3D object poses (x, y, z)
           ▼
┌─────────────────────┐
│  Pick Order Graph   │    Proximity-threshold dependency graph
│  (in RoboCup_ARM.slx)│   Determines safe pick sequence
└──────────┬──────────┘
           │  ordered pick targets
           ▼
┌─────────────────────┐
│   UR5e Motion       │    Inverse kinematics + joint trajectory generation
│   Planner (.slx)    │    Executes picks using arm_data + ur5e_gripper
└─────────────────────┘
           │
           ▼
┌─────────────────────┐
│   Viz3DSFunc.m      │  ← Level-2 S-Function
│                     │    Live 3D visualization of arm state and workspace
└─────────────────────┘
```

---

## Requirements

- MATLAB R2023b or later
- Simulink
- Simulink 3D Animation
- Robotics System Toolbox
- Computer Vision Toolbox
- Deep Learning Toolbox
- Deep Learning Toolbox Converter for ONNX Model Format

---

## Submission Files

| File | Description |
|------|-------------|
| `RoboCup_ARM.slx` | Main Simulink model |
| `RoboCup_ARM.prj` | MATLAB project file |
| `YOLOv8SFunc.m` | YOLOv8 detection S-Function |
| `FrustumDepthSFunc.m` | Frustum depth estimation S-Function |
| `Viz3DSFunc.m` | 3D visualization S-Function |
| `modelData/best.onnx` | Trained YOLOv8 model weights |
| `modelData/yolov8_model.mat` | Pre-imported MATLAB network object |
| `modelData/arm_data.mat` | UR5e arm configuration |
| `modelData/ur5e_gripper.mat` | Gripper model |
| `modelData/example_world.mat` | Example world state (scenario 1) |
| `modelData/example_world2.mat` | Example world state (scenario 2) |
| `scripts/arm_startup.m` | Startup script |
| `scripts/attachToTool.m` | Tool attachment utility |
| `Objects/` | All `.fbx` meshes and textures |

---

## Getting Started

### Step 1 — Regenerate `yolov8_model.mat` (required on first run)

The `yolov8_model.mat` file is machine-specific and must be regenerated locally from the provided `best.onnx`. Open the Live Script `scripts/export_model.mlx` in MATLAB and run it once from the **project root folder** (where `RoboCup_ARM.prj` lives).

```matlab
% ============= DIRECT INFERENCE WITHOUT WRAPPER =============
onnxPath = fullfile(pwd, 'modelData', 'best.onnx');
classNames = {'blue_cube', 'bottle', 'can', 'green_cube', ...
              'marker', 'others', 'purple_cube', 'red_cube', ...
              'spam', 'weight'};

% Import network
net = importNetworkFromONNX(onnxPath);

% ---- Predict function ----
function [bboxes, scores, labels] = predictYOLOv8(net, img, classNames, threshold)
    if nargin < 4; threshold = 0.3; end
    origH = size(img,1);
    origW = size(img,2);
    inputSize = 640;

    % Letterbox resize to 640x640
    scale  = min(inputSize/origH, inputSize/origW);
    newH   = round(origH * scale);
    newW   = round(origW * scale);
    padTop  = floor((inputSize - newH) / 2);
    padLeft = floor((inputSize - newW) / 2);
    resized = imresize(img, [newH newW]);
    canvas  = uint8(128 * ones(inputSize, inputSize, 3));
    canvas(padTop+1:padTop+newH, padLeft+1:padLeft+newW, :) = resized;

    % Normalize to [0,1] and format for network
    imgNorm = single(canvas) / 255.0;
    imgDL   = dlarray(permute(imgNorm, [1 2 3]), 'SSC'); % H W C
    imgDL   = reshape(imgDL, [inputSize inputSize 3 1]); % H W C N

    % Run inference
    output  = predict(net, imgDL);

    % Parse YOLOv8 output: [batch, 4+numClasses, num_anchors]
    outData = extractdata(output);
    outData = squeeze(outData); % [4+numClasses, num_anchors]

    numClasses = length(classNames);
    numAnchors = size(outData, 2);

    % Split boxes and class scores
    boxPreds   = outData(1:4, :);   % [cx cy w h]
    classPreds = outData(5:end, :); % [numClasses x numAnchors]

    % Get best class score per anchor
    [maxScores, classIdx] = max(classPreds, [], 1);

    % Filter by threshold
    keepIdx = maxScores >= threshold;
    if ~any(keepIdx)
        bboxes = []; scores = []; labels = [];
        return;
    end
    boxPreds   = boxPreds(:, keepIdx);
    maxScores  = maxScores(keepIdx);
    classIdx   = classIdx(keepIdx);

    % Convert cx cy w h -> x y w h (pixel coords in 640 space)
    cx = boxPreds(1,:);
    cy = boxPreds(2,:);
    bw = boxPreds(3,:);
    bh = boxPreds(4,:);
    x1 = cx - bw/2;
    y1 = cy - bh/2;

    % Map back to original image coords
    x1 = (x1 - padLeft) / scale;
    y1 = (y1 - padTop)  / scale;
    bw = bw / scale;
    bh = bh / scale;

    % Clamp to image bounds
    x1 = max(x1, 1);
    y1 = max(y1, 1);
    bw = min(bw, origW - x1);
    bh = min(bh, origH - y1);
    bboxesMat = [x1' y1' bw' bh'];

    % NMS to remove overlapping boxes
    [bboxes, scores, idx] = selectStrongestBbox(bboxesMat, maxScores', ...
        'RatioType', 'Union', 'OverlapThreshold', 0.45);
    labels = categorical(classNames(classIdx(idx)));
end

save(fullfile(pwd, 'modelData', 'yolov8_model.mat'), 'net', 'classNames');
fprintf('Model saved.\n');
```

> Both `best.onnx` and `yolov8_model.mat` are provided in `modelData/`. Only run this script if `yolov8_model.mat` fails to load on your machine.

---

### Step 2 — Open the project

```matlab
openProject('RoboCup_ARM.prj')
```

This runs `arm_startup.m` automatically, which adds all subfolders to the path and loads the `.mat` data into the workspace.

---

### Step 3 — Run the simulation

```matlab
open_system('RoboCup_ARM.slx')
sim('RoboCup_ARM.slx')
```

---

## S-Function Notes

All perception and visualization blocks are implemented as **Level-2 MATLAB S-Functions** in the project root alongside `RoboCup_ARM.slx`. Placing them at the root ensures Simulink finds them automatically without any path configuration.

| S-Function | Inputs | Outputs |
|------------|--------|---------|
| `YOLOv8SFunc.m` | RGB image frame | Bounding boxes, class IDs, confidence scores |
| `FrustumDepthSFunc.m` | Bounding boxes, depth frame, camera intrinsics | 3D object positions in camera frame |
| `Viz3DSFunc.m` | Joint angles, object poses | Real-time 3D plot (side-effect output) |

---

## Simulation Objects

The `Objects/` folder contains `.fbx` meshes and PBR textures for all competition objects:

- **Bottles:** `redBottle`, `blueBottle`, `yellowBottle`
- **Cans:** `redCan`, `greenCan`, `yellowCan`
- **Boxes:** `blueBox`, `greenBox`
- **Other:** `Simsort_SPAM`, `scale`, `marker`

---

## Auto-Generated Folders (Do Not Edit)

| Folder | Description |
|--------|-------------|
| `slprj/` | Simulink accelerator and JIT build cache — rebuilt automatically on simulation |
| `+best/` | MATLAB package auto-generated by `importNetworkFromONNX` for the YOLOv8 model |
| `resources/` | MATLAB project metadata and file dependency tracking |

---

## Author

**Muneeb Ahmad**  
BS Mechatronics Engineering, NUST  
National Center of Robotics and Automation (NCRA)
