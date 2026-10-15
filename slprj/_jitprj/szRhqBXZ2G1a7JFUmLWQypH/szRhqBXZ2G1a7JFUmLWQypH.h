#pragma once

#ifdef __cplusplus
#define EXTERN_C_CC extern "C"
#else
#define EXTERN_C_CC
#endif

#if defined _WIN32
#define DLL_EXPORT_CC EXTERN_C_CC __declspec(dllexport)
#elif __GNUC__ >= 4
#define DLL_EXPORT_CC EXTERN_C_CC  __attribute__ ((visibility ("default")))
#else
#define DLL_EXPORT_CC EXTERN_C_CC
#endif


/* Custom Headers */
#include <string.h>

/* Type Definitions */
#ifndef c4_struct_c4_tag_t5UekVkNOh8zDlhSQjclYB
#define c4_struct_c4_tag_t5UekVkNOh8zDlhSQjclYB
struct c4_tag_t5UekVkNOh8zDlhSQjclYB
{
    int32_T __dummy;
};
#endif /* c4_struct_c4_tag_t5UekVkNOh8zDlhSQjclYB */
#ifndef c4_typedef_c4_vision_internal_calibration_ImageTransformer
#define c4_typedef_c4_vision_internal_calibration_ImageTransformer
typedef struct c4_tag_t5UekVkNOh8zDlhSQjclYB c4_vision_internal_calibration_ImageTransformer;
#endif /* c4_typedef_c4_vision_internal_calibration_ImageTransformer */
#ifndef c4_struct_c4_tag_5s93sYDsEc7Dd02zR2Z4QH
#define c4_struct_c4_tag_5s93sYDsEc7Dd02zR2Z4QH
struct c4_tag_5s93sYDsEc7Dd02zR2Z4QH
{
    int32_T __dummy;
};
#endif /* c4_struct_c4_tag_5s93sYDsEc7Dd02zR2Z4QH */
#ifndef c4_typedef_c4_vision_internal_codegen_cameraIntrinsicsArray
#define c4_typedef_c4_vision_internal_codegen_cameraIntrinsicsArray
typedef struct c4_tag_5s93sYDsEc7Dd02zR2Z4QH c4_vision_internal_codegen_cameraIntrinsicsArray;
#endif /* c4_typedef_c4_vision_internal_codegen_cameraIntrinsicsArray */
#ifndef c4_struct_c4_coder_array_uint8_T_3D
#define c4_struct_c4_coder_array_uint8_T_3D
struct c4_coder_array_uint8_T_3D
{
    struct
    {
        uint8_T *data;
        int32_T numel;
        int32_T allocated;
        boolean_T owner;
    } vector;
    int32_T size[3];
};
#endif /* c4_struct_c4_coder_array_uint8_T_3D */
#ifndef c4_typedef_c4_coder_array_uint8_T_3D
#define c4_typedef_c4_coder_array_uint8_T_3D
typedef struct c4_coder_array_uint8_T_3D c4_coder_array_uint8_T_3D;
#endif /* c4_typedef_c4_coder_array_uint8_T_3D */
#ifndef c4_struct_c4_coder_array_real32_T_3D
#define c4_struct_c4_coder_array_real32_T_3D
struct c4_coder_array_real32_T_3D
{
    struct
    {
        real32_T *data;
        int32_T numel;
        int32_T allocated;
        boolean_T owner;
    } vector;
    int32_T size[3];
};
#endif /* c4_struct_c4_coder_array_real32_T_3D */
#ifndef c4_typedef_c4_coder_array_real32_T_3D
#define c4_typedef_c4_coder_array_real32_T_3D
typedef struct c4_coder_array_real32_T_3D c4_coder_array_real32_T_3D;
#endif /* c4_typedef_c4_coder_array_real32_T_3D */
#ifndef c4_struct_c4_coder_array_real32_T_2D
#define c4_struct_c4_coder_array_real32_T_2D
struct c4_coder_array_real32_T_2D
{
    struct
    {
        real32_T *data;
        int32_T numel;
        int32_T allocated;
        boolean_T owner;
    } vector;
    int32_T size[2];
};
#endif /* c4_struct_c4_coder_array_real32_T_2D */
#ifndef c4_typedef_c4_coder_array_real32_T_2D
#define c4_typedef_c4_coder_array_real32_T_2D
typedef struct c4_coder_array_real32_T_2D c4_coder_array_real32_T_2D;
#endif /* c4_typedef_c4_coder_array_real32_T_2D */
#ifndef c4_struct_c4_coder_array_tag_5s93sYDsEc7Dd02
#define c4_struct_c4_coder_array_tag_5s93sYDsEc7Dd02
struct c4_coder_array_tag_5s93sYDsEc7Dd02
{
    struct
    {
        c4_vision_internal_codegen_cameraIntrinsicsArray *data;
        int32_T numel;
        int32_T allocated;
        boolean_T owner;
    } vector;
    int32_T size[2];
};
#endif /* c4_struct_c4_coder_array_tag_5s93sYDsEc7Dd02 */
#ifndef c4_typedef_c4_coder_array_vision_internal_cod
#define c4_typedef_c4_coder_array_vision_internal_cod
typedef struct c4_coder_array_tag_5s93sYDsEc7Dd02 c4_coder_array_vision_internal_cod;
#endif /* c4_typedef_c4_coder_array_vision_internal_cod */
#ifndef c4_struct_c4_coder_array_int16_T_2D
#define c4_struct_c4_coder_array_int16_T_2D
struct c4_coder_array_int16_T_2D
{
    struct
    {
        int16_T *data;
        int32_T numel;
        int32_T allocated;
        boolean_T owner;
    } vector;
    int32_T size[2];
};
#endif /* c4_struct_c4_coder_array_int16_T_2D */
#ifndef c4_typedef_c4_coder_array_int16_T_2D
#define c4_typedef_c4_coder_array_int16_T_2D
typedef struct c4_coder_array_int16_T_2D c4_coder_array_int16_T_2D;
#endif /* c4_typedef_c4_coder_array_int16_T_2D */
#ifndef c4_struct_c4_coder_array_int32_T
#define c4_struct_c4_coder_array_int32_T
struct c4_coder_array_int32_T
{
    struct
    {
        int32_T *data;
        int32_T numel;
        int32_T allocated;
        boolean_T owner;
    } vector;
    int32_T size[1];
};
#endif /* c4_struct_c4_coder_array_int32_T */
#ifndef c4_typedef_c4_coder_array_int32_T
#define c4_typedef_c4_coder_array_int32_T
typedef struct c4_coder_array_int32_T c4_coder_array_int32_T;
#endif /* c4_typedef_c4_coder_array_int32_T */
#ifndef c4_struct_c4_tag_D4xnx7Io5ilE11FWbRsBlF
#define c4_struct_c4_tag_D4xnx7Io5ilE11FWbRsBlF
struct c4_tag_D4xnx7Io5ilE11FWbRsBlF
{
    boolean_T matlabCodegenIsDeleted;
    real32_T Location[2764800];
    c4_coder_array_uint8_T_3D Color;
    c4_coder_array_real32_T_3D Normal;
    c4_coder_array_real32_T_2D Intensity;
    void *Kdtree;
    void *LocationHandle;
    boolean_T HasKdtreeConstructed;
    boolean_T HasLocationHandleAllocated;
};
#endif /* c4_struct_c4_tag_D4xnx7Io5ilE11FWbRsBlF */
#ifndef c4_typedef_c4_pointCloud
#define c4_typedef_c4_pointCloud
typedef struct c4_tag_D4xnx7Io5ilE11FWbRsBlF c4_pointCloud;
#endif /* c4_typedef_c4_pointCloud */
#ifndef c4_struct_c4_tag_VVhMOv0zXYsPG1QHu55spG
#define c4_struct_c4_tag_VVhMOv0zXYsPG1QHu55spG
struct c4_tag_VVhMOv0zXYsPG1QHu55spG
{
    c4_vision_internal_calibration_ImageTransformer UndistortMap;
    real_T FocalLength[2];
    real_T PrincipalPoint[2];
    real_T ImageSize[2];
    real_T RadialDistortion[2];
    real_T TangentialDistortion[2];
    real_T Skew;
    real_T K[9];
    c4_coder_array_vision_internal_cod cameraIntrinsicsArrayData;
};
#endif /* c4_struct_c4_tag_VVhMOv0zXYsPG1QHu55spG */
#ifndef c4_typedef_c4_cameraIntrinsics
#define c4_typedef_c4_cameraIntrinsics
typedef struct c4_tag_VVhMOv0zXYsPG1QHu55spG c4_cameraIntrinsics;
#endif /* c4_typedef_c4_cameraIntrinsics */
#ifndef typedef_gvar_instance
#define typedef_gvar_instance
typedef struct
{
    uint8_T c4_JITStateAnimation[1];
    real_T (*c4_depthImage)[921600];
    uint8_T (*c4_colorImage)[2764800];
    uint8_T c4_JITTransitionAnimation[1];
    emlrtRSInfo c4_ab_emlrtRSI;
    boolean_T c4_b[921600];
    emlrtBCInfo c4_b_emlrtBCI;
    emlrtMCInfo c4_b_emlrtMCI;
    emlrtRSInfo c4_b_emlrtRSI;
    emlrtRTEInfo c4_b_emlrtRTEI;
    c4_pointCloud c4_b_ptCloud;
    emlrtRSInfo c4_bb_emlrtRSI;
    emlrtBCInfo c4_c_emlrtBCI;
    emlrtMCInfo c4_c_emlrtMCI;
    emlrtRSInfo c4_c_emlrtRSI;
    emlrtRTEInfo c4_c_emlrtRTEI;
    emlrtRSInfo c4_cb_emlrtRSI;
    int16_T c4_col[921600];
    emlrtBCInfo c4_d_emlrtBCI;
    emlrtMCInfo c4_d_emlrtMCI;
    emlrtRSInfo c4_d_emlrtRSI;
    emlrtRTEInfo c4_d_emlrtRTEI;
    emlrtRSInfo c4_db_emlrtRSI;
    emlrtRSInfo c4_e_emlrtRSI;
    emlrtRTEInfo c4_e_emlrtRTEI;
    emlrtRSInfo c4_eb_emlrtRSI;
    emlrtBCInfo c4_emlrtBCI;
    emlrtMCInfo c4_emlrtMCI;
    emlrtRSInfo c4_emlrtRSI;
    emlrtRTEInfo c4_emlrtRTEI;
    void *c4_fEmlrtCtx;
    emlrtRSInfo c4_f_emlrtRSI;
    emlrtRTEInfo c4_f_emlrtRTEI;
    emlrtRSInfo c4_fb_emlrtRSI;
    emlrtRSInfo c4_g_emlrtRSI;
    emlrtRTEInfo c4_g_emlrtRTEI;
    emlrtRSInfo c4_gb_emlrtRSI;
    emlrtRSInfo c4_h_emlrtRSI;
    emlrtRTEInfo c4_h_emlrtRTEI;
    emlrtRSInfo c4_hb_emlrtRSI;
    emlrtRSInfo c4_i_emlrtRSI;
    emlrtRTEInfo c4_i_emlrtRTEI;
    emlrtRSInfo c4_ib_emlrtRSI;
    emlrtRSInfo c4_j_emlrtRSI;
    emlrtRSInfo c4_k_emlrtRSI;
    emlrtRSInfo c4_l_emlrtRSI;
    emlrtRSInfo c4_m_emlrtRSI;
    emlrtRSInfo c4_n_emlrtRSI;
    emlrtRSInfo c4_o_emlrtRSI;
    emlrtRSInfo c4_p_emlrtRSI;
    int16_T c4_points1[1843200];
    c4_pointCloud c4_ptCloud;
    emlrtRSInfo c4_q_emlrtRSI;
    emlrtRSInfo c4_r_emlrtRSI;
    int16_T c4_row[921600];
    emlrtRSInfo c4_s_emlrtRSI;
    emlrtRSInfo c4_t_emlrtRSI;
    emlrtRSInfo c4_u_emlrtRSI;
    emlrtRSInfo c4_v_emlrtRSI;
    real32_T c4_varargin_1[2764800];
    emlrtRSInfo c4_w_emlrtRSI;
    emlrtRSInfo c4_x_emlrtRSI;
    emlrtRSInfo c4_y_emlrtRSI;
} gvar_instance;
#endif /* typedef_gvar_instance */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
DLL_EXPORT_CC void initialize_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void initialize_params_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void mdl_start_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void mdl_terminate_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void mdl_setup_runtime_resources_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void mdl_cleanup_runtime_resources_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void enable_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void disable_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void sf_gateway_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void ext_mode_exec_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC const mxArray *get_sim_state_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void set_sim_state_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c4_st);
DLL_EXPORT_CC c4_cameraIntrinsics *c4_cameraIntrinsics_cameraIntrinsics(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_cameraIntrinsics *c4_this);
DLL_EXPORT_CC c4_pointCloud *c4_pcfromdepth(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, real_T c4_b_varargin_1[921600], c4_cameraIntrinsics *c4_varargin_3, uint8_T c4_varargin_5[2764800], c4_pointCloud *c4_iobj_0);
DLL_EXPORT_CC c4_pointCloud *c4_pointCloudBase_pointCloudBase(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_pointCloud *c4_this, real32_T c4_b_varargin_1[2764800], uint8_T c4_varargin_3[2764800]);
DLL_EXPORT_CC void c4_handle_matlabCodegenDestructor(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_pointCloud *c4_obj);
DLL_EXPORT_CC void c4_array_vision_internal_codegen_c(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_vision_internal_cod *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0, int32_T c4_size1);
DLL_EXPORT_CC void c4_array_int32_T_SetSize(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_int32_T *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0);
DLL_EXPORT_CC void c4_array_int16_T_2D_SetSize(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_int16_T_2D *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0, int32_T c4_size1);
DLL_EXPORT_CC void c4_array_uint8_T_3D_SetSize(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_uint8_T_3D *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0, int32_T c4_size1, int32_T c4_size2);
DLL_EXPORT_CC void c4_array_real32_T_3D_SetSize(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_real32_T_3D *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0, int32_T c4_size1, int32_T c4_size2);
DLL_EXPORT_CC void c4_array_real32_T_2D_SetSize(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_real32_T_2D *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0, int32_T c4_size1);
DLL_EXPORT_CC void c4_array_pointCloud_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_pointCloud *c4_pStruct);
DLL_EXPORT_CC void c4_array_uint8_T_3D_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_uint8_T_3D *c4_coderArray);
DLL_EXPORT_CC void c4_array_real32_T_3D_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_real32_T_3D *c4_coderArray);
DLL_EXPORT_CC void c4_array_real32_T_2D_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_real32_T_2D *c4_coderArray);
DLL_EXPORT_CC void c4_array_cameraIntrinsics_Construc(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_cameraIntrinsics *c4_pStruct);
DLL_EXPORT_CC void c4_b_array_vision_internal_codegen_c(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_vision_internal_cod *c4_coderArray);
DLL_EXPORT_CC void c4_array_uint8_T_3D_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_uint8_T_3D *c4_coderArray);
DLL_EXPORT_CC void c4_array_pointCloud_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_pointCloud *c4_pStruct);
DLL_EXPORT_CC void c4_array_real32_T_3D_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_real32_T_3D *c4_coderArray);
DLL_EXPORT_CC void c4_array_real32_T_2D_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_real32_T_2D *c4_coderArray);
DLL_EXPORT_CC void c4_c_array_vision_internal_codegen_c(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_vision_internal_cod *c4_coderArray);
DLL_EXPORT_CC void c4_array_cameraIntrinsics_Destruct(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_cameraIntrinsics *c4_pStruct);
DLL_EXPORT_CC void c4_array_int16_T_2D_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_int16_T_2D *c4_coderArray);
DLL_EXPORT_CC void c4_array_int32_T_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_int32_T *c4_coderArray);
DLL_EXPORT_CC void c4_array_int16_T_2D_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_int16_T_2D *c4_coderArray);
DLL_EXPORT_CC void c4_array_int32_T_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_int32_T *c4_coderArray);
DLL_EXPORT_CC void init_dsm_address_info(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void init_simulink_io_address(SimStruct *S, gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC void JIT_release_mem_fcn(gvar_instance *ptr_gvar_instance);
DLL_EXPORT_CC gvar_instance *JIT_init_mem_fcn(void);

/* Function Definitions */

