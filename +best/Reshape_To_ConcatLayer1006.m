classdef Reshape_To_ConcatLayer1006 < nnet.layer.Layer & nnet.layer.Formattable
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
            name = 'best.coder.Reshape_To_ConcatLayer1006';
        end
    end


    methods
        function this = Reshape_To_ConcatLayer1006(name)
            this.Name = name;
            this.NumInputs = 4;
            this.OutputNames = {'output0'};
        end

        function [output0] = predict(this, x_model_22_cv3_0__6, x_model_22_cv3_1__6, x_model_22_cv3_2__6, x_model_22_dfl_conv_)
            if isdlarray(x_model_22_cv3_0__6)
                x_model_22_cv3_0__6 = stripdims(x_model_22_cv3_0__6);
            end
            if isdlarray(x_model_22_cv3_1__6)
                x_model_22_cv3_1__6 = stripdims(x_model_22_cv3_1__6);
            end
            if isdlarray(x_model_22_cv3_2__6)
                x_model_22_cv3_2__6 = stripdims(x_model_22_cv3_2__6);
            end
            if isdlarray(x_model_22_dfl_conv_)
                x_model_22_dfl_conv_ = stripdims(x_model_22_dfl_conv_);
            end
            x_model_22_cv3_0__6NumDims = 4;
            x_model_22_cv3_1__6NumDims = 4;
            x_model_22_cv3_2__6NumDims = 4;
            x_model_22_dfl_conv_NumDims = 4;
            x_model_22_cv3_0__6 = best.ops.permuteInputVar(x_model_22_cv3_0__6, [4 3 1 2], 4);
            x_model_22_cv3_1__6 = best.ops.permuteInputVar(x_model_22_cv3_1__6, [4 3 1 2], 4);
            x_model_22_cv3_2__6 = best.ops.permuteInputVar(x_model_22_cv3_2__6, [4 3 1 2], 4);
            x_model_22_dfl_conv_ = best.ops.permuteInputVar(x_model_22_dfl_conv_, [4 3 1 2], 4);

            [output0, output0NumDims] = Reshape_To_ConcatGraph1024(this, x_model_22_cv3_0__6, x_model_22_cv3_1__6, x_model_22_cv3_2__6, x_model_22_dfl_conv_, x_model_22_cv3_0__6NumDims, x_model_22_cv3_1__6NumDims, x_model_22_cv3_2__6NumDims, x_model_22_dfl_conv_NumDims, false);
            output0 = best.ops.permuteOutputVar(output0, ['as-is'], 3);

            output0 = dlarray(single(output0), repmat('U', 1, max(2, output0NumDims)));
        end

        function [output0] = forward(this, x_model_22_cv3_0__6, x_model_22_cv3_1__6, x_model_22_cv3_2__6, x_model_22_dfl_conv_)
            if isdlarray(x_model_22_cv3_0__6)
                x_model_22_cv3_0__6 = stripdims(x_model_22_cv3_0__6);
            end
            if isdlarray(x_model_22_cv3_1__6)
                x_model_22_cv3_1__6 = stripdims(x_model_22_cv3_1__6);
            end
            if isdlarray(x_model_22_cv3_2__6)
                x_model_22_cv3_2__6 = stripdims(x_model_22_cv3_2__6);
            end
            if isdlarray(x_model_22_dfl_conv_)
                x_model_22_dfl_conv_ = stripdims(x_model_22_dfl_conv_);
            end
            x_model_22_cv3_0__6NumDims = 4;
            x_model_22_cv3_1__6NumDims = 4;
            x_model_22_cv3_2__6NumDims = 4;
            x_model_22_dfl_conv_NumDims = 4;
            x_model_22_cv3_0__6 = best.ops.permuteInputVar(x_model_22_cv3_0__6, [4 3 1 2], 4);
            x_model_22_cv3_1__6 = best.ops.permuteInputVar(x_model_22_cv3_1__6, [4 3 1 2], 4);
            x_model_22_cv3_2__6 = best.ops.permuteInputVar(x_model_22_cv3_2__6, [4 3 1 2], 4);
            x_model_22_dfl_conv_ = best.ops.permuteInputVar(x_model_22_dfl_conv_, [4 3 1 2], 4);

            [output0, output0NumDims] = Reshape_To_ConcatGraph1024(this, x_model_22_cv3_0__6, x_model_22_cv3_1__6, x_model_22_cv3_2__6, x_model_22_dfl_conv_, x_model_22_cv3_0__6NumDims, x_model_22_cv3_1__6NumDims, x_model_22_cv3_2__6NumDims, x_model_22_dfl_conv_NumDims, true);
            output0 = best.ops.permuteOutputVar(output0, ['as-is'], 3);

            output0 = dlarray(single(output0), repmat('U', 1, max(2, output0NumDims)));
        end

        function [output0, output0NumDims1025] = Reshape_To_ConcatGraph1024(this, x_model_22_cv3_0__6, x_model_22_cv3_1__6, x_model_22_cv3_2__6, x_model_22_dfl_conv_, x_model_22_cv3_0__6NumDims, x_model_22_cv3_1__6NumDims, x_model_22_cv3_2__6NumDims, x_model_22_dfl_conv_NumDims, Training)

            % Execute the operators:
            % Reshape:
            [shape, x_model_22_Reshape_3NumDims] = best.ops.prepareReshapeArgs(x_model_22_cv3_0__6, this.Vars.x_model_22_Constan_4, x_model_22_cv3_0__6NumDims, 0);
            x_model_22_Reshape_3 = reshape(x_model_22_cv3_0__6, shape{:});

            % Reshape:
            [shape, x_model_22_Reshape_4NumDims] = best.ops.prepareReshapeArgs(x_model_22_cv3_1__6, this.Vars.x_model_22_Constan_4, x_model_22_cv3_1__6NumDims, 0);
            x_model_22_Reshape_4 = reshape(x_model_22_cv3_1__6, shape{:});

            % Reshape:
            [shape, x_model_22_Reshape_5NumDims] = best.ops.prepareReshapeArgs(x_model_22_cv3_2__6, this.Vars.x_model_22_Constan_4, x_model_22_cv3_2__6NumDims, 0);
            x_model_22_Reshape_5 = reshape(x_model_22_cv3_2__6, shape{:});

            % Concat:
            [x_model_22_Concat_1_, x_model_22_Concat_1_NumDims] = best.ops.onnxConcat(-1, {x_model_22_Reshape_3, x_model_22_Reshape_4, x_model_22_Reshape_5}, [x_model_22_Reshape_3NumDims, x_model_22_Reshape_4NumDims, x_model_22_Reshape_5NumDims]);

            % Sigmoid:
            x_model_22_Sigmoid_o = sigmoid(dlarray(x_model_22_Concat_1_));
            x_model_22_Sigmoid_oNumDims = x_model_22_Concat_1_NumDims;

            % Reshape:
            [shape, x_model_22_dfl_ReshaNumDims] = best.ops.prepareReshapeArgs(x_model_22_dfl_conv_, this.Vars.x_model_22_dfl_Const, x_model_22_dfl_conv_NumDims, 0);
            x_model_22_dfl_Resha = reshape(x_model_22_dfl_conv_, shape{:});

            % Slice:
            [Indices, x_model_22_Slice_outNumDims] = best.ops.prepareSliceArgs(x_model_22_dfl_Resha, this.Vars.x_model_22_Constan_6, this.Vars.x_model_22_Mul_outpu, this.Vars.x_model_22_Constan_5, '', x_model_22_dfl_ReshaNumDims);
            x_model_22_Slice_out = x_model_22_dfl_Resha(Indices{:});

            % Slice:
            [Indices, x_model_22_Slice_1_oNumDims] = best.ops.prepareSliceArgs(x_model_22_dfl_Resha, this.Vars.x_model_22_Mul_outpu, this.Vars.x_model_22_Mul_1_out, this.Vars.x_model_22_Constan_5, '', x_model_22_dfl_ReshaNumDims);
            x_model_22_Slice_1_o = x_model_22_dfl_Resha(Indices{:});

            % Sub:
            x_model_22_Sub_outpu = this.Vars.x_model_22_Constant_ - x_model_22_Slice_out;
            x_model_22_Sub_outpuNumDims = max(this.NumDims.x_model_22_Constant_, x_model_22_Slice_outNumDims);

            % Add:
            x_model_22_Add_1_out = this.Vars.x_model_22_Constan_1 + x_model_22_Slice_1_o;
            x_model_22_Add_1_outNumDims = max(this.NumDims.x_model_22_Constan_1, x_model_22_Slice_1_oNumDims);

            % Add:
            x_model_22_Add_2_out = x_model_22_Sub_outpu + x_model_22_Add_1_out;
            x_model_22_Add_2_outNumDims = max(x_model_22_Sub_outpuNumDims, x_model_22_Add_1_outNumDims);

            % Sub:
            x_model_22_Sub_1_out = x_model_22_Add_1_out - x_model_22_Sub_outpu;
            x_model_22_Sub_1_outNumDims = max(x_model_22_Add_1_outNumDims, x_model_22_Sub_outpuNumDims);

            % Div:
            x_model_22_Div_1_out = x_model_22_Add_2_out ./ this.Vars.x_model_22_Constan_2;
            x_model_22_Div_1_outNumDims = max(x_model_22_Add_2_outNumDims, this.NumDims.x_model_22_Constan_2);

            % Concat:
            [x_model_22_Concat_2_, x_model_22_Concat_2_NumDims] = best.ops.onnxConcat(1, {x_model_22_Div_1_out, x_model_22_Sub_1_out}, [x_model_22_Div_1_outNumDims, x_model_22_Sub_1_outNumDims]);

            % Mul:
            x_model_22_Mul_2_out = x_model_22_Concat_2_ .* this.Vars.x_model_22_Constan_3;
            x_model_22_Mul_2_outNumDims = max(x_model_22_Concat_2_NumDims, this.NumDims.x_model_22_Constan_3);

            % Concat:
            [output0, output0NumDims] = best.ops.onnxConcat(1, {x_model_22_Mul_2_out, x_model_22_Sigmoid_o}, [x_model_22_Mul_2_outNumDims, x_model_22_Sigmoid_oNumDims]);

            % Set graph output arguments
            output0NumDims1025 = output0NumDims;

        end

    end

end