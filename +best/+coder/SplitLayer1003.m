classdef SplitLayer1003 < nnet.layer.Layer & nnet.layer.Formattable
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
            this_cg = best.coder.SplitLayer1003(mlInstance);
        end
        function this_ml = matlabCodegenFromRedirected(cgInstance)
            this_ml = best.SplitLayer1003(cgInstance.Name);
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
        function this = SplitLayer1003(mlInstance)
            this.Name = mlInstance.Name;
            this.NumOutputs = 2;
            this.OutputNames = {'x_model_8_Split_ou_1', 'x_model_8_Split_outp'};
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

        function [x_model_8_Split_ou_1, x_model_8_Split_outp] = predict(this, x_model_8_cv1_act_Mu__)
            if isdlarray(x_model_8_cv1_act_Mu__)
                x_model_8_cv1_act_Mu_ = stripdims(x_model_8_cv1_act_Mu__);
            else
                x_model_8_cv1_act_Mu_ = x_model_8_cv1_act_Mu__;
            end
            x_model_8_cv1_act_MuNumDims = 4;
            x_model_8_cv1_act_Mu = best.coder.ops.permuteInputVar(x_model_8_cv1_act_Mu_, [4 3 1 2], 4);

            [x_model_8_Split_ou_1__, x_model_8_Split_outp__, x_model_8_Split_ou_1NumDims__, x_model_8_Split_outpNumDims__] = SplitGraph1012(this, x_model_8_cv1_act_Mu, x_model_8_cv1_act_MuNumDims, false);
            x_model_8_Split_ou_1_ = best.coder.ops.permuteOutputVar(x_model_8_Split_ou_1__, [3 4 2 1], 4);
            x_model_8_Split_outp_ = best.coder.ops.permuteOutputVar(x_model_8_Split_outp__, [3 4 2 1], 4);

            x_model_8_Split_ou_1 = dlarray(single(x_model_8_Split_ou_1_), 'SSCB');
            x_model_8_Split_outp = dlarray(single(x_model_8_Split_outp_), 'SSCB');
        end

        function [x_model_8_Split_ou_1, x_model_8_Split_outp, x_model_8_Split_ou_1NumDims1014, x_model_8_Split_outpNumDims1015] = SplitGraph1012(this, x_model_8_cv1_act_Mu, x_model_8_cv1_act_MuNumDims, Training)

            % Execute the operators:
            % Split:
            [x_model_8_Split_outp, x_model_8_Split_ou_1, x_model_8_Split_outpNumDims, x_model_8_Split_ou_1NumDims] = best.coder.ops.onnxSplit(x_model_8_cv1_act_Mu, 1, this.Vars.SplitSplit1013, 0, coder.const(x_model_8_cv1_act_MuNumDims));

            % Set graph output arguments
            x_model_8_Split_ou_1NumDims1014 = x_model_8_Split_ou_1NumDims;
            x_model_8_Split_outpNumDims1015 = x_model_8_Split_outpNumDims;

        end

    end

end