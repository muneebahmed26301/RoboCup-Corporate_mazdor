classdef Reshape_To_TransposeLayer1007 < nnet.layer.Layer & nnet.layer.Formattable
    % A custom layer auto-generated while importing an ONNX network.

    %#ok<*PROPLC>
    %#ok<*NBRAK>
    %#ok<*INUSL>
    %#ok<*VARARG>
    properties (Learnable)
    end

    properties (State)
    end

    properties
        Vars
        NumDims
    end


    methods(Static, Hidden)
        % Specify the path to the class that will be used for codegen
        function name = matlabCodegenRedirect(~)
            name = 'best.coder.Reshape_To_TransposeLayer1007';
        end
    end


    methods
        function this = Reshape_To_TransposeLayer1007(name)
            this.Name = name;
            this.NumInputs = 3;
            this.OutputNames = {'x_model_22_dfl_Trans'};
        end

        function [x_model_22_dfl_Trans] = predict(this, x_model_22_cv2_0__6, x_model_22_cv2_1__6, x_model_22_cv2_2__6)
            if isdlarray(x_model_22_cv2_0__6)
                x_model_22_cv2_0__6 = stripdims(x_model_22_cv2_0__6);
            end
            if isdlarray(x_model_22_cv2_1__6)
                x_model_22_cv2_1__6 = stripdims(x_model_22_cv2_1__6);
            end
            if isdlarray(x_model_22_cv2_2__6)
                x_model_22_cv2_2__6 = stripdims(x_model_22_cv2_2__6);
            end
            x_model_22_cv2_0__6NumDims = 4;
            x_model_22_cv2_1__6NumDims = 4;
            x_model_22_cv2_2__6NumDims = 4;
            x_model_22_cv2_0__6 = best.ops.permuteInputVar(x_model_22_cv2_0__6, [4 3 1 2], 4);
            x_model_22_cv2_1__6 = best.ops.permuteInputVar(x_model_22_cv2_1__6, [4 3 1 2], 4);
            x_model_22_cv2_2__6 = best.ops.permuteInputVar(x_model_22_cv2_2__6, [4 3 1 2], 4);

            [x_model_22_dfl_Trans, x_model_22_dfl_TransNumDims] = Reshape_To_TransposeGraph1026(this, x_model_22_cv2_0__6, x_model_22_cv2_1__6, x_model_22_cv2_2__6, x_model_22_cv2_0__6NumDims, x_model_22_cv2_1__6NumDims, x_model_22_cv2_2__6NumDims, false);
            x_model_22_dfl_Trans = best.ops.permuteOutputVar(x_model_22_dfl_Trans, [3 4 2 1], 4);

            x_model_22_dfl_Trans = dlarray(single(x_model_22_dfl_Trans), 'SSCB');
        end

        function [x_model_22_dfl_Trans] = forward(this, x_model_22_cv2_0__6, x_model_22_cv2_1__6, x_model_22_cv2_2__6)
            if isdlarray(x_model_22_cv2_0__6)
                x_model_22_cv2_0__6 = stripdims(x_model_22_cv2_0__6);
            end
            if isdlarray(x_model_22_cv2_1__6)
                x_model_22_cv2_1__6 = stripdims(x_model_22_cv2_1__6);
            end
            if isdlarray(x_model_22_cv2_2__6)
                x_model_22_cv2_2__6 = stripdims(x_model_22_cv2_2__6);
            end
            x_model_22_cv2_0__6NumDims = 4;
            x_model_22_cv2_1__6NumDims = 4;
            x_model_22_cv2_2__6NumDims = 4;
            x_model_22_cv2_0__6 = best.ops.permuteInputVar(x_model_22_cv2_0__6, [4 3 1 2], 4);
            x_model_22_cv2_1__6 = best.ops.permuteInputVar(x_model_22_cv2_1__6, [4 3 1 2], 4);
            x_model_22_cv2_2__6 = best.ops.permuteInputVar(x_model_22_cv2_2__6, [4 3 1 2], 4);

            [x_model_22_dfl_Trans, x_model_22_dfl_TransNumDims] = Reshape_To_TransposeGraph1026(this, x_model_22_cv2_0__6, x_model_22_cv2_1__6, x_model_22_cv2_2__6, x_model_22_cv2_0__6NumDims, x_model_22_cv2_1__6NumDims, x_model_22_cv2_2__6NumDims, true);
            x_model_22_dfl_Trans = best.ops.permuteOutputVar(x_model_22_dfl_Trans, [3 4 2 1], 4);

            x_model_22_dfl_Trans = dlarray(single(x_model_22_dfl_Trans), 'SSCB');
        end

        function [x_model_22_dfl_Trans, x_model_22_dfl_TransNumDims1029] = Reshape_To_TransposeGraph1026(this, x_model_22_cv2_0__6, x_model_22_cv2_1__6, x_model_22_cv2_2__6, x_model_22_cv2_0__6NumDims, x_model_22_cv2_1__6NumDims, x_model_22_cv2_2__6NumDims, Training)

            % Execute the operators:
            % Reshape:
            [shape, x_model_22_Reshape_oNumDims] = best.ops.prepareReshapeArgs(x_model_22_cv2_0__6, this.Vars.x_model_22_Constan_7, x_model_22_cv2_0__6NumDims, 0);
            x_model_22_Reshape_o = reshape(x_model_22_cv2_0__6, shape{:});

            % Reshape:
            [shape, x_model_22_Reshape_1NumDims] = best.ops.prepareReshapeArgs(x_model_22_cv2_1__6, this.Vars.x_model_22_Constan_7, x_model_22_cv2_1__6NumDims, 0);
            x_model_22_Reshape_1 = reshape(x_model_22_cv2_1__6, shape{:});

            % Reshape:
            [shape, x_model_22_Reshape_2NumDims] = best.ops.prepareReshapeArgs(x_model_22_cv2_2__6, this.Vars.x_model_22_Constan_7, x_model_22_cv2_2__6NumDims, 0);
            x_model_22_Reshape_2 = reshape(x_model_22_cv2_2__6, shape{:});

            % Concat:
            [x_model_22_Concat_ou, x_model_22_Concat_ouNumDims] = best.ops.onnxConcat(-1, {x_model_22_Reshape_o, x_model_22_Reshape_1, x_model_22_Reshape_2}, [x_model_22_Reshape_oNumDims, x_model_22_Reshape_1NumDims, x_model_22_Reshape_2NumDims]);

            % Reshape:
            [shape, x_model_22_dfl_Res_1NumDims] = best.ops.prepareReshapeArgs(x_model_22_Concat_ou, this.Vars.x_model_22_dfl_Con_1, x_model_22_Concat_ouNumDims, 0);
            x_model_22_dfl_Res_1 = reshape(x_model_22_Concat_ou, shape{:});

            % Transpose:
            [perm, x_model_22_dfl_Tra_1NumDims] = best.ops.prepareTransposeArgs(this.Vars.TransposePerm1027, x_model_22_dfl_Res_1NumDims);
            if isempty(perm)
                x_model_22_dfl_Tra_1 = x_model_22_dfl_Res_1;
            else
                x_model_22_dfl_Tra_1 = permute(x_model_22_dfl_Res_1, perm);
            end

            % Softmax:
            [dim1, dim2, origSize, x_model_22_dfl_SoftmNumDims] = best.ops.prepareSoftmaxArgs(x_model_22_dfl_Tra_1, 3, x_model_22_dfl_Tra_1NumDims);
            x_model_22_dfl_Softm = reshape(x_model_22_dfl_Tra_1, dim1, dim2);
            x_model_22_dfl_Softm = softmax(x_model_22_dfl_Softm, 'DataFormat', 'CB');
            x_model_22_dfl_Softm = reshape(x_model_22_dfl_Softm, origSize);

            % Transpose:
            [perm, x_model_22_dfl_TransNumDims] = best.ops.prepareTransposeArgs(this.Vars.TransposePerm1028, x_model_22_dfl_SoftmNumDims);
            if isempty(perm)
                x_model_22_dfl_Trans = x_model_22_dfl_Softm;
            else
                x_model_22_dfl_Trans = permute(x_model_22_dfl_Softm, perm);
            end

            % Set graph output arguments
            x_model_22_dfl_TransNumDims1029 = x_model_22_dfl_TransNumDims;

        end

    end

end