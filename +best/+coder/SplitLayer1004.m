classdef SplitLayer1004 < nnet.layer.Layer & nnet.layer.Formattable
    % A custom layer auto-generated while importing an ONNX network.
    %#codegen

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
        % Specify the properties of the class that will not be modified
        % after the first assignment.
        function p = matlabCodegenNontunableProperties(~)
            p = {
                % Constants, i.e., Vars, NumDims and all learnables and states
                'Vars'
                'NumDims'
                };
        end
    end


    methods(Static, Hidden)
        % Instantiate a codegenable layer instance from a MATLAB layer instance
        function this_cg = matlabCodegenToRedirected(mlInstance)
            this_cg = best.coder.SplitLayer1004(mlInstance);
        end
        function this_ml = matlabCodegenFromRedirected(cgInstance)
            this_ml = best.SplitLayer1004(cgInstance.Name);
            if isstruct(cgInstance.Vars)
                names = fieldnames(cgInstance.Vars);
                for i=1:numel(names)
                    fieldname = names{i};
                    this_ml.Vars.(fieldname) = dlarray(cgInstance.Vars.(fieldname));
                end
            else
                this_ml.Vars = [];
            end
            this_ml.NumDims = cgInstance.NumDims;
        end
    end

    methods
        function this = SplitLayer1004(mlInstance)
            this.Name = mlInstance.Name;
            this.NumOutputs = 2;
            this.OutputNames = {'x_model_12_Split_o_1', 'x_model_12_Split_out'};
            if isstruct(mlInstance.Vars)
                names = fieldnames(mlInstance.Vars);
                for i=1:numel(names)
                    fieldname = names{i};
                    this.Vars.(fieldname) = best.coder.ops.extractIfDlarray(mlInstance.Vars.(fieldname));
                end
            else
                this.Vars = [];
            end

            this.NumDims = mlInstance.NumDims;
        end

        function [x_model_12_Split_o_1, x_model_12_Split_out] = predict(this, x_model_12_cv1_act_M__)
            if isdlarray(x_model_12_cv1_act_M__)
                x_model_12_cv1_act_M_ = stripdims(x_model_12_cv1_act_M__);
            else
                x_model_12_cv1_act_M_ = x_model_12_cv1_act_M__;
            end
            x_model_12_cv1_act_MNumDims = 4;
            x_model_12_cv1_act_M = best.coder.ops.permuteInputVar(x_model_12_cv1_act_M_, [4 3 1 2], 4);

            [x_model_12_Split_o_1__, x_model_12_Split_out__, x_model_12_Split_o_1NumDims__, x_model_12_Split_outNumDims__] = SplitGraph1016(this, x_model_12_cv1_act_M, x_model_12_cv1_act_MNumDims, false);
            x_model_12_Split_o_1_ = best.coder.ops.permuteOutputVar(x_model_12_Split_o_1__, [3 4 2 1], 4);
            x_model_12_Split_out_ = best.coder.ops.permuteOutputVar(x_model_12_Split_out__, [3 4 2 1], 4);

            x_model_12_Split_o_1 = dlarray(single(x_model_12_Split_o_1_), 'SSCB');
            x_model_12_Split_out = dlarray(single(x_model_12_Split_out_), 'SSCB');
        end

        function [x_model_12_Split_o_1, x_model_12_Split_out, x_model_12_Split_o_1NumDims1018, x_model_12_Split_outNumDims1019] = SplitGraph1016(this, x_model_12_cv1_act_M, x_model_12_cv1_act_MNumDims, Training)

            % Execute the operators:
            % Split:
            [x_model_12_Split_out, x_model_12_Split_o_1, x_model_12_Split_outNumDims, x_model_12_Split_o_1NumDims] = best.coder.ops.onnxSplit(x_model_12_cv1_act_M, 1, this.Vars.SplitSplit1017, 0, coder.const(x_model_12_cv1_act_MNumDims));

            % Set graph output arguments
            x_model_12_Split_o_1NumDims1018 = x_model_12_Split_o_1NumDims;
            x_model_12_Split_outNumDims1019 = x_model_12_Split_outNumDims;

        end

    end

end