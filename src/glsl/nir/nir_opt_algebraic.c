
#include "nir.h"
#include "nir_search.h"

#ifndef NIR_OPT_ALGEBRAIC_STRUCT_DEFS
#define NIR_OPT_ALGEBRAIC_STRUCT_DEFS

struct transform {
   const nir_search_expression *search;
   const nir_search_value *replace;
   unsigned condition_offset;
};

struct opt_state {
   void *mem_ctx;
   bool progress;
   const bool *condition_flags;
};

#endif

static const nir_search_variable search78_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_bool,
};

static const nir_search_constant search78_1 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};
static const nir_search_expression search78 = {
   { nir_search_value_expression },
   nir_op_iand,
   { &search78_0.value, &search78_1.value },
};
   
static const nir_search_variable replace78_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace78 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &replace78_0.value },
};
   
static const nir_search_variable search88_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search88_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search88 = {
   { nir_search_value_expression },
   nir_op_iand,
   { &search88_0.value, &search88_1.value },
};
   
static const nir_search_variable replace88 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search89_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search89_1 = {
   { nir_search_value_constant },
   { 0xffffffff /* -1 */ },
};
static const nir_search_expression search89 = {
   { nir_search_value_expression },
   nir_op_iand,
   { &search89_0.value, &search89_1.value },
};
   
static const nir_search_variable replace89 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search90_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search90_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search90 = {
   { nir_search_value_expression },
   nir_op_iand,
   { &search90_0.value, &search90_1.value },
};
   
static const nir_search_constant replace90 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
   
static const nir_search_variable search96_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search96_0 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search96_0_0.value },
};

static const nir_search_variable search96_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search96_1 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search96_1_0.value },
};
static const nir_search_expression search96 = {
   { nir_search_value_expression },
   nir_op_iand,
   { &search96_0.value, &search96_1.value },
};
   
static const nir_search_variable replace96_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace96_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace96_0 = {
   { nir_search_value_expression },
   nir_op_ior,
   { &replace96_0_0.value, &replace96_0_1.value },
};
static const nir_search_expression replace96 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &replace96_0.value },
};

static const struct transform nir_opt_algebraic_iand_xforms[] = {
   { &search78, &replace78.value, 0 },
   { &search88, &replace88.value, 0 },
   { &search89, &replace89.value, 0 },
   { &search90, &replace90.value, 0 },
   { &search96, &replace96.value, 0 },
};
   
static const nir_search_variable search94_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search94_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search94 = {
   { nir_search_value_expression },
   nir_op_ixor,
   { &search94_0.value, &search94_1.value },
};
   
static const nir_search_constant replace94 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};

static const struct transform nir_opt_algebraic_ixor_xforms[] = {
   { &search94, &replace94.value, 0 },
};
   
static const nir_search_variable search71_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search71_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search71 = {
   { nir_search_value_expression },
   nir_op_seq,
   { &search71_0.value, &search71_1.value },
};
   
static const nir_search_variable replace71_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace71_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace71_0 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &replace71_0_0.value, &replace71_0_1.value },
};
static const nir_search_expression replace71 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &replace71_0.value },
};

static const struct transform nir_opt_algebraic_seq_xforms[] = {
   { &search71, &replace71.value, 8 },
};
   
static const nir_search_variable search81_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search81_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search81 = {
   { nir_search_value_expression },
   nir_op_ilt,
   { &search81_0.value, &search81_1.value },
};
   
static const nir_search_constant replace81 = {
   { nir_search_value_constant },
   { NIR_FALSE /* False */ },
};
   
static const nir_search_variable search168_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search168_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search168_0_2 = {
   { nir_search_value_variable },
   2, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search168_0 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search168_0_0.value, &search168_0_1.value, &search168_0_2.value },
};

static const nir_search_variable search168_1 = {
   { nir_search_value_variable },
   3, /* d */
   true,
   nir_type_invalid,
};
static const nir_search_expression search168 = {
   { nir_search_value_expression },
   nir_op_ilt,
   { &search168_0.value, &search168_1.value },
};
   
static const nir_search_variable replace168_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace168_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace168_1_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace168_1 = {
   { nir_search_value_expression },
   nir_op_ilt,
   { &replace168_1_0.value, &replace168_1_1.value },
};

static const nir_search_variable replace168_2_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace168_2_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace168_2 = {
   { nir_search_value_expression },
   nir_op_ilt,
   { &replace168_2_0.value, &replace168_2_1.value },
};
static const nir_search_expression replace168 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace168_0.value, &replace168_1.value, &replace168_2.value },
};
   
static const nir_search_variable search169_0 = {
   { nir_search_value_variable },
   0, /* d */
   true,
   nir_type_invalid,
};

static const nir_search_variable search169_1_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search169_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search169_1_2 = {
   { nir_search_value_variable },
   3, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search169_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search169_1_0.value, &search169_1_1.value, &search169_1_2.value },
};
static const nir_search_expression search169 = {
   { nir_search_value_expression },
   nir_op_ilt,
   { &search169_0.value, &search169_1.value },
};
   
static const nir_search_variable replace169_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace169_1_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace169_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace169_1 = {
   { nir_search_value_expression },
   nir_op_ilt,
   { &replace169_1_0.value, &replace169_1_1.value },
};

static const nir_search_variable replace169_2_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace169_2_1 = {
   { nir_search_value_variable },
   3, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace169_2 = {
   { nir_search_value_expression },
   nir_op_ilt,
   { &replace169_2_0.value, &replace169_2_1.value },
};
static const nir_search_expression replace169 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace169_0.value, &replace169_1.value, &replace169_2.value },
};

static const struct transform nir_opt_algebraic_ilt_xforms[] = {
   { &search81, &replace81.value, 0 },
   { &search168, &replace168.value, 0 },
   { &search169, &replace169.value, 0 },
};
   
static const nir_search_variable search19_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search19_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search19 = {
   { nir_search_value_expression },
   nir_op_imul,
   { &search19_0.value, &search19_1.value },
};
   
static const nir_search_constant replace19 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
   
static const nir_search_variable search23_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search23_1 = {
   { nir_search_value_constant },
   { 0x1 /* 1 */ },
};
static const nir_search_expression search23 = {
   { nir_search_value_expression },
   nir_op_imul,
   { &search23_0.value, &search23_1.value },
};
   
static const nir_search_variable replace23 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search25_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search25_1 = {
   { nir_search_value_constant },
   { 0xffffffff /* -1 */ },
};
static const nir_search_expression search25 = {
   { nir_search_value_expression },
   nir_op_imul,
   { &search25_0.value, &search25_1.value },
};
   
static const nir_search_variable replace25_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace25 = {
   { nir_search_value_expression },
   nir_op_ineg,
   { &replace25_0.value },
};
   
static const nir_search_variable search75_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search75_0 = {
   { nir_search_value_expression },
   nir_op_b2i,
   { &search75_0_0.value },
};

static const nir_search_variable search75_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search75_1 = {
   { nir_search_value_expression },
   nir_op_b2i,
   { &search75_1_0.value },
};
static const nir_search_expression search75 = {
   { nir_search_value_expression },
   nir_op_imul,
   { &search75_0.value, &search75_1.value },
};
   
static const nir_search_variable replace75_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace75_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace75_0 = {
   { nir_search_value_expression },
   nir_op_iand,
   { &replace75_0_0.value, &replace75_0_1.value },
};
static const nir_search_expression replace75 = {
   { nir_search_value_expression },
   nir_op_b2i,
   { &replace75_0.value },
};

static const struct transform nir_opt_algebraic_imul_xforms[] = {
   { &search19, &replace19.value, 0 },
   { &search23, &replace23.value, 0 },
   { &search25, &replace25.value, 0 },
   { &search75, &replace75.value, 0 },
};
   
static const nir_search_variable search86_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search86_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search86 = {
   { nir_search_value_expression },
   nir_op_uge,
   { &search86_0.value, &search86_1.value },
};
   
static const nir_search_constant replace86 = {
   { nir_search_value_constant },
   { NIR_TRUE /* True */ },
};
   
static const nir_search_variable search178_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search178_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search178_0_2 = {
   { nir_search_value_variable },
   2, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search178_0 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search178_0_0.value, &search178_0_1.value, &search178_0_2.value },
};

static const nir_search_variable search178_1 = {
   { nir_search_value_variable },
   3, /* d */
   true,
   nir_type_invalid,
};
static const nir_search_expression search178 = {
   { nir_search_value_expression },
   nir_op_uge,
   { &search178_0.value, &search178_1.value },
};
   
static const nir_search_variable replace178_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace178_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace178_1_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace178_1 = {
   { nir_search_value_expression },
   nir_op_uge,
   { &replace178_1_0.value, &replace178_1_1.value },
};

static const nir_search_variable replace178_2_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace178_2_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace178_2 = {
   { nir_search_value_expression },
   nir_op_uge,
   { &replace178_2_0.value, &replace178_2_1.value },
};
static const nir_search_expression replace178 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace178_0.value, &replace178_1.value, &replace178_2.value },
};
   
static const nir_search_variable search179_0 = {
   { nir_search_value_variable },
   0, /* d */
   true,
   nir_type_invalid,
};

static const nir_search_variable search179_1_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search179_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search179_1_2 = {
   { nir_search_value_variable },
   3, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search179_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search179_1_0.value, &search179_1_1.value, &search179_1_2.value },
};
static const nir_search_expression search179 = {
   { nir_search_value_expression },
   nir_op_uge,
   { &search179_0.value, &search179_1.value },
};
   
static const nir_search_variable replace179_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace179_1_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace179_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace179_1 = {
   { nir_search_value_expression },
   nir_op_uge,
   { &replace179_1_0.value, &replace179_1_1.value },
};

static const nir_search_variable replace179_2_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace179_2_1 = {
   { nir_search_value_variable },
   3, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace179_2 = {
   { nir_search_value_expression },
   nir_op_uge,
   { &replace179_2_0.value, &replace179_2_1.value },
};
static const nir_search_expression replace179 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace179_0.value, &replace179_1.value, &replace179_2.value },
};

static const struct transform nir_opt_algebraic_uge_xforms[] = {
   { &search86, &replace86.value, 0 },
   { &search178, &replace178.value, 0 },
   { &search179, &replace179.value, 0 },
};
   
static const nir_search_variable search8_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search8_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search8 = {
   { nir_search_value_expression },
   nir_op_usadd_4x8,
   { &search8_0.value, &search8_1.value },
};
   
static const nir_search_variable replace8 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search9_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search9_1 = {
   { nir_search_value_constant },
   { 0xffffffff /* -1 */ },
};
static const nir_search_expression search9 = {
   { nir_search_value_expression },
   nir_op_usadd_4x8,
   { &search9_0.value, &search9_1.value },
};
   
static const nir_search_constant replace9 = {
   { nir_search_value_constant },
   { 0xffffffff /* -1 */ },
};

static const struct transform nir_opt_algebraic_usadd_4x8_xforms[] = {
   { &search8, &replace8.value, 0 },
   { &search9, &replace9.value, 0 },
};
   
static const nir_search_variable search18_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search18_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search18 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search18_0.value, &search18_1.value },
};
   
static const nir_search_constant replace18 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
   
static const nir_search_variable search22_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search22_1 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};
static const nir_search_expression search22 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search22_0.value, &search22_1.value },
};
   
static const nir_search_variable replace22 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search24_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search24_1 = {
   { nir_search_value_constant },
   { 0xbf800000 /* -1.0 */ },
};
static const nir_search_expression search24 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search24_0.value, &search24_1.value },
};
   
static const nir_search_variable replace24_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace24 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &replace24_0.value },
};
   
static const nir_search_variable search76_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search76_0 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &search76_0_0.value },
};

static const nir_search_variable search76_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search76_1 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &search76_1_0.value },
};
static const nir_search_expression search76 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search76_0.value, &search76_1.value },
};
   
static const nir_search_variable replace76_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace76_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace76_0 = {
   { nir_search_value_expression },
   nir_op_iand,
   { &replace76_0_0.value, &replace76_0_1.value },
};
static const nir_search_expression replace76 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &replace76_0.value },
};
   
static const nir_search_variable search123_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search123_0 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &search123_0_0.value },
};

static const nir_search_variable search123_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search123_1 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &search123_1_0.value },
};
static const nir_search_expression search123 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search123_0.value, &search123_1.value },
};
   
static const nir_search_variable replace123_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace123_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace123_0 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &replace123_0_0.value, &replace123_0_1.value },
};
static const nir_search_expression replace123 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &replace123_0.value },
};

static const struct transform nir_opt_algebraic_fmul_xforms[] = {
   { &search18, &replace18.value, 0 },
   { &search22, &replace22.value, 0 },
   { &search24, &replace24.value, 0 },
   { &search76, &replace76.value, 0 },
   { &search123, &replace123.value, 0 },
};
   
static const nir_search_constant search26_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};

static const nir_search_variable search26_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search26_2 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search26 = {
   { nir_search_value_expression },
   nir_op_ffma,
   { &search26_0.value, &search26_1.value, &search26_2.value },
};
   
static const nir_search_variable replace26 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search27_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search27_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};

static const nir_search_variable search27_2 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search27 = {
   { nir_search_value_expression },
   nir_op_ffma,
   { &search27_0.value, &search27_1.value, &search27_2.value },
};
   
static const nir_search_variable replace27 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search28_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search28_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_constant search28_2 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search28 = {
   { nir_search_value_expression },
   nir_op_ffma,
   { &search28_0.value, &search28_1.value, &search28_2.value },
};
   
static const nir_search_variable replace28_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace28_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace28 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace28_0.value, &replace28_1.value },
};
   
static const nir_search_variable search29_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search29_1 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};

static const nir_search_variable search29_2 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search29 = {
   { nir_search_value_expression },
   nir_op_ffma,
   { &search29_0.value, &search29_1.value, &search29_2.value },
};
   
static const nir_search_variable replace29_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace29_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace29 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &replace29_0.value, &replace29_1.value },
};
   
static const nir_search_constant search30_0 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};

static const nir_search_variable search30_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search30_2 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search30 = {
   { nir_search_value_expression },
   nir_op_ffma,
   { &search30_0.value, &search30_1.value, &search30_2.value },
};
   
static const nir_search_variable replace30_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace30_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace30 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &replace30_0.value, &replace30_1.value },
};
   
static const nir_search_variable search39_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search39_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search39_2 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search39 = {
   { nir_search_value_expression },
   nir_op_ffma,
   { &search39_0.value, &search39_1.value, &search39_2.value },
};
   
static const nir_search_variable replace39_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace39_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace39_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace39_0_0.value, &replace39_0_1.value },
};

static const nir_search_variable replace39_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace39 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &replace39_0.value, &replace39_1.value },
};

static const struct transform nir_opt_algebraic_ffma_xforms[] = {
   { &search26, &replace26.value, 0 },
   { &search27, &replace27.value, 0 },
   { &search28, &replace28.value, 0 },
   { &search29, &replace29.value, 0 },
   { &search30, &replace30.value, 0 },
   { &search39, &replace39.value, 4 },
};
   
static const nir_search_variable search58_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search58_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search58 = {
   { nir_search_value_expression },
   nir_op_umin,
   { &search58_0.value, &search58_1.value },
};
   
static const nir_search_variable replace58 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_umin_xforms[] = {
   { &search58, &replace58.value, 0 },
};
   
static const nir_search_variable search59_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search59_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search59 = {
   { nir_search_value_expression },
   nir_op_umax,
   { &search59_0.value, &search59_1.value },
};
   
static const nir_search_variable replace59 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_umax_xforms[] = {
   { &search59, &replace59.value, 0 },
};
   
static const nir_search_variable search50_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search50_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search50_0 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search50_0_0.value, &search50_0_1.value },
};

static const nir_search_variable search50_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search50_2 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search50 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search50_0.value, &search50_1.value, &search50_2.value },
};
   
static const nir_search_variable replace50_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace50_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace50 = {
   { nir_search_value_expression },
   nir_op_fmin,
   { &replace50_0.value, &replace50_1.value },
};
   
static const nir_search_variable search51_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search51_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search51_0 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search51_0_0.value, &search51_0_1.value },
};

static const nir_search_variable search51_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search51_2 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search51 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search51_0.value, &search51_1.value, &search51_2.value },
};
   
static const nir_search_variable replace51_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace51_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace51 = {
   { nir_search_value_expression },
   nir_op_fmax,
   { &replace51_0.value, &replace51_1.value },
};
   
static const nir_search_variable search52_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_bool,
};
static const nir_search_expression search52_0 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search52_0_0.value },
};

static const nir_search_variable search52_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search52_2 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search52 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search52_0.value, &search52_1.value, &search52_2.value },
};
   
static const nir_search_variable replace52_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace52_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace52_2 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace52 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace52_0.value, &replace52_1.value, &replace52_2.value },
};
   
static const nir_search_variable search53_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search53_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search53_1_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search53_1_2 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search53_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search53_1_0.value, &search53_1_1.value, &search53_1_2.value },
};

static const nir_search_variable search53_2 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression search53 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search53_0.value, &search53_1.value, &search53_2.value },
};
   
static const nir_search_variable replace53_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace53_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace53_2 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace53 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace53_0.value, &replace53_1.value, &replace53_2.value },
};
   
static const nir_search_variable search134_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search134_1 = {
   { nir_search_value_constant },
   { NIR_TRUE /* True */ },
};

static const nir_search_constant search134_2 = {
   { nir_search_value_constant },
   { NIR_FALSE /* False */ },
};
static const nir_search_expression search134 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search134_0.value, &search134_1.value, &search134_2.value },
};
   
static const nir_search_variable replace134_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant replace134_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression replace134 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &replace134_0.value, &replace134_1.value },
};
   
static const nir_search_variable search135_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search135_1 = {
   { nir_search_value_constant },
   { NIR_FALSE /* False */ },
};

static const nir_search_constant search135_2 = {
   { nir_search_value_constant },
   { NIR_TRUE /* True */ },
};
static const nir_search_expression search135 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search135_0.value, &search135_1.value, &search135_2.value },
};
   
static const nir_search_variable replace135_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant replace135_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression replace135 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &replace135_0.value, &replace135_1.value },
};
   
static const nir_search_constant search136_0 = {
   { nir_search_value_constant },
   { NIR_TRUE /* True */ },
};

static const nir_search_variable search136_1 = {
   { nir_search_value_variable },
   0, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search136_2 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search136 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search136_0.value, &search136_1.value, &search136_2.value },
};
   
static const nir_search_variable replace136 = {
   { nir_search_value_variable },
   0, /* b */
   false,
   nir_type_invalid,
};
   
static const nir_search_constant search137_0 = {
   { nir_search_value_constant },
   { NIR_FALSE /* False */ },
};

static const nir_search_variable search137_1 = {
   { nir_search_value_variable },
   0, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search137_2 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search137 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search137_0.value, &search137_1.value, &search137_2.value },
};
   
static const nir_search_variable replace137 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search138_0 = {
   { nir_search_value_variable },
   0, /* a */
   true,
   nir_type_invalid,
};

static const nir_search_variable search138_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search138_2 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search138 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search138_0.value, &search138_1.value, &search138_2.value },
};
   
static const nir_search_variable replace138_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant replace138_0_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression replace138_0 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &replace138_0_0.value, &replace138_0_1.value },
};

static const nir_search_variable replace138_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace138_2 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace138 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace138_0.value, &replace138_1.value, &replace138_2.value },
};
   
static const nir_search_variable search139_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search139_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search139_2 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search139 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search139_0.value, &search139_1.value, &search139_2.value },
};
   
static const nir_search_variable replace139 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_bcsel_xforms[] = {
   { &search50, &replace50.value, 0 },
   { &search51, &replace51.value, 0 },
   { &search52, &replace52.value, 0 },
   { &search53, &replace53.value, 0 },
   { &search134, &replace134.value, 0 },
   { &search135, &replace135.value, 0 },
   { &search136, &replace136.value, 0 },
   { &search137, &replace137.value, 0 },
   { &search138, &replace138.value, 0 },
   { &search139, &replace139.value, 0 },
};
   
static const nir_search_variable search70_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search70_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search70 = {
   { nir_search_value_expression },
   nir_op_sge,
   { &search70_0.value, &search70_1.value },
};
   
static const nir_search_variable replace70_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace70_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace70_0 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &replace70_0_0.value, &replace70_0_1.value },
};
static const nir_search_expression replace70 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &replace70_0.value },
};

static const struct transform nir_opt_algebraic_sge_xforms[] = {
   { &search70, &replace70.value, 8 },
};
   
static const nir_search_variable search114_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search114_0 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &search114_0_0.value },
};
static const nir_search_expression search114 = {
   { nir_search_value_expression },
   nir_op_fsqrt,
   { &search114_0.value },
};
   
static const nir_search_constant replace114_0_0 = {
   { nir_search_value_constant },
   { 0x3f000000 /* 0.5 */ },
};

static const nir_search_variable replace114_0_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace114_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace114_0_0.value, &replace114_0_1.value },
};
static const nir_search_expression replace114 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &replace114_0.value },
};
   
static const nir_search_variable search128_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search128 = {
   { nir_search_value_expression },
   nir_op_fsqrt,
   { &search128_0.value },
};
   
static const nir_search_variable replace128_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace128_0 = {
   { nir_search_value_expression },
   nir_op_frsq,
   { &replace128_0_0.value },
};
static const nir_search_expression replace128 = {
   { nir_search_value_expression },
   nir_op_frcp,
   { &replace128_0.value },
};

static const struct transform nir_opt_algebraic_fsqrt_xforms[] = {
   { &search114, &replace114.value, 0 },
   { &search128, &replace128.value, 12 },
};
   
static const nir_search_variable search7_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search7_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search7 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &search7_0.value, &search7_1.value },
};
   
static const nir_search_variable replace7 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search11_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search11_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search11_0 = {
   { nir_search_value_expression },
   nir_op_imul,
   { &search11_0_0.value, &search11_0_1.value },
};

static const nir_search_variable search11_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search11_1_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search11_1 = {
   { nir_search_value_expression },
   nir_op_imul,
   { &search11_1_0.value, &search11_1_1.value },
};
static const nir_search_expression search11 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &search11_0.value, &search11_1.value },
};
   
static const nir_search_variable replace11_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace11_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace11_1_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace11_1 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &replace11_1_0.value, &replace11_1_1.value },
};
static const nir_search_expression replace11 = {
   { nir_search_value_expression },
   nir_op_imul,
   { &replace11_0.value, &replace11_1.value },
};
   
static const nir_search_variable search13_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search13_0 = {
   { nir_search_value_expression },
   nir_op_ineg,
   { &search13_0_0.value },
};

static const nir_search_variable search13_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search13 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &search13_0.value, &search13_1.value },
};
   
static const nir_search_constant replace13 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
   
static const nir_search_variable search14_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search14_0 = {
   { nir_search_value_expression },
   nir_op_ineg,
   { &search14_0_0.value },
};

static const nir_search_variable search14_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search14_1_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search14_1 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &search14_1_0.value, &search14_1_1.value },
};
static const nir_search_expression search14 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &search14_0.value, &search14_1.value },
};
   
static const nir_search_variable replace14 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search15_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search15_1_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search15_1_0 = {
   { nir_search_value_expression },
   nir_op_ineg,
   { &search15_1_0_0.value },
};

static const nir_search_variable search15_1_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search15_1 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &search15_1_0.value, &search15_1_1.value },
};
static const nir_search_expression search15 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &search15_0.value, &search15_1.value },
};
   
static const nir_search_variable replace15 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search153_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search153_1_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};

static const nir_search_variable search153_1_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search153_1 = {
   { nir_search_value_expression },
   nir_op_isub,
   { &search153_1_0.value, &search153_1_1.value },
};
static const nir_search_expression search153 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &search153_0.value, &search153_1.value },
};
   
static const nir_search_variable replace153_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace153_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace153 = {
   { nir_search_value_expression },
   nir_op_isub,
   { &replace153_0.value, &replace153_1.value },
};

static const struct transform nir_opt_algebraic_iadd_xforms[] = {
   { &search7, &replace7.value, 0 },
   { &search11, &replace11.value, 0 },
   { &search13, &replace13.value, 0 },
   { &search14, &replace14.value, 0 },
   { &search15, &replace15.value, 0 },
   { &search153, &replace153.value, 0 },
};
   
static const nir_search_variable search87_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search87_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search87 = {
   { nir_search_value_expression },
   nir_op_fand,
   { &search87_0.value, &search87_1.value },
};
   
static const nir_search_constant replace87 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};

static const struct transform nir_opt_algebraic_fand_xforms[] = {
   { &search87, &replace87.value, 0 },
};
   
static const nir_search_variable search2_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search2_0 = {
   { nir_search_value_expression },
   nir_op_fabs,
   { &search2_0_0.value },
};
static const nir_search_expression search2 = {
   { nir_search_value_expression },
   nir_op_fabs,
   { &search2_0.value },
};
   
static const nir_search_variable replace2_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace2 = {
   { nir_search_value_expression },
   nir_op_fabs,
   { &replace2_0.value },
};
   
static const nir_search_variable search3_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search3_0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search3_0_0.value },
};
static const nir_search_expression search3 = {
   { nir_search_value_expression },
   nir_op_fabs,
   { &search3_0.value },
};
   
static const nir_search_variable replace3_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace3 = {
   { nir_search_value_expression },
   nir_op_fabs,
   { &replace3_0.value },
};
   
static const nir_search_constant search154_0_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};

static const nir_search_variable search154_0_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search154_0 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &search154_0_0.value, &search154_0_1.value },
};
static const nir_search_expression search154 = {
   { nir_search_value_expression },
   nir_op_fabs,
   { &search154_0.value },
};
   
static const nir_search_variable replace154_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace154 = {
   { nir_search_value_expression },
   nir_op_fabs,
   { &replace154_0.value },
};

static const struct transform nir_opt_algebraic_fabs_xforms[] = {
   { &search2, &replace2.value, 0 },
   { &search3, &replace3.value, 0 },
   { &search154, &replace154.value, 0 },
};
   
static const nir_search_variable search83_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search83_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search83 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &search83_0.value, &search83_1.value },
};
   
static const nir_search_constant replace83 = {
   { nir_search_value_constant },
   { NIR_TRUE /* True */ },
};
   
static const nir_search_variable search130_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_bool,
};

static const nir_search_constant search130_1 = {
   { nir_search_value_constant },
   { NIR_TRUE /* True */ },
};
static const nir_search_expression search130 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &search130_0.value, &search130_1.value },
};
   
static const nir_search_variable replace130 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search133_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_bool,
};

static const nir_search_constant search133_1 = {
   { nir_search_value_constant },
   { NIR_FALSE /* False */ },
};
static const nir_search_expression search133 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &search133_0.value, &search133_1.value },
};
   
static const nir_search_variable replace133_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace133 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &replace133_0.value },
};
   
static const nir_search_variable search172_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search172_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search172_0_2 = {
   { nir_search_value_variable },
   2, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search172_0 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search172_0_0.value, &search172_0_1.value, &search172_0_2.value },
};

static const nir_search_variable search172_1 = {
   { nir_search_value_variable },
   3, /* d */
   true,
   nir_type_invalid,
};
static const nir_search_expression search172 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &search172_0.value, &search172_1.value },
};
   
static const nir_search_variable replace172_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace172_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace172_1_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace172_1 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &replace172_1_0.value, &replace172_1_1.value },
};

static const nir_search_variable replace172_2_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace172_2_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace172_2 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &replace172_2_0.value, &replace172_2_1.value },
};
static const nir_search_expression replace172 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace172_0.value, &replace172_1.value, &replace172_2.value },
};
   
static const nir_search_variable search173_0 = {
   { nir_search_value_variable },
   0, /* d */
   true,
   nir_type_invalid,
};

static const nir_search_variable search173_1_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search173_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search173_1_2 = {
   { nir_search_value_variable },
   3, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search173_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search173_1_0.value, &search173_1_1.value, &search173_1_2.value },
};
static const nir_search_expression search173 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &search173_0.value, &search173_1.value },
};
   
static const nir_search_variable replace173_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace173_1_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace173_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace173_1 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &replace173_1_0.value, &replace173_1_1.value },
};

static const nir_search_variable replace173_2_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace173_2_1 = {
   { nir_search_value_variable },
   3, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace173_2 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &replace173_2_0.value, &replace173_2_1.value },
};
static const nir_search_expression replace173 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace173_0.value, &replace173_1.value, &replace173_2.value },
};

static const struct transform nir_opt_algebraic_ieq_xforms[] = {
   { &search83, &replace83.value, 0 },
   { &search130, &replace130.value, 0 },
   { &search133, &replace133.value, 0 },
   { &search172, &replace172.value, 0 },
   { &search173, &replace173.value, 0 },
};
   
static const nir_search_variable search56_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search56_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search56 = {
   { nir_search_value_expression },
   nir_op_imin,
   { &search56_0.value, &search56_1.value },
};
   
static const nir_search_variable replace56 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_imin_xforms[] = {
   { &search56, &replace56.value, 0 },
};
   
static const nir_search_variable search116_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search116_0 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &search116_0_0.value },
};
static const nir_search_expression search116 = {
   { nir_search_value_expression },
   nir_op_frsq,
   { &search116_0.value },
};
   
static const nir_search_constant replace116_0_0 = {
   { nir_search_value_constant },
   { 0xbf000000 /* -0.5 */ },
};

static const nir_search_variable replace116_0_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace116_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace116_0_0.value, &replace116_0_1.value },
};
static const nir_search_expression replace116 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &replace116_0.value },
};

static const struct transform nir_opt_algebraic_frsq_xforms[] = {
   { &search116, &replace116.value, 0 },
};
   
static const nir_search_variable search1_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search1_0 = {
   { nir_search_value_expression },
   nir_op_ineg,
   { &search1_0_0.value },
};
static const nir_search_expression search1 = {
   { nir_search_value_expression },
   nir_op_ineg,
   { &search1_0.value },
};
   
static const nir_search_variable replace1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search151_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search151 = {
   { nir_search_value_expression },
   nir_op_ineg,
   { &search151_0.value },
};
   
static const nir_search_constant replace151_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};

static const nir_search_variable replace151_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace151 = {
   { nir_search_value_expression },
   nir_op_isub,
   { &replace151_0.value, &replace151_1.value },
};

static const struct transform nir_opt_algebraic_ineg_xforms[] = {
   { &search1, &replace1.value, 0 },
   { &search151, &replace151.value, 15 },
};
   
static const nir_search_variable search106_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search106_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search106 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &search106_0.value, &search106_1.value },
};
   
static const nir_search_variable replace106_0_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace106_0_0 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &replace106_0_0_0.value },
};

static const nir_search_variable replace106_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace106_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace106_0_0.value, &replace106_0_1.value },
};
static const nir_search_expression replace106 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &replace106_0.value },
};
   
static const nir_search_variable search108_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search108_1 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};
static const nir_search_expression search108 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &search108_0.value, &search108_1.value },
};
   
static const nir_search_variable replace108 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search109_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search109_1 = {
   { nir_search_value_constant },
   { 0x40000000 /* 2.0 */ },
};
static const nir_search_expression search109 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &search109_0.value, &search109_1.value },
};
   
static const nir_search_variable replace109_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace109_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace109 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace109_0.value, &replace109_1.value },
};
   
static const nir_search_variable search110_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search110_1 = {
   { nir_search_value_constant },
   { 0x40800000 /* 4.0 */ },
};
static const nir_search_expression search110 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &search110_0.value, &search110_1.value },
};
   
static const nir_search_variable replace110_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace110_0_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace110_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace110_0_0.value, &replace110_0_1.value },
};

static const nir_search_variable replace110_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace110_1_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace110_1 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace110_1_0.value, &replace110_1_1.value },
};
static const nir_search_expression replace110 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace110_0.value, &replace110_1.value },
};
   
static const nir_search_constant search111_0 = {
   { nir_search_value_constant },
   { 0x40000000 /* 2.0 */ },
};

static const nir_search_variable search111_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search111 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &search111_0.value, &search111_1.value },
};
   
static const nir_search_variable replace111_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace111 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &replace111_0.value },
};
   
static const nir_search_variable search112_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search112_0_1 = {
   { nir_search_value_constant },
   { 0x400ccccd /* 2.2 */ },
};
static const nir_search_expression search112_0 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &search112_0_0.value, &search112_0_1.value },
};

static const nir_search_constant search112_1 = {
   { nir_search_value_constant },
   { 0x3ee8ba1f /* 0.454545 */ },
};
static const nir_search_expression search112 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &search112_0.value, &search112_1.value },
};
   
static const nir_search_variable replace112 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search113_0_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search113_0_0_1 = {
   { nir_search_value_constant },
   { 0x400ccccd /* 2.2 */ },
};
static const nir_search_expression search113_0_0 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &search113_0_0_0.value, &search113_0_0_1.value },
};
static const nir_search_expression search113_0 = {
   { nir_search_value_expression },
   nir_op_fabs,
   { &search113_0_0.value },
};

static const nir_search_constant search113_1 = {
   { nir_search_value_constant },
   { 0x3ee8ba1f /* 0.454545 */ },
};
static const nir_search_expression search113 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &search113_0.value, &search113_1.value },
};
   
static const nir_search_variable replace113_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace113 = {
   { nir_search_value_expression },
   nir_op_fabs,
   { &replace113_0.value },
};

static const struct transform nir_opt_algebraic_fpow_xforms[] = {
   { &search106, &replace106.value, 9 },
   { &search108, &replace108.value, 0 },
   { &search109, &replace109.value, 0 },
   { &search110, &replace110.value, 0 },
   { &search111, &replace111.value, 0 },
   { &search112, &replace112.value, 0 },
   { &search113, &replace113.value, 0 },
};
   
static const nir_search_variable search82_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search82_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search82 = {
   { nir_search_value_expression },
   nir_op_ige,
   { &search82_0.value, &search82_1.value },
};
   
static const nir_search_constant replace82 = {
   { nir_search_value_constant },
   { NIR_TRUE /* True */ },
};
   
static const nir_search_variable search170_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search170_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search170_0_2 = {
   { nir_search_value_variable },
   2, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search170_0 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search170_0_0.value, &search170_0_1.value, &search170_0_2.value },
};

static const nir_search_variable search170_1 = {
   { nir_search_value_variable },
   3, /* d */
   true,
   nir_type_invalid,
};
static const nir_search_expression search170 = {
   { nir_search_value_expression },
   nir_op_ige,
   { &search170_0.value, &search170_1.value },
};
   
static const nir_search_variable replace170_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace170_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace170_1_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace170_1 = {
   { nir_search_value_expression },
   nir_op_ige,
   { &replace170_1_0.value, &replace170_1_1.value },
};

static const nir_search_variable replace170_2_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace170_2_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace170_2 = {
   { nir_search_value_expression },
   nir_op_ige,
   { &replace170_2_0.value, &replace170_2_1.value },
};
static const nir_search_expression replace170 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace170_0.value, &replace170_1.value, &replace170_2.value },
};
   
static const nir_search_variable search171_0 = {
   { nir_search_value_variable },
   0, /* d */
   true,
   nir_type_invalid,
};

static const nir_search_variable search171_1_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search171_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search171_1_2 = {
   { nir_search_value_variable },
   3, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search171_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search171_1_0.value, &search171_1_1.value, &search171_1_2.value },
};
static const nir_search_expression search171 = {
   { nir_search_value_expression },
   nir_op_ige,
   { &search171_0.value, &search171_1.value },
};
   
static const nir_search_variable replace171_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace171_1_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace171_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace171_1 = {
   { nir_search_value_expression },
   nir_op_ige,
   { &replace171_1_0.value, &replace171_1_1.value },
};

static const nir_search_variable replace171_2_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace171_2_1 = {
   { nir_search_value_variable },
   3, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace171_2 = {
   { nir_search_value_expression },
   nir_op_ige,
   { &replace171_2_0.value, &replace171_2_1.value },
};
static const nir_search_expression replace171 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace171_0.value, &replace171_1.value, &replace171_2.value },
};

static const struct transform nir_opt_algebraic_ige_xforms[] = {
   { &search82, &replace82.value, 0 },
   { &search170, &replace170.value, 0 },
   { &search171, &replace171.value, 0 },
};
   
static const nir_search_constant search124_0 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};

static const nir_search_variable search124_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search124 = {
   { nir_search_value_expression },
   nir_op_fdiv,
   { &search124_0.value, &search124_1.value },
};
   
static const nir_search_variable replace124_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace124 = {
   { nir_search_value_expression },
   nir_op_frcp,
   { &replace124_0.value },
};
   
static const nir_search_variable search125_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search125_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search125 = {
   { nir_search_value_expression },
   nir_op_fdiv,
   { &search125_0.value, &search125_1.value },
};
   
static const nir_search_variable replace125_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace125_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace125_1 = {
   { nir_search_value_expression },
   nir_op_frcp,
   { &replace125_1_0.value },
};
static const nir_search_expression replace125 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace125_0.value, &replace125_1.value },
};

static const struct transform nir_opt_algebraic_fdiv_xforms[] = {
   { &search124, &replace124.value, 0 },
   { &search125, &replace125.value, 11 },
};
   
static const nir_search_variable search36_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search36 = {
   { nir_search_value_expression },
   nir_op_ffract,
   { &search36_0.value },
};
   
static const nir_search_variable replace36_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace36_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace36_1 = {
   { nir_search_value_expression },
   nir_op_ffloor,
   { &replace36_1_0.value },
};
static const nir_search_expression replace36 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &replace36_0.value, &replace36_1.value },
};

static const struct transform nir_opt_algebraic_ffract_xforms[] = {
   { &search36, &replace36.value, 2 },
};
   
static const nir_search_variable search6_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search6_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search6 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search6_0.value, &search6_1.value },
};
   
static const nir_search_variable replace6 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search10_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search10_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search10_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search10_0_0.value, &search10_0_1.value },
};

static const nir_search_variable search10_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search10_1_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search10_1 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search10_1_0.value, &search10_1_1.value },
};
static const nir_search_expression search10 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search10_0.value, &search10_1.value },
};
   
static const nir_search_variable replace10_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace10_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace10_1_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace10_1 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &replace10_1_0.value, &replace10_1_1.value },
};
static const nir_search_expression replace10 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace10_0.value, &replace10_1.value },
};
   
static const nir_search_variable search12_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search12_0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search12_0_0.value },
};

static const nir_search_variable search12_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search12 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search12_0.value, &search12_1.value },
};
   
static const nir_search_constant replace12 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
   
static const nir_search_variable search16_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search16_0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search16_0_0.value },
};

static const nir_search_variable search16_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search16_1_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search16_1 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search16_1_0.value, &search16_1_1.value },
};
static const nir_search_expression search16 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search16_0.value, &search16_1.value },
};
   
static const nir_search_variable replace16 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search17_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search17_1_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search17_1_0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search17_1_0_0.value },
};

static const nir_search_variable search17_1_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search17_1 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search17_1_0.value, &search17_1_1.value },
};
static const nir_search_expression search17 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search17_0.value, &search17_1.value },
};
   
static const nir_search_variable replace17 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search37_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search37_0_1_0 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};

static const nir_search_variable search37_0_1_1_0 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search37_0_1_1 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search37_0_1_1_0.value },
};
static const nir_search_expression search37_0_1 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search37_0_1_0.value, &search37_0_1_1.value },
};
static const nir_search_expression search37_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search37_0_0.value, &search37_0_1.value },
};

static const nir_search_variable search37_1_0 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search37_1_1 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search37_1 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search37_1_0.value, &search37_1_1.value },
};
static const nir_search_expression search37 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search37_0.value, &search37_1.value },
};
   
static const nir_search_variable replace37_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace37_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace37_2 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace37 = {
   { nir_search_value_expression },
   nir_op_flrp,
   { &replace37_0.value, &replace37_1.value, &replace37_2.value },
};
   
static const nir_search_variable search38_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search38_1_0 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable search38_1_1_0 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search38_1_1_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search38_1_1_1 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search38_1_1_1_0.value },
};
static const nir_search_expression search38_1_1 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search38_1_1_0.value, &search38_1_1_1.value },
};
static const nir_search_expression search38_1 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search38_1_0.value, &search38_1_1.value },
};
static const nir_search_expression search38 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search38_0.value, &search38_1.value },
};
   
static const nir_search_variable replace38_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace38_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace38_2 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace38 = {
   { nir_search_value_expression },
   nir_op_flrp,
   { &replace38_0.value, &replace38_1.value, &replace38_2.value },
};
   
static const nir_search_variable search40_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search40_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search40_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search40_0_0.value, &search40_0_1.value },
};

static const nir_search_variable search40_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search40 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search40_0.value, &search40_1.value },
};
   
static const nir_search_variable replace40_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace40_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace40_2 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace40 = {
   { nir_search_value_expression },
   nir_op_ffma,
   { &replace40_0.value, &replace40_1.value, &replace40_2.value },
};
   
static const nir_search_variable search121_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search121_0 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search121_0_0.value },
};

static const nir_search_variable search121_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search121_1 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search121_1_0.value },
};
static const nir_search_expression search121 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search121_0.value, &search121_1.value },
};
   
static const nir_search_variable replace121_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace121_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace121_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace121_0_0.value, &replace121_0_1.value },
};
static const nir_search_expression replace121 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &replace121_0.value },
};
   
static const nir_search_variable search122_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search122_0 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search122_0_0.value },
};

static const nir_search_variable search122_1_0_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search122_1_0 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search122_1_0_0.value },
};
static const nir_search_expression search122_1 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search122_1_0.value },
};
static const nir_search_expression search122 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search122_0.value, &search122_1.value },
};
   
static const nir_search_variable replace122_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace122_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace122_0 = {
   { nir_search_value_expression },
   nir_op_fdiv,
   { &replace122_0_0.value, &replace122_0_1.value },
};
static const nir_search_expression replace122 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &replace122_0.value },
};
   
static const nir_search_variable search152_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search152_1_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};

static const nir_search_variable search152_1_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search152_1 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &search152_1_0.value, &search152_1_1.value },
};
static const nir_search_expression search152 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search152_0.value, &search152_1.value },
};
   
static const nir_search_variable replace152_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace152_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace152 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &replace152_0.value, &replace152_1.value },
};

static const struct transform nir_opt_algebraic_fadd_xforms[] = {
   { &search6, &replace6.value, 0 },
   { &search10, &replace10.value, 0 },
   { &search12, &replace12.value, 0 },
   { &search16, &replace16.value, 0 },
   { &search17, &replace17.value, 0 },
   { &search37, &replace37.value, 3 },
   { &search38, &replace38.value, 3 },
   { &search40, &replace40.value, 5 },
   { &search121, &replace121.value, 0 },
   { &search122, &replace122.value, 0 },
   { &search152, &replace152.value, 0 },
};
   
static const nir_search_constant search98_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};

static const nir_search_variable search98_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search98 = {
   { nir_search_value_expression },
   nir_op_ishl,
   { &search98_0.value, &search98_1.value },
};
   
static const nir_search_constant replace98 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
   
static const nir_search_variable search99_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search99_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search99 = {
   { nir_search_value_expression },
   nir_op_ishl,
   { &search99_0.value, &search99_1.value },
};
   
static const nir_search_variable replace99 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_ishl_xforms[] = {
   { &search98, &replace98.value, 0 },
   { &search99, &replace99.value, 0 },
};
   
static const nir_search_variable search159_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search159_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search159 = {
   { nir_search_value_expression },
   nir_op_usub_borrow,
   { &search159_0.value, &search159_1.value },
};
   
static const nir_search_variable replace159_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace159_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace159_0 = {
   { nir_search_value_expression },
   nir_op_ult,
   { &replace159_0_0.value, &replace159_0_1.value },
};
static const nir_search_expression replace159 = {
   { nir_search_value_expression },
   nir_op_b2i,
   { &replace159_0.value },
};

static const struct transform nir_opt_algebraic_usub_borrow_xforms[] = {
   { &search159, &replace159.value, 19 },
};
   
static const nir_search_variable search105_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search105_0 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &search105_0_0.value },
};
static const nir_search_expression search105 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search105_0.value },
};
   
static const nir_search_variable replace105 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search117_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search117_0 = {
   { nir_search_value_expression },
   nir_op_fsqrt,
   { &search117_0_0.value },
};
static const nir_search_expression search117 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search117_0.value },
};
   
static const nir_search_constant replace117_0 = {
   { nir_search_value_constant },
   { 0x3f000000 /* 0.5 */ },
};

static const nir_search_variable replace117_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace117_1 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &replace117_1_0.value },
};
static const nir_search_expression replace117 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace117_0.value, &replace117_1.value },
};
   
static const nir_search_variable search118_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search118_0 = {
   { nir_search_value_expression },
   nir_op_frcp,
   { &search118_0_0.value },
};
static const nir_search_expression search118 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search118_0.value },
};
   
static const nir_search_variable replace118_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace118_0 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &replace118_0_0.value },
};
static const nir_search_expression replace118 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &replace118_0.value },
};
   
static const nir_search_variable search119_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search119_0 = {
   { nir_search_value_expression },
   nir_op_frsq,
   { &search119_0_0.value },
};
static const nir_search_expression search119 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search119_0.value },
};
   
static const nir_search_constant replace119_0 = {
   { nir_search_value_constant },
   { 0xbf000000 /* -0.5 */ },
};

static const nir_search_variable replace119_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace119_1 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &replace119_1_0.value },
};
static const nir_search_expression replace119 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace119_0.value, &replace119_1.value },
};
   
static const nir_search_variable search120_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search120_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search120_0 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &search120_0_0.value, &search120_0_1.value },
};
static const nir_search_expression search120 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search120_0.value },
};
   
static const nir_search_variable replace120_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace120_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace120_1 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &replace120_1_0.value },
};
static const nir_search_expression replace120 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace120_0.value, &replace120_1.value },
};

static const struct transform nir_opt_algebraic_flog2_xforms[] = {
   { &search105, &replace105.value, 0 },
   { &search117, &replace117.value, 0 },
   { &search118, &replace118.value, 0 },
   { &search119, &replace119.value, 0 },
   { &search120, &replace120.value, 0 },
};
   
static const nir_search_variable search41_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search41_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search41_0 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search41_0_0.value, &search41_0_1.value },
};
static const nir_search_expression search41 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search41_0.value },
};
   
static const nir_search_variable replace41_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace41_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace41 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &replace41_0.value, &replace41_1.value },
};
   
static const nir_search_variable search42_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search42_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search42_0 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &search42_0_0.value, &search42_0_1.value },
};
static const nir_search_expression search42 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search42_0.value },
};
   
static const nir_search_variable replace42_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace42_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace42 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &replace42_0.value, &replace42_1.value },
};
   
static const nir_search_variable search43_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search43_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search43_0 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &search43_0_0.value, &search43_0_1.value },
};
static const nir_search_expression search43 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search43_0.value },
};
   
static const nir_search_variable replace43_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace43_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace43 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &replace43_0.value, &replace43_1.value },
};
   
static const nir_search_variable search44_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search44_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search44_0 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &search44_0_0.value, &search44_0_1.value },
};
static const nir_search_expression search44 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search44_0.value },
};
   
static const nir_search_variable replace44_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace44_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace44 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &replace44_0.value, &replace44_1.value },
};
   
static const nir_search_variable search45_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search45_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search45_0 = {
   { nir_search_value_expression },
   nir_op_ilt,
   { &search45_0_0.value, &search45_0_1.value },
};
static const nir_search_expression search45 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search45_0.value },
};
   
static const nir_search_variable replace45_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace45_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace45 = {
   { nir_search_value_expression },
   nir_op_ige,
   { &replace45_0.value, &replace45_1.value },
};
   
static const nir_search_variable search46_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search46_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search46_0 = {
   { nir_search_value_expression },
   nir_op_ige,
   { &search46_0_0.value, &search46_0_1.value },
};
static const nir_search_expression search46 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search46_0.value },
};
   
static const nir_search_variable replace46_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace46_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace46 = {
   { nir_search_value_expression },
   nir_op_ilt,
   { &replace46_0.value, &replace46_1.value },
};
   
static const nir_search_variable search47_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search47_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search47_0 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &search47_0_0.value, &search47_0_1.value },
};
static const nir_search_expression search47 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search47_0.value },
};
   
static const nir_search_variable replace47_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace47_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace47 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &replace47_0.value, &replace47_1.value },
};
   
static const nir_search_variable search48_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search48_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search48_0 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &search48_0_0.value, &search48_0_1.value },
};
static const nir_search_expression search48 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search48_0.value },
};
   
static const nir_search_variable replace48_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace48_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace48 = {
   { nir_search_value_expression },
   nir_op_ieq,
   { &replace48_0.value, &replace48_1.value },
};
   
static const nir_search_variable search95_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search95_0 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search95_0_0.value },
};
static const nir_search_expression search95 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search95_0.value },
};
   
static const nir_search_variable replace95 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_inot_xforms[] = {
   { &search41, &replace41.value, 0 },
   { &search42, &replace42.value, 0 },
   { &search43, &replace43.value, 0 },
   { &search44, &replace44.value, 0 },
   { &search45, &replace45.value, 0 },
   { &search46, &replace46.value, 0 },
   { &search47, &replace47.value, 0 },
   { &search48, &replace48.value, 0 },
   { &search95, &replace95.value, 0 },
};
   
static const nir_search_variable search72_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search72_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search72 = {
   { nir_search_value_expression },
   nir_op_sne,
   { &search72_0.value, &search72_1.value },
};
   
static const nir_search_variable replace72_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace72_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace72_0 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &replace72_0_0.value, &replace72_0_1.value },
};
static const nir_search_expression replace72 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &replace72_0.value },
};

static const struct transform nir_opt_algebraic_sne_xforms[] = {
   { &search72, &replace72.value, 8 },
};
   
static const nir_search_variable search156_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search156_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search156 = {
   { nir_search_value_expression },
   nir_op_fmod,
   { &search156_0.value, &search156_1.value },
};
   
static const nir_search_variable replace156_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace156_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace156_1_1_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace156_1_1_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace156_1_1_0 = {
   { nir_search_value_expression },
   nir_op_fdiv,
   { &replace156_1_1_0_0.value, &replace156_1_1_0_1.value },
};
static const nir_search_expression replace156_1_1 = {
   { nir_search_value_expression },
   nir_op_ffloor,
   { &replace156_1_1_0.value },
};
static const nir_search_expression replace156_1 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace156_1_0.value, &replace156_1_1.value },
};
static const nir_search_expression replace156 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &replace156_0.value, &replace156_1.value },
};

static const struct transform nir_opt_algebraic_fmod_xforms[] = {
   { &search156, &replace156.value, 16 },
};
   
static const nir_search_variable search143_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search143_0 = {
   { nir_search_value_expression },
   nir_op_ftrunc,
   { &search143_0_0.value },
};
static const nir_search_expression search143 = {
   { nir_search_value_expression },
   nir_op_f2u,
   { &search143_0.value },
};
   
static const nir_search_variable replace143_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace143 = {
   { nir_search_value_expression },
   nir_op_f2u,
   { &replace143_0.value },
};

static const struct transform nir_opt_algebraic_f2u_xforms[] = {
   { &search143, &replace143.value, 0 },
};
   
static const nir_search_variable search140_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search140_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search140_2 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search140 = {
   { nir_search_value_expression },
   nir_op_fcsel,
   { &search140_0.value, &search140_1.value, &search140_2.value },
};
   
static const nir_search_variable replace140 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_fcsel_xforms[] = {
   { &search140, &replace140.value, 0 },
};
   
static const nir_search_variable search145_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search145_1_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};

static const nir_search_variable search145_1_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search145_1 = {
   { nir_search_value_expression },
   nir_op_isub,
   { &search145_1_0.value, &search145_1_1.value },
};
static const nir_search_expression search145 = {
   { nir_search_value_expression },
   nir_op_isub,
   { &search145_0.value, &search145_1.value },
};
   
static const nir_search_variable replace145_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace145_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace145 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &replace145_0.value, &replace145_1.value },
};
   
static const nir_search_variable search149_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search149_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search149 = {
   { nir_search_value_expression },
   nir_op_isub,
   { &search149_0.value, &search149_1.value },
};
   
static const nir_search_variable replace149_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace149_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace149_1 = {
   { nir_search_value_expression },
   nir_op_ineg,
   { &replace149_1_0.value },
};
static const nir_search_expression replace149 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &replace149_0.value, &replace149_1.value },
};

static const struct transform nir_opt_algebraic_isub_xforms[] = {
   { &search145, &replace145.value, 0 },
   { &search149, &replace149.value, 14 },
};
   
static const nir_search_variable search55_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search55_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search55 = {
   { nir_search_value_expression },
   nir_op_fmax,
   { &search55_0.value, &search55_1.value },
};
   
static const nir_search_variable replace55 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search61_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search61_0_1 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};
static const nir_search_expression search61_0 = {
   { nir_search_value_expression },
   nir_op_fmin,
   { &search61_0_0.value, &search61_0_1.value },
};

static const nir_search_constant search61_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search61 = {
   { nir_search_value_expression },
   nir_op_fmax,
   { &search61_0.value, &search61_1.value },
};
   
static const nir_search_variable replace61_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace61 = {
   { nir_search_value_expression },
   nir_op_fsat,
   { &replace61_0.value },
};

static const struct transform nir_opt_algebraic_fmax_xforms[] = {
   { &search55, &replace55.value, 0 },
   { &search61, &replace61.value, 6 },
};
   
static const nir_search_variable search20_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search20_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search20 = {
   { nir_search_value_expression },
   nir_op_umul_unorm_4x8,
   { &search20_0.value, &search20_1.value },
};
   
static const nir_search_constant replace20 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
   
static const nir_search_variable search21_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search21_1 = {
   { nir_search_value_constant },
   { 0xffffffff /* -1 */ },
};
static const nir_search_expression search21 = {
   { nir_search_value_expression },
   nir_op_umul_unorm_4x8,
   { &search21_0.value, &search21_1.value },
};
   
static const nir_search_variable replace21 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_umul_unorm_4x8_xforms[] = {
   { &search20, &replace20.value, 0 },
   { &search21, &replace21.value, 0 },
};
   
static const nir_search_variable search157_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search157_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search157_2 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable search157_3 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression search157 = {
   { nir_search_value_expression },
   nir_op_bitfield_insert,
   { &search157_0.value, &search157_1.value, &search157_2.value, &search157_3.value },
};
   
static const nir_search_variable replace157_0_0 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace157_0_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace157_0 = {
   { nir_search_value_expression },
   nir_op_bfm,
   { &replace157_0_0.value, &replace157_0_1.value },
};

static const nir_search_variable replace157_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace157_2 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace157 = {
   { nir_search_value_expression },
   nir_op_bfi,
   { &replace157_0.value, &replace157_1.value, &replace157_2.value },
};

static const struct transform nir_opt_algebraic_bitfield_insert_xforms[] = {
   { &search157, &replace157.value, 17 },
};
   
static const nir_search_variable search74_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search74_0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search74_0_0.value },
};

static const nir_search_variable search74_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search74 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &search74_0.value, &search74_1.value },
};
   
static const nir_search_variable replace74_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant replace74_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression replace74 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &replace74_0.value, &replace74_1.value },
};
   
static const nir_search_variable search164_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search164_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search164_0_2 = {
   { nir_search_value_variable },
   2, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search164_0 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search164_0_0.value, &search164_0_1.value, &search164_0_2.value },
};

static const nir_search_variable search164_1 = {
   { nir_search_value_variable },
   3, /* d */
   true,
   nir_type_invalid,
};
static const nir_search_expression search164 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &search164_0.value, &search164_1.value },
};
   
static const nir_search_variable replace164_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace164_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace164_1_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace164_1 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &replace164_1_0.value, &replace164_1_1.value },
};

static const nir_search_variable replace164_2_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace164_2_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace164_2 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &replace164_2_0.value, &replace164_2_1.value },
};
static const nir_search_expression replace164 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace164_0.value, &replace164_1.value, &replace164_2.value },
};
   
static const nir_search_variable search165_0 = {
   { nir_search_value_variable },
   0, /* d */
   true,
   nir_type_invalid,
};

static const nir_search_variable search165_1_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search165_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search165_1_2 = {
   { nir_search_value_variable },
   3, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search165_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search165_1_0.value, &search165_1_1.value, &search165_1_2.value },
};
static const nir_search_expression search165 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &search165_0.value, &search165_1.value },
};
   
static const nir_search_variable replace165_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace165_1_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace165_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace165_1 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &replace165_1_0.value, &replace165_1_1.value },
};

static const nir_search_variable replace165_2_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace165_2_1 = {
   { nir_search_value_variable },
   3, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace165_2 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &replace165_2_0.value, &replace165_2_1.value },
};
static const nir_search_expression replace165 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace165_0.value, &replace165_1.value, &replace165_2.value },
};

static const struct transform nir_opt_algebraic_feq_xforms[] = {
   { &search74, &replace74.value, 0 },
   { &search164, &replace164.value, 0 },
   { &search165, &replace165.value, 0 },
};
   
static const nir_search_variable search31_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search31_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_constant search31_2 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search31 = {
   { nir_search_value_expression },
   nir_op_flrp,
   { &search31_0.value, &search31_1.value, &search31_2.value },
};
   
static const nir_search_variable replace31 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search32_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search32_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_constant search32_2 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};
static const nir_search_expression search32 = {
   { nir_search_value_expression },
   nir_op_flrp,
   { &search32_0.value, &search32_1.value, &search32_2.value },
};
   
static const nir_search_variable replace32 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search33_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search33_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search33_2 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search33 = {
   { nir_search_value_expression },
   nir_op_flrp,
   { &search33_0.value, &search33_1.value, &search33_2.value },
};
   
static const nir_search_variable replace33 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_constant search34_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};

static const nir_search_variable search34_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search34_2 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search34 = {
   { nir_search_value_expression },
   nir_op_flrp,
   { &search34_0.value, &search34_1.value, &search34_2.value },
};
   
static const nir_search_variable replace34_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace34_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace34 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace34_0.value, &replace34_1.value },
};
   
static const nir_search_variable search35_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search35_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search35_2 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search35 = {
   { nir_search_value_expression },
   nir_op_flrp,
   { &search35_0.value, &search35_1.value, &search35_2.value },
};
   
static const nir_search_variable replace35_0_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace35_0_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace35_0_1_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace35_0_1 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &replace35_0_1_0.value, &replace35_0_1_1.value },
};
static const nir_search_expression replace35_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &replace35_0_0.value, &replace35_0_1.value },
};

static const nir_search_variable replace35_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace35 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &replace35_0.value, &replace35_1.value },
};

static const struct transform nir_opt_algebraic_flrp_xforms[] = {
   { &search31, &replace31.value, 0 },
   { &search32, &replace32.value, 0 },
   { &search33, &replace33.value, 0 },
   { &search34, &replace34.value, 0 },
   { &search35, &replace35.value, 1 },
};
   
static const nir_search_variable search65_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search65_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search65_0 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search65_0_0.value, &search65_0_1.value },
};

static const nir_search_variable search65_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search65_1_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search65_1 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search65_1_0.value, &search65_1_1.value },
};
static const nir_search_expression search65 = {
   { nir_search_value_expression },
   nir_op_ior,
   { &search65_0.value, &search65_1.value },
};
   
static const nir_search_variable replace65_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace65_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace65_1_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace65_1 = {
   { nir_search_value_expression },
   nir_op_fmax,
   { &replace65_1_0.value, &replace65_1_1.value },
};
static const nir_search_expression replace65 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &replace65_0.value, &replace65_1.value },
};
   
static const nir_search_variable search66_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search66_0_1 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search66_0 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search66_0_0.value, &search66_0_1.value },
};

static const nir_search_variable search66_1_0 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search66_1_1 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search66_1 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search66_1_0.value, &search66_1_1.value },
};
static const nir_search_expression search66 = {
   { nir_search_value_expression },
   nir_op_ior,
   { &search66_0.value, &search66_1.value },
};
   
static const nir_search_variable replace66_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace66_0_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace66_0 = {
   { nir_search_value_expression },
   nir_op_fmin,
   { &replace66_0_0.value, &replace66_0_1.value },
};

static const nir_search_variable replace66_1 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace66 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &replace66_0.value, &replace66_1.value },
};
   
static const nir_search_variable search67_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search67_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search67_0 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &search67_0_0.value, &search67_0_1.value },
};

static const nir_search_variable search67_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search67_1_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search67_1 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &search67_1_0.value, &search67_1_1.value },
};
static const nir_search_expression search67 = {
   { nir_search_value_expression },
   nir_op_ior,
   { &search67_0.value, &search67_1.value },
};
   
static const nir_search_variable replace67_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace67_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace67_1_1 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace67_1 = {
   { nir_search_value_expression },
   nir_op_fmin,
   { &replace67_1_0.value, &replace67_1_1.value },
};
static const nir_search_expression replace67 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &replace67_0.value, &replace67_1.value },
};
   
static const nir_search_variable search68_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search68_0_1 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search68_0 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &search68_0_0.value, &search68_0_1.value },
};

static const nir_search_variable search68_1_0 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable search68_1_1 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression search68_1 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &search68_1_0.value, &search68_1_1.value },
};
static const nir_search_expression search68 = {
   { nir_search_value_expression },
   nir_op_ior,
   { &search68_0.value, &search68_1.value },
};
   
static const nir_search_variable replace68_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace68_0_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace68_0 = {
   { nir_search_value_expression },
   nir_op_fmax,
   { &replace68_0_0.value, &replace68_0_1.value },
};

static const nir_search_variable replace68_1 = {
   { nir_search_value_variable },
   1, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace68 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &replace68_0.value, &replace68_1.value },
};
   
static const nir_search_variable search91_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search91_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search91 = {
   { nir_search_value_expression },
   nir_op_ior,
   { &search91_0.value, &search91_1.value },
};
   
static const nir_search_variable replace91 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search92_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search92_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search92 = {
   { nir_search_value_expression },
   nir_op_ior,
   { &search92_0.value, &search92_1.value },
};
   
static const nir_search_variable replace92 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search97_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search97_0 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search97_0_0.value },
};

static const nir_search_variable search97_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search97_1 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &search97_1_0.value },
};
static const nir_search_expression search97 = {
   { nir_search_value_expression },
   nir_op_ior,
   { &search97_0.value, &search97_1.value },
};
   
static const nir_search_variable replace97_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace97_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace97_0 = {
   { nir_search_value_expression },
   nir_op_iand,
   { &replace97_0_0.value, &replace97_0_1.value },
};
static const nir_search_expression replace97 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &replace97_0.value },
};

static const struct transform nir_opt_algebraic_ior_xforms[] = {
   { &search65, &replace65.value, 0 },
   { &search66, &replace66.value, 0 },
   { &search67, &replace67.value, 0 },
   { &search68, &replace68.value, 0 },
   { &search91, &replace91.value, 0 },
   { &search92, &replace92.value, 0 },
   { &search97, &replace97.value, 0 },
};
   
static const nir_search_variable search146_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search146_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search146 = {
   { nir_search_value_expression },
   nir_op_ussub_4x8,
   { &search146_0.value, &search146_1.value },
};
   
static const nir_search_variable replace146 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search147_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search147_1 = {
   { nir_search_value_constant },
   { 0xffffffff /* -1 */ },
};
static const nir_search_expression search147 = {
   { nir_search_value_expression },
   nir_op_ussub_4x8,
   { &search147_0.value, &search147_1.value },
};
   
static const nir_search_constant replace147 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};

static const struct transform nir_opt_algebraic_ussub_4x8_xforms[] = {
   { &search146, &replace146.value, 0 },
   { &search147, &replace147.value, 0 },
};
   
static const nir_search_variable search57_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search57_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search57 = {
   { nir_search_value_expression },
   nir_op_imax,
   { &search57_0.value, &search57_1.value },
};
   
static const nir_search_variable replace57 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_imax_xforms[] = {
   { &search57, &replace57.value, 0 },
};
   
static const nir_search_variable search62_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search62 = {
   { nir_search_value_expression },
   nir_op_fsat,
   { &search62_0.value },
};
   
static const nir_search_variable replace62_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant replace62_0_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression replace62_0 = {
   { nir_search_value_expression },
   nir_op_fmax,
   { &replace62_0_0.value, &replace62_0_1.value },
};

static const nir_search_constant replace62_1 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};
static const nir_search_expression replace62 = {
   { nir_search_value_expression },
   nir_op_fmin,
   { &replace62_0.value, &replace62_1.value },
};
   
static const nir_search_variable search63_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search63_0 = {
   { nir_search_value_expression },
   nir_op_fsat,
   { &search63_0_0.value },
};
static const nir_search_expression search63 = {
   { nir_search_value_expression },
   nir_op_fsat,
   { &search63_0.value },
};
   
static const nir_search_variable replace63_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace63 = {
   { nir_search_value_expression },
   nir_op_fsat,
   { &replace63_0.value },
};
   
static const nir_search_variable search77_0_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search77_0_0 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &search77_0_0_0.value },
};

static const nir_search_variable search77_0_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search77_0_1 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &search77_0_1_0.value },
};
static const nir_search_expression search77_0 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search77_0_0.value, &search77_0_1.value },
};
static const nir_search_expression search77 = {
   { nir_search_value_expression },
   nir_op_fsat,
   { &search77_0.value },
};
   
static const nir_search_variable replace77_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace77_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace77_0 = {
   { nir_search_value_expression },
   nir_op_ior,
   { &replace77_0_0.value, &replace77_0_1.value },
};
static const nir_search_expression replace77 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &replace77_0.value },
};

static const struct transform nir_opt_algebraic_fsat_xforms[] = {
   { &search62, &replace62.value, 7 },
   { &search63, &replace63.value, 0 },
   { &search77, &replace77.value, 0 },
};
   
static const nir_search_variable search49_0_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search49_0_0 = {
   { nir_search_value_expression },
   nir_op_fabs,
   { &search49_0_0_0.value },
};
static const nir_search_expression search49_0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search49_0_0.value },
};

static const nir_search_constant search49_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search49 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &search49_0.value, &search49_1.value },
};
   
static const nir_search_variable replace49_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant replace49_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression replace49 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &replace49_0.value, &replace49_1.value },
};
   
static const nir_search_variable search162_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search162_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search162_0_2 = {
   { nir_search_value_variable },
   2, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search162_0 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search162_0_0.value, &search162_0_1.value, &search162_0_2.value },
};

static const nir_search_variable search162_1 = {
   { nir_search_value_variable },
   3, /* d */
   true,
   nir_type_invalid,
};
static const nir_search_expression search162 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &search162_0.value, &search162_1.value },
};
   
static const nir_search_variable replace162_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace162_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace162_1_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace162_1 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &replace162_1_0.value, &replace162_1_1.value },
};

static const nir_search_variable replace162_2_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace162_2_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace162_2 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &replace162_2_0.value, &replace162_2_1.value },
};
static const nir_search_expression replace162 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace162_0.value, &replace162_1.value, &replace162_2.value },
};
   
static const nir_search_variable search163_0 = {
   { nir_search_value_variable },
   0, /* d */
   true,
   nir_type_invalid,
};

static const nir_search_variable search163_1_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search163_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search163_1_2 = {
   { nir_search_value_variable },
   3, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search163_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search163_1_0.value, &search163_1_1.value, &search163_1_2.value },
};
static const nir_search_expression search163 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &search163_0.value, &search163_1.value },
};
   
static const nir_search_variable replace163_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace163_1_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace163_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace163_1 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &replace163_1_0.value, &replace163_1_1.value },
};

static const nir_search_variable replace163_2_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace163_2_1 = {
   { nir_search_value_variable },
   3, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace163_2 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &replace163_2_0.value, &replace163_2_1.value },
};
static const nir_search_expression replace163 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace163_0.value, &replace163_1.value, &replace163_2.value },
};

static const struct transform nir_opt_algebraic_fge_xforms[] = {
   { &search49, &replace49.value, 0 },
   { &search162, &replace162.value, 0 },
   { &search163, &replace163.value, 0 },
};
   
static const nir_search_variable search115_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search115_0 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &search115_0_0.value },
};
static const nir_search_expression search115 = {
   { nir_search_value_expression },
   nir_op_frcp,
   { &search115_0.value },
};
   
static const nir_search_variable replace115_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace115_0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &replace115_0_0.value },
};
static const nir_search_expression replace115 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &replace115_0.value },
};
   
static const nir_search_variable search126_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search126_0 = {
   { nir_search_value_expression },
   nir_op_frcp,
   { &search126_0_0.value },
};
static const nir_search_expression search126 = {
   { nir_search_value_expression },
   nir_op_frcp,
   { &search126_0.value },
};
   
static const nir_search_variable replace126 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search127_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search127_0 = {
   { nir_search_value_expression },
   nir_op_fsqrt,
   { &search127_0_0.value },
};
static const nir_search_expression search127 = {
   { nir_search_value_expression },
   nir_op_frcp,
   { &search127_0.value },
};
   
static const nir_search_variable replace127_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace127 = {
   { nir_search_value_expression },
   nir_op_frsq,
   { &replace127_0.value },
};
   
static const nir_search_variable search129_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search129_0 = {
   { nir_search_value_expression },
   nir_op_frsq,
   { &search129_0_0.value },
};
static const nir_search_expression search129 = {
   { nir_search_value_expression },
   nir_op_frcp,
   { &search129_0.value },
};
   
static const nir_search_variable replace129_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace129 = {
   { nir_search_value_expression },
   nir_op_fsqrt,
   { &replace129_0.value },
};

static const struct transform nir_opt_algebraic_frcp_xforms[] = {
   { &search115, &replace115.value, 0 },
   { &search126, &replace126.value, 0 },
   { &search127, &replace127.value, 0 },
   { &search129, &replace129.value, 13 },
};
   
static const nir_search_variable search93_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search93_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search93 = {
   { nir_search_value_expression },
   nir_op_fxor,
   { &search93_0.value, &search93_1.value },
};
   
static const nir_search_constant replace93 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};

static const struct transform nir_opt_algebraic_fxor_xforms[] = {
   { &search93, &replace93.value, 0 },
};
   
static const nir_search_constant search102_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};

static const nir_search_variable search102_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search102 = {
   { nir_search_value_expression },
   nir_op_ushr,
   { &search102_0.value, &search102_1.value },
};
   
static const nir_search_constant replace102 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
   
static const nir_search_variable search103_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search103_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search103 = {
   { nir_search_value_expression },
   nir_op_ushr,
   { &search103_0.value, &search103_1.value },
};
   
static const nir_search_variable replace103 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_ushr_xforms[] = {
   { &search102, &replace102.value, 0 },
   { &search103, &replace103.value, 0 },
};
   
static const nir_search_variable search104_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search104_0 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search104_0_0.value },
};
static const nir_search_expression search104 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &search104_0.value },
};
   
static const nir_search_variable replace104 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search107_0_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search107_0_0 = {
   { nir_search_value_expression },
   nir_op_flog2,
   { &search107_0_0_0.value },
};

static const nir_search_variable search107_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search107_0 = {
   { nir_search_value_expression },
   nir_op_fmul,
   { &search107_0_0.value, &search107_0_1.value },
};
static const nir_search_expression search107 = {
   { nir_search_value_expression },
   nir_op_fexp2,
   { &search107_0.value },
};
   
static const nir_search_variable replace107_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace107_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace107 = {
   { nir_search_value_expression },
   nir_op_fpow,
   { &replace107_0.value, &replace107_1.value },
};

static const struct transform nir_opt_algebraic_fexp2_xforms[] = {
   { &search104, &replace104.value, 0 },
   { &search107, &replace107.value, 10 },
};
   
static const nir_search_constant search100_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};

static const nir_search_variable search100_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search100 = {
   { nir_search_value_expression },
   nir_op_ishr,
   { &search100_0.value, &search100_1.value },
};
   
static const nir_search_constant replace100 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
   
static const nir_search_variable search101_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search101_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search101 = {
   { nir_search_value_expression },
   nir_op_ishr,
   { &search101_0.value, &search101_1.value },
};
   
static const nir_search_variable replace101 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_ishr_xforms[] = {
   { &search100, &replace100.value, 0 },
   { &search101, &replace101.value, 0 },
};
   
static const nir_search_variable search69_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search69_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search69 = {
   { nir_search_value_expression },
   nir_op_slt,
   { &search69_0.value, &search69_1.value },
};
   
static const nir_search_variable replace69_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace69_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace69_0 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &replace69_0_0.value, &replace69_0_1.value },
};
static const nir_search_expression replace69 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &replace69_0.value },
};

static const struct transform nir_opt_algebraic_slt_xforms[] = {
   { &search69, &replace69.value, 8 },
};
   
static const nir_search_variable search142_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search142_0 = {
   { nir_search_value_expression },
   nir_op_ftrunc,
   { &search142_0_0.value },
};
static const nir_search_expression search142 = {
   { nir_search_value_expression },
   nir_op_f2i,
   { &search142_0.value },
};
   
static const nir_search_variable replace142_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace142 = {
   { nir_search_value_expression },
   nir_op_f2i,
   { &replace142_0.value },
};

static const struct transform nir_opt_algebraic_f2i_xforms[] = {
   { &search142, &replace142.value, 0 },
};
   
static const nir_search_variable search79_0_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search79_0_0 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &search79_0_0_0.value },
};
static const nir_search_expression search79_0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search79_0_0.value },
};

static const nir_search_constant search79_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search79 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search79_0.value, &search79_1.value },
};
   
static const nir_search_variable replace79 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_constant search80_0_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};

static const nir_search_variable search80_0_1_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search80_0_1 = {
   { nir_search_value_expression },
   nir_op_b2f,
   { &search80_0_1_0.value },
};
static const nir_search_expression search80_0 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &search80_0_0.value, &search80_0_1.value },
};

static const nir_search_constant search80_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};
static const nir_search_expression search80 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search80_0.value, &search80_1.value },
};
   
static const nir_search_variable replace80 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search160_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search160_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search160_0_2 = {
   { nir_search_value_variable },
   2, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search160_0 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search160_0_0.value, &search160_0_1.value, &search160_0_2.value },
};

static const nir_search_variable search160_1 = {
   { nir_search_value_variable },
   3, /* d */
   true,
   nir_type_invalid,
};
static const nir_search_expression search160 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search160_0.value, &search160_1.value },
};
   
static const nir_search_variable replace160_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace160_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace160_1_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace160_1 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &replace160_1_0.value, &replace160_1_1.value },
};

static const nir_search_variable replace160_2_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace160_2_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace160_2 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &replace160_2_0.value, &replace160_2_1.value },
};
static const nir_search_expression replace160 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace160_0.value, &replace160_1.value, &replace160_2.value },
};
   
static const nir_search_variable search161_0 = {
   { nir_search_value_variable },
   0, /* d */
   true,
   nir_type_invalid,
};

static const nir_search_variable search161_1_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search161_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search161_1_2 = {
   { nir_search_value_variable },
   3, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search161_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search161_1_0.value, &search161_1_1.value, &search161_1_2.value },
};
static const nir_search_expression search161 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search161_0.value, &search161_1.value },
};
   
static const nir_search_variable replace161_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace161_1_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace161_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace161_1 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &replace161_1_0.value, &replace161_1_1.value },
};

static const nir_search_variable replace161_2_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace161_2_1 = {
   { nir_search_value_variable },
   3, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace161_2 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &replace161_2_0.value, &replace161_2_1.value },
};
static const nir_search_expression replace161 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace161_0.value, &replace161_1.value, &replace161_2.value },
};

static const struct transform nir_opt_algebraic_flt_xforms[] = {
   { &search79, &replace79.value, 0 },
   { &search80, &replace80.value, 0 },
   { &search160, &replace160.value, 0 },
   { &search161, &replace161.value, 0 },
};
   
static const nir_search_variable search85_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search85_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search85 = {
   { nir_search_value_expression },
   nir_op_ult,
   { &search85_0.value, &search85_1.value },
};
   
static const nir_search_constant replace85 = {
   { nir_search_value_constant },
   { NIR_FALSE /* False */ },
};
   
static const nir_search_variable search176_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search176_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search176_0_2 = {
   { nir_search_value_variable },
   2, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search176_0 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search176_0_0.value, &search176_0_1.value, &search176_0_2.value },
};

static const nir_search_variable search176_1 = {
   { nir_search_value_variable },
   3, /* d */
   true,
   nir_type_invalid,
};
static const nir_search_expression search176 = {
   { nir_search_value_expression },
   nir_op_ult,
   { &search176_0.value, &search176_1.value },
};
   
static const nir_search_variable replace176_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace176_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace176_1_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace176_1 = {
   { nir_search_value_expression },
   nir_op_ult,
   { &replace176_1_0.value, &replace176_1_1.value },
};

static const nir_search_variable replace176_2_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace176_2_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace176_2 = {
   { nir_search_value_expression },
   nir_op_ult,
   { &replace176_2_0.value, &replace176_2_1.value },
};
static const nir_search_expression replace176 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace176_0.value, &replace176_1.value, &replace176_2.value },
};
   
static const nir_search_variable search177_0 = {
   { nir_search_value_variable },
   0, /* d */
   true,
   nir_type_invalid,
};

static const nir_search_variable search177_1_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search177_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search177_1_2 = {
   { nir_search_value_variable },
   3, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search177_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search177_1_0.value, &search177_1_1.value, &search177_1_2.value },
};
static const nir_search_expression search177 = {
   { nir_search_value_expression },
   nir_op_ult,
   { &search177_0.value, &search177_1.value },
};
   
static const nir_search_variable replace177_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace177_1_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace177_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace177_1 = {
   { nir_search_value_expression },
   nir_op_ult,
   { &replace177_1_0.value, &replace177_1_1.value },
};

static const nir_search_variable replace177_2_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace177_2_1 = {
   { nir_search_value_variable },
   3, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace177_2 = {
   { nir_search_value_expression },
   nir_op_ult,
   { &replace177_2_0.value, &replace177_2_1.value },
};
static const nir_search_expression replace177 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace177_0.value, &replace177_1.value, &replace177_2.value },
};

static const struct transform nir_opt_algebraic_ult_xforms[] = {
   { &search85, &replace85.value, 0 },
   { &search176, &replace176.value, 0 },
   { &search177, &replace177.value, 0 },
};
   
static const nir_search_variable search144_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search144_1_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};

static const nir_search_variable search144_1_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search144_1 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &search144_1_0.value, &search144_1_1.value },
};
static const nir_search_expression search144 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &search144_0.value, &search144_1.value },
};
   
static const nir_search_variable replace144_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace144_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace144 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &replace144_0.value, &replace144_1.value },
};
   
static const nir_search_variable search148_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search148_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search148 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &search148_0.value, &search148_1.value },
};
   
static const nir_search_variable replace148_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace148_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace148_1 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &replace148_1_0.value },
};
static const nir_search_expression replace148 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &replace148_0.value, &replace148_1.value },
};

static const struct transform nir_opt_algebraic_fsub_xforms[] = {
   { &search144, &replace144.value, 0 },
   { &search148, &replace148.value, 14 },
};
   
static const nir_search_variable search0_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search0_0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search0_0_0.value },
};
static const nir_search_expression search0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search0_0.value },
};
   
static const nir_search_variable replace0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search150_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search150 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search150_0.value },
};
   
static const nir_search_constant replace150_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};

static const nir_search_variable replace150_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace150 = {
   { nir_search_value_expression },
   nir_op_fsub,
   { &replace150_0.value, &replace150_1.value },
};

static const struct transform nir_opt_algebraic_fneg_xforms[] = {
   { &search0, &replace0.value, 0 },
   { &search150, &replace150.value, 15 },
};
   
static const nir_search_variable search73_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search73_0 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &search73_0_0.value },
};

static const nir_search_variable search73_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search73 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &search73_0.value, &search73_1.value },
};
   
static const nir_search_variable replace73_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant replace73_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression replace73 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &replace73_0.value, &replace73_1.value },
};
   
static const nir_search_variable search166_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search166_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search166_0_2 = {
   { nir_search_value_variable },
   2, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search166_0 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search166_0_0.value, &search166_0_1.value, &search166_0_2.value },
};

static const nir_search_variable search166_1 = {
   { nir_search_value_variable },
   3, /* d */
   true,
   nir_type_invalid,
};
static const nir_search_expression search166 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &search166_0.value, &search166_1.value },
};
   
static const nir_search_variable replace166_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace166_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace166_1_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace166_1 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &replace166_1_0.value, &replace166_1_1.value },
};

static const nir_search_variable replace166_2_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace166_2_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace166_2 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &replace166_2_0.value, &replace166_2_1.value },
};
static const nir_search_expression replace166 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace166_0.value, &replace166_1.value, &replace166_2.value },
};
   
static const nir_search_variable search167_0 = {
   { nir_search_value_variable },
   0, /* d */
   true,
   nir_type_invalid,
};

static const nir_search_variable search167_1_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search167_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search167_1_2 = {
   { nir_search_value_variable },
   3, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search167_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search167_1_0.value, &search167_1_1.value, &search167_1_2.value },
};
static const nir_search_expression search167 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &search167_0.value, &search167_1.value },
};
   
static const nir_search_variable replace167_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace167_1_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace167_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace167_1 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &replace167_1_0.value, &replace167_1_1.value },
};

static const nir_search_variable replace167_2_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace167_2_1 = {
   { nir_search_value_variable },
   3, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace167_2 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &replace167_2_0.value, &replace167_2_1.value },
};
static const nir_search_expression replace167 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace167_0.value, &replace167_1.value, &replace167_2.value },
};

static const struct transform nir_opt_algebraic_fne_xforms[] = {
   { &search73, &replace73.value, 0 },
   { &search166, &replace166.value, 0 },
   { &search167, &replace167.value, 0 },
};
   
static const nir_search_variable search4_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search4_0 = {
   { nir_search_value_expression },
   nir_op_iabs,
   { &search4_0_0.value },
};
static const nir_search_expression search4 = {
   { nir_search_value_expression },
   nir_op_iabs,
   { &search4_0.value },
};
   
static const nir_search_variable replace4_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace4 = {
   { nir_search_value_expression },
   nir_op_iabs,
   { &replace4_0.value },
};
   
static const nir_search_variable search5_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search5_0 = {
   { nir_search_value_expression },
   nir_op_ineg,
   { &search5_0_0.value },
};
static const nir_search_expression search5 = {
   { nir_search_value_expression },
   nir_op_iabs,
   { &search5_0.value },
};
   
static const nir_search_variable replace5_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace5 = {
   { nir_search_value_expression },
   nir_op_iabs,
   { &replace5_0.value },
};
   
static const nir_search_constant search155_0_0 = {
   { nir_search_value_constant },
   { 0x0 /* 0 */ },
};

static const nir_search_variable search155_0_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search155_0 = {
   { nir_search_value_expression },
   nir_op_isub,
   { &search155_0_0.value, &search155_0_1.value },
};
static const nir_search_expression search155 = {
   { nir_search_value_expression },
   nir_op_iabs,
   { &search155_0.value },
};
   
static const nir_search_variable replace155_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace155 = {
   { nir_search_value_expression },
   nir_op_iabs,
   { &replace155_0.value },
};

static const struct transform nir_opt_algebraic_iabs_xforms[] = {
   { &search4, &replace4.value, 0 },
   { &search5, &replace5.value, 0 },
   { &search155, &replace155.value, 0 },
};
   
static const nir_search_variable search54_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search54_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search54 = {
   { nir_search_value_expression },
   nir_op_fmin,
   { &search54_0.value, &search54_1.value },
};
   
static const nir_search_variable replace54 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search60_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search60_0_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search60_0 = {
   { nir_search_value_expression },
   nir_op_fmax,
   { &search60_0_0.value, &search60_0_1.value },
};

static const nir_search_constant search60_1 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};
static const nir_search_expression search60 = {
   { nir_search_value_expression },
   nir_op_fmin,
   { &search60_0.value, &search60_1.value },
};
   
static const nir_search_variable replace60_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace60 = {
   { nir_search_value_expression },
   nir_op_fsat,
   { &replace60_0.value },
};
   
static const nir_search_variable search64_0_0_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant search64_0_0_0_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search64_0_0_0 = {
   { nir_search_value_expression },
   nir_op_fmax,
   { &search64_0_0_0_0.value, &search64_0_0_0_1.value },
};

static const nir_search_constant search64_0_0_1 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};
static const nir_search_expression search64_0_0 = {
   { nir_search_value_expression },
   nir_op_fmin,
   { &search64_0_0_0.value, &search64_0_0_1.value },
};

static const nir_search_constant search64_0_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search64_0 = {
   { nir_search_value_expression },
   nir_op_fmax,
   { &search64_0_0.value, &search64_0_1.value },
};

static const nir_search_constant search64_1 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};
static const nir_search_expression search64 = {
   { nir_search_value_expression },
   nir_op_fmin,
   { &search64_0.value, &search64_1.value },
};
   
static const nir_search_variable replace64_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_constant replace64_0_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression replace64_0 = {
   { nir_search_value_expression },
   nir_op_fmax,
   { &replace64_0_0.value, &replace64_0_1.value },
};

static const nir_search_constant replace64_1 = {
   { nir_search_value_constant },
   { 0x3f800000 /* 1.0 */ },
};
static const nir_search_expression replace64 = {
   { nir_search_value_expression },
   nir_op_fmin,
   { &replace64_0.value, &replace64_1.value },
};

static const struct transform nir_opt_algebraic_fmin_xforms[] = {
   { &search54, &replace54.value, 0 },
   { &search60, &replace60.value, 6 },
   { &search64, &replace64.value, 0 },
};
   
static const nir_search_variable search84_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search84_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search84 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &search84_0.value, &search84_1.value },
};
   
static const nir_search_constant replace84 = {
   { nir_search_value_constant },
   { NIR_FALSE /* False */ },
};
   
static const nir_search_variable search131_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_bool,
};

static const nir_search_constant search131_1 = {
   { nir_search_value_constant },
   { NIR_TRUE /* True */ },
};
static const nir_search_expression search131 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &search131_0.value, &search131_1.value },
};
   
static const nir_search_variable replace131_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace131 = {
   { nir_search_value_expression },
   nir_op_inot,
   { &replace131_0.value },
};
   
static const nir_search_variable search132_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_bool,
};

static const nir_search_constant search132_1 = {
   { nir_search_value_constant },
   { NIR_FALSE /* False */ },
};
static const nir_search_expression search132 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &search132_0.value, &search132_1.value },
};
   
static const nir_search_variable replace132 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
   
static const nir_search_variable search174_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search174_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search174_0_2 = {
   { nir_search_value_variable },
   2, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search174_0 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search174_0_0.value, &search174_0_1.value, &search174_0_2.value },
};

static const nir_search_variable search174_1 = {
   { nir_search_value_variable },
   3, /* d */
   true,
   nir_type_invalid,
};
static const nir_search_expression search174 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &search174_0.value, &search174_1.value },
};
   
static const nir_search_variable replace174_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace174_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace174_1_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace174_1 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &replace174_1_0.value, &replace174_1_1.value },
};

static const nir_search_variable replace174_2_0 = {
   { nir_search_value_variable },
   2, /* c */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace174_2_1 = {
   { nir_search_value_variable },
   3, /* d */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace174_2 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &replace174_2_0.value, &replace174_2_1.value },
};
static const nir_search_expression replace174 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace174_0.value, &replace174_1.value, &replace174_2.value },
};
   
static const nir_search_variable search175_0 = {
   { nir_search_value_variable },
   0, /* d */
   true,
   nir_type_invalid,
};

static const nir_search_variable search175_1_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search175_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   true,
   nir_type_invalid,
};

static const nir_search_variable search175_1_2 = {
   { nir_search_value_variable },
   3, /* c */
   true,
   nir_type_invalid,
};
static const nir_search_expression search175_1 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &search175_1_0.value, &search175_1_1.value, &search175_1_2.value },
};
static const nir_search_expression search175 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &search175_0.value, &search175_1.value },
};
   
static const nir_search_variable replace175_0 = {
   { nir_search_value_variable },
   1, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace175_1_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace175_1_1 = {
   { nir_search_value_variable },
   2, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace175_1 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &replace175_1_0.value, &replace175_1_1.value },
};

static const nir_search_variable replace175_2_0 = {
   { nir_search_value_variable },
   0, /* d */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace175_2_1 = {
   { nir_search_value_variable },
   3, /* c */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace175_2 = {
   { nir_search_value_expression },
   nir_op_ine,
   { &replace175_2_0.value, &replace175_2_1.value },
};
static const nir_search_expression replace175 = {
   { nir_search_value_expression },
   nir_op_bcsel,
   { &replace175_0.value, &replace175_1.value, &replace175_2.value },
};

static const struct transform nir_opt_algebraic_ine_xforms[] = {
   { &search84, &replace84.value, 0 },
   { &search131, &replace131.value, 0 },
   { &search132, &replace132.value, 0 },
   { &search174, &replace174.value, 0 },
   { &search175, &replace175.value, 0 },
};
   
static const nir_search_variable search141_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression search141_0 = {
   { nir_search_value_expression },
   nir_op_b2i,
   { &search141_0_0.value },
};
static const nir_search_expression search141 = {
   { nir_search_value_expression },
   nir_op_i2b,
   { &search141_0.value },
};
   
static const nir_search_variable replace141 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const struct transform nir_opt_algebraic_i2b_xforms[] = {
   { &search141, &replace141.value, 0 },
};
   
static const nir_search_variable search158_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search158_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search158 = {
   { nir_search_value_expression },
   nir_op_uadd_carry,
   { &search158_0.value, &search158_1.value },
};
   
static const nir_search_variable replace158_0_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace158_0_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace158_0_0 = {
   { nir_search_value_expression },
   nir_op_iadd,
   { &replace158_0_0_0.value, &replace158_0_0_1.value },
};

static const nir_search_variable replace158_0_1 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace158_0 = {
   { nir_search_value_expression },
   nir_op_ult,
   { &replace158_0_0.value, &replace158_0_1.value },
};
static const nir_search_expression replace158 = {
   { nir_search_value_expression },
   nir_op_b2i,
   { &replace158_0.value },
};

static const struct transform nir_opt_algebraic_uadd_carry_xforms[] = {
   { &search158, &replace158.value, 18 },
};

static bool
nir_opt_algebraic_block(nir_block *block, void *void_state)
{
   struct opt_state *state = void_state;

   nir_foreach_instr_safe(block, instr) {
      if (instr->type != nir_instr_type_alu)
         continue;

      nir_alu_instr *alu = nir_instr_as_alu(instr);
      if (!alu->dest.dest.is_ssa)
         continue;

      switch (alu->op) {
      case nir_op_iand:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_iand_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_iand_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ixor:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ixor_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ixor_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_seq:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_seq_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_seq_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ilt:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ilt_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ilt_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_imul:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_imul_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_imul_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_uge:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_uge_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_uge_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_usadd_4x8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_usadd_4x8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_usadd_4x8_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fmul:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fmul_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fmul_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ffma:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ffma_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ffma_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_umin:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_umin_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_umin_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_umax:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_umax_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_umax_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_bcsel:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_bcsel_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_bcsel_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_sge:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_sge_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_sge_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fsqrt:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fsqrt_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fsqrt_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_iadd:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_iadd_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_iadd_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fand:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fand_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fand_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fabs:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fabs_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fabs_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ieq:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ieq_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ieq_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_imin:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_imin_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_imin_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_frsq:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_frsq_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_frsq_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ineg:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ineg_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ineg_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fpow:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fpow_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fpow_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ige:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ige_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ige_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fdiv:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fdiv_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fdiv_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ffract:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ffract_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ffract_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fadd:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fadd_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fadd_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ishl:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ishl_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ishl_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_usub_borrow:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_usub_borrow_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_usub_borrow_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_flog2:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_flog2_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_flog2_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_inot:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_inot_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_inot_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_sne:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_sne_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_sne_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fmod:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fmod_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fmod_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_f2u:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_f2u_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_f2u_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fcsel:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fcsel_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fcsel_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_isub:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_isub_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_isub_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fmax:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fmax_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fmax_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_umul_unorm_4x8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_umul_unorm_4x8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_umul_unorm_4x8_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_bitfield_insert:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_bitfield_insert_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_bitfield_insert_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_feq:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_feq_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_feq_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_flrp:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_flrp_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_flrp_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ior:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ior_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ior_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ussub_4x8:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ussub_4x8_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ussub_4x8_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_imax:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_imax_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_imax_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fsat:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fsat_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fsat_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fge:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fge_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fge_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_frcp:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_frcp_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_frcp_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fxor:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fxor_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fxor_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ushr:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ushr_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ushr_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fexp2:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fexp2_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fexp2_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ishr:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ishr_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ishr_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_slt:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_slt_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_slt_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_f2i:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_f2i_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_f2i_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_flt:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_flt_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_flt_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ult:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ult_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ult_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fsub:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fsub_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fsub_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fneg:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fneg_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fneg_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fne:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fne_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fne_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_iabs:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_iabs_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_iabs_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fmin:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_fmin_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_fmin_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_ine:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_ine_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_ine_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_i2b:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_i2b_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_i2b_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_uadd_carry:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_uadd_carry_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_uadd_carry_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      default:
         break;
      }
   }

   return true;
}

static bool
nir_opt_algebraic_impl(nir_function_impl *impl, const bool *condition_flags)
{
   struct opt_state state;

   state.mem_ctx = ralloc_parent(impl);
   state.progress = false;
   state.condition_flags = condition_flags;

   nir_foreach_block(impl, nir_opt_algebraic_block, &state);

   if (state.progress)
      nir_metadata_preserve(impl, nir_metadata_block_index |
                                  nir_metadata_dominance);

   return state.progress;
}

bool
nir_opt_algebraic(nir_shader *shader)
{
   bool progress = false;
   bool condition_flags[20];
   const nir_shader_compiler_options *options = shader->options;

   condition_flags[0] = true;
   condition_flags[1] = options->lower_flrp;
   condition_flags[2] = options->lower_ffract;
   condition_flags[3] = !options->lower_flrp;
   condition_flags[4] = options->lower_ffma;
   condition_flags[5] = !options->lower_ffma;
   condition_flags[6] = !options->lower_fsat;
   condition_flags[7] = options->lower_fsat;
   condition_flags[8] = options->lower_scmp;
   condition_flags[9] = options->lower_fpow;
   condition_flags[10] = !options->lower_fpow;
   condition_flags[11] = options->lower_fdiv;
   condition_flags[12] = options->lower_fsqrt;
   condition_flags[13] = !options->lower_fsqrt;
   condition_flags[14] = options->lower_sub;
   condition_flags[15] = options->lower_negate;
   condition_flags[16] = options->lower_fmod;
   condition_flags[17] = options->lower_bitfield_insert;
   condition_flags[18] = options->lower_uadd_carry;
   condition_flags[19] = options->lower_usub_borrow;

   nir_foreach_function(shader, function) {
      if (function->impl)
         progress |= nir_opt_algebraic_impl(function->impl, condition_flags);
   }

   return progress;
}

#include "nir.h"
#include "nir_search.h"

#ifndef NIR_OPT_ALGEBRAIC_STRUCT_DEFS
#define NIR_OPT_ALGEBRAIC_STRUCT_DEFS

struct transform {
   const nir_search_expression *search;
   const nir_search_value *replace;
   unsigned condition_offset;
};

struct opt_state {
   void *mem_ctx;
   bool progress;
   const bool *condition_flags;
};

#endif

static const nir_search_variable search186_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search186_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search186 = {
   { nir_search_value_expression },
   nir_op_fdot4,
   { &search186_0.value, &search186_1.value },
};
   
static const nir_search_variable replace186_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace186_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace186 = {
   { nir_search_value_expression },
   nir_op_fdot_replicated4,
   { &replace186_0.value, &replace186_1.value },
};

static const struct transform nir_opt_algebraic_late_fdot4_xforms[] = {
   { &search186, &replace186.value, 20 },
};
   
static const nir_search_variable search180_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search180_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search180_0 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search180_0_0.value, &search180_0_1.value },
};

static const nir_search_constant search180_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search180 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &search180_0.value, &search180_1.value },
};
   
static const nir_search_variable replace180_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace180_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace180_1 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &replace180_1_0.value },
};
static const nir_search_expression replace180 = {
   { nir_search_value_expression },
   nir_op_flt,
   { &replace180_0.value, &replace180_1.value },
};

static const struct transform nir_opt_algebraic_late_flt_xforms[] = {
   { &search180, &replace180.value, 0 },
};
   
static const nir_search_variable search184_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search184_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search184 = {
   { nir_search_value_expression },
   nir_op_fdot2,
   { &search184_0.value, &search184_1.value },
};
   
static const nir_search_variable replace184_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace184_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace184 = {
   { nir_search_value_expression },
   nir_op_fdot_replicated2,
   { &replace184_0.value, &replace184_1.value },
};

static const struct transform nir_opt_algebraic_late_fdot2_xforms[] = {
   { &search184, &replace184.value, 20 },
};
   
static const nir_search_variable search185_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search185_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search185 = {
   { nir_search_value_expression },
   nir_op_fdot3,
   { &search185_0.value, &search185_1.value },
};
   
static const nir_search_variable replace185_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace185_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace185 = {
   { nir_search_value_expression },
   nir_op_fdot_replicated3,
   { &replace185_0.value, &replace185_1.value },
};

static const struct transform nir_opt_algebraic_late_fdot3_xforms[] = {
   { &search185, &replace185.value, 20 },
};
   
static const nir_search_variable search183_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search183_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search183_0 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search183_0_0.value, &search183_0_1.value },
};

static const nir_search_constant search183_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search183 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &search183_0.value, &search183_1.value },
};
   
static const nir_search_variable replace183_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace183_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace183_1 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &replace183_1_0.value },
};
static const nir_search_expression replace183 = {
   { nir_search_value_expression },
   nir_op_fne,
   { &replace183_0.value, &replace183_1.value },
};

static const struct transform nir_opt_algebraic_late_fne_xforms[] = {
   { &search183, &replace183.value, 0 },
};
   
static const nir_search_variable search182_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search182_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search182_0 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search182_0_0.value, &search182_0_1.value },
};

static const nir_search_constant search182_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search182 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &search182_0.value, &search182_1.value },
};
   
static const nir_search_variable replace182_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace182_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace182_1 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &replace182_1_0.value },
};
static const nir_search_expression replace182 = {
   { nir_search_value_expression },
   nir_op_feq,
   { &replace182_0.value, &replace182_1.value },
};

static const struct transform nir_opt_algebraic_late_feq_xforms[] = {
   { &search182, &replace182.value, 0 },
};
   
static const nir_search_variable search181_0_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search181_0_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search181_0 = {
   { nir_search_value_expression },
   nir_op_fadd,
   { &search181_0_0.value, &search181_0_1.value },
};

static const nir_search_constant search181_1 = {
   { nir_search_value_constant },
   { 0x0 /* 0.0 */ },
};
static const nir_search_expression search181 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &search181_0.value, &search181_1.value },
};
   
static const nir_search_variable replace181_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace181_1_0 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace181_1 = {
   { nir_search_value_expression },
   nir_op_fneg,
   { &replace181_1_0.value },
};
static const nir_search_expression replace181 = {
   { nir_search_value_expression },
   nir_op_fge,
   { &replace181_0.value, &replace181_1.value },
};

static const struct transform nir_opt_algebraic_late_fge_xforms[] = {
   { &search181, &replace181.value, 0 },
};
   
static const nir_search_variable search187_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable search187_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression search187 = {
   { nir_search_value_expression },
   nir_op_fdph,
   { &search187_0.value, &search187_1.value },
};
   
static const nir_search_variable replace187_0 = {
   { nir_search_value_variable },
   0, /* a */
   false,
   nir_type_invalid,
};

static const nir_search_variable replace187_1 = {
   { nir_search_value_variable },
   1, /* b */
   false,
   nir_type_invalid,
};
static const nir_search_expression replace187 = {
   { nir_search_value_expression },
   nir_op_fdph_replicated,
   { &replace187_0.value, &replace187_1.value },
};

static const struct transform nir_opt_algebraic_late_fdph_xforms[] = {
   { &search187, &replace187.value, 20 },
};

static bool
nir_opt_algebraic_late_block(nir_block *block, void *void_state)
{
   struct opt_state *state = void_state;

   nir_foreach_instr_safe(block, instr) {
      if (instr->type != nir_instr_type_alu)
         continue;

      nir_alu_instr *alu = nir_instr_as_alu(instr);
      if (!alu->dest.dest.is_ssa)
         continue;

      switch (alu->op) {
      case nir_op_fdot4:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fdot4_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fdot4_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_flt:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_flt_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_flt_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fdot2:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fdot2_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fdot2_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fdot3:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fdot3_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fdot3_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fne:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fne_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fne_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_feq:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_feq_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_feq_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fge:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fge_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fge_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      case nir_op_fdph:
         for (unsigned i = 0; i < ARRAY_SIZE(nir_opt_algebraic_late_fdph_xforms); i++) {
            const struct transform *xform = &nir_opt_algebraic_late_fdph_xforms[i];
            if (state->condition_flags[xform->condition_offset] &&
                nir_replace_instr(alu, xform->search, xform->replace,
                                  state->mem_ctx)) {
               state->progress = true;
               break;
            }
         }
         break;
      default:
         break;
      }
   }

   return true;
}

static bool
nir_opt_algebraic_late_impl(nir_function_impl *impl, const bool *condition_flags)
{
   struct opt_state state;

   state.mem_ctx = ralloc_parent(impl);
   state.progress = false;
   state.condition_flags = condition_flags;

   nir_foreach_block(impl, nir_opt_algebraic_late_block, &state);

   if (state.progress)
      nir_metadata_preserve(impl, nir_metadata_block_index |
                                  nir_metadata_dominance);

   return state.progress;
}

bool
nir_opt_algebraic_late(nir_shader *shader)
{
   bool progress = false;
   bool condition_flags[21];
   const nir_shader_compiler_options *options = shader->options;

   condition_flags[0] = true;
   condition_flags[1] = options->lower_flrp;
   condition_flags[2] = options->lower_ffract;
   condition_flags[3] = !options->lower_flrp;
   condition_flags[4] = options->lower_ffma;
   condition_flags[5] = !options->lower_ffma;
   condition_flags[6] = !options->lower_fsat;
   condition_flags[7] = options->lower_fsat;
   condition_flags[8] = options->lower_scmp;
   condition_flags[9] = options->lower_fpow;
   condition_flags[10] = !options->lower_fpow;
   condition_flags[11] = options->lower_fdiv;
   condition_flags[12] = options->lower_fsqrt;
   condition_flags[13] = !options->lower_fsqrt;
   condition_flags[14] = options->lower_sub;
   condition_flags[15] = options->lower_negate;
   condition_flags[16] = options->lower_fmod;
   condition_flags[17] = options->lower_bitfield_insert;
   condition_flags[18] = options->lower_uadd_carry;
   condition_flags[19] = options->lower_usub_borrow;
   condition_flags[20] = options->fdot_replicates;

   nir_foreach_function(shader, function) {
      if (function->impl)
         progress |= nir_opt_algebraic_late_impl(function->impl, condition_flags);
   }

   return progress;
}

