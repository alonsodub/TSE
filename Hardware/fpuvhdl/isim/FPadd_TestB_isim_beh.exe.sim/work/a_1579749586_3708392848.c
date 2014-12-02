/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/alonso/xilinxdev/fpuvhdl/fpalign_struct.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_970019341842501186_3965413181(char *, char *, char *, int );


static void work_a_1579749586_3708392848_p_0(char *t0)
{
    char t9[16];
    char t10[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 8048U);
    t7 = ieee_p_3620187407_sub_970019341842501186_3965413181(IEEE_P_3620187407, t2, t1, 28);
    if (t7 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5280);
    t11 = (t1 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 29U);
    xsi_driver_first_trans_fast_port(t1);

LAB9:
LAB3:    t1 = (t0 + 5136);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t11 = (t0 + 2152U);
    t12 = *((char **)t11);
    t11 = (t0 + 8048U);
    t13 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t10, t12, t11);
    t14 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t9, t13, t10, 1);
    t15 = ieee_p_3620187407_sub_970019341842501186_3965413181(IEEE_P_3620187407, t14, t9, 28);
    if (t15 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5280);
    t11 = (t1 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 29U);
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(68, ng0);
    t16 = xsi_get_transient_memory(29U);
    memset(t16, 0, 29U);
    t17 = t16;
    memset(t17, (unsigned char)2, 29U);
    t18 = (t0 + 5280);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t16, 29U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB6;

LAB8:    xsi_set_current_line(74, ng0);
    t11 = xsi_get_transient_memory(29U);
    memset(t11, 0, 29U);
    t12 = t11;
    memset(t12, (unsigned char)2, 29U);
    t13 = (t0 + 5280);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t11, 29U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB9;

}

static void work_a_1579749586_3708392848_p_1(char *t0)
{
    char t9[16];
    char t10[16];
    char t16[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t4 = (8 - 5);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t11 = (t0 + 5344);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    t18 = (t17 + 56U);
    t21 = *((char **)t18);
    memcpy(t21, t1, 6U);
    xsi_driver_first_trans_fast(t11);

LAB3:    t1 = (t0 + 5152);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(86, ng0);
    t11 = (t0 + 2152U);
    t12 = *((char **)t11);
    t13 = (8 - 5);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 5;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 5);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t10, t11, t16);
    t21 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t9, t18, t10, 1);
    t22 = (t9 + 12U);
    t20 = *((unsigned int *)t22);
    t23 = (1U * t20);
    t24 = (6U != t23);
    if (t24 == 1)
        goto LAB5;

LAB6:    t25 = (t0 + 5344);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t21, 6U);
    xsi_driver_first_trans_fast(t25);
    goto LAB3;

LAB5:    xsi_size_not_matching(6U, t23, 0);
    goto LAB6;

}

static void work_a_1579749586_3708392848_p_2(char *t0)
{
    char t13[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5408);
    t6 = (t2 + 56U);
    t14 = *((char **)t6);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 9U);
    xsi_driver_first_trans_fast(t2);

LAB3:    t2 = (t0 + 5168);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(97, ng0);
    t14 = (t0 + 1512U);
    t15 = *((char **)t14);
    t14 = (t0 + 7984U);
    t16 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t13, t15, t14, 2);
    t17 = (t13 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (1U * t18);
    t20 = (9U != t19);
    if (t20 == 1)
        goto LAB8;

LAB9:    t21 = (t0 + 5408);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t16, 9U);
    xsi_driver_first_trans_fast(t21);
    goto LAB3;

LAB5:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t7 = (8 - 8);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    xsi_size_not_matching(9U, t19, 0);
    goto LAB9;

}

static void work_a_1579749586_3708392848_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(105, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5472);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 29U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5184);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1579749586_3708392848_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    xsi_set_current_line(113, ng0);
    t1 = xsi_get_transient_memory(29U);
    memset(t1, 0, 29U);
    t2 = t1;
    memset(t2, (unsigned char)1, 29U);
    t3 = (t0 + 2848U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 29U);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 2608U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 6U);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 2848U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 29U);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 8312);
    *((int *)t1) = 5;
    t2 = (t0 + 8316);
    *((int *)t2) = 0;
    t5 = 5;
    t6 = 0;

LAB2:    if (t5 >= t6)
        goto LAB3;

LAB5:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t0 + 5536);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t10 = (t4 + 56U);
    t16 = *((char **)t10);
    memcpy(t16, t2, 29U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5200);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 8312);
    t7 = *((int *)t3);
    t8 = (t7 < 5);
    if (t8 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t1 = (t0 + 8312);
    t7 = *((int *)t1);
    t11 = (t7 - 5);
    t13 = (t11 * -1);
    xsi_vhdl_check_range_of_index(5, 0, -1, *((int *)t1));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t9 = *((unsigned char *)t3);
    t17 = (t9 == (unsigned char)3);
    if (t17 == 1)
        goto LAB23;

LAB24:    t4 = (t0 + 2608U);
    t10 = *((char **)t4);
    t4 = (t0 + 8312);
    t12 = *((int *)t4);
    t21 = (t12 - 5);
    t23 = (t21 * -1);
    xsi_vhdl_check_range_of_index(5, 0, -1, *((int *)t4));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t16 = (t10 + t25);
    t18 = *((unsigned char *)t16);
    t27 = (t18 == (unsigned char)7);
    t8 = t27;

LAB25:    if (t8 != 0)
        goto LAB20;

LAB22:    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t1 = (t0 + 8312);
    t7 = *((int *)t1);
    t11 = (t7 - 5);
    t13 = (t11 * -1);
    xsi_vhdl_check_range_of_index(5, 0, -1, *((int *)t1));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t9 = *((unsigned char *)t3);
    t17 = (t9 == (unsigned char)2);
    if (t17 == 1)
        goto LAB28;

LAB29:    t4 = (t0 + 2608U);
    t10 = *((char **)t4);
    t4 = (t0 + 8312);
    t12 = *((int *)t4);
    t21 = (t12 - 5);
    t23 = (t21 * -1);
    xsi_vhdl_check_range_of_index(5, 0, -1, *((int *)t4));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t16 = (t10 + t25);
    t18 = *((unsigned char *)t16);
    t27 = (t18 == (unsigned char)6);
    t8 = t27;

LAB30:    if (t8 != 0)
        goto LAB26;

LAB27:    xsi_set_current_line(132, ng0);
    t1 = xsi_get_transient_memory(29U);
    memset(t1, 0, 29U);
    t2 = t1;
    memset(t2, (unsigned char)1, 29U);
    t3 = (t0 + 2728U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 29U);

LAB21:
LAB7:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t0 + 2848U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 29U);

LAB4:    t1 = (t0 + 8312);
    t5 = *((int *)t1);
    t2 = (t0 + 8316);
    t6 = *((int *)t2);
    if (t5 == t6)
        goto LAB5;

LAB31:    t7 = (t5 + -1);
    t5 = t7;
    t3 = (t0 + 8312);
    *((int *)t3) = t5;
    goto LAB2;

LAB6:    xsi_set_current_line(118, ng0);
    t4 = (t0 + 2608U);
    t10 = *((char **)t4);
    t4 = (t0 + 8312);
    t11 = *((int *)t4);
    t12 = (t11 - 5);
    t13 = (t12 * -1);
    xsi_vhdl_check_range_of_index(5, 0, -1, *((int *)t4));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t16 = (t10 + t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    if (t18 == 1)
        goto LAB12;

LAB13:    t19 = (t0 + 2608U);
    t20 = *((char **)t19);
    t19 = (t0 + 8312);
    t21 = *((int *)t19);
    t22 = (t21 - 5);
    t23 = (t22 * -1);
    xsi_vhdl_check_range_of_index(5, 0, -1, *((int *)t19));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t26 = (t20 + t25);
    t27 = *((unsigned char *)t26);
    t28 = (t27 == (unsigned char)7);
    t9 = t28;

LAB14:    if (t9 != 0)
        goto LAB9;

LAB11:    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t1 = (t0 + 8312);
    t7 = *((int *)t1);
    t11 = (t7 - 5);
    t13 = (t11 * -1);
    xsi_vhdl_check_range_of_index(5, 0, -1, *((int *)t1));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t9 = *((unsigned char *)t3);
    t17 = (t9 == (unsigned char)2);
    if (t17 == 1)
        goto LAB17;

LAB18:    t4 = (t0 + 2608U);
    t10 = *((char **)t4);
    t4 = (t0 + 8312);
    t12 = *((int *)t4);
    t21 = (t12 - 5);
    t23 = (t21 * -1);
    xsi_vhdl_check_range_of_index(5, 0, -1, *((int *)t4));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t16 = (t10 + t25);
    t18 = *((unsigned char *)t16);
    t27 = (t18 == (unsigned char)6);
    t8 = t27;

LAB19:    if (t8 != 0)
        goto LAB15;

LAB16:    xsi_set_current_line(124, ng0);
    t1 = xsi_get_transient_memory(29U);
    memset(t1, 0, 29U);
    t2 = t1;
    memset(t2, (unsigned char)1, 29U);
    t3 = (t0 + 2728U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 29U);

LAB10:    goto LAB7;

LAB9:    xsi_set_current_line(119, ng0);
    t29 = xsi_get_transient_memory(29U);
    memset(t29, 0, 29U);
    t30 = t29;
    memset(t30, (unsigned char)2, 29U);
    t31 = (t0 + 2728U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    memcpy(t31, t29, 29U);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t13 = (28 - 28);
    t1 = (t0 + 8312);
    t7 = xsi_vhdl_pow(2, *((int *)t1));
    xsi_vhdl_check_range_of_slice(28, 0, -1, 28, t7, -1);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t4 = (t0 + 2728U);
    t10 = *((char **)t4);
    t4 = (t0 + 8312);
    t11 = xsi_vhdl_pow(2, *((int *)t4));
    t12 = (28 - t11);
    t23 = (28 - t12);
    xsi_vhdl_check_range_of_slice(28, 0, -1, t12, 0, -1);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t16 = (t10 + t25);
    t19 = (t0 + 8312);
    t21 = xsi_vhdl_pow(2, *((int *)t19));
    t22 = (t21 - 28);
    t33 = (t22 * -1);
    t33 = (t33 + 1);
    t34 = (1U * t33);
    memcpy(t16, t3, t34);
    goto LAB10;

LAB12:    t9 = (unsigned char)1;
    goto LAB14;

LAB15:    xsi_set_current_line(122, ng0);
    t19 = (t0 + 2848U);
    t20 = *((char **)t19);
    t19 = (t0 + 2728U);
    t26 = *((char **)t19);
    t19 = (t26 + 0);
    memcpy(t19, t20, 29U);
    goto LAB10;

LAB17:    t8 = (unsigned char)1;
    goto LAB19;

LAB20:    xsi_set_current_line(128, ng0);
    t19 = xsi_get_transient_memory(29U);
    memset(t19, 0, 29U);
    t20 = t19;
    memset(t20, (unsigned char)2, 29U);
    t26 = (t0 + 2728U);
    t29 = *((char **)t26);
    t26 = (t29 + 0);
    memcpy(t26, t19, 29U);
    goto LAB21;

LAB23:    t8 = (unsigned char)1;
    goto LAB25;

LAB26:    xsi_set_current_line(130, ng0);
    t19 = (t0 + 2848U);
    t20 = *((char **)t19);
    t19 = (t0 + 2728U);
    t26 = *((char **)t19);
    t19 = (t26 + 0);
    memcpy(t19, t20, 29U);
    goto LAB21;

LAB28:    t8 = (unsigned char)1;
    goto LAB30;

}


extern void work_a_1579749586_3708392848_init()
{
	static char *pe[] = {(void *)work_a_1579749586_3708392848_p_0,(void *)work_a_1579749586_3708392848_p_1,(void *)work_a_1579749586_3708392848_p_2,(void *)work_a_1579749586_3708392848_p_3,(void *)work_a_1579749586_3708392848_p_4};
	xsi_register_didat("work_a_1579749586_3708392848", "isim/FPadd_TestB_isim_beh.exe.sim/work/a_1579749586_3708392848.didat");
	xsi_register_executes(pe);
}
