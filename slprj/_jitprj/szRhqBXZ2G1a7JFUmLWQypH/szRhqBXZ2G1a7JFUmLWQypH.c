#define S_FUNCTION_NAME sf_sfun
#include "covrt.h"
#include "cgxert.h"
#include "emlrt.h"
#include "sfrtif/sfc_sf.h"
#include "sfrtif/MessageServiceLayer.h"
#include "sfrtif/DebuggerRuntimeInterface.h"
#include "sfrtif/sfc_mex.h"
#include "sfrtif/sf_runtime_errors.h"
#include "sfrtif/sf_partitioning_execution_bridge.h"
#include "rtwtypes.h"
#include "simtarget/slSimTgtClientServerAPIBridge.h"
#include "sfrtif/sfc_sdi.h"
#include "sfrtif/sf_test_language.h"
#include "simlogCIntrf.h"
#include "half_type.h"
#include "multiword_types.h"
#include "sfrtif/sfc_messages.h"
#include "slccrt.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"
#include "mwstringutil.h"
#include "blas.h"
#include "lapacke.h"
#include "szRhqBXZ2G1a7JFUmLWQypH.h"
#include "cvstCG_kdtree.h"

#define rtInf (mxGetInf())
#define rtMinusInf (-(mxGetInf()))
#define rtNaN (mxGetNaN())
#define rtInfF ((real32_T)mxGetInf())
#define rtMinusInfF (-(real32_T)mxGetInf())
#define rtNaNF ((real32_T)mxGetNaN())
#define rtIsNaN(X) ((int)mxIsNaN(X))
#define rtIsInf(X) ((int)mxIsInf(X))
#ifdef utFree
#undef utFree
#endif
#ifdef utMalloc
#undef utMalloc
#endif
#ifdef __cplusplus
extern "C" void* utMalloc(size_t size);
extern "C" void utFree(void*);
#else
extern void* utMalloc(size_t size);
extern void utFree(void*);
#endif


/* Type Definitions */
#ifndef c4_struct_c4_tag_sl60QntKsVzey7ufAgggUtE
#define c4_struct_c4_tag_sl60QntKsVzey7ufAgggUtE
struct c4_tag_sl60QntKsVzey7ufAgggUtE
{
    uint32_T RadialDistortion;
    uint32_T TangentialDistortion;
    uint32_T Skew;
};
#endif /* c4_struct_c4_tag_sl60QntKsVzey7ufAgggUtE */
#ifndef c4_typedef_c4_sl60QntKsVzey7ufAgggUtE
#define c4_typedef_c4_sl60QntKsVzey7ufAgggUtE
typedef struct c4_tag_sl60QntKsVzey7ufAgggUtE c4_sl60QntKsVzey7ufAgggUtE;
#endif /* c4_typedef_c4_sl60QntKsVzey7ufAgggUtE */
#ifndef c4_struct_c4_tag_s9s8BC13iTohZXRbLMSIDHE
#define c4_struct_c4_tag_s9s8BC13iTohZXRbLMSIDHE
struct c4_tag_s9s8BC13iTohZXRbLMSIDHE
{
    boolean_T CaseSensitivity;
    boolean_T StructExpand;
    boolean_T PartialMatching;
};
#endif /* c4_struct_c4_tag_s9s8BC13iTohZXRbLMSIDHE */
#ifndef c4_typedef_c4_s9s8BC13iTohZXRbLMSIDHE
#define c4_typedef_c4_s9s8BC13iTohZXRbLMSIDHE
typedef struct c4_tag_s9s8BC13iTohZXRbLMSIDHE c4_s9s8BC13iTohZXRbLMSIDHE;
#endif /* c4_typedef_c4_s9s8BC13iTohZXRbLMSIDHE */
#ifndef c4_struct_c4_tag_sQdHC975eZLyjknzLJLPJOC
#define c4_struct_c4_tag_sQdHC975eZLyjknzLJLPJOC
struct c4_tag_sQdHC975eZLyjknzLJLPJOC
{
    uint32_T ImagePoints;
    uint32_T ColorImage;
    uint32_T DepthRange;
    uint32_T ROI;
};
#endif /* c4_struct_c4_tag_sQdHC975eZLyjknzLJLPJOC */
#ifndef c4_typedef_c4_sQdHC975eZLyjknzLJLPJOC
#define c4_typedef_c4_sQdHC975eZLyjknzLJLPJOC
typedef struct c4_tag_sQdHC975eZLyjknzLJLPJOC c4_sQdHC975eZLyjknzLJLPJOC;
#endif /* c4_typedef_c4_sQdHC975eZLyjknzLJLPJOC */
#ifndef c4_struct_c4_tag_sGlUlvmj4BLmToOSPAZ1iGE
#define c4_struct_c4_tag_sGlUlvmj4BLmToOSPAZ1iGE
struct c4_tag_sGlUlvmj4BLmToOSPAZ1iGE
{
    uint32_T Color;
    uint32_T Normal;
    uint32_T Intensity;
};
#endif /* c4_struct_c4_tag_sGlUlvmj4BLmToOSPAZ1iGE */
#ifndef c4_typedef_c4_sGlUlvmj4BLmToOSPAZ1iGE
#define c4_typedef_c4_sGlUlvmj4BLmToOSPAZ1iGE
typedef struct c4_tag_sGlUlvmj4BLmToOSPAZ1iGE c4_sGlUlvmj4BLmToOSPAZ1iGE;
#endif /* c4_typedef_c4_sGlUlvmj4BLmToOSPAZ1iGE */
#ifndef c4_struct_c4_tag_IXZbk4aPjQFR6fO0q1hmvH
#define c4_struct_c4_tag_IXZbk4aPjQFR6fO0q1hmvH
struct c4_tag_IXZbk4aPjQFR6fO0q1hmvH
{
    int32_T __dummy;
};
#endif /* c4_struct_c4_tag_IXZbk4aPjQFR6fO0q1hmvH */
#ifndef c4_typedef_c4_rtString_1
#define c4_typedef_c4_rtString_1
typedef struct c4_tag_IXZbk4aPjQFR6fO0q1hmvH c4_rtString_1;
#endif /* c4_typedef_c4_rtString_1 */
#ifndef c4_struct_c4_tag_sOio131TMPK3hbZ4uH9Q8bG
#define c4_struct_c4_tag_sOio131TMPK3hbZ4uH9Q8bG
struct c4_tag_sOio131TMPK3hbZ4uH9Q8bG
{
    real_T RadialDistortion[2];
    real_T TangentialDistortion[2];
    real_T Skew;
};
#endif /* c4_struct_c4_tag_sOio131TMPK3hbZ4uH9Q8bG */
#ifndef c4_typedef_c4_sOio131TMPK3hbZ4uH9Q8bG
#define c4_typedef_c4_sOio131TMPK3hbZ4uH9Q8bG
typedef struct c4_tag_sOio131TMPK3hbZ4uH9Q8bG c4_sOio131TMPK3hbZ4uH9Q8bG;
#endif /* c4_typedef_c4_sOio131TMPK3hbZ4uH9Q8bG */
#ifndef c4_struct_c4_tag_sbtTErZARokYV2vZor6AGQF
#define c4_struct_c4_tag_sbtTErZARokYV2vZor6AGQF
struct c4_tag_sbtTErZARokYV2vZor6AGQF
{
    real_T focalLength[2];
    real_T principalPoint[2];
    real_T imageSize[2];
    real_T RadialDistortion[2];
    real_T TangentialDistortion[2];
    real_T Skew;
};
#endif /* c4_struct_c4_tag_sbtTErZARokYV2vZor6AGQF */
#ifndef c4_typedef_c4_sbtTErZARokYV2vZor6AGQF
#define c4_typedef_c4_sbtTErZARokYV2vZor6AGQF
typedef struct c4_tag_sbtTErZARokYV2vZor6AGQF c4_sbtTErZARokYV2vZor6AGQF;
#endif /* c4_typedef_c4_sbtTErZARokYV2vZor6AGQF */
#ifndef c4_struct_c4_tag_FDrX8kOEjZXLXru8nW4swE
#define c4_struct_c4_tag_FDrX8kOEjZXLXru8nW4swE
struct c4_tag_FDrX8kOEjZXLXru8nW4swE
{
    char_T f1[6];
    char_T f2[6];
};
#endif /* c4_struct_c4_tag_FDrX8kOEjZXLXru8nW4swE */
#ifndef c4_typedef_c4_s_FDrX8kOEjZXLXru8nW4swE
#define c4_typedef_c4_s_FDrX8kOEjZXLXru8nW4swE
typedef struct c4_tag_FDrX8kOEjZXLXru8nW4swE c4_s_FDrX8kOEjZXLXru8nW4swE;
#endif /* c4_typedef_c4_s_FDrX8kOEjZXLXru8nW4swE */
#ifndef c4_struct_c4_tag_y0eHdY6Brrqayp3tyfDTfC
#define c4_struct_c4_tag_y0eHdY6Brrqayp3tyfDTfC
struct c4_tag_y0eHdY6Brrqayp3tyfDTfC
{
    char_T f1[6];
    char_T f2[4];
    char_T f3[9];
    char_T f4[6];
    char_T f5[8];
};
#endif /* c4_struct_c4_tag_y0eHdY6Brrqayp3tyfDTfC */
#ifndef c4_typedef_c4_cell_1
#define c4_typedef_c4_cell_1
typedef struct c4_tag_y0eHdY6Brrqayp3tyfDTfC c4_cell_1;
#endif /* c4_typedef_c4_cell_1 */
#ifndef c4_struct_c4_tag_5KyfHthFqbnFHv0Hn8FvPB
#define c4_struct_c4_tag_5KyfHthFqbnFHv0Hn8FvPB
struct c4_tag_5KyfHthFqbnFHv0Hn8FvPB
{
    char_T f1[6];
    char_T f2[4];
    char_T f3[9];
    char_T f4[5];
    real_T f5;
    char_T f6[6];
    char_T f7[8];
};
#endif /* c4_struct_c4_tag_5KyfHthFqbnFHv0Hn8FvPB */
#ifndef c4_typedef_c4_cell_2
#define c4_typedef_c4_cell_2
typedef struct c4_tag_5KyfHthFqbnFHv0Hn8FvPB c4_cell_2;
#endif /* c4_typedef_c4_cell_2 */
#ifndef c4_struct_c4_tag_rHnk7BiOmsbxvseBOay8tG
#define c4_struct_c4_tag_rHnk7BiOmsbxvseBOay8tG
struct c4_tag_rHnk7BiOmsbxvseBOay8tG
{
    char_T f1[6];
    char_T f2[4];
    char_T f3[9];
    char_T f4[5];
    real_T f5;
    char_T f6[7];
    char_T f7[8];
};
#endif /* c4_struct_c4_tag_rHnk7BiOmsbxvseBOay8tG */
#ifndef c4_typedef_c4_cell_3
#define c4_typedef_c4_cell_3
typedef struct c4_tag_rHnk7BiOmsbxvseBOay8tG c4_cell_3;
#endif /* c4_typedef_c4_cell_3 */
#ifndef c4_struct_c4_tag_H87z0PTj0ZcHjMnd8tTv2G
#define c4_struct_c4_tag_H87z0PTj0ZcHjMnd8tTv2G
struct c4_tag_H87z0PTj0ZcHjMnd8tTv2G
{
    char_T f1[16];
    char_T f2[20];
    char_T f3[4];
};
#endif /* c4_struct_c4_tag_H87z0PTj0ZcHjMnd8tTv2G */
#ifndef c4_typedef_c4_cell_5
#define c4_typedef_c4_cell_5
typedef struct c4_tag_H87z0PTj0ZcHjMnd8tTv2G c4_cell_5;
#endif /* c4_typedef_c4_cell_5 */
#ifndef c4_struct_c4_tag_4uvGTEjvHQUqIbuB33mmHB
#define c4_struct_c4_tag_4uvGTEjvHQUqIbuB33mmHB
struct c4_tag_4uvGTEjvHQUqIbuB33mmHB
{
    char_T f1[15];
    char_T f2[12];
    char_T f3[15];
};
#endif /* c4_struct_c4_tag_4uvGTEjvHQUqIbuB33mmHB */
#ifndef c4_typedef_c4_cell_6
#define c4_typedef_c4_cell_6
typedef struct c4_tag_4uvGTEjvHQUqIbuB33mmHB c4_cell_6;
#endif /* c4_typedef_c4_cell_6 */
#ifndef c4_struct_c4_tag_35AAoN4vQ3LQVilSyIgzHC
#define c4_struct_c4_tag_35AAoN4vQ3LQVilSyIgzHC
struct c4_tag_35AAoN4vQ3LQVilSyIgzHC
{
    char_T f1[6];
    char_T f2[4];
    char_T f3[9];
    char_T f4[6];
};
#endif /* c4_struct_c4_tag_35AAoN4vQ3LQVilSyIgzHC */
#ifndef c4_typedef_c4_cell_7
#define c4_typedef_c4_cell_7
typedef struct c4_tag_35AAoN4vQ3LQVilSyIgzHC c4_cell_7;
#endif /* c4_typedef_c4_cell_7 */
#ifndef c4_struct_c4_tag_tlPdGfXmCI1lBlvzyWc4IG
#define c4_struct_c4_tag_tlPdGfXmCI1lBlvzyWc4IG
struct c4_tag_tlPdGfXmCI1lBlvzyWc4IG
{
    char_T f1[6];
    char_T f2[4];
    char_T f3[9];
    char_T f4[6];
    char_T f5[5];
    real_T f6;
};
#endif /* c4_struct_c4_tag_tlPdGfXmCI1lBlvzyWc4IG */
#ifndef c4_typedef_c4_cell_8
#define c4_typedef_c4_cell_8
typedef struct c4_tag_tlPdGfXmCI1lBlvzyWc4IG c4_cell_8;
#endif /* c4_typedef_c4_cell_8 */
#ifndef c4_struct_c4_tag_Rrdg8GN6iWZ6mxWzncjAVD
#define c4_struct_c4_tag_Rrdg8GN6iWZ6mxWzncjAVD
struct c4_tag_Rrdg8GN6iWZ6mxWzncjAVD
{
    char_T Value[10];
};
#endif /* c4_struct_c4_tag_Rrdg8GN6iWZ6mxWzncjAVD */
#ifndef c4_typedef_c4_s_Rrdg8GN6iWZ6mxWzncjAVD
#define c4_typedef_c4_s_Rrdg8GN6iWZ6mxWzncjAVD
typedef struct c4_tag_Rrdg8GN6iWZ6mxWzncjAVD c4_s_Rrdg8GN6iWZ6mxWzncjAVD;
#endif /* c4_typedef_c4_s_Rrdg8GN6iWZ6mxWzncjAVD */
#ifndef c4_struct_c4_tag_bhoJb8DGvrqWQvPGAcJgFD
#define c4_struct_c4_tag_bhoJb8DGvrqWQvPGAcJgFD
struct c4_tag_bhoJb8DGvrqWQvPGAcJgFD
{
    char_T Value[10];
};
#endif /* c4_struct_c4_tag_bhoJb8DGvrqWQvPGAcJgFD */
#ifndef c4_typedef_c4_s_bhoJb8DGvrqWQvPGAcJgFD
#define c4_typedef_c4_s_bhoJb8DGvrqWQvPGAcJgFD
typedef struct c4_tag_bhoJb8DGvrqWQvPGAcJgFD c4_s_bhoJb8DGvrqWQvPGAcJgFD;
#endif /* c4_typedef_c4_s_bhoJb8DGvrqWQvPGAcJgFD */
#ifndef c4_struct_c4_tag_KSOnulDyxJIFz3H2pXclXD
#define c4_struct_c4_tag_KSOnulDyxJIFz3H2pXclXD
struct c4_tag_KSOnulDyxJIFz3H2pXclXD
{
    char_T f1[6];
    char_T f2[6];
    char_T f3[5];
    char_T f4[6];
    char_T f5[5];
    char_T f6[7];
};
#endif /* c4_struct_c4_tag_KSOnulDyxJIFz3H2pXclXD */
#ifndef c4_typedef_c4_cell_9
#define c4_typedef_c4_cell_9
typedef struct c4_tag_KSOnulDyxJIFz3H2pXclXD c4_cell_9;
#endif /* c4_typedef_c4_cell_9 */
#ifndef c4_struct_c4_tag_rvk5EXoYr02TxQV9RxW68C
#define c4_struct_c4_tag_rvk5EXoYr02TxQV9RxW68C
struct c4_tag_rvk5EXoYr02TxQV9RxW68C
{
    char_T f1[8];
    char_T f2[4];
    char_T f3[9];
};
#endif /* c4_struct_c4_tag_rvk5EXoYr02TxQV9RxW68C */
#ifndef c4_typedef_c4_cell_10
#define c4_typedef_c4_cell_10
typedef struct c4_tag_rvk5EXoYr02TxQV9RxW68C c4_cell_10;
#endif /* c4_typedef_c4_cell_10 */
#ifndef c4_struct_c4_tag_L5JvjW1A13FyCQi5N783sB
#define c4_struct_c4_tag_L5JvjW1A13FyCQi5N783sB
struct c4_tag_L5JvjW1A13FyCQi5N783sB
{
    char_T f1[7];
};
#endif /* c4_struct_c4_tag_L5JvjW1A13FyCQi5N783sB */
#ifndef c4_typedef_c4_cell_wrap_11
#define c4_typedef_c4_cell_wrap_11
typedef struct c4_tag_L5JvjW1A13FyCQi5N783sB c4_cell_wrap_11;
#endif /* c4_typedef_c4_cell_wrap_11 */
#ifndef c4_struct_c4_tag_v2lIFzvteJCcTAyNI9GubC
#define c4_struct_c4_tag_v2lIFzvteJCcTAyNI9GubC
struct c4_tag_v2lIFzvteJCcTAyNI9GubC
{
    char_T f1[6];
    char_T f2[6];
    char_T f3[9];
    char_T f4[4];
    char_T f5[8];
};
#endif /* c4_struct_c4_tag_v2lIFzvteJCcTAyNI9GubC */
#ifndef c4_typedef_c4_cell_12
#define c4_typedef_c4_cell_12
typedef struct c4_tag_v2lIFzvteJCcTAyNI9GubC c4_cell_12;
#endif /* c4_typedef_c4_cell_12 */
#ifndef c4_struct_c4_tag_6jR4RtbHdjyG00WYqgD5nF
#define c4_struct_c4_tag_6jR4RtbHdjyG00WYqgD5nF
struct c4_tag_6jR4RtbHdjyG00WYqgD5nF
{
    char_T f1[16];
};
#endif /* c4_struct_c4_tag_6jR4RtbHdjyG00WYqgD5nF */
#ifndef c4_typedef_c4_cell_wrap_13
#define c4_typedef_c4_cell_wrap_13
typedef struct c4_tag_6jR4RtbHdjyG00WYqgD5nF c4_cell_wrap_13;
#endif /* c4_typedef_c4_cell_wrap_13 */
#ifndef c4_struct_c4_tag_ge1UD3YqHcNerzgtJ4AjXF
#define c4_struct_c4_tag_ge1UD3YqHcNerzgtJ4AjXF
struct c4_tag_ge1UD3YqHcNerzgtJ4AjXF
{
    char_T f1[6];
};
#endif /* c4_struct_c4_tag_ge1UD3YqHcNerzgtJ4AjXF */
#ifndef c4_typedef_c4_cell_wrap_0
#define c4_typedef_c4_cell_wrap_0
typedef struct c4_tag_ge1UD3YqHcNerzgtJ4AjXF c4_cell_wrap_0;
#endif /* c4_typedef_c4_cell_wrap_0 */
#ifndef c4_struct_c4_tag_oqYpDT2JV2Forf0OTr037C
#define c4_struct_c4_tag_oqYpDT2JV2Forf0OTr037C
struct c4_tag_oqYpDT2JV2Forf0OTr037C
{
    char_T f1[11];
    char_T f2[10];
    char_T f3[10];
    char_T f4[3];
};
#endif /* c4_struct_c4_tag_oqYpDT2JV2Forf0OTr037C */
#ifndef c4_typedef_c4_cell_14
#define c4_typedef_c4_cell_14
typedef struct c4_tag_oqYpDT2JV2Forf0OTr037C c4_cell_14;
#endif /* c4_typedef_c4_cell_14 */
#ifndef c4_struct_c4_tag_8WK1T6h718TlkUFrtWGf8D
#define c4_struct_c4_tag_8WK1T6h718TlkUFrtWGf8D
struct c4_tag_8WK1T6h718TlkUFrtWGf8D
{
    char_T f1[4];
    char_T f2[11];
    char_T f3[9];
    char_T f4[8];
    char_T f5[4];
    real_T f6[2];
    char_T f7[10];
};
#endif /* c4_struct_c4_tag_8WK1T6h718TlkUFrtWGf8D */
#ifndef c4_typedef_c4_cell_15
#define c4_typedef_c4_cell_15
typedef struct c4_tag_8WK1T6h718TlkUFrtWGf8D c4_cell_15;
#endif /* c4_typedef_c4_cell_15 */
#ifndef c4_struct_c4_tag_nFYRxOYXf0iGKCUJyJB2LG
#define c4_struct_c4_tag_nFYRxOYXf0iGKCUJyJB2LG
struct c4_tag_nFYRxOYXf0iGKCUJyJB2LG
{
    char_T f1[4];
    char_T f2[9];
    char_T f3[6];
    char_T f4[6];
    char_T f5[5];
    real_T f6;
    char_T f7[6];
};
#endif /* c4_struct_c4_tag_nFYRxOYXf0iGKCUJyJB2LG */
#ifndef c4_typedef_c4_cell_16
#define c4_typedef_c4_cell_16
typedef struct c4_tag_nFYRxOYXf0iGKCUJyJB2LG c4_cell_16;
#endif /* c4_typedef_c4_cell_16 */
#ifndef c4_struct_c4_tag_FBKWzGPKflUVrGAiJJTGHF
#define c4_struct_c4_tag_FBKWzGPKflUVrGAiJJTGHF
struct c4_tag_FBKWzGPKflUVrGAiJJTGHF
{
    char_T Value[5];
};
#endif /* c4_struct_c4_tag_FBKWzGPKflUVrGAiJJTGHF */
#ifndef c4_typedef_c4_s_FBKWzGPKflUVrGAiJJTGHF
#define c4_typedef_c4_s_FBKWzGPKflUVrGAiJJTGHF
typedef struct c4_tag_FBKWzGPKflUVrGAiJJTGHF c4_s_FBKWzGPKflUVrGAiJJTGHF;
#endif /* c4_typedef_c4_s_FBKWzGPKflUVrGAiJJTGHF */
#ifndef c4_struct_c4_tag_tiFQuw0ZDonsvxQULxkHSF
#define c4_struct_c4_tag_tiFQuw0ZDonsvxQULxkHSF
struct c4_tag_tiFQuw0ZDonsvxQULxkHSF
{
    char_T Value[5];
};
#endif /* c4_struct_c4_tag_tiFQuw0ZDonsvxQULxkHSF */
#ifndef c4_typedef_c4_s_tiFQuw0ZDonsvxQULxkHSF
#define c4_typedef_c4_s_tiFQuw0ZDonsvxQULxkHSF
typedef struct c4_tag_tiFQuw0ZDonsvxQULxkHSF c4_s_tiFQuw0ZDonsvxQULxkHSF;
#endif /* c4_typedef_c4_s_tiFQuw0ZDonsvxQULxkHSF */
#ifndef c4_struct_c4_tag_yMC1lSkUnB6oeajoT9xJQ
#define c4_struct_c4_tag_yMC1lSkUnB6oeajoT9xJQ
struct c4_tag_yMC1lSkUnB6oeajoT9xJQ
{
    char_T f1[4];
    char_T f2[9];
};
#endif /* c4_struct_c4_tag_yMC1lSkUnB6oeajoT9xJQ */
#ifndef c4_typedef_c4_cell_17
#define c4_typedef_c4_cell_17
typedef struct c4_tag_yMC1lSkUnB6oeajoT9xJQ c4_cell_17;
#endif /* c4_typedef_c4_cell_17 */
#ifndef c4_struct_c4_tag_1oOZWNNsmBcikbl113u95C
#define c4_struct_c4_tag_1oOZWNNsmBcikbl113u95C
struct c4_tag_1oOZWNNsmBcikbl113u95C
{
    char_T f1[5];
    char_T f2[6];
    char_T f3[9];
};
#endif /* c4_struct_c4_tag_1oOZWNNsmBcikbl113u95C */
#ifndef c4_typedef_c4_cell_18
#define c4_typedef_c4_cell_18
typedef struct c4_tag_1oOZWNNsmBcikbl113u95C c4_cell_18;
#endif /* c4_typedef_c4_cell_18 */
#ifndef c4_struct_c4_tag_103sPcmUxurZJOvWPoPXEE
#define c4_struct_c4_tag_103sPcmUxurZJOvWPoPXEE
struct c4_tag_103sPcmUxurZJOvWPoPXEE
{
    char_T f1[5];
    char_T f2[6];
    char_T f3[6];
    char_T f4[6];
    char_T f5[6];
    char_T f6[4];
};
#endif /* c4_struct_c4_tag_103sPcmUxurZJOvWPoPXEE */
#ifndef c4_typedef_c4_cell_19
#define c4_typedef_c4_cell_19
typedef struct c4_tag_103sPcmUxurZJOvWPoPXEE c4_cell_19;
#endif /* c4_typedef_c4_cell_19 */
#ifndef c4_struct_c4_tag_lfyg79q6Kpk0jaJgYJuk8C
#define c4_struct_c4_tag_lfyg79q6Kpk0jaJgYJuk8C
struct c4_tag_lfyg79q6Kpk0jaJgYJuk8C
{
    char_T f1[5];
    char_T f2[6];
    char_T f3[6];
    char_T f4[6];
};
#endif /* c4_struct_c4_tag_lfyg79q6Kpk0jaJgYJuk8C */
#ifndef c4_typedef_c4_cell_20
#define c4_typedef_c4_cell_20
typedef struct c4_tag_lfyg79q6Kpk0jaJgYJuk8C c4_cell_20;
#endif /* c4_typedef_c4_cell_20 */
#ifndef c4_struct_c4_tag_s6muEkzV9RKlnHqnHxozklH
#define c4_struct_c4_tag_s6muEkzV9RKlnHqnHxozklH
struct c4_tag_s6muEkzV9RKlnHqnHxozklH
{
    real_T DepthRange[2];
    real_T ROI[4];
};
#endif /* c4_struct_c4_tag_s6muEkzV9RKlnHqnHxozklH */
#ifndef c4_typedef_c4_s6muEkzV9RKlnHqnHxozklH
#define c4_typedef_c4_s6muEkzV9RKlnHqnHxozklH
typedef struct c4_tag_s6muEkzV9RKlnHqnHxozklH c4_s6muEkzV9RKlnHqnHxozklH;
#endif /* c4_typedef_c4_s6muEkzV9RKlnHqnHxozklH */
#ifndef c4_struct_c4_tag_w3m1Q26ivrDTAtgc0mcqVE
#define c4_struct_c4_tag_w3m1Q26ivrDTAtgc0mcqVE
struct c4_tag_w3m1Q26ivrDTAtgc0mcqVE
{
    c4_s_FDrX8kOEjZXLXru8nW4swE _data;
};
#endif /* c4_struct_c4_tag_w3m1Q26ivrDTAtgc0mcqVE */
#ifndef c4_typedef_c4_s_w3m1Q26ivrDTAtgc0mcqVE
#define c4_typedef_c4_s_w3m1Q26ivrDTAtgc0mcqVE
typedef struct c4_tag_w3m1Q26ivrDTAtgc0mcqVE c4_s_w3m1Q26ivrDTAtgc0mcqVE;
#endif /* c4_typedef_c4_s_w3m1Q26ivrDTAtgc0mcqVE */
#ifndef c4_struct_c4_tag_Mn76wFHso3clk05FqeWIUD
#define c4_struct_c4_tag_Mn76wFHso3clk05FqeWIUD
struct c4_tag_Mn76wFHso3clk05FqeWIUD
{
    c4_cell_1 _data;
};
#endif /* c4_struct_c4_tag_Mn76wFHso3clk05FqeWIUD */
#ifndef c4_typedef_c4_s_Mn76wFHso3clk05FqeWIUD
#define c4_typedef_c4_s_Mn76wFHso3clk05FqeWIUD
typedef struct c4_tag_Mn76wFHso3clk05FqeWIUD c4_s_Mn76wFHso3clk05FqeWIUD;
#endif /* c4_typedef_c4_s_Mn76wFHso3clk05FqeWIUD */
#ifndef c4_struct_c4_tag_yDomlFLak1FWAW9NbkkcnF
#define c4_struct_c4_tag_yDomlFLak1FWAW9NbkkcnF
struct c4_tag_yDomlFLak1FWAW9NbkkcnF
{
    c4_cell_2 _data;
};
#endif /* c4_struct_c4_tag_yDomlFLak1FWAW9NbkkcnF */
#ifndef c4_typedef_c4_s_yDomlFLak1FWAW9NbkkcnF
#define c4_typedef_c4_s_yDomlFLak1FWAW9NbkkcnF
typedef struct c4_tag_yDomlFLak1FWAW9NbkkcnF c4_s_yDomlFLak1FWAW9NbkkcnF;
#endif /* c4_typedef_c4_s_yDomlFLak1FWAW9NbkkcnF */
#ifndef c4_struct_c4_tag_P4MixbUEXI8ZqlBHMkC9XH
#define c4_struct_c4_tag_P4MixbUEXI8ZqlBHMkC9XH
struct c4_tag_P4MixbUEXI8ZqlBHMkC9XH
{
    c4_cell_3 _data;
};
#endif /* c4_struct_c4_tag_P4MixbUEXI8ZqlBHMkC9XH */
#ifndef c4_typedef_c4_s_P4MixbUEXI8ZqlBHMkC9XH
#define c4_typedef_c4_s_P4MixbUEXI8ZqlBHMkC9XH
typedef struct c4_tag_P4MixbUEXI8ZqlBHMkC9XH c4_s_P4MixbUEXI8ZqlBHMkC9XH;
#endif /* c4_typedef_c4_s_P4MixbUEXI8ZqlBHMkC9XH */
#ifndef c4_struct_c4_tag_ke2f2AafT7nJYo67VObux
#define c4_struct_c4_tag_ke2f2AafT7nJYo67VObux
struct c4_tag_ke2f2AafT7nJYo67VObux
{
    c4_cell_5 _data;
};
#endif /* c4_struct_c4_tag_ke2f2AafT7nJYo67VObux */
#ifndef c4_typedef_c4_s_ke2f2AafT7nJYo67VObux
#define c4_typedef_c4_s_ke2f2AafT7nJYo67VObux
typedef struct c4_tag_ke2f2AafT7nJYo67VObux c4_s_ke2f2AafT7nJYo67VObux;
#endif /* c4_typedef_c4_s_ke2f2AafT7nJYo67VObux */
#ifndef c4_struct_c4_tag_7xbvANdg7KAufDVBBSkgZE
#define c4_struct_c4_tag_7xbvANdg7KAufDVBBSkgZE
struct c4_tag_7xbvANdg7KAufDVBBSkgZE
{
    c4_cell_6 _data;
};
#endif /* c4_struct_c4_tag_7xbvANdg7KAufDVBBSkgZE */
#ifndef c4_typedef_c4_s_7xbvANdg7KAufDVBBSkgZE
#define c4_typedef_c4_s_7xbvANdg7KAufDVBBSkgZE
typedef struct c4_tag_7xbvANdg7KAufDVBBSkgZE c4_s_7xbvANdg7KAufDVBBSkgZE;
#endif /* c4_typedef_c4_s_7xbvANdg7KAufDVBBSkgZE */
#ifndef c4_struct_c4_tag_BkyqMJUIljLseorfycg8NB
#define c4_struct_c4_tag_BkyqMJUIljLseorfycg8NB
struct c4_tag_BkyqMJUIljLseorfycg8NB
{
    c4_cell_7 _data;
};
#endif /* c4_struct_c4_tag_BkyqMJUIljLseorfycg8NB */
#ifndef c4_typedef_c4_s_BkyqMJUIljLseorfycg8NB
#define c4_typedef_c4_s_BkyqMJUIljLseorfycg8NB
typedef struct c4_tag_BkyqMJUIljLseorfycg8NB c4_s_BkyqMJUIljLseorfycg8NB;
#endif /* c4_typedef_c4_s_BkyqMJUIljLseorfycg8NB */
#ifndef c4_struct_c4_tag_HHfEowJZIVC5OzSKUF3gbH
#define c4_struct_c4_tag_HHfEowJZIVC5OzSKUF3gbH
struct c4_tag_HHfEowJZIVC5OzSKUF3gbH
{
    c4_cell_8 _data;
};
#endif /* c4_struct_c4_tag_HHfEowJZIVC5OzSKUF3gbH */
#ifndef c4_typedef_c4_s_HHfEowJZIVC5OzSKUF3gbH
#define c4_typedef_c4_s_HHfEowJZIVC5OzSKUF3gbH
typedef struct c4_tag_HHfEowJZIVC5OzSKUF3gbH c4_s_HHfEowJZIVC5OzSKUF3gbH;
#endif /* c4_typedef_c4_s_HHfEowJZIVC5OzSKUF3gbH */
#ifndef c4_struct_c4_tag_I6WJ9VgMgjY1bC8cl0isFF
#define c4_struct_c4_tag_I6WJ9VgMgjY1bC8cl0isFF
struct c4_tag_I6WJ9VgMgjY1bC8cl0isFF
{
    c4_cell_9 _data;
};
#endif /* c4_struct_c4_tag_I6WJ9VgMgjY1bC8cl0isFF */
#ifndef c4_typedef_c4_s_I6WJ9VgMgjY1bC8cl0isFF
#define c4_typedef_c4_s_I6WJ9VgMgjY1bC8cl0isFF
typedef struct c4_tag_I6WJ9VgMgjY1bC8cl0isFF c4_s_I6WJ9VgMgjY1bC8cl0isFF;
#endif /* c4_typedef_c4_s_I6WJ9VgMgjY1bC8cl0isFF */
#ifndef c4_struct_c4_tag_u4FE6Zmr2crSHBBUiUpZ1D
#define c4_struct_c4_tag_u4FE6Zmr2crSHBBUiUpZ1D
struct c4_tag_u4FE6Zmr2crSHBBUiUpZ1D
{
    c4_cell_10 _data;
};
#endif /* c4_struct_c4_tag_u4FE6Zmr2crSHBBUiUpZ1D */
#ifndef c4_typedef_c4_s_u4FE6Zmr2crSHBBUiUpZ1D
#define c4_typedef_c4_s_u4FE6Zmr2crSHBBUiUpZ1D
typedef struct c4_tag_u4FE6Zmr2crSHBBUiUpZ1D c4_s_u4FE6Zmr2crSHBBUiUpZ1D;
#endif /* c4_typedef_c4_s_u4FE6Zmr2crSHBBUiUpZ1D */
#ifndef c4_struct_c4_tag_HOps0FrfA6RiWumqewPwZD
#define c4_struct_c4_tag_HOps0FrfA6RiWumqewPwZD
struct c4_tag_HOps0FrfA6RiWumqewPwZD
{
    c4_cell_wrap_11 _data;
};
#endif /* c4_struct_c4_tag_HOps0FrfA6RiWumqewPwZD */
#ifndef c4_typedef_c4_s_HOps0FrfA6RiWumqewPwZD
#define c4_typedef_c4_s_HOps0FrfA6RiWumqewPwZD
typedef struct c4_tag_HOps0FrfA6RiWumqewPwZD c4_s_HOps0FrfA6RiWumqewPwZD;
#endif /* c4_typedef_c4_s_HOps0FrfA6RiWumqewPwZD */
#ifndef c4_struct_c4_tag_KlsSdl92l1SacQwFbtqLoF
#define c4_struct_c4_tag_KlsSdl92l1SacQwFbtqLoF
struct c4_tag_KlsSdl92l1SacQwFbtqLoF
{
    c4_cell_12 _data;
};
#endif /* c4_struct_c4_tag_KlsSdl92l1SacQwFbtqLoF */
#ifndef c4_typedef_c4_s_KlsSdl92l1SacQwFbtqLoF
#define c4_typedef_c4_s_KlsSdl92l1SacQwFbtqLoF
typedef struct c4_tag_KlsSdl92l1SacQwFbtqLoF c4_s_KlsSdl92l1SacQwFbtqLoF;
#endif /* c4_typedef_c4_s_KlsSdl92l1SacQwFbtqLoF */
#ifndef c4_struct_c4_tag_1nlLkVeIuST25DF6il3ApD
#define c4_struct_c4_tag_1nlLkVeIuST25DF6il3ApD
struct c4_tag_1nlLkVeIuST25DF6il3ApD
{
    c4_cell_wrap_13 _data;
};
#endif /* c4_struct_c4_tag_1nlLkVeIuST25DF6il3ApD */
#ifndef c4_typedef_c4_s_1nlLkVeIuST25DF6il3ApD
#define c4_typedef_c4_s_1nlLkVeIuST25DF6il3ApD
typedef struct c4_tag_1nlLkVeIuST25DF6il3ApD c4_s_1nlLkVeIuST25DF6il3ApD;
#endif /* c4_typedef_c4_s_1nlLkVeIuST25DF6il3ApD */
#ifndef c4_struct_c4_tag_lnEOVMt12CNg5nSw1iwvNF
#define c4_struct_c4_tag_lnEOVMt12CNg5nSw1iwvNF
struct c4_tag_lnEOVMt12CNg5nSw1iwvNF
{
    c4_cell_wrap_0 _data;
};
#endif /* c4_struct_c4_tag_lnEOVMt12CNg5nSw1iwvNF */
#ifndef c4_typedef_c4_s_lnEOVMt12CNg5nSw1iwvNF
#define c4_typedef_c4_s_lnEOVMt12CNg5nSw1iwvNF
typedef struct c4_tag_lnEOVMt12CNg5nSw1iwvNF c4_s_lnEOVMt12CNg5nSw1iwvNF;
#endif /* c4_typedef_c4_s_lnEOVMt12CNg5nSw1iwvNF */
#ifndef c4_struct_c4_tag_33xz5Fn9hP9xeSzm5K9u1B
#define c4_struct_c4_tag_33xz5Fn9hP9xeSzm5K9u1B
struct c4_tag_33xz5Fn9hP9xeSzm5K9u1B
{
    c4_cell_14 _data;
};
#endif /* c4_struct_c4_tag_33xz5Fn9hP9xeSzm5K9u1B */
#ifndef c4_typedef_c4_s_33xz5Fn9hP9xeSzm5K9u1B
#define c4_typedef_c4_s_33xz5Fn9hP9xeSzm5K9u1B
typedef struct c4_tag_33xz5Fn9hP9xeSzm5K9u1B c4_s_33xz5Fn9hP9xeSzm5K9u1B;
#endif /* c4_typedef_c4_s_33xz5Fn9hP9xeSzm5K9u1B */
#ifndef c4_struct_c4_tag_lCxa2KKafeANqwNUugAtQ
#define c4_struct_c4_tag_lCxa2KKafeANqwNUugAtQ
struct c4_tag_lCxa2KKafeANqwNUugAtQ
{
    c4_cell_15 _data;
};
#endif /* c4_struct_c4_tag_lCxa2KKafeANqwNUugAtQ */
#ifndef c4_typedef_c4_s_lCxa2KKafeANqwNUugAtQ
#define c4_typedef_c4_s_lCxa2KKafeANqwNUugAtQ
typedef struct c4_tag_lCxa2KKafeANqwNUugAtQ c4_s_lCxa2KKafeANqwNUugAtQ;
#endif /* c4_typedef_c4_s_lCxa2KKafeANqwNUugAtQ */
#ifndef c4_struct_c4_tag_ZbX05ERxZKHb8RHtTJ6CKD
#define c4_struct_c4_tag_ZbX05ERxZKHb8RHtTJ6CKD
struct c4_tag_ZbX05ERxZKHb8RHtTJ6CKD
{
    c4_cell_16 _data;
};
#endif /* c4_struct_c4_tag_ZbX05ERxZKHb8RHtTJ6CKD */
#ifndef c4_typedef_c4_s_ZbX05ERxZKHb8RHtTJ6CKD
#define c4_typedef_c4_s_ZbX05ERxZKHb8RHtTJ6CKD
typedef struct c4_tag_ZbX05ERxZKHb8RHtTJ6CKD c4_s_ZbX05ERxZKHb8RHtTJ6CKD;
#endif /* c4_typedef_c4_s_ZbX05ERxZKHb8RHtTJ6CKD */
#ifndef c4_struct_c4_tag_7kqyh9yPSX1r9g9o63IGa
#define c4_struct_c4_tag_7kqyh9yPSX1r9g9o63IGa
struct c4_tag_7kqyh9yPSX1r9g9o63IGa
{
    c4_cell_17 _data;
};
#endif /* c4_struct_c4_tag_7kqyh9yPSX1r9g9o63IGa */
#ifndef c4_typedef_c4_s_7kqyh9yPSX1r9g9o63IGa
#define c4_typedef_c4_s_7kqyh9yPSX1r9g9o63IGa
typedef struct c4_tag_7kqyh9yPSX1r9g9o63IGa c4_s_7kqyh9yPSX1r9g9o63IGa;
#endif /* c4_typedef_c4_s_7kqyh9yPSX1r9g9o63IGa */
#ifndef c4_struct_c4_tag_daOtanuvxcDkVSmBsHuq7C
#define c4_struct_c4_tag_daOtanuvxcDkVSmBsHuq7C
struct c4_tag_daOtanuvxcDkVSmBsHuq7C
{
    c4_cell_18 _data;
};
#endif /* c4_struct_c4_tag_daOtanuvxcDkVSmBsHuq7C */
#ifndef c4_typedef_c4_s_daOtanuvxcDkVSmBsHuq7C
#define c4_typedef_c4_s_daOtanuvxcDkVSmBsHuq7C
typedef struct c4_tag_daOtanuvxcDkVSmBsHuq7C c4_s_daOtanuvxcDkVSmBsHuq7C;
#endif /* c4_typedef_c4_s_daOtanuvxcDkVSmBsHuq7C */
#ifndef c4_struct_c4_tag_5KsgDgIwuf5C5dbTEni1rF
#define c4_struct_c4_tag_5KsgDgIwuf5C5dbTEni1rF
struct c4_tag_5KsgDgIwuf5C5dbTEni1rF
{
    c4_cell_19 _data;
};
#endif /* c4_struct_c4_tag_5KsgDgIwuf5C5dbTEni1rF */
#ifndef c4_typedef_c4_s_5KsgDgIwuf5C5dbTEni1rF
#define c4_typedef_c4_s_5KsgDgIwuf5C5dbTEni1rF
typedef struct c4_tag_5KsgDgIwuf5C5dbTEni1rF c4_s_5KsgDgIwuf5C5dbTEni1rF;
#endif /* c4_typedef_c4_s_5KsgDgIwuf5C5dbTEni1rF */
#ifndef c4_struct_c4_tag_WSTEAPgNJmllMDXoFTifcF
#define c4_struct_c4_tag_WSTEAPgNJmllMDXoFTifcF
struct c4_tag_WSTEAPgNJmllMDXoFTifcF
{
    c4_cell_20 _data;
};
#endif /* c4_struct_c4_tag_WSTEAPgNJmllMDXoFTifcF */
#ifndef c4_typedef_c4_s_WSTEAPgNJmllMDXoFTifcF
#define c4_typedef_c4_s_WSTEAPgNJmllMDXoFTifcF
typedef struct c4_tag_WSTEAPgNJmllMDXoFTifcF c4_s_WSTEAPgNJmllMDXoFTifcF;
#endif /* c4_typedef_c4_s_WSTEAPgNJmllMDXoFTifcF */

/* Named Constants */
#define CALL_EVENT (-1)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void initialize_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    emlrtStack c4_st = { NULL,     /* site */
NULL,     /* tls */
NULL    /* prev */
 };
    c4_st.tls = ptr_gvar_instance->c4_fEmlrtCtx;
    emlrtLicenseCheckR2022a(&c4_st, "EMLRT:runTime:MexFunctionNeedsLicense", "video_and_image_blockset", 2);
    sim_mode_is_external(S);
    sf_get_time(S);
}

void initialize_params_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)S;
    (void)ptr_gvar_instance;
}

void mdl_start_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)ptr_gvar_instance;
    sim_mode_is_external(S);
}

void mdl_terminate_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)S;
    (void)ptr_gvar_instance;
}

void mdl_setup_runtime_resources_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    sfSetAnimationVectors(S, &ptr_gvar_instance->c4_JITStateAnimation[0], &ptr_gvar_instance->c4_JITTransitionAnimation[0]);
}

void mdl_cleanup_runtime_resources_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)S;
    (void)ptr_gvar_instance;
}

void enable_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)ptr_gvar_instance;
    sf_get_time(S);
}

void disable_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)ptr_gvar_instance;
    sf_get_time(S);
}

void sf_gateway_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    c4_cameraIntrinsics c4_intrinsics;
    emlrtStack c4_b_st;
    emlrtStack c4_st = { NULL,     /* site */
NULL,     /* tls */
NULL    /* prev */
 };
    c4_st.tls = ptr_gvar_instance->c4_fEmlrtCtx;
    c4_b_st.prev = &c4_st;
    c4_b_st.tls = c4_st.tls;
    sf_get_time(S);
    ptr_gvar_instance->c4_JITTransitionAnimation[0] = 0U;
    emlrtHeapReferenceStackEnterFcnR2012b(&c4_st);
    c4_array_pointCloud_Constructor(S, ptr_gvar_instance, &ptr_gvar_instance->c4_ptCloud);
    c4_array_pointCloud_Constructor(S, ptr_gvar_instance, &ptr_gvar_instance->c4_b_ptCloud);
    c4_array_cameraIntrinsics_Construc(S, ptr_gvar_instance, &c4_intrinsics);
    emlrtPushHeapReferenceStackR2021a(&c4_st, true, &ptr_gvar_instance->c4_ptCloud, (void *)&c4_handle_matlabCodegenDestructor, S, ptr_gvar_instance, NULL);
    ptr_gvar_instance->c4_ptCloud.matlabCodegenIsDeleted = true;
    emlrtPushHeapReferenceStackR2021a(&c4_st, true, &ptr_gvar_instance->c4_b_ptCloud, (void *)&c4_handle_matlabCodegenDestructor, S, ptr_gvar_instance, NULL);
    ptr_gvar_instance->c4_b_ptCloud.matlabCodegenIsDeleted = true;
    c4_b_st.site = &ptr_gvar_instance->c4_emlrtRSI;
    c4_cameraIntrinsics_cameraIntrinsics(S, ptr_gvar_instance, &c4_b_st, &c4_intrinsics);
    c4_b_st.site = &ptr_gvar_instance->c4_c_emlrtRSI;
    c4_pcfromdepth(S, ptr_gvar_instance, &c4_b_st, *ptr_gvar_instance->c4_depthImage, &c4_intrinsics, *ptr_gvar_instance->c4_colorImage, &ptr_gvar_instance->c4_b_ptCloud);
    c4_b_st.site = &ptr_gvar_instance->c4_d_emlrtRSI;
    c4_pcfromdepth(S, ptr_gvar_instance, &c4_b_st, *ptr_gvar_instance->c4_depthImage, &c4_intrinsics, *ptr_gvar_instance->c4_colorImage, &ptr_gvar_instance->c4_ptCloud);
    c4_b_st.site = &ptr_gvar_instance->c4_b_emlrtRSI;
    c4_handle_matlabCodegenDestructor(S, ptr_gvar_instance, &c4_b_st, &ptr_gvar_instance->c4_b_ptCloud);
    c4_b_st.site = &ptr_gvar_instance->c4_b_emlrtRSI;
    c4_handle_matlabCodegenDestructor(S, ptr_gvar_instance, &c4_b_st, &ptr_gvar_instance->c4_ptCloud);
    c4_array_cameraIntrinsics_Destruct(S, ptr_gvar_instance, &c4_intrinsics);
    c4_array_pointCloud_Destructor(S, ptr_gvar_instance, &ptr_gvar_instance->c4_b_ptCloud);
    c4_array_pointCloud_Destructor(S, ptr_gvar_instance, &ptr_gvar_instance->c4_ptCloud);
    emlrtHeapReferenceStackLeaveFcnR2012b(&c4_st);
}

void ext_mode_exec_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)S;
    (void)ptr_gvar_instance;
}

const mxArray *get_sim_state_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    const mxArray *c4_st = NULL;
    const mxArray *c4_y = NULL;
    (void)S;
    (void)ptr_gvar_instance;
    c4_st = NULL;
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_createcellmatrix(0, 1), false);
    sf_mex_assign(&c4_st, c4_y, false);
    return c4_st;
}

void set_sim_state_c4_RoboCup_ARM(SimStruct *S, gvar_instance *ptr_gvar_instance, const mxArray *c4_st)
{
    const mxArray *c4_u;
    (void)S;
    (void)ptr_gvar_instance;
    c4_u = sf_mex_dup(c4_st);
    sf_mex_destroy(&c4_u);
    sf_mex_destroy(&c4_st);
}

c4_cameraIntrinsics *c4_cameraIntrinsics_cameraIntrinsics(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_cameraIntrinsics *c4_this)
{
    static int8_T c4_d[3] = { 0, 0, 1 };
    c4_cameraIntrinsics *c4_b_this;
    c4_vision_internal_codegen_cameraIntrinsicsArray c4_c;
    emlrtStack c4_st;
    real_T c4_intrinsicMat[9];
    int32_T c4_e;
    int32_T c4_f;
    c4_st.prev = c4_sp;
    c4_st.tls = c4_sp->tls;
    c4_b_this = c4_this;
    for (c4_e = 0; c4_e < 2; c4_e++) {
        c4_b_this->FocalLength[c4_e] = 1109.0;
    }
    for (c4_e = 0; c4_e < 2; c4_e++) {
        c4_b_this->PrincipalPoint[c4_e] = -280.0 * (real_T)c4_e + 640.0;
    }
    for (c4_e = 0; c4_e < 2; c4_e++) {
        c4_b_this->ImageSize[c4_e] = 560.0 * (real_T)c4_e + 720.0;
    }
    for (c4_e = 0; c4_e < 2; c4_e++) {
        c4_b_this->RadialDistortion[c4_e] = 0.0;
    }
    for (c4_e = 0; c4_e < 2; c4_e++) {
        c4_b_this->TangentialDistortion[c4_e] = 0.0;
    }
    c4_b_this->Skew = 0.0;
    c4_intrinsicMat[0] = c4_b_this->FocalLength[0];
    c4_intrinsicMat[3] = c4_b_this->Skew;
    c4_intrinsicMat[6] = c4_b_this->PrincipalPoint[0];
    c4_intrinsicMat[1] = 0.0;
    c4_intrinsicMat[4] = c4_b_this->FocalLength[1];
    c4_intrinsicMat[7] = c4_b_this->PrincipalPoint[1];
    c4_e = 0;
    for (c4_f = 0; c4_f < 3; c4_f++) {
        c4_intrinsicMat[c4_e + 2] = (real_T)c4_d[c4_f];
        c4_e += 3;
    }
    for (c4_e = 0; c4_e < 9; c4_e++) {
        c4_b_this->K[c4_e] = c4_intrinsicMat[c4_e];
    }
    c4_st.site = &ptr_gvar_instance->c4_f_emlrtRSI;
    c4_c.__dummy = 0;
    c4_array_vision_internal_codegen_c(S, ptr_gvar_instance, &c4_st, &c4_b_this->cameraIntrinsicsArrayData, &ptr_gvar_instance->c4_emlrtRTEI, 1, 1);
    c4_b_this->cameraIntrinsicsArrayData.vector.data[0] = c4_c;
    return c4_b_this;
}

c4_pointCloud *c4_pcfromdepth(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, real_T c4_b_varargin_1[921600], c4_cameraIntrinsics *c4_varargin_3, uint8_T c4_varargin_5[2764800], c4_pointCloud *c4_iobj_0)
{
    static char_T c4_d[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'S', 'c', 'a', 'l', 'a', 'r' };
    static char_T c4_e[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'c', 'f', 'r', 'o', 'm', 'd', 'e', 'p', 't', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'S', 'c', 'a', 'l', 'a', 'r' };
    static char_T c4_f[10] = { 'i', 'n', 't', 'r', 'i', 'n', 's', 'i', 'c', 's' };
    c4_coder_array_int16_T_2D c4_points;
    c4_coder_array_int32_T c4_c;
    c4_pointCloud *c4_c_ptCloud;
    emlrtStack c4_b_st;
    emlrtStack c4_c_st;
    emlrtStack c4_d_st;
    emlrtStack c4_st;
    const mxArray *c4_b_y = NULL;
    const mxArray *c4_c_y = NULL;
    const mxArray *c4_y = NULL;
    real_T c4_a[2];
    real_T c4_Z;
    int32_T c4_b_j;
    int32_T c4_g;
    int32_T c4_i;
    int32_T c4_j;
    boolean_T c4_n;
    c4_st.prev = c4_sp;
    c4_st.tls = c4_sp->tls;
    c4_b_st.prev = &c4_st;
    c4_b_st.tls = c4_st.tls;
    c4_c_st.prev = &c4_b_st;
    c4_c_st.tls = c4_b_st.tls;
    c4_d_st.prev = &c4_c_st;
    c4_d_st.tls = c4_c_st.tls;
    c4_st.site = &ptr_gvar_instance->c4_o_emlrtRSI;
    c4_b_st.site = &ptr_gvar_instance->c4_q_emlrtRSI;
    c4_c_st.site = &ptr_gvar_instance->c4_r_emlrtRSI;
    c4_d_st.site = &ptr_gvar_instance->c4_s_emlrtRSI;
    c4_n = (c4_varargin_3->cameraIntrinsicsArrayData.size[0] * c4_varargin_3->cameraIntrinsicsArrayData.size[1] == 1);
    if (c4_n) {
    } else {
        c4_y = NULL;
        sf_mex_assign(&c4_y, sf_mex_create("y", c4_e, 10, 0U, 1, 0U, 2, 1, 33), false);
        c4_b_y = NULL;
        sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_d, 10, 0U, 1, 0U, 2, 1, 46), false);
        c4_c_y = NULL;
        sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_f, 10, 0U, 1, 0U, 2, 1, 10), false);
        sf_mex_call(&c4_d_st, &ptr_gvar_instance->c4_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14, sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call(&c4_d_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
    }
    c4_b_j = 0;
    for (c4_j = 0; c4_j < 720; c4_j++) {
        for (c4_i = 0; c4_i < 1280; c4_i++) {
            ptr_gvar_instance->c4_row[c4_i + c4_b_j] = (int16_T)(c4_j + 1);
            ptr_gvar_instance->c4_col[c4_i + c4_b_j] = (int16_T)(c4_i + 1);
        }
        c4_b_j += 1280;
    }
    for (c4_j = 0; c4_j < 921600; c4_j++) {
        ptr_gvar_instance->c4_points1[c4_j] = ptr_gvar_instance->c4_col[c4_j];
        ptr_gvar_instance->c4_points1[c4_j + 921600] = ptr_gvar_instance->c4_row[c4_j];
        ptr_gvar_instance->c4_b[c4_j] = ((int32_T)ptr_gvar_instance->c4_points1[c4_j + 921600] <= 720);
    }
    c4_b_j = 0;
    for (c4_i = 0; c4_i < 921600; c4_i++) {
        if (ptr_gvar_instance->c4_b[c4_i]) {
            c4_b_j++;
        }
    }
    c4_array_int32_T_Constructor(S, ptr_gvar_instance, &c4_c);
    c4_st.site = &ptr_gvar_instance->c4_ib_emlrtRSI;
    c4_array_int32_T_SetSize(S, ptr_gvar_instance, &c4_st, &c4_c, &ptr_gvar_instance->c4_b_emlrtRTEI, c4_b_j);
    c4_b_j = 0;
    for (c4_i = 0; c4_i < 921600; c4_i++) {
        if (ptr_gvar_instance->c4_b[c4_i]) {
            c4_c.vector.data[c4_b_j] = c4_i;
            c4_b_j++;
        }
    }
    c4_array_int16_T_2D_Constructor(S, ptr_gvar_instance, &c4_points);
    c4_array_int16_T_2D_SetSize(S, ptr_gvar_instance, c4_sp, &c4_points, &ptr_gvar_instance->c4_c_emlrtRTEI, c4_c.size[0], 2);
    for (c4_j = 0; c4_j < 2; c4_j++) {
        c4_b_j = c4_c.size[0];
        for (c4_g = 0; c4_g < c4_b_j; c4_g++) {
            c4_points.vector.data[c4_g + c4_points.size[0] * c4_j] = ptr_gvar_instance->c4_points1[c4_c.vector.data[c4_g] + 921600 * c4_j];
        }
    }
    for (c4_j = 0; c4_j < 2764800; c4_j++) {
        ptr_gvar_instance->c4_varargin_1[c4_j] = rtNaNF;
    }
    c4_j = c4_c.size[0];
    for (c4_i = 0; c4_i < c4_j; c4_i++) {
        c4_g = c4_c.size[0];
        if ((c4_i + 1 < 1) || (c4_i + 1 > c4_g)) {
            emlrtDynamicBoundsCheckR2012b(c4_i + 1, 1, c4_g, &ptr_gvar_instance->c4_b_emlrtBCI, (emlrtConstCTX)c4_sp);
        }
        c4_g = c4_c.size[0];
        if ((c4_i + 1 < 1) || (c4_i + 1 > c4_g)) {
            emlrtDynamicBoundsCheckR2012b(c4_i + 1, 1, c4_g, &ptr_gvar_instance->c4_c_emlrtBCI, (emlrtConstCTX)c4_sp);
        }
        c4_g = (int32_T)ptr_gvar_instance->c4_points1[c4_c.vector.data[c4_i] + 921600];
        if (c4_g > 720) {
            emlrtDynamicBoundsCheckR2012b(c4_g, 1, 720, &ptr_gvar_instance->c4_d_emlrtBCI, (emlrtConstCTX)c4_sp);
        }
        c4_Z = c4_b_varargin_1[(c4_g + 720 * ((int32_T)ptr_gvar_instance->c4_points1[c4_c.vector.data[c4_i]] - 1)) - 1] / 5000.0;
        c4_g = c4_c.size[0];
        if ((c4_i + 1 < 1) || (c4_i + 1 > c4_g)) {
            emlrtDynamicBoundsCheckR2012b(c4_i + 1, 1, c4_g, &ptr_gvar_instance->c4_emlrtBCI, (emlrtConstCTX)c4_sp);
        }
        for (c4_g = 0; c4_g < 2; c4_g++) {
            c4_a[c4_g] = ((real_T)c4_points.vector.data[c4_i + c4_points.size[0] * c4_g] - c4_varargin_3->PrincipalPoint[c4_g]) / c4_varargin_3->FocalLength[c4_g];
        }
        if ((c4_Z >= 0.0) && (c4_Z <= 5.0)) {
            for (c4_g = 0; c4_g < 2; c4_g++) {
                ptr_gvar_instance->c4_varargin_1[(((int32_T)ptr_gvar_instance->c4_points1[c4_c.vector.data[c4_i] + 921600] + 720 * ((int32_T)ptr_gvar_instance->c4_points1[c4_c.vector.data[c4_i]] - 1)) + 921600 * c4_g) - 1] = (real32_T)(c4_a[c4_g] * c4_Z);
            }
            ptr_gvar_instance->c4_varargin_1[((int32_T)ptr_gvar_instance->c4_points1[c4_c.vector.data[c4_i] + 921600] + 720 * ((int32_T)ptr_gvar_instance->c4_points1[c4_c.vector.data[c4_i]] - 1)) + 1843199] = (real32_T)c4_Z;
        }
    }
    c4_array_int32_T_Destructor(S, ptr_gvar_instance, &c4_c);
    c4_array_int16_T_2D_Destructor(S, ptr_gvar_instance, &c4_points);
    c4_st.site = &ptr_gvar_instance->c4_p_emlrtRSI;
    c4_iobj_0->HasKdtreeConstructed = false;
    c4_iobj_0->HasLocationHandleAllocated = false;
    c4_b_st.site = &ptr_gvar_instance->c4_u_emlrtRSI;
    c4_c_ptCloud = c4_pointCloudBase_pointCloudBase(S, ptr_gvar_instance, &c4_b_st, c4_iobj_0, ptr_gvar_instance->c4_varargin_1, c4_varargin_5);
    c4_b_st.site = &ptr_gvar_instance->c4_v_emlrtRSI;
    c4_c_ptCloud->Kdtree = NULL;
    c4_c_ptCloud->LocationHandle = NULL;
    c4_c_ptCloud->matlabCodegenIsDeleted = false;
    return c4_c_ptCloud;
}

c4_pointCloud *c4_pointCloudBase_pointCloudBase(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_pointCloud *c4_this, real32_T c4_b_varargin_1[2764800], uint8_T c4_varargin_3[2764800])
{
    static int16_T c4_d[3] = { 720, 1280, 3 };
    static char_T c4_c[35] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'p', 'o', 'i', 'n', 't', 'c', 'l', 'o', 'u', 'd', ':', 'u', 'n', 'm', 'a', 't', 'c', 'h', 'e', 'd', 'X', 'Y', 'Z', 'C', 'o', 'l', 'o', 'r' };
    c4_pointCloud *c4_b_this;
    emlrtStack c4_b_st;
    emlrtStack c4_st;
    const mxArray *c4_b_y = NULL;
    const mxArray *c4_y = NULL;
    int32_T c4_k;
    int16_T c4_x1[3];
    boolean_T c4_b_p;
    boolean_T c4_p;
    boolean_T exitg1;
    c4_st.prev = c4_sp;
    c4_st.tls = c4_sp->tls;
    c4_b_st.prev = &c4_st;
    c4_b_st.tls = c4_st.tls;
    c4_b_this = c4_this;
    c4_st.site = &ptr_gvar_instance->c4_w_emlrtRSI;
    for (c4_k = 0; c4_k < 2764800; c4_k++) {
        c4_b_this->Location[c4_k] = c4_b_varargin_1[c4_k];
    }
    c4_st.site = &ptr_gvar_instance->c4_x_emlrtRSI;
    c4_b_st.site = &ptr_gvar_instance->c4_cb_emlrtRSI;
    for (c4_k = 0; c4_k < 3; c4_k++) {
        c4_x1[c4_k] = c4_d[c4_k];
    }
    c4_p = false;
    c4_b_p = true;
    c4_k = 0;
    exitg1 = false;
    while ((!exitg1) && (c4_k < 3)) {
        if ((int32_T)c4_x1[c4_k] != (int32_T)c4_d[c4_k]) {
            c4_b_p = false;
            exitg1 = true;
        } else {
            c4_k++;
        }
    }
    if (!c4_b_p) {
    } else {
        c4_p = true;
    }
    if (!c4_p) {
        c4_y = NULL;
        sf_mex_assign(&c4_y, sf_mex_create("y", c4_c, 10, 0U, 1, 0U, 2, 1, 35), false);
        c4_b_y = NULL;
        sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_c, 10, 0U, 1, 0U, 2, 1, 35), false);
        sf_mex_call(&c4_b_st, &ptr_gvar_instance->c4_b_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14, sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_b_y)));
    }
    c4_array_uint8_T_3D_SetSize(S, ptr_gvar_instance, &c4_st, &c4_b_this->Color, &ptr_gvar_instance->c4_d_emlrtRTEI, 720, 1280, 3);
    for (c4_k = 0; c4_k < 2764800; c4_k++) {
        c4_b_this->Color.vector.data[c4_k] = c4_varargin_3[c4_k];
    }
    c4_st.site = &ptr_gvar_instance->c4_y_emlrtRSI;
    c4_b_st.site = &ptr_gvar_instance->c4_db_emlrtRSI;
    c4_array_real32_T_3D_SetSize(S, ptr_gvar_instance, &c4_st, &c4_b_this->Normal, &ptr_gvar_instance->c4_e_emlrtRTEI, 0, 0, 0);
    c4_st.site = &ptr_gvar_instance->c4_ab_emlrtRSI;
    c4_array_real32_T_2D_SetSize(S, ptr_gvar_instance, &c4_st, &c4_b_this->Intensity, &ptr_gvar_instance->c4_f_emlrtRTEI, 0, 0);
    c4_st.site = &ptr_gvar_instance->c4_bb_emlrtRSI;
    c4_b_st.site = &ptr_gvar_instance->c4_eb_emlrtRSI;
    return c4_b_this;
}

void c4_handle_matlabCodegenDestructor(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_pointCloud *c4_obj)
{
    void *c4_locationPtr;
    (void)S;
    (void)ptr_gvar_instance;
            if (!c4_obj->matlabCodegenIsDeleted) {
        c4_obj->matlabCodegenIsDeleted = true;
        if (c4_obj->HasLocationHandleAllocated) {
            c4_locationPtr = c4_obj->LocationHandle;
            kdtreeDeleteLocationDataPointer_single(c4_locationPtr);
            c4_obj->HasLocationHandleAllocated = false;
        }
        if (c4_obj->HasKdtreeConstructed) {
            c4_locationPtr = c4_obj->Kdtree;
            kdtreeDeleteObj_single(c4_locationPtr);
            c4_obj->HasKdtreeConstructed = false;
        }
    }
}

void c4_array_vision_internal_codegen_c(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_vision_internal_cod *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0, int32_T c4_size1)
{
    c4_vision_internal_codegen_cameraIntrinsicsArray *c4_newData;
    int32_T c4_newCapacity;
    int32_T c4_newNumel;
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->size[0] = c4_size0;
    c4_coderArray->size[1] = c4_size1;
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c4_coderArray->size[0], c4_srcLocation, (void *)c4_sp), (size_t)(uint32_T)c4_coderArray->size[1], c4_srcLocation, (void *)c4_sp);
    if (c4_newNumel > c4_coderArray->vector.allocated) {
        c4_newCapacity = c4_coderArray->vector.allocated;
        if (c4_newCapacity < 16) {
            c4_newCapacity = 16;
        }
        while (c4_newCapacity < c4_newNumel) {
            if (c4_newCapacity > 1073741823) {
                c4_newCapacity = MAX_int32_T;
            } else {
                c4_newCapacity <<= 1;
            }
        }
        c4_newData = (c4_vision_internal_codegen_cameraIntrinsicsArray *)emlrtMallocMex(sizeof(c4_vision_internal_codegen_cameraIntrinsicsArray) * (uint32_T)c4_newCapacity);
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if (c4_coderArray->vector.data != NULL) {
            memcpy(c4_newData, c4_coderArray->vector.data, sizeof(c4_vision_internal_codegen_cameraIntrinsicsArray) * (uint32_T)c4_coderArray->vector.numel);
            if (c4_coderArray->vector.owner) {
                emlrtFreeMex(c4_coderArray->vector.data);
            }
        }
        c4_coderArray->vector.data = c4_newData;
        c4_coderArray->vector.allocated = c4_newCapacity;
        c4_coderArray->vector.owner = true;
    }
    c4_coderArray->vector.numel = c4_newNumel;
}

void c4_array_int32_T_SetSize(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_int32_T *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0)
{
    int32_T c4_newCapacity;
    int32_T c4_newNumel;
    int32_T *c4_newData;
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->size[0] = c4_size0;
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c4_coderArray->size[0], c4_srcLocation, (void *)c4_sp);
    if (c4_newNumel > c4_coderArray->vector.allocated) {
        c4_newCapacity = c4_coderArray->vector.allocated;
        if (c4_newCapacity < 16) {
            c4_newCapacity = 16;
        }
        while (c4_newCapacity < c4_newNumel) {
            if (c4_newCapacity > 1073741823) {
                c4_newCapacity = MAX_int32_T;
            } else {
                c4_newCapacity <<= 1;
            }
        }
        c4_newData = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)c4_newCapacity);
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if (c4_coderArray->vector.data != NULL) {
            memcpy(c4_newData, c4_coderArray->vector.data, sizeof(int32_T) * (uint32_T)c4_coderArray->vector.numel);
            if (c4_coderArray->vector.owner) {
                emlrtFreeMex(c4_coderArray->vector.data);
            }
        }
        c4_coderArray->vector.data = c4_newData;
        c4_coderArray->vector.allocated = c4_newCapacity;
        c4_coderArray->vector.owner = true;
    }
    c4_coderArray->vector.numel = c4_newNumel;
}

void c4_array_int16_T_2D_SetSize(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_int16_T_2D *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0, int32_T c4_size1)
{
    int32_T c4_newCapacity;
    int32_T c4_newNumel;
    int16_T *c4_newData;
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->size[0] = c4_size0;
    c4_coderArray->size[1] = c4_size1;
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c4_coderArray->size[0], c4_srcLocation, (void *)c4_sp), (size_t)(uint32_T)c4_coderArray->size[1], c4_srcLocation, (void *)c4_sp);
    if (c4_newNumel > c4_coderArray->vector.allocated) {
        c4_newCapacity = c4_coderArray->vector.allocated;
        if (c4_newCapacity < 16) {
            c4_newCapacity = 16;
        }
        while (c4_newCapacity < c4_newNumel) {
            if (c4_newCapacity > 1073741823) {
                c4_newCapacity = MAX_int32_T;
            } else {
                c4_newCapacity <<= 1;
            }
        }
        c4_newData = (int16_T *)emlrtMallocMex(sizeof(int16_T) * (uint32_T)c4_newCapacity);
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if (c4_coderArray->vector.data != NULL) {
            memcpy(c4_newData, c4_coderArray->vector.data, sizeof(int16_T) * (uint32_T)c4_coderArray->vector.numel);
            if (c4_coderArray->vector.owner) {
                emlrtFreeMex(c4_coderArray->vector.data);
            }
        }
        c4_coderArray->vector.data = c4_newData;
        c4_coderArray->vector.allocated = c4_newCapacity;
        c4_coderArray->vector.owner = true;
    }
    c4_coderArray->vector.numel = c4_newNumel;
}

void c4_array_uint8_T_3D_SetSize(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_uint8_T_3D *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0, int32_T c4_size1, int32_T c4_size2)
{
    int32_T c4_newCapacity;
    int32_T c4_newNumel;
    uint8_T *c4_newData;
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->size[0] = c4_size0;
    c4_coderArray->size[1] = c4_size1;
    c4_coderArray->size[2] = c4_size2;
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c4_coderArray->size[0], c4_srcLocation, (void *)c4_sp), (size_t)(uint32_T)c4_coderArray->size[1], c4_srcLocation, (void *)c4_sp), (size_t)(uint32_T)c4_coderArray->size[2], c4_srcLocation, (void *)c4_sp);
    if (c4_newNumel > c4_coderArray->vector.allocated) {
        c4_newCapacity = c4_coderArray->vector.allocated;
        if (c4_newCapacity < 16) {
            c4_newCapacity = 16;
        }
        while (c4_newCapacity < c4_newNumel) {
            if (c4_newCapacity > 1073741823) {
                c4_newCapacity = MAX_int32_T;
            } else {
                c4_newCapacity <<= 1;
            }
        }
        c4_newData = (uint8_T *)emlrtMallocMex(sizeof(uint8_T) * (uint32_T)c4_newCapacity);
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if (c4_coderArray->vector.data != NULL) {
            memcpy(c4_newData, c4_coderArray->vector.data, sizeof(uint8_T) * (uint32_T)c4_coderArray->vector.numel);
            if (c4_coderArray->vector.owner) {
                emlrtFreeMex(c4_coderArray->vector.data);
            }
        }
        c4_coderArray->vector.data = c4_newData;
        c4_coderArray->vector.allocated = c4_newCapacity;
        c4_coderArray->vector.owner = true;
    }
    c4_coderArray->vector.numel = c4_newNumel;
}

void c4_array_real32_T_3D_SetSize(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_real32_T_3D *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0, int32_T c4_size1, int32_T c4_size2)
{
    int32_T c4_newCapacity;
    int32_T c4_newNumel;
    real32_T *c4_newData;
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->size[0] = c4_size0;
    c4_coderArray->size[1] = c4_size1;
    c4_coderArray->size[2] = c4_size2;
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c4_coderArray->size[0], c4_srcLocation, (void *)c4_sp), (size_t)(uint32_T)c4_coderArray->size[1], c4_srcLocation, (void *)c4_sp), (size_t)(uint32_T)c4_coderArray->size[2], c4_srcLocation, (void *)c4_sp);
    if (c4_newNumel > c4_coderArray->vector.allocated) {
        c4_newCapacity = c4_coderArray->vector.allocated;
        if (c4_newCapacity < 16) {
            c4_newCapacity = 16;
        }
        while (c4_newCapacity < c4_newNumel) {
            if (c4_newCapacity > 1073741823) {
                c4_newCapacity = MAX_int32_T;
            } else {
                c4_newCapacity <<= 1;
            }
        }
        c4_newData = (real32_T *)emlrtMallocMex(sizeof(real32_T) * (uint32_T)c4_newCapacity);
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if (c4_coderArray->vector.data != NULL) {
            memcpy(c4_newData, c4_coderArray->vector.data, sizeof(real32_T) * (uint32_T)c4_coderArray->vector.numel);
            if (c4_coderArray->vector.owner) {
                emlrtFreeMex(c4_coderArray->vector.data);
            }
        }
        c4_coderArray->vector.data = c4_newData;
        c4_coderArray->vector.allocated = c4_newCapacity;
        c4_coderArray->vector.owner = true;
    }
    c4_coderArray->vector.numel = c4_newNumel;
}

void c4_array_real32_T_2D_SetSize(SimStruct *S, gvar_instance *ptr_gvar_instance, const emlrtStack *c4_sp, c4_coder_array_real32_T_2D *c4_coderArray, const emlrtRTEInfo *c4_srcLocation, int32_T c4_size0, int32_T c4_size1)
{
    int32_T c4_newCapacity;
    int32_T c4_newNumel;
    real32_T *c4_newData;
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->size[0] = c4_size0;
    c4_coderArray->size[1] = c4_size1;
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c4_coderArray->size[0], c4_srcLocation, (void *)c4_sp), (size_t)(uint32_T)c4_coderArray->size[1], c4_srcLocation, (void *)c4_sp);
    if (c4_newNumel > c4_coderArray->vector.allocated) {
        c4_newCapacity = c4_coderArray->vector.allocated;
        if (c4_newCapacity < 16) {
            c4_newCapacity = 16;
        }
        while (c4_newCapacity < c4_newNumel) {
            if (c4_newCapacity > 1073741823) {
                c4_newCapacity = MAX_int32_T;
            } else {
                c4_newCapacity <<= 1;
            }
        }
        c4_newData = (real32_T *)emlrtMallocMex(sizeof(real32_T) * (uint32_T)c4_newCapacity);
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if ((void *)c4_newData == NULL) {
            emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
        }
        if (c4_coderArray->vector.data != NULL) {
            memcpy(c4_newData, c4_coderArray->vector.data, sizeof(real32_T) * (uint32_T)c4_coderArray->vector.numel);
            if (c4_coderArray->vector.owner) {
                emlrtFreeMex(c4_coderArray->vector.data);
            }
        }
        c4_coderArray->vector.data = c4_newData;
        c4_coderArray->vector.allocated = c4_newCapacity;
        c4_coderArray->vector.owner = true;
    }
    c4_coderArray->vector.numel = c4_newNumel;
}

void c4_array_pointCloud_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_pointCloud *c4_pStruct)
{
    c4_array_uint8_T_3D_Constructor(S, ptr_gvar_instance, &c4_pStruct->Color);
    c4_array_real32_T_3D_Constructor(S, ptr_gvar_instance, &c4_pStruct->Normal);
    c4_array_real32_T_2D_Constructor(S, ptr_gvar_instance, &c4_pStruct->Intensity);
}

void c4_array_uint8_T_3D_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_uint8_T_3D *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->vector.data = (uint8_T *)NULL;
    c4_coderArray->vector.numel = 0;
    c4_coderArray->vector.allocated = 0;
    c4_coderArray->vector.owner = true;
    c4_coderArray->size[0] = 0;
    c4_coderArray->size[1] = 0;
    c4_coderArray->size[2] = 0;
}

void c4_array_real32_T_3D_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_real32_T_3D *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->vector.data = (real32_T *)NULL;
    c4_coderArray->vector.numel = 0;
    c4_coderArray->vector.allocated = 0;
    c4_coderArray->vector.owner = true;
    c4_coderArray->size[0] = 0;
    c4_coderArray->size[1] = 0;
    c4_coderArray->size[2] = 0;
}

void c4_array_real32_T_2D_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_real32_T_2D *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->vector.data = (real32_T *)NULL;
    c4_coderArray->vector.numel = 0;
    c4_coderArray->vector.allocated = 0;
    c4_coderArray->vector.owner = true;
    c4_coderArray->size[0] = 0;
    c4_coderArray->size[1] = 0;
}

void c4_array_cameraIntrinsics_Construc(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_cameraIntrinsics *c4_pStruct)
{
    c4_b_array_vision_internal_codegen_c(S, ptr_gvar_instance, &c4_pStruct->cameraIntrinsicsArrayData);
}

void c4_b_array_vision_internal_codegen_c(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_vision_internal_cod *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->vector.data = (c4_vision_internal_codegen_cameraIntrinsicsArray *)NULL;
    c4_coderArray->vector.numel = 0;
    c4_coderArray->vector.allocated = 0;
    c4_coderArray->vector.owner = true;
    c4_coderArray->size[0] = 0;
    c4_coderArray->size[1] = 0;
}

void c4_array_uint8_T_3D_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_uint8_T_3D *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    if (c4_coderArray->vector.owner && (c4_coderArray->vector.data != (uint8_T *)NULL)) {
        emlrtFreeMex(c4_coderArray->vector.data);
    }
}

void c4_array_pointCloud_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_pointCloud *c4_pStruct)
{
    c4_array_uint8_T_3D_Destructor(S, ptr_gvar_instance, &c4_pStruct->Color);
    c4_array_real32_T_3D_Destructor(S, ptr_gvar_instance, &c4_pStruct->Normal);
    c4_array_real32_T_2D_Destructor(S, ptr_gvar_instance, &c4_pStruct->Intensity);
}

void c4_array_real32_T_3D_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_real32_T_3D *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    if (c4_coderArray->vector.owner && (c4_coderArray->vector.data != (real32_T *)NULL)) {
        emlrtFreeMex(c4_coderArray->vector.data);
    }
}

void c4_array_real32_T_2D_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_real32_T_2D *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    if (c4_coderArray->vector.owner && (c4_coderArray->vector.data != (real32_T *)NULL)) {
        emlrtFreeMex(c4_coderArray->vector.data);
    }
}

void c4_c_array_vision_internal_codegen_c(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_vision_internal_cod *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    if (c4_coderArray->vector.owner && (c4_coderArray->vector.data != (c4_vision_internal_codegen_cameraIntrinsicsArray *)NULL)) {
        emlrtFreeMex(c4_coderArray->vector.data);
    }
}

void c4_array_cameraIntrinsics_Destruct(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_cameraIntrinsics *c4_pStruct)
{
    c4_c_array_vision_internal_codegen_c(S, ptr_gvar_instance, &c4_pStruct->cameraIntrinsicsArrayData);
}

void c4_array_int16_T_2D_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_int16_T_2D *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->vector.data = (int16_T *)NULL;
    c4_coderArray->vector.numel = 0;
    c4_coderArray->vector.allocated = 0;
    c4_coderArray->vector.owner = true;
    c4_coderArray->size[0] = 0;
    c4_coderArray->size[1] = 0;
}

void c4_array_int32_T_Constructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_int32_T *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    c4_coderArray->vector.data = (int32_T *)NULL;
    c4_coderArray->vector.numel = 0;
    c4_coderArray->vector.allocated = 0;
    c4_coderArray->vector.owner = true;
    c4_coderArray->size[0] = 0;
}

void c4_array_int16_T_2D_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_int16_T_2D *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    if (c4_coderArray->vector.owner && (c4_coderArray->vector.data != (int16_T *)NULL)) {
        emlrtFreeMex(c4_coderArray->vector.data);
    }
}

void c4_array_int32_T_Destructor(SimStruct *S, gvar_instance *ptr_gvar_instance, c4_coder_array_int32_T *c4_coderArray)
{
    (void)S;
    (void)ptr_gvar_instance;
    if (c4_coderArray->vector.owner && (c4_coderArray->vector.data != (int32_T *)NULL)) {
        emlrtFreeMex(c4_coderArray->vector.data);
    }
}

void init_dsm_address_info(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    (void)S;
    (void)ptr_gvar_instance;
}

void init_simulink_io_address(SimStruct *S, gvar_instance *ptr_gvar_instance)
{
    ptr_gvar_instance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(S);
    ptr_gvar_instance->c4_depthImage = (real_T (*)[921600])ssGetInputPortSignal_wrapper(S, 0);
    ptr_gvar_instance->c4_colorImage = (uint8_T (*)[2764800])ssGetInputPortSignal_wrapper(S, 1);
}

void JIT_release_mem_fcn(gvar_instance *ptr_gvar_instance)
{
    free(ptr_gvar_instance);
}

gvar_instance *JIT_init_mem_fcn(void)
{
    gvar_instance *ptr_gvar_instance;
    ptr_gvar_instance = (gvar_instance *)calloc((size_t)1U, sizeof(gvar_instance));
    ptr_gvar_instance->c4_ab_emlrtRSI.lineNo = 89;
    ptr_gvar_instance->c4_ab_emlrtRSI.fcnName = "pointCloudBase";
    ptr_gvar_instance->c4_ab_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_b_emlrtBCI.iFirst = -1;
    ptr_gvar_instance->c4_b_emlrtBCI.iLast = -1;
    ptr_gvar_instance->c4_b_emlrtBCI.lineNo = 56;
    ptr_gvar_instance->c4_b_emlrtBCI.colNo = 22;
    ptr_gvar_instance->c4_b_emlrtBCI.aName = "";
    ptr_gvar_instance->c4_b_emlrtBCI.fName = "pcfromdepth";
    ptr_gvar_instance->c4_b_emlrtBCI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_b_emlrtBCI.checkKind = 0;
    ptr_gvar_instance->c4_b_emlrtMCI.lineNo = 889;
    ptr_gvar_instance->c4_b_emlrtMCI.colNo = 17;
    ptr_gvar_instance->c4_b_emlrtMCI.fName = "pointCloudBase";
    ptr_gvar_instance->c4_b_emlrtMCI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_b_emlrtRSI.lineNo = 14;
    ptr_gvar_instance->c4_b_emlrtRSI.fcnName = "MATLAB Function";
    ptr_gvar_instance->c4_b_emlrtRSI.pathName = "#RoboCup_ARM:77";
    ptr_gvar_instance->c4_b_emlrtRTEI.lineNo = 41;
    ptr_gvar_instance->c4_b_emlrtRTEI.colNo = 17;
    ptr_gvar_instance->c4_b_emlrtRTEI.fName = "pcfromdepth";
    ptr_gvar_instance->c4_b_emlrtRTEI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_bb_emlrtRSI.lineNo = 90;
    ptr_gvar_instance->c4_bb_emlrtRSI.fcnName = "pointCloudBase";
    ptr_gvar_instance->c4_bb_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_c_emlrtBCI.iFirst = -1;
    ptr_gvar_instance->c4_c_emlrtBCI.iLast = -1;
    ptr_gvar_instance->c4_c_emlrtBCI.lineNo = 57;
    ptr_gvar_instance->c4_c_emlrtBCI.colNo = 22;
    ptr_gvar_instance->c4_c_emlrtBCI.aName = "";
    ptr_gvar_instance->c4_c_emlrtBCI.fName = "pcfromdepth";
    ptr_gvar_instance->c4_c_emlrtBCI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_c_emlrtBCI.checkKind = 0;
    ptr_gvar_instance->c4_c_emlrtMCI.lineNo = 918;
    ptr_gvar_instance->c4_c_emlrtMCI.colNo = 13;
    ptr_gvar_instance->c4_c_emlrtMCI.fName = "pointCloudBase";
    ptr_gvar_instance->c4_c_emlrtMCI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_c_emlrtRSI.lineNo = 9;
    ptr_gvar_instance->c4_c_emlrtRSI.fcnName = "MATLAB Function";
    ptr_gvar_instance->c4_c_emlrtRSI.pathName = "#RoboCup_ARM:77";
    ptr_gvar_instance->c4_c_emlrtRTEI.lineNo = 41;
    ptr_gvar_instance->c4_c_emlrtRTEI.colNo = 1;
    ptr_gvar_instance->c4_c_emlrtRTEI.fName = "pcfromdepth";
    ptr_gvar_instance->c4_c_emlrtRTEI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_cb_emlrtRSI.lineNo = 134;
    ptr_gvar_instance->c4_cb_emlrtRSI.fcnName = "pointCloudBase";
    ptr_gvar_instance->c4_cb_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_d_emlrtBCI.iFirst = 1;
    ptr_gvar_instance->c4_d_emlrtBCI.iLast = 720;
    ptr_gvar_instance->c4_d_emlrtBCI.lineNo = 60;
    ptr_gvar_instance->c4_d_emlrtBCI.colNo = 28;
    ptr_gvar_instance->c4_d_emlrtBCI.aName = "";
    ptr_gvar_instance->c4_d_emlrtBCI.fName = "pcfromdepth";
    ptr_gvar_instance->c4_d_emlrtBCI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_d_emlrtBCI.checkKind = 0;
    ptr_gvar_instance->c4_d_emlrtMCI.lineNo = 933;
    ptr_gvar_instance->c4_d_emlrtMCI.colNo = 13;
    ptr_gvar_instance->c4_d_emlrtMCI.fName = "pointCloudBase";
    ptr_gvar_instance->c4_d_emlrtMCI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_d_emlrtRSI.lineNo = 11;
    ptr_gvar_instance->c4_d_emlrtRSI.fcnName = "MATLAB Function";
    ptr_gvar_instance->c4_d_emlrtRSI.pathName = "#RoboCup_ARM:77";
    ptr_gvar_instance->c4_d_emlrtRTEI.lineNo = 134;
    ptr_gvar_instance->c4_d_emlrtRTEI.colNo = 13;
    ptr_gvar_instance->c4_d_emlrtRTEI.fName = "pointCloudBase";
    ptr_gvar_instance->c4_d_emlrtRTEI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_db_emlrtRSI.lineNo = 139;
    ptr_gvar_instance->c4_db_emlrtRSI.fcnName = "pointCloudBase";
    ptr_gvar_instance->c4_db_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_e_emlrtRSI.lineNo = 25;
    ptr_gvar_instance->c4_e_emlrtRSI.fcnName = "cameraIntrinsics";
    ptr_gvar_instance->c4_e_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\cameraIntrinsics.m";
    ptr_gvar_instance->c4_e_emlrtRTEI.lineNo = 139;
    ptr_gvar_instance->c4_e_emlrtRTEI.colNo = 13;
    ptr_gvar_instance->c4_e_emlrtRTEI.fName = "pointCloudBase";
    ptr_gvar_instance->c4_e_emlrtRTEI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_eb_emlrtRSI.lineNo = 149;
    ptr_gvar_instance->c4_eb_emlrtRSI.fcnName = "pointCloudBase";
    ptr_gvar_instance->c4_eb_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_emlrtBCI.iFirst = -1;
    ptr_gvar_instance->c4_emlrtBCI.iLast = -1;
    ptr_gvar_instance->c4_emlrtBCI.lineNo = 61;
    ptr_gvar_instance->c4_emlrtBCI.colNo = 19;
    ptr_gvar_instance->c4_emlrtBCI.aName = "";
    ptr_gvar_instance->c4_emlrtBCI.fName = "pcfromdepth";
    ptr_gvar_instance->c4_emlrtBCI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_emlrtBCI.checkKind = 0;
    ptr_gvar_instance->c4_emlrtMCI.lineNo = 14;
    ptr_gvar_instance->c4_emlrtMCI.colNo = 37;
    ptr_gvar_instance->c4_emlrtMCI.fName = "validatescalar";
    ptr_gvar_instance->c4_emlrtMCI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatescalar.m";
    ptr_gvar_instance->c4_emlrtRSI.lineNo = 5;
    ptr_gvar_instance->c4_emlrtRSI.fcnName = "MATLAB Function";
    ptr_gvar_instance->c4_emlrtRSI.pathName = "#RoboCup_ARM:77";
    ptr_gvar_instance->c4_emlrtRTEI.lineNo = 308;
    ptr_gvar_instance->c4_emlrtRTEI.colNo = 13;
    ptr_gvar_instance->c4_emlrtRTEI.fName = "cameraIntrinsics";
    ptr_gvar_instance->c4_emlrtRTEI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\cameraIntrinsics.m";
    ptr_gvar_instance->c4_f_emlrtRSI.lineNo = 26;
    ptr_gvar_instance->c4_f_emlrtRSI.fcnName = "cameraIntrinsics";
    ptr_gvar_instance->c4_f_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\cameraIntrinsics.m";
    ptr_gvar_instance->c4_f_emlrtRTEI.lineNo = 144;
    ptr_gvar_instance->c4_f_emlrtRTEI.colNo = 13;
    ptr_gvar_instance->c4_f_emlrtRTEI.fName = "pointCloudBase";
    ptr_gvar_instance->c4_f_emlrtRTEI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_fb_emlrtRSI.lineNo = 24;
    ptr_gvar_instance->c4_fb_emlrtRSI.fcnName = "matlabCodegenHandle";
    ptr_gvar_instance->c4_fb_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m";
    ptr_gvar_instance->c4_g_emlrtRSI.lineNo = 79;
    ptr_gvar_instance->c4_g_emlrtRSI.fcnName = "cameraIntrinsicsImpl";
    ptr_gvar_instance->c4_g_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\cameraIntrinsicsImpl.m";
    ptr_gvar_instance->c4_g_emlrtRTEI.lineNo = 9;
    ptr_gvar_instance->c4_g_emlrtRTEI.colNo = 1;
    ptr_gvar_instance->c4_g_emlrtRTEI.fName = "MATLAB Function";
    ptr_gvar_instance->c4_g_emlrtRTEI.pName = "#RoboCup_ARM:77";
    ptr_gvar_instance->c4_gb_emlrtRSI.lineNo = 332;
    ptr_gvar_instance->c4_gb_emlrtRSI.fcnName = "pointCloud";
    ptr_gvar_instance->c4_gb_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m";
    ptr_gvar_instance->c4_h_emlrtRSI.lineNo = 99;
    ptr_gvar_instance->c4_h_emlrtRSI.fcnName = "cameraIntrinsicsImpl";
    ptr_gvar_instance->c4_h_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\cameraIntrinsicsImpl.m";
    ptr_gvar_instance->c4_h_emlrtRTEI.lineNo = 5;
    ptr_gvar_instance->c4_h_emlrtRTEI.colNo = 1;
    ptr_gvar_instance->c4_h_emlrtRTEI.fName = "MATLAB Function";
    ptr_gvar_instance->c4_h_emlrtRTEI.pName = "#RoboCup_ARM:77";
    ptr_gvar_instance->c4_hb_emlrtRSI.lineNo = 337;
    ptr_gvar_instance->c4_hb_emlrtRSI.fcnName = "pointCloud";
    ptr_gvar_instance->c4_hb_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m";
    ptr_gvar_instance->c4_i_emlrtRSI.lineNo = 107;
    ptr_gvar_instance->c4_i_emlrtRSI.fcnName = "cameraIntrinsicsImpl";
    ptr_gvar_instance->c4_i_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\cameraIntrinsicsImpl.m";
    ptr_gvar_instance->c4_i_emlrtRTEI.lineNo = 35;
    ptr_gvar_instance->c4_i_emlrtRTEI.colNo = 5;
    ptr_gvar_instance->c4_i_emlrtRTEI.fName = "pcfromdepth";
    ptr_gvar_instance->c4_i_emlrtRTEI.pName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_ib_emlrtRSI.lineNo = 41;
    ptr_gvar_instance->c4_ib_emlrtRSI.fcnName = "pcfromdepth";
    ptr_gvar_instance->c4_ib_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_j_emlrtRSI.lineNo = 1;
    ptr_gvar_instance->c4_j_emlrtRSI.fcnName = "cameraIntrinsicsBase";
    ptr_gvar_instance->c4_j_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\cameraIntrinsicsBase.m";
    ptr_gvar_instance->c4_k_emlrtRSI.lineNo = 23;
    ptr_gvar_instance->c4_k_emlrtRSI.fcnName = "ImageTransformer";
    ptr_gvar_instance->c4_k_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\+calibration\\ImageTransformer.m";
    ptr_gvar_instance->c4_l_emlrtRSI.lineNo = 43;
    ptr_gvar_instance->c4_l_emlrtRSI.fcnName = "ImageTransformerBase";
    ptr_gvar_instance->c4_l_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\+calibration\\ImageTransformerBase.m";
    ptr_gvar_instance->c4_m_emlrtRSI.lineNo = 305;
    ptr_gvar_instance->c4_m_emlrtRSI.fcnName = "cameraIntrinsics";
    ptr_gvar_instance->c4_m_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\cameraIntrinsics.m";
    ptr_gvar_instance->c4_n_emlrtRSI.lineNo = 34;
    ptr_gvar_instance->c4_n_emlrtRSI.fcnName = "cameraIntrinsicsArray";
    ptr_gvar_instance->c4_n_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\+vision\\+internal\\+codegen\\cameraIntrinsicsArray.m";
    ptr_gvar_instance->c4_o_emlrtRSI.lineNo = 15;
    ptr_gvar_instance->c4_o_emlrtRSI.fcnName = "pcfromdepth";
    ptr_gvar_instance->c4_o_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_p_emlrtRSI.lineNo = 79;
    ptr_gvar_instance->c4_p_emlrtRSI.fcnName = "pcfromdepth";
    ptr_gvar_instance->c4_p_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_q_emlrtRSI.lineNo = 141;
    ptr_gvar_instance->c4_q_emlrtRSI.fcnName = "pcfromdepth";
    ptr_gvar_instance->c4_q_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_r_emlrtRSI.lineNo = 220;
    ptr_gvar_instance->c4_r_emlrtRSI.fcnName = "pcfromdepth";
    ptr_gvar_instance->c4_r_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\vision\\vision\\pcfromdepth.m";
    ptr_gvar_instance->c4_s_emlrtRSI.lineNo = 93;
    ptr_gvar_instance->c4_s_emlrtRSI.fcnName = "validateattributes";
    ptr_gvar_instance->c4_s_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m";
    ptr_gvar_instance->c4_t_emlrtRSI.lineNo = 11;
    ptr_gvar_instance->c4_t_emlrtRSI.fcnName = "validatescalar";
    ptr_gvar_instance->c4_t_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatescalar.m";
    ptr_gvar_instance->c4_u_emlrtRSI.lineNo = 33;
    ptr_gvar_instance->c4_u_emlrtRSI.fcnName = "pointCloud";
    ptr_gvar_instance->c4_u_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m";
    ptr_gvar_instance->c4_v_emlrtRSI.lineNo = 43;
    ptr_gvar_instance->c4_v_emlrtRSI.fcnName = "pointCloud";
    ptr_gvar_instance->c4_v_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m";
    ptr_gvar_instance->c4_w_emlrtRSI.lineNo = 75;
    ptr_gvar_instance->c4_w_emlrtRSI.fcnName = "pointCloudBase";
    ptr_gvar_instance->c4_w_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_x_emlrtRSI.lineNo = 87;
    ptr_gvar_instance->c4_x_emlrtRSI.fcnName = "pointCloudBase";
    ptr_gvar_instance->c4_x_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    ptr_gvar_instance->c4_y_emlrtRSI.lineNo = 88;
    ptr_gvar_instance->c4_y_emlrtRSI.fcnName = "pointCloudBase";
    ptr_gvar_instance->c4_y_emlrtRSI.pathName = "C:\\Program Files\\MATLAB\\R2025b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m";
    return ptr_gvar_instance;
}


