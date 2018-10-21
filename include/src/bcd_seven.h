#ifndef __BCD_SEVEN__
#define __BCD_SEVEN__

#define rep_a 0
#define rep_b 1
#define rep_c 2
#define rep_d 3
#define rep_e 4
#define rep_f 5
#define rep_g 6
#define rep_dp 7

uint8_t sseg_0[]   = {6, rep_a, rep_b, rep_c, rep_d, rep_e, rep_f};				    /* 0 */
uint8_t sseg_1[]   = {2, rep_b, rep_c};																		    /* 1 */
uint8_t sseg_2[]   = {5, rep_a, rep_b, rep_d, rep_e, rep_g};							    /* 2 */
uint8_t sseg_3[]   = {5, rep_a, rep_b, rep_c, rep_d, rep_g};							    /* 3 */
uint8_t sseg_4[]   = {4, rep_b, rep_c, rep_f, rep_g};											    /* 4 */
uint8_t sseg_5[]   = {5, rep_a, rep_c, rep_d, rep_f, rep_g};							    /* 5 */
uint8_t sseg_6[]   = {6, rep_a, rep_c, rep_d, rep_e, rep_f, rep_g};				    /* 6 */
uint8_t sseg_7[]   = {3, rep_a, rep_b, rep_c};														    /* 7 */
uint8_t sseg_8[]   = {7, rep_a, rep_b, rep_c, rep_d, rep_e, rep_f, rep_g};    /* 8 */
uint8_t sseg_9[]   = {6, rep_a, rep_b, rep_c, rep_d, rep_f, rep_g};				    /* 9 */
uint8_t sseg_A[]   = {6, rep_a, rep_b, rep_c, rep_e, rep_f, rep_g};				    /* A */
uint8_t sseg_B[]   = {5, rep_c, rep_d, rep_e, rep_f, rep_g};							    /* B */
uint8_t sseg_C[]   = {4, rep_a, rep_d, rep_e, rep_f};											    /* C */
uint8_t sseg_D[]   = {5, rep_b, rep_c, rep_d, rep_e, rep_g};							    /* D */
uint8_t sseg_E[]   = {5, rep_a, rep_d, rep_e, rep_f, rep_g};							    /* E */
uint8_t sseg_F[]   = {4, rep_a, rep_e, rep_f, rep_g};											    /* F */
uint8_t sseg_G[]   = {5, rep_a, rep_c, rep_d, rep_e, rep_f};							    /* G */
uint8_t sseg_H[]   = {5, rep_b, rep_c, rep_e, rep_f, rep_g};							    /* H */
uint8_t sseg_I[]   = {2, rep_e, rep_f};																		    /* I */
uint8_t sseg_J[]   = {4, rep_b, rep_c, rep_d, rep_e};											    /* J */
uint8_t sseg_K[]   = {5, rep_a, rep_c, rep_e, rep_f, rep_g};							    /* K */
uint8_t sseg_L[]   = {3, rep_d, rep_e, rep_f};														    /* L */
uint8_t sseg_M[]   = {3, rep_a, rep_c, rep_e};														    /* M */
uint8_t sseg_N[]   = {5, rep_a, rep_b, rep_c, rep_e, rep_f};							    /* N */
uint8_t sseg_O[]   = {6, rep_a, rep_b, rep_c, rep_d, rep_e, rep_f};				    /* O */
uint8_t sseg_P[]   = {5, rep_a, rep_b, rep_e, rep_f, rep_g};							    /* P */
uint8_t sseg_Q[]   = {5, rep_a, rep_b, rep_d, rep_f, rep_g};							    /* Q */
uint8_t sseg_R[]   = {4, rep_a, rep_b, rep_e, rep_f};											    /* R */
uint8_t sseg_S[]   = {5, rep_a, rep_c, rep_d, rep_f, rep_g};							    /* S */
uint8_t sseg_T[]   = {4, rep_d, rep_e, rep_f, rep_g};											    /* T */
uint8_t sseg_U[]   = {5, rep_b, rep_c, rep_d, rep_e, rep_f};							    /* U */
uint8_t sseg_V[]   = {5, rep_b, rep_c, rep_d, rep_e, rep_f};							    /* V */
uint8_t sseg_W[]   = {3, rep_b, rep_d, rep_f};														    /* W */
uint8_t sseg_X[]   = {5, rep_b, rep_c, rep_e, rep_f, rep_g};							    /* X */
uint8_t sseg_Y[]   = {5, rep_b, rep_c, rep_d, rep_f, rep_g};							    /* Y */
uint8_t sseg_Z[]   = {5, rep_a, rep_b, rep_d, rep_e, rep_g};							    /* Z */
uint8_t sseg_a[]   = {6, rep_a, rep_b, rep_c, rep_d, rep_e, rep_g};				    /* a */
uint8_t sseg_b[]   = {5, rep_c, rep_d, rep_e, rep_f, rep_g};							    /* b */
uint8_t sseg_c[]   = {3, rep_d, rep_e, rep_g};														    /* c */
uint8_t sseg_d[]   = {5, rep_b, rep_c, rep_d, rep_e, rep_g};							    /* d */
uint8_t sseg_e[]   = {6, rep_a, rep_b, rep_d, rep_e, rep_f, rep_g};				    /* e */
uint8_t sseg_f[]   = {4, rep_a, rep_e, rep_f, rep_g};											    /* f */
uint8_t sseg_g[]   = {6, rep_a, rep_b, rep_c, rep_d, rep_f, rep_g};				    /* g */
uint8_t sseg_h[]   = {4, rep_c, rep_e, rep_f, rep_g};											    /* h */
uint8_t sseg_i[]   = {1, rep_e};																					    /* i */
uint8_t sseg_j[]   = {2, rep_c, rep_d};																		    /* j */
uint8_t sseg_k[]   = {5, rep_a, rep_c, rep_e, rep_f, rep_g};							    /* k */
uint8_t sseg_l[]   = {2, rep_e, rep_f};																		    /* l */
uint8_t sseg_m[]   = {2, rep_c, rep_e};																		    /* m */
uint8_t sseg_n[]   = {3, rep_c, rep_e, rep_g};														    /* n */
uint8_t sseg_o[]   = {4, rep_c, rep_d, rep_e, rep_g};											    /* o */
uint8_t sseg_p[]   = {5, rep_a, rep_b, rep_e, rep_f, rep_g};							    /* p */
uint8_t sseg_q[]   = {5, rep_a, rep_b, rep_c, rep_f, rep_g};							    /* q */
uint8_t sseg_r[]   = {2, rep_e, rep_g};																		    /* r */
uint8_t sseg_s[]   = {5, rep_a, rep_c, rep_d, rep_f, rep_g};							    /* s */
uint8_t sseg_t[]   = {4, rep_d, rep_e, rep_f, rep_g};											    /* t */
uint8_t sseg_u[]   = {3, rep_c, rep_d, rep_e};														    /* u */
uint8_t sseg_v[]   = {3, rep_c, rep_d, rep_e};														    /* v */
uint8_t sseg_w[]   = {2, rep_c, rep_e};																		    /* w */
uint8_t sseg_x[]   = {5, rep_b, rep_c, rep_e, rep_f, rep_g};							    /* x */
uint8_t sseg_y[]   = {5, rep_b, rep_c, rep_d, rep_f, rep_g};							    /* y */
uint8_t sseg_z[]   = {5, rep_a, rep_b, rep_d, rep_e, rep_g};							    /* z */

const uint8_t * SevenSegmentASCII[] = {
 sseg_0, sseg_1, sseg_2, sseg_3, sseg_4, sseg_5, sseg_6, sseg_7, sseg_8, sseg_9, sseg_A, sseg_B, sseg_C, sseg_D, sseg_E, sseg_F, sseg_G, sseg_H, sseg_I, sseg_J, sseg_K, sseg_L, sseg_M, sseg_N, sseg_O, sseg_P, sseg_Q, sseg_R, sseg_S, sseg_T, sseg_U, sseg_V, sseg_W, sseg_X, sseg_Y, sseg_Z, sseg_a, sseg_b, sseg_c, sseg_d, sseg_e, sseg_f, sseg_g, sseg_h, sseg_i, sseg_j, sseg_k, sseg_l, sseg_m, sseg_n, sseg_o, sseg_p, sseg_q, sseg_r, sseg_s, sseg_t, sseg_u, sseg_v, sseg_w, sseg_x, sseg_y, sseg_z
};

#endif