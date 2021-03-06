#ifndef __BCD_SEVEN__
#define __BCD_SEVEN__

#define rep_a 0   ///< Represents the display pin 'a'
#define rep_b 1   ///< Represents the display pin 'b'
#define rep_c 2   ///< Represents the display pin 'c'
#define rep_d 3   ///< Represents the display pin 'd'
#define rep_e 4   ///< Represents the display pin 'e'
#define rep_f 5   ///< Represents the display pin 'f'
#define rep_g 6   ///< Represents the display pin 'g'
#define rep_dp 7  ///< Represents the display pin 'dp'

uint8_t sseg_0[]   = {6, rep_a, rep_b, rep_c, rep_d, rep_e, rep_f};				    ///< Specifies pins to write '0'
uint8_t sseg_1[]   = {2, rep_b, rep_c};																		    ///< Specifies pins to write '1'
uint8_t sseg_2[]   = {5, rep_a, rep_b, rep_d, rep_e, rep_g};							    ///< Specifies pins to write '2'
uint8_t sseg_3[]   = {5, rep_a, rep_b, rep_c, rep_d, rep_g};							    ///< Specifies pins to write '3'
uint8_t sseg_4[]   = {4, rep_b, rep_c, rep_f, rep_g};											    ///< Specifies pins to write '4'
uint8_t sseg_5[]   = {5, rep_a, rep_c, rep_d, rep_f, rep_g};							    ///< Specifies pins to write '5'
uint8_t sseg_6[]   = {6, rep_a, rep_c, rep_d, rep_e, rep_f, rep_g};				    ///< Specifies pins to write '6'
uint8_t sseg_7[]   = {3, rep_a, rep_b, rep_c};														    ///< Specifies pins to write '7'
uint8_t sseg_8[]   = {7, rep_a, rep_b, rep_c, rep_d, rep_e, rep_f, rep_g};    ///< Specifies pins to write '8'
uint8_t sseg_9[]   = {6, rep_a, rep_b, rep_c, rep_d, rep_f, rep_g};				    ///< Specifies pins to write '9'
uint8_t sseg_A[]   = {6, rep_a, rep_b, rep_c, rep_e, rep_f, rep_g};				    ///< Specifies pins to write 'A'
uint8_t sseg_B[]   = {5, rep_c, rep_d, rep_e, rep_f, rep_g};							    ///< Specifies pins to write 'B'
uint8_t sseg_C[]   = {4, rep_a, rep_d, rep_e, rep_f};											    ///< Specifies pins to write 'C'
uint8_t sseg_D[]   = {5, rep_b, rep_c, rep_d, rep_e, rep_g};							    ///< Specifies pins to write 'D'
uint8_t sseg_E[]   = {5, rep_a, rep_d, rep_e, rep_f, rep_g};							    ///< Specifies pins to write 'E'
uint8_t sseg_F[]   = {4, rep_a, rep_e, rep_f, rep_g};											    ///< Specifies pins to write 'F'
uint8_t sseg_G[]   = {5, rep_a, rep_c, rep_d, rep_e, rep_f};							    ///< Specifies pins to write 'G'
uint8_t sseg_H[]   = {5, rep_b, rep_c, rep_e, rep_f, rep_g};							    ///< Specifies pins to write 'H'
uint8_t sseg_I[]   = {2, rep_e, rep_f};																		    ///< Specifies pins to write 'I'
uint8_t sseg_J[]   = {4, rep_b, rep_c, rep_d, rep_e};											    ///< Specifies pins to write 'J'
uint8_t sseg_K[]   = {5, rep_a, rep_c, rep_e, rep_f, rep_g};							    ///< Specifies pins to write 'K'
uint8_t sseg_L[]   = {3, rep_d, rep_e, rep_f};														    ///< Specifies pins to write 'L'
uint8_t sseg_M[]   = {3, rep_a, rep_c, rep_e};														    ///< Specifies pins to write 'M'
uint8_t sseg_N[]   = {5, rep_a, rep_b, rep_c, rep_e, rep_f};							    ///< Specifies pins to write 'N'
uint8_t sseg_O[]   = {6, rep_a, rep_b, rep_c, rep_d, rep_e, rep_f};				    ///< Specifies pins to write 'O'
uint8_t sseg_P[]   = {5, rep_a, rep_b, rep_e, rep_f, rep_g};							    ///< Specifies pins to write 'P'
uint8_t sseg_Q[]   = {5, rep_a, rep_b, rep_d, rep_f, rep_g};							    ///< Specifies pins to write 'Q'
uint8_t sseg_R[]   = {4, rep_a, rep_b, rep_e, rep_f};											    ///< Specifies pins to write 'R'
uint8_t sseg_S[]   = {5, rep_a, rep_c, rep_d, rep_f, rep_g};							    ///< Specifies pins to write 'S'
uint8_t sseg_T[]   = {4, rep_d, rep_e, rep_f, rep_g};											    ///< Specifies pins to write 'T'
uint8_t sseg_U[]   = {5, rep_b, rep_c, rep_d, rep_e, rep_f};							    ///< Specifies pins to write 'U'
uint8_t sseg_V[]   = {5, rep_b, rep_c, rep_d, rep_e, rep_f};							    ///< Specifies pins to write 'V'
uint8_t sseg_W[]   = {3, rep_b, rep_d, rep_f};														    ///< Specifies pins to write 'W'
uint8_t sseg_X[]   = {5, rep_b, rep_c, rep_e, rep_f, rep_g};							    ///< Specifies pins to write 'X'
uint8_t sseg_Y[]   = {5, rep_b, rep_c, rep_d, rep_f, rep_g};							    ///< Specifies pins to write 'Y'
uint8_t sseg_Z[]   = {5, rep_a, rep_b, rep_d, rep_e, rep_g};							    ///< Specifies pins to write 'Z'
uint8_t sseg_a[]   = {6, rep_a, rep_b, rep_c, rep_d, rep_e, rep_g};				    ///< Specifies pins to write 'a'
uint8_t sseg_b[]   = {5, rep_c, rep_d, rep_e, rep_f, rep_g};							    ///< Specifies pins to write 'b'
uint8_t sseg_c[]   = {3, rep_d, rep_e, rep_g};														    ///< Specifies pins to write 'c'
uint8_t sseg_d[]   = {5, rep_b, rep_c, rep_d, rep_e, rep_g};							    ///< Specifies pins to write 'd'
uint8_t sseg_e[]   = {6, rep_a, rep_b, rep_d, rep_e, rep_f, rep_g};				    ///< Specifies pins to write 'e'
uint8_t sseg_f[]   = {4, rep_a, rep_e, rep_f, rep_g};											    ///< Specifies pins to write 'f'
uint8_t sseg_g[]   = {6, rep_a, rep_b, rep_c, rep_d, rep_f, rep_g};				    ///< Specifies pins to write 'g'
uint8_t sseg_h[]   = {4, rep_c, rep_e, rep_f, rep_g};											    ///< Specifies pins to write 'h'
uint8_t sseg_i[]   = {1, rep_e};																					    ///< Specifies pins to write 'i'
uint8_t sseg_j[]   = {2, rep_c, rep_d};																		    ///< Specifies pins to write 'j'
uint8_t sseg_k[]   = {5, rep_a, rep_c, rep_e, rep_f, rep_g};							    ///< Specifies pins to write 'k'
uint8_t sseg_l[]   = {2, rep_e, rep_f};																		    ///< Specifies pins to write 'l'
uint8_t sseg_m[]   = {2, rep_c, rep_e};																		    ///< Specifies pins to write 'm'
uint8_t sseg_n[]   = {3, rep_c, rep_e, rep_g};														    ///< Specifies pins to write 'n'
uint8_t sseg_o[]   = {4, rep_c, rep_d, rep_e, rep_g};											    ///< Specifies pins to write 'o'
uint8_t sseg_p[]   = {5, rep_a, rep_b, rep_e, rep_f, rep_g};							    ///< Specifies pins to write 'p'
uint8_t sseg_q[]   = {5, rep_a, rep_b, rep_c, rep_f, rep_g};							    ///< Specifies pins to write 'q'
uint8_t sseg_r[]   = {2, rep_e, rep_g};																		    ///< Specifies pins to write 'r'
uint8_t sseg_s[]   = {5, rep_a, rep_c, rep_d, rep_f, rep_g};							    ///< Specifies pins to write 's'
uint8_t sseg_t[]   = {4, rep_d, rep_e, rep_f, rep_g};											    ///< Specifies pins to write 't'
uint8_t sseg_u[]   = {3, rep_c, rep_d, rep_e};														    ///< Specifies pins to write 'u'
uint8_t sseg_v[]   = {3, rep_c, rep_d, rep_e};														    ///< Specifies pins to write 'v'
uint8_t sseg_w[]   = {2, rep_c, rep_e};																		    ///< Specifies pins to write 'w'
uint8_t sseg_x[]   = {5, rep_b, rep_c, rep_e, rep_f, rep_g};							    ///< Specifies pins to write 'x'
uint8_t sseg_y[]   = {5, rep_b, rep_c, rep_d, rep_f, rep_g};							    ///< Specifies pins to write 'y'
uint8_t sseg_z[]   = {5, rep_a, rep_b, rep_d, rep_e, rep_g};							    ///< Specifies pins to write 'z'

/**
 * @brief 7-Seg vector that maps which pins must be turned on to draw each supported ASCII character.
 */
const uint8_t * SevenSegmentASCII[] = {
 sseg_0, sseg_1, sseg_2, sseg_3, sseg_4, sseg_5, sseg_6, sseg_7, sseg_8, sseg_9, sseg_A, sseg_B, sseg_C, sseg_D, sseg_E, sseg_F, sseg_G, sseg_H, sseg_I, sseg_J, sseg_K, sseg_L, sseg_M, sseg_N, sseg_O, sseg_P, sseg_Q, sseg_R, sseg_S, sseg_T, sseg_U, sseg_V, sseg_W, sseg_X, sseg_Y, sseg_Z, sseg_a, sseg_b, sseg_c, sseg_d, sseg_e, sseg_f, sseg_g, sseg_h, sseg_i, sseg_j, sseg_k, sseg_l, sseg_m, sseg_n, sseg_o, sseg_p, sseg_q, sseg_r, sseg_s, sseg_t, sseg_u, sseg_v, sseg_w, sseg_x, sseg_y, sseg_z
};

#endif