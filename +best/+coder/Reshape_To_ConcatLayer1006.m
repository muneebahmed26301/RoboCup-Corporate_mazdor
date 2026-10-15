classdef Reshape_To_ConcatLayer1006 < nnet.layer.Layer & nnet.layer.Formattable
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
            this_cg = best.coder.Reshape_To_ConcatLayer1006(mlInstance);
        end
        function this_ml = matlabCodegenFromRedirected(cgInstance)
            this_ml = best.Reshape_To_ConcatLayer1006(cgInstance.Name);
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
        function this = Reshape_To_ConcatLayer1006(mlInstance)
            this.Name = mlInstance.Name;
            this.NumInputs = 4;
            this.OutputNames = {'output0'};
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

        function [output0] = predict(this, x_model_22_cv3_0__6__, x_model_22_cv3_1__6__, x_model_22_cv3_2__6__, x_model_22_dfl_conv___)
            if isdlarray(x_model_22_cv3_0__6__)
                x_model_22_cv3_0__6_ = stripdims(x_model_22_cv3_0__6__);
            else
                x_model_22_cv3_0__6_ = x_model_22_cv3_0__6__;
            end
            if isdlarray(x_model_22_cv3_1__6__)
                x_model_22_cv3_1__6_ = stripdims(x_model_22_cv3_1__6__);
            else
                x_model_22_cv3_1__6_ = x_model_22_cv3_1__6__;
            end
            if isdlarray(x_model_22_cv3_2__6__)
                x_model_22_cv3_2__6_ = stripdims(x_model_22_cv3_2__6__);
            else
                x_model_22_cv3_2__6_ = x_model_22_cv3_2__6__;
            end
            if isdlarray(x_model_22_dfl_conv___)
                x_model_22_dfl_conv__ = stripdims(x_model_22_dfl_conv___);
            else
                x_model_22_dfl_conv__ = x_model_22_dfl_conv___;
            end
            x_model_22_cv3_0__6NumDims = 4;
            x_model_22_cv3_1__6NumDims = 4;
            x_model_22_cv3_2__6NumDims = 4;
            x_model_22_dfl_conv_NumDims = 4;
            x_model_22_cv3_0__6 = best.coder.ops.permuteInputVar(x_model_22_cv3_0__6_, [4 3 1 2], 4);
            x_model_22_cv3_1__6 = best.coder.ops.permuteInputVar(x_model_22_cv3_1__6_, [4 3 1 2], 4);
            x_model_22_cv3_2__6 = best.coder.ops.permuteInputVar(x_model_22_cv3_2__6_, [4 3 1 2], 4);
            x_model_22_dfl_conv_ = best.coder.ops.permuteInputVar(x_model_22_dfl_conv__, [4 3 1 2], 4);

            [output0__, output0NumDims__] = Reshape_To_ConcatGraph1024(this, x_model_22_cv3_0__6, x_model_22_cv3_1__6, x_model_22_cv3_2__6, x_model_22_dfl_conv_, x_model_22_cv3_0__6NumDims, x_model_22_cv3_1__6NumDims, x_model_22_cv3_2__6NumDims, x_model_22_dfl_conv_NumDims, false);
            output0_ = best.coder.ops.permuteOutputVar(output0__, ['as-is'], 3);

            output0 = dlarray(single(output0_), repmat('U', 1, max(2, coder.const(output0NumDims__))));
        end

        function [output0, output0NumDims1025] = Reshape_To_ConcatGraph1024(this, x_model_22_cv3_0__6, x_model_22_cv3_1__6, x_model_22_cv3_2__6, x_model_22_dfl_conv_, x_model_22_cv3_0__6NumDims, x_model_22_cv3_1__6NumDims, x_model_22_cv3_2__6NumDims, x_model_22_dfl_conv_NumDims, Training)

            % Execute the operators:
            % Reshape:
            [shape1000, x_model_22_Reshape_3NumDims] = best.coder.ops.prepareReshapeArgs(x_model_22_cv3_0__6, this.Vars.x_model_22_Constan_4, coder.const(x_model_22_cv3_0__6NumDims), 0);
            x_model_22_Reshape_3 = reshape(x_model_22_cv3_0__6, shape1000{:});

            % Reshape:
            [shape1001, x_model_22_Reshape_4NumDims] = best.coder.ops.prepareReshapeArgs(x_model_22_cv3_1__6, this.Vars.x_model_22_Constan_4, coder.const(x_model_22_cv3_1__6NumDims), 0);
            x_model_22_Reshape_4 = reshape(x_model_22_cv3_1__6, shape1001{:});

            % Reshape:
            [shape1002, x_model_22_Reshape_5NumDims] = best.coder.ops.prepareReshapeArgs(x_model_22_cv3_2__6, this.Vars.x_model_22_Constan_4, coder.const(x_model_22_cv3_2__6NumDims), 0);
            x_model_22_Reshape_5 = reshape(x_model_22_cv3_2__6, shape1002{:});

            % Concat:
            [x_model_22_Concat_1_, x_model_22_Concat_1_NumDims] = best.coder.ops.onnxConcat(-1, {x_model_22_Reshape_3, x_model_22_Reshape_4, x_model_22_Reshape_5}, [coder.const(x_model_22_Reshape_3NumDims), coder.const(x_model_22_Reshape_4NumDims), coder.const(x_model_22_Reshape_5NumDims)]);

            % Sigmoid:
            X1003 = dlarray(best.coder.ops.extractIfDlarray(x_model_22_Concat_1_));
            Y1004 = sigmoid(X1003);
            x_model_22_Sigmoid_o = best.coder.ops.extractIfDlarray(Y1004);
            x_model_22_Sigmoid_oNumDims = coder.const(x_model_22_Concat_1_NumDims);

            % Reshape:
            [shape1005, x_model_22_dfl_ReshaNumDims] = best.coder.ops.prepareReshapeArgs(x_model_22_dfl_conv_, this.Vars.x_model_22_dfl_Const, coder.const(x_model_22_dfl_conv_NumDims), 0);
            x_model_22_dfl_Resha = reshape(x_model_22_dfl_conv_, shape1005{:});

            % Slice:
            [indices1006, x_model_22_Slice_outNumDims] = best.coder.ops.prepareSliceArgs(x_model_22_dfl_Resha, this.Vars.x_model_22_Constan_6, this.Vars.x_model_22_Mul_outpu, this.Vars.x_model_22_Constan_5, '', coder.const(x_model_22_dfl_ReshaNumDims));
            x_model_22_Slice_out = x_model_22_dfl_Resha(indices1006{:});

            % Slice:
            [indices1007, x_model_22_Slice_1_oNumDims] = best.coder.ops.prepareSliceArgs(x_model_22_dfl_Resha, this.Vars.x_model_22_Mul_outpu, this.Vars.x_model_22_Mul_1_out, this.Vars.x_model_22_Constan_5, '', coder.const(x_model_22_dfl_ReshaNumDims));
            x_model_22_Slice_1_o = x_model_22_dfl_Resha(indices1007{:});

            % Sub:
            x_model_22_Sub_outpu = this.Vars.x_model_22_Constant_ - x_model_22_Slice_out;
            x_model_22_Sub_outpuNumDims = max(this.NumDims.x_model_22_Constant_, coder.const(x_model_22_Slice_outNumDims));

            % Add:
            x_model_22_Add_1_out = this.Vars.x_model_22_Constan_1 + x_model_22_Slice_1_o;
            x_model_22_Add_1_outNumDims = max(this.NumDims.x_model_22_Constan_1, coder.const(x_model_22_Slice_1_oNumDims));

            % Add:
            x_model_22_Add_2_out = x_model_22_Sub_outpu + x_model_22_Add_1_out;
            x_model_22_Add_2_outNumDims = max(coder.const(x_model_22_Sub_outpuNumDims), coder.const(x_model_22_Add_1_outNumDims));

            % Sub:
            x_model_22_Sub_1_out = x_model_22_Add_1_out - x_model_22_Sub_outpu;
            x_model_22_Sub_1_outNumDims = max(coder.const(x_model_22_Add_1_outNumDims), coder.const(x_model_22_Sub_outpuNumDims));

            % Div:
            x_model_22_Div_1_out = x_model_22_Add_2_out ./ this.Vars.x_model_22_Constan_2;
            x_model_22_Div_1_outNumDims = max(coder.const(x_model_22_Add_2_outNumDims), this.NumDims.x_model_22_Constan_2);

            % Concat:
            [x_model_22_Concat_2_, x_model_22_Concat_2_NumDims] = best.coder.ops.onnxConcat(1, {x_model_22_Div_1_out, x_model_22_Sub_1_out}, [coder.const(x_model_22_Div_1_outNumDims), coder.const(x_model_22_Sub_1_outNumDims)]);

            % Mul:
            x_model_22_Mul_2_out = x_model_22_Concat_2_ .* this.Vars.x_model_22_Constan_3;
            x_model_22_Mul_2_outNumDims = max(coder.const(x_model_22_Concat_2_NumDims), this.NumDims.x_model_22_Constan_3);

            % Concat:
            [output0, output0NumDims] = best.coder.ops.onnxConcat(1, {x_model_22_Mul_2_out, x_model_22_Sigmoid_o}, [coder.const(x_model_22_Mul_2_outNumDims), coder.const(x_model_22_Sigmoid_oNumDims)]);

            % Set graph output arguments
            output0NumDims1025 = output0NumDims;

        end

    end

end