classdef SplitLayer1009 < nnet.layer.Layer & nnet.layer.Formattable
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
            name = 'best.coder.SplitLayer1009';
        end
    end


    methods
        function this = SplitLayer1009(name)
            this.Name = name;
            this.NumOutputs = 2;
            this.OutputNames = {'x_model_21_Split_o_1', 'x_model_21_Split_out'};
        end

        function [x_model_21_Split_o_1, x_model_21_Split_out] = predict(this, x_model_21_cv1_act_M)
            if isdlarray(x_model_21_cv1_act_M)
                x_model_21_cv1_act_M = stripdims(x_model_21_cv1_act_M);
            end
            x_model_21_cv1_act_MNumDims = 4;
            x_model_21_cv1_act_M = best.ops.permuteInputVar(x_model_21_cv1_act_M, [4 3 1 2], 4);

            [x_model_21_Split_o_1, x_model_21_Split_out, x_model_21_Split_o_1NumDims, x_model_21_Split_outNumDims] = SplitGraph1034(this, x_model_21_cv1_act_M, x_model_21_cv1_act_MNumDims, false);
            x_model_21_Split_o_1 = best.ops.permuteOutputVar(x_model_21_Split_o_1, [3 4 2 1], 4);
            x_model_21_Split_out = best.ops.permuteOutputVar(x_model_21_Split_out, [3 4 2 1], 4);

            x_model_21_Split_o_1 = dlarray(single(x_model_21_Split_o_1), 'SSCB');
            x_model_21_Split_out = dlarray(single(x_model_21_Split_out), 'SSCB');
        end

        function [x_model_21_Split_o_1, x_model_21_Split_out] = forward(this, x_model_21_cv1_act_M)
            if isdlarray(x_model_21_cv1_act_M)
                x_model_21_cv1_act_M = stripdims(x_model_21_cv1_act_M);
            end
            x_model_21_cv1_act_MNumDims = 4;
            x_model_21_cv1_act_M = best.ops.permuteInputVar(x_model_21_cv1_act_M, [4 3 1 2], 4);

            [x_model_21_Split_o_1, x_model_21_Split_out, x_model_21_Split_o_1NumDims, x_model_21_Split_outNumDims] = SplitGraph1034(this, x_model_21_cv1_act_M, x_model_21_cv1_act_MNumDims, true);
            x_model_21_Split_o_1 = best.ops.permuteOutputVar(x_model_21_Split_o_1, [3 4 2 1], 4);
            x_model_21_Split_out = best.ops.permuteOutputVar(x_model_21_Split_out, [3 4 2 1], 4);

            x_model_21_Split_o_1 = dlarray(single(x_model_21_Split_o_1), 'SSCB');
            x_model_21_Split_out = dlarray(single(x_model_21_Split_out), 'SSCB');
        end

        function [x_model_21_Split_o_1, x_model_21_Split_out, x_model_21_Split_o_1NumDims1036, x_model_21_Split_outNumDims1037] = SplitGraph1034(this, x_model_21_cv1_act_M, x_model_21_cv1_act_MNumDims, Training)

            % Execute the operators:
            % Split:
            [x_model_21_Split_out, x_model_21_Split_o_1, x_model_21_Split_outNumDims, x_model_21_Split_o_1NumDims] = best.ops.onnxSplit(x_model_21_cv1_act_M, 1, this.Vars.SplitSplit1035, 0, x_model_21_cv1_act_MNumDims);

            % Set graph output arguments
            x_model_21_Split_o_1NumDims1036 = x_model_21_Split_o_1NumDims;
            x_model_21_Split_outNumDims1037 = x_model_21_Split_outNumDims;

        end

    end

end