#include <Arduino.h>
#include <FastLED.h>
#include "../Sign_GFX.h"

//space
const uint8_t bitmap_space_data[5] = {0x00,0x00,0x00,0x00,0x00};
const Bitmap bitmap_space = {5,7,bitmap_space_data};

//A
const uint8_t bitmap_A_data[5] = {0x2e,0xfc,0x62,0x18,0x46};
const Bitmap bitmap_A = {5,7,bitmap_A_data};

//a
const uint8_t bitmap_a_data[5] = {0x00,0x70,0xa0,0x1e,0x7a};
const Bitmap bitmap_a = {5,7,bitmap_a_data};

//B
const uint8_t bitmap_B_data[5] = {0x2f,0x7c,0x62,0x18,0x3e};
const Bitmap bitmap_B = {5,7,bitmap_B_data};

//b
const uint8_t bitmap_b_data[5] = {0x21,0x68,0x66,0x18,0x3e};
const Bitmap bitmap_b = {5,7,bitmap_b_data};

//C
const uint8_t bitmap_C_data[5] = {0x3e,0x08,0x42,0x10,0x78};
const Bitmap bitmap_C = {5,7,bitmap_C_data};

//c
const uint8_t bitmap_c_data[5] = {0x00,0x70,0x62,0x10,0x3a};
const Bitmap bitmap_c = {5,7,bitmap_c_data};

//D
const uint8_t bitmap_D_data[5] = {0x2f,0x8c,0x62,0x18,0x3e};
const Bitmap bitmap_D = {5,7,bitmap_D_data};

//d
const uint8_t bitmap_d_data[5] = {0x08,0x72,0x52,0x94,0x58};
const Bitmap bitmap_d = {5,7,bitmap_d_data};

//E
const uint8_t bitmap_E_data[5] = {0x3f,0x08,0x7e,0x10,0x7c};
const Bitmap bitmap_E = {5,7,bitmap_E_data};

//e
const uint8_t bitmap_e_data[5] = {0x00,0x70,0xe2,0x16,0x78};
const Bitmap bitmap_e = {5,7,bitmap_e_data};

//F
const uint8_t bitmap_F_data[5] = {0x3f,0x08,0x5e,0x10,0x04};
const Bitmap bitmap_F = {5,7,bitmap_F_data};

//f
const uint8_t bitmap_f_data[5] = {0x4c,0x14,0x9e,0x20,0x08};
const Bitmap bitmap_f = {5,7,bitmap_f_data};

//G
const uint8_t bitmap_G_data[5] = {0x2e,0x08,0x7a,0x18,0x3a};
const Bitmap bitmap_G = {5,7,bitmap_G_data};

//g
const uint8_t bitmap_g_data[5] = {0xc0,0x8e,0xa2,0x0e,0x3e};
const Bitmap bitmap_g = {5,7,bitmap_g_data};

//H
const uint8_t bitmap_H_data[5] = {0x31,0x8c,0x7e,0x18,0x46};
const Bitmap bitmap_H = {5,7,bitmap_H_data};

//h
const uint8_t bitmap_h_data[5] = {0x21,0x68,0x66,0x18,0x46};
const Bitmap bitmap_h = {5,7,bitmap_h_data};

//I
const uint8_t bitmap_I_data[5] = {0x9f,0x20,0x08,0x42,0x7c};
const Bitmap bitmap_I = {5,7,bitmap_I_data};

//i
const uint8_t bitmap_i_data[5] = {0x04,0x30,0x08,0x42,0x38};
const Bitmap bitmap_i = {5,7,bitmap_i_data};

//J
const uint8_t bitmap_J_data[5] = {0x1c,0x42,0x10,0x94,0x18};
const Bitmap bitmap_J = {5,7,bitmap_J_data};

//j
const uint8_t bitmap_j_data[5] = {0x08,0x60,0x10,0x94,0x18};
const Bitmap bitmap_j = {5,7,bitmap_j_data};

//K
const uint8_t bitmap_K_data[5] = {0x31,0x2a,0x46,0x92,0x44};
const Bitmap bitmap_K = {5,7,bitmap_K_data};

//k
const uint8_t bitmap_k_data[5] = {0x20,0x48,0xca,0x50,0x64};
const Bitmap bitmap_k = {5,7,bitmap_k_data};

//L
const uint8_t bitmap_L_data[5] = {0x21,0x08,0x42,0x10,0x7c};
const Bitmap bitmap_L = {5,7,bitmap_L_data};

//l
const uint8_t bitmap_l_data[5] = {0x86,0x20,0x08,0x42,0x60};
const Bitmap bitmap_l = {5,7,bitmap_l_data};

//M
const uint8_t bitmap_M_data[5] = {0x71,0xae,0x62,0x18,0x46};
const Bitmap bitmap_M = {5,7,bitmap_M_data};

//m
const uint8_t bitmap_m_data[5] = {0x00,0x58,0x6a,0x5a,0x56};
const Bitmap bitmap_m = {5,7,bitmap_m_data};

//N
const uint8_t bitmap_N_data[5] = {0x71,0xac,0x6a,0x9a,0x46};
const Bitmap bitmap_N = {5,7,bitmap_N_data};

//n
const uint8_t bitmap_n_data[5] = {0x00,0x68,0x66,0x18,0x46};
const Bitmap bitmap_n = {5,7,bitmap_n_data};

//O
const uint8_t bitmap_O_data[5] = {0x2e,0x8c,0x62,0x18,0x3a};
const Bitmap bitmap_O = {5,7,bitmap_O_data};

//o
const uint8_t bitmap_o_data[5] = {0x00,0x70,0x62,0x18,0x3a};
const Bitmap bitmap_o = {5,7,bitmap_o_data};

//P
const uint8_t bitmap_P_data[5] = {0x2f,0x8c,0x5e,0x10,0x04};
const Bitmap bitmap_P = {5,7,bitmap_P_data};

//p
const uint8_t bitmap_p_data[5] = {0xa0,0x9a,0xe2,0x16,0x04};
const Bitmap bitmap_p = {5,7,bitmap_p_data};

//Q
const uint8_t bitmap_Q_data[5] = {0x2e,0x8c,0x62,0x9a,0x58};
const Bitmap bitmap_Q = {5,7,bitmap_Q_data};

//q
const uint8_t bitmap_q_data[5] = {0xc0,0x4a,0x92,0x86,0x60};
const Bitmap bitmap_q = {5,7,bitmap_q_data};

//R
const uint8_t bitmap_R_data[5] = {0x2f,0x8c,0x5e,0x92,0x44};
const Bitmap bitmap_R = {5,7,bitmap_R_data};

//r
const uint8_t bitmap_r_data[5] = {0x00,0x68,0x66,0x10,0x04};
const Bitmap bitmap_r = {5,7,bitmap_r_data};

//S
const uint8_t bitmap_S_data[5] = {0x2e,0x0c,0x1c,0x18,0x3a};
const Bitmap bitmap_S = {5,7,bitmap_S_data};

//s
const uint8_t bitmap_s_data[5] = {0x00,0xf0,0x82,0x06,0x3e};
const Bitmap bitmap_s = {5,7,bitmap_s_data};

//T
const uint8_t bitmap_T_data[5] = {0x9f,0x20,0x08,0x42,0x10};
const Bitmap bitmap_T = {5,7,bitmap_T_data};

//t
const uint8_t bitmap_t_data[5] = {0x42,0x78,0x84,0x20,0x30};
const Bitmap bitmap_t = {5,7,bitmap_t_data};

//U
const uint8_t bitmap_U_data[5] = {0x31,0x8c,0x62,0x18,0x3a};
const Bitmap bitmap_U = {5,7,bitmap_U_data};

//u
const uint8_t bitmap_u_data[5] = {0x00,0x48,0x52,0x94,0x58};
const Bitmap bitmap_u = {5,7,bitmap_u_data};

//V
const uint8_t bitmap_V_data[5] = {0x31,0x8c,0xa2,0xa4,0x10};
const Bitmap bitmap_V = {5,7,bitmap_V_data};

//v
const uint8_t bitmap_v_data[5] = {0x00,0x88,0x62,0xa8,0x10};
const Bitmap bitmap_v = {5,7,bitmap_v_data};

//W
const uint8_t bitmap_W_data[5] = {0x31,0x8c,0x62,0xba,0x46};
const Bitmap bitmap_W = {5,7,bitmap_W_data};

//w
const uint8_t bitmap_w_data[5] = {0x00,0x88,0x62,0xaa,0x28};
const Bitmap bitmap_w = {5,7,bitmap_w_data};

//X
const uint8_t bitmap_X_data[5] = {0x31,0x54,0x88,0x14,0x46};
const Bitmap bitmap_X = {5,7,bitmap_X_data};

//x
const uint8_t bitmap_x_data[5] = {0x00,0x88,0x14,0xa2,0x44};
const Bitmap bitmap_x = {5,7,bitmap_x_data};

//Y
const uint8_t bitmap_Y_data[5] = {0x31,0x54,0x08,0x42,0x10};
const Bitmap bitmap_Y = {5,7,bitmap_Y_data};

//y
const uint8_t bitmap_y_data[5] = {0x00,0x88,0xa2,0x0e,0x3e};
const Bitmap bitmap_y = {5,7,bitmap_y_data};

//Z
const uint8_t bitmap_Z_data[5] = {0x1f,0x44,0x88,0x10,0x7c};
const Bitmap bitmap_Z = {5,7,bitmap_Z_data};

//z
const uint8_t bitmap_z_data[5] = {0x00,0xf8,0x10,0x22,0x7c};
const Bitmap bitmap_z = {5,7,bitmap_z_data};

//n0
const uint8_t bitmap_n0_data[5] = {0x2e,0x9c,0x6a,0x1c,0x3a};
const Bitmap bitmap_n0 = {5,7,bitmap_n0_data};

//n1
const uint8_t bitmap_n1_data[5] = {0xc4,0x28,0x08,0x42,0x7c};
const Bitmap bitmap_n1 = {5,7,bitmap_n1_data};

//n2
const uint8_t bitmap_n2_data[5] = {0x2e,0x84,0x10,0x22,0x7c};
const Bitmap bitmap_n2 = {5,7,bitmap_n2_data};

//n3
const uint8_t bitmap_n3_data[5] = {0x2e,0x84,0x18,0x18,0x3a};
const Bitmap bitmap_n3 = {5,7,bitmap_n3_data};

//n4
const uint8_t bitmap_n4_data[5] = {0x4c,0x4a,0x3e,0x84,0x20};
const Bitmap bitmap_n4 = {5,7,bitmap_n4_data};

//n5
const uint8_t bitmap_n5_data[5] = {0x3f,0x78,0x20,0x18,0x3a};
const Bitmap bitmap_n5 = {5,7,bitmap_n5_data};

//n6
const uint8_t bitmap_n6_data[5] = {0x5c,0x08,0x5c,0x18,0x3a};
const Bitmap bitmap_n6 = {5,7,bitmap_n6_data};

//n7
const uint8_t bitmap_n7_data[5] = {0x1f,0x84,0x10,0x44,0x10};
const Bitmap bitmap_n7 = {5,7,bitmap_n7_data};

//n8
const uint8_t bitmap_n8_data[5] = {0x2e,0x8c,0x5c,0x18,0x3a};
const Bitmap bitmap_n8 = {5,7,bitmap_n8_data};

//n9
const uint8_t bitmap_n9_data[5] = {0x2e,0x8c,0x3c,0x88,0x18};
const Bitmap bitmap_n9 = {5,7,bitmap_n9_data};

//exclimation
const uint8_t bitmap_exclimation_data[5] = {0x84,0x20,0x08,0x02,0x10};
const Bitmap bitmap_exclimation = {5,7,bitmap_exclimation_data};

//dquote
const uint8_t bitmap_dquote_data[5] = {0x4a,0x02,0x00,0x00,0x00};
const Bitmap bitmap_dquote = {5,7,bitmap_dquote_data};

//hashtag
const uint8_t bitmap_hashtag_data[5] = {0x40,0xfa,0xd4,0xae,0x00};
const Bitmap bitmap_hashtag = {5,7,bitmap_hashtag_data};

//dollar
const uint8_t bitmap_dollar_data[5] = {0xae,0x2c,0x1c,0x5a,0x3a};
const Bitmap bitmap_dollar = {5,7,bitmap_dollar_data};

//precent
const uint8_t bitmap_precent_data[5] = {0x73,0x42,0x88,0xa0,0x66};
const Bitmap bitmap_precent = {5,7,bitmap_precent_data};

//and
const uint8_t bitmap_and_data[5] = {0xa2,0x10,0x6a,0x94,0x58};
const Bitmap bitmap_and = {5,7,bitmap_and_data};

//squote
const uint8_t bitmap_squote_data[5] = {0x08,0x02,0x00,0x00,0x00};
const Bitmap bitmap_squote = {5,7,bitmap_squote_data};

//lpar
const uint8_t bitmap_lpar_data[5] = {0x88,0x10,0x84,0x40,0x20};
const Bitmap bitmap_lpar = {5,7,bitmap_lpar_data};

//rpar
const uint8_t bitmap_rpar_data[5] = {0x82,0x40,0x10,0x44,0x08};
const Bitmap bitmap_rpar = {5,7,bitmap_rpar_data};

//star
const uint8_t bitmap_star_data[5] = {0x8a,0x50,0x00,0x00,0x00};
const Bitmap bitmap_star = {5,7,bitmap_star_data};

//plus
const uint8_t bitmap_plus_data[5] = {0x80,0x20,0x3e,0x42,0x00};
const Bitmap bitmap_plus = {5,7,bitmap_plus_data};

//comma
const uint8_t bitmap_comma_data[5] = {0x00,0x00,0x00,0x20,0x04};
const Bitmap bitmap_comma = {5,7,bitmap_comma_data};

//minus
const uint8_t bitmap_minus_data[5] = {0x00,0x00,0x3e,0x00,0x00};
const Bitmap bitmap_minus = {5,7,bitmap_minus_data};

//period
const uint8_t bitmap_period_data[5] = {0x00,0x00,0x00,0x00,0x04};
const Bitmap bitmap_period = {5,7,bitmap_period_data};

//fslash
const uint8_t bitmap_fslash_data[5] = {0x10,0x42,0x88,0x20,0x04};
const Bitmap bitmap_fslash = {5,7,bitmap_fslash_data};

//colon
const uint8_t bitmap_colon_data[5] = {0x00,0x20,0x00,0x40,0x00};
const Bitmap bitmap_colon = {5,7,bitmap_colon_data};

//semicolon
const uint8_t bitmap_semicolon_data[5] = {0x00,0x20,0x00,0x40,0x08};
const Bitmap bitmap_semicolon = {5,7,bitmap_semicolon_data};

//less
const uint8_t bitmap_less_data[5] = {0x10,0x22,0x04,0x82,0x40};
const Bitmap bitmap_less = {5,7,bitmap_less_data};

//equal
const uint8_t bitmap_equal_data[5] = {0x00,0xf8,0xc0,0x0e,0x00};
const Bitmap bitmap_equal = {5,7,bitmap_equal_data};

//greater
const uint8_t bitmap_greater_data[5] = {0x41,0x20,0x10,0x22,0x04};
const Bitmap bitmap_greater = {5,7,bitmap_greater_data};

//question
const uint8_t bitmap_question_data[5] = {0x2e,0x44,0x08,0x02,0x10};
const Bitmap bitmap_question = {5,7,bitmap_question_data};

//at
const uint8_t bitmap_at_data[5] = {0x2e,0xac,0x6a,0x1e,0x38};
const Bitmap bitmap_at = {5,7,bitmap_at_data};

//lsquare
const uint8_t bitmap_lsquare_data[5] = {0x9c,0x20,0x08,0x42,0x70};
const Bitmap bitmap_lsquare = {5,7,bitmap_lsquare_data};

//bslash
const uint8_t bitmap_bslash_data[5] = {0x41,0x10,0x08,0x84,0x40};
const Bitmap bitmap_bslash = {5,7,bitmap_bslash_data};

//rsquare
const uint8_t bitmap_rsquare_data[5] = {0x87,0x20,0x08,0x42,0x1c};
const Bitmap bitmap_rsquare = {5,7,bitmap_rsquare_data};

//carrot
const uint8_t bitmap_carrot_data[5] = {0x44,0x8a,0x00,0x00,0x00};
const Bitmap bitmap_carrot = {5,7,bitmap_carrot_data};

//under
const uint8_t bitmap_under_data[5] = {0x00,0x00,0x00,0x00,0x7c};
const Bitmap bitmap_under = {5,7,bitmap_under_data};

//accent
const uint8_t bitmap_accent_data[5] = {0x41,0x00,0x00,0x00,0x00};
const Bitmap bitmap_accent = {5,7,bitmap_accent_data};

//lcurly
const uint8_t bitmap_lcurly_data[5] = {0x98,0x40,0x08,0x44,0x60};
const Bitmap bitmap_lcurly = {5,7,bitmap_lcurly_data};

//pipe
const uint8_t bitmap_pipe_data[5] = {0x84,0x20,0x08,0x42,0x10};
const Bitmap bitmap_pipe = {5,7,bitmap_pipe_data};

//rcurly
const uint8_t bitmap_rcurly_data[5] = {0x83,0x10,0x88,0x40,0x0c};
const Bitmap bitmap_rcurly = {5,7,bitmap_rcurly_data};

//tilde
const uint8_t bitmap_tilde_data[5] = {0x45,0x02,0x00,0x00,0x00};
const Bitmap bitmap_tilde = {5,7,bitmap_tilde_data};

//Groups

//Font
const Bitmap Font[128] = {bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_space,bitmap_exclimation,bitmap_dquote,bitmap_hashtag,bitmap_dollar,bitmap_precent,bitmap_and,bitmap_squote,bitmap_lpar,bitmap_rpar,bitmap_star,bitmap_plus,bitmap_comma,bitmap_minus,bitmap_period,bitmap_fslash,bitmap_n0,bitmap_n1,bitmap_n2,bitmap_n3,bitmap_n4,bitmap_n5,bitmap_n6,bitmap_n7,bitmap_n8,bitmap_n9,bitmap_colon,bitmap_semicolon,bitmap_less,bitmap_equal,bitmap_greater,bitmap_question,bitmap_at,bitmap_A,bitmap_B,bitmap_C,bitmap_D,bitmap_E,bitmap_F,bitmap_G,bitmap_H,bitmap_I,bitmap_J,bitmap_K,bitmap_L,bitmap_M,bitmap_N,bitmap_O,bitmap_P,bitmap_Q,bitmap_R,bitmap_S,bitmap_T,bitmap_U,bitmap_V,bitmap_W,bitmap_X,bitmap_Y,bitmap_Z,bitmap_lsquare,bitmap_bslash,bitmap_rsquare,bitmap_carrot,bitmap_under,bitmap_accent,bitmap_a,bitmap_b,bitmap_c,bitmap_d,bitmap_e,bitmap_f,bitmap_g,bitmap_h,bitmap_i,bitmap_j,bitmap_k,bitmap_l,bitmap_m,bitmap_n,bitmap_o,bitmap_p,bitmap_q,bitmap_r,bitmap_s,bitmap_t,bitmap_u,bitmap_v,bitmap_w,bitmap_x,bitmap_y,bitmap_z,bitmap_lcurly,bitmap_pipe,bitmap_rcurly,bitmap_tilde,bitmap_space};

