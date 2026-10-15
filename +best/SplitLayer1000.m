classdef SplitLayer1000 < nnet.layer.Layer & nnet.layer.Formattable
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
            name = 'best.coder.SplitLayer1000';
        end
    end


    methods
        function this = SplitLayer1000(name)
            this.Name = name;
            this.NumOutputs = 2;
            this.OutputNames = {'x_model_2_Split_ou_1', 'x_model_2_Split_outp'};
        end

        function [x_model_2_Split_ou_1, x_model_2_Split_outp] = predict(this, x_model_2_cv1_act_Mu)
            if isdlarray(x_model_2_cv1_act_Mu)
                x_model_2_cv1_act_Mu = stripdims(x_model_2_cv1_act_Mu);
            end
            x_model_2_cv1_act_MuNumDims = 4;
            x_model_2_cv1_act_Mu = best.ops.permuteInputVar(x_model_2_cv1_act_Mu, [4 3 1 2], 4);

            [x_model_2_Split_ou_1, x_model_2_Split_outp, x_model_2_Split_ou_1NumDims, x_model_2_Split_outpNumDims] = SplitGraph1000(this, x_model_2_cv1_act_Mu, x_model_2_cv1_act_MuNumDims, false);
            x_model_2_Split_ou_1 = best.ops.permuteOutputVar(x_model_2_Split_ou_1, [3 4 2 1], 4);
            x_model_2_Split_outp = best.ops.permuteOutputVar(x_model_2_Split_outp, [3 4 2 1], 4);

            x_model_2_Split_ou_1 = dlarray(single(x_model_2_Split_ou_1), 'SSCB');
            x_model_2_Split_outp = dlarray(single(x_model_2_Split_outp), 'SSCB');
        end

        function [x_model_2_Split_ou_1, x_model_2_Split_outp] = forward(this, x_model_2_cv1_act_Mu)
            if isdlarray(x_model_2_cv1_act_Mu)
                x_model_2_cv1_act_Mu = stripdims(x_model_2_cv1_act_Mu);
            end
            x_model_2_cv1_act_MuNumDims = 4;
            x_model_2_cv1_act_Mu = best.ops.permuteInputVar(x_model_2_cv1_act_Mu, [4 3 1 2], 4);

            [x_model_2_Split_ou_1, x_model_2_Split_outp, x_model_2_Split_ou_1NumDims, x_model_2_Split_outpNumDims] = SplitGraph1000(this, x_model_2_cv1_act_Mu, x_model_2_cv1_act_MuNumDims, true);
            x_model_2_Split_ou_1 = best.ops.permuteOutputVar(x_model_2_Split_ou_1, [3 4 2 1], 4);
            x_model_2_Split_outp = best.ops.permuteOutputVar(x_model_2_Split_outp, [3 4 2 1], 4);

            x_model_2_Split_ou_1 = dlarray(single(x_model_2_Split_ou_1), 'SSCB');
            x_model_2_Split_outp = dlarray(single(x_model_2_Split_outp), 'SSCB');
        end

        function [x_model_2_Split_ou_1, x_model_2_Split_outp, x_model_2_Split_ou_1NumDims1002, x_model_2_Split_outpNumDims1003] = SplitGraph1000(this, x_model_2_cv1_act_Mu, x_model_2_cv1_act_MuNumDims, Training)

            % Execute the operators:
            % Split:
            [x_model_2_Split_outp, x_model_2_Split_ou_1, x_model_2_Split_outpNumDims, x_model_2_Split_ou_1NumDims] = best.ops.onnxSplit(x_model_2_cv1_act_Mu, 1, this.Vars.SplitSplit1001, 0, x_model_2_cv1_act_MuNumDims);

            % Set graph output arguments
            x_model_2_Split_ou_1NumDims1002 = x_model_2_Split_ou_1NumDims;
            x_model_2_Split_outpNumDims1003 = x_model_2_Split_outpNumDims;

        end

    end

end