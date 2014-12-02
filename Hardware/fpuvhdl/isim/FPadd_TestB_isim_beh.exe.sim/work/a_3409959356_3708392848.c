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
static const char *ng0 = "/home/alonso/xilinxdev/fpuvhdl/fpadd_normalize_struct.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
char *ieee_p_3499444699_sub_1594084930451026041_3536714472(char *, char *, char *, char *, int );
char *ieee_p_3499444699_sub_3139053033640941752_3536714472(char *, char *, char *, char *, unsigned char );
char *ieee_p_3499444699_sub_3139053033641013626_3536714472(char *, char *, char *, char *, unsigned char );
char *ieee_p_3499444699_sub_444358469848921279_3536714472(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_3499444699_sub_451701196464582166_3536714472(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_1306455576380142462_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096238868_3965413181(char *, char *, char *, char *, int );


static void work_a_3409959356_3708392848_p_0(char *t0)
{
    char t7[16];
    char t9[16];
    char t28[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (27 - 27);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t8 = ((IEEE_P_2592010699) + 4000);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 27;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (2 - 27);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t6 = xsi_base_array_concat(t6, t7, t8, (char)99, (unsigned char)2, (char)97, t1, t9, (char)101);
    t11 = (t0 + 1192U);
    t14 = *((char **)t11);
    t15 = (1 - 27);
    t13 = (t15 * -1);
    t16 = (1U * t13);
    t17 = (0 + t16);
    t11 = (t14 + t17);
    t18 = *((unsigned char *)t11);
    t19 = (t0 + 1192U);
    t20 = *((char **)t19);
    t21 = (0 - 27);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t19 = (t20 + t24);
    t25 = *((unsigned char *)t19);
    t26 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t18, t25);
    t29 = ((IEEE_P_2592010699) + 4000);
    t27 = xsi_base_array_concat(t27, t28, t29, (char)97, t6, t7, (char)99, t26, (char)101);
    t30 = (1U + 26U);
    t31 = (t30 + 1U);
    t32 = (28U != t31);
    if (t32 == 1)
        goto LAB5;

LAB6:    t33 = (t0 + 9128);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t27, 28U);
    xsi_driver_first_trans_fast(t33);

LAB2:    t38 = (t0 + 8904);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(28U, t31, 0);
    goto LAB6;

}

static void work_a_3409959356_3708392848_p_1(char *t0)
{
    char t5[16];
    char t7[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(89, ng0);

LAB3:    t1 = (t0 + 14817);
    t3 = (t0 + 2792U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 14344U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t11 = (3U + 5U);
    t12 = (8U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 9192);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 8U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 8920);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t11, 0);
    goto LAB6;

}

static void work_a_3409959356_3708392848_p_2(char *t0)
{
    char t6[16];
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 14344U);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 14200U);
    t5 = ieee_p_3499444699_sub_451701196464582166_3536714472(IEEE_P_3499444699, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 9256);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 9320);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 8936);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(95, ng0);
    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t9 = (7 - 4);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t7 = (t8 + t11);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 4;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 4);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = ieee_p_3620187407_sub_2255506239096238868_3965413181(IEEE_P_3620187407, t6, t7, t12, 1);
    t17 = (t6 + 12U);
    t16 = *((unsigned int *)t17);
    t18 = (1U * t16);
    t19 = (5U != t18);
    if (t19 == 1)
        goto LAB5;

LAB6:    t20 = (t0 + 9256);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t14, 5U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 9320);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_size_not_matching(5U, t18, 0);
    goto LAB6;

}

static void work_a_3409959356_3708392848_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;

LAB0:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 9384);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 9448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 28U);
    xsi_driver_first_trans_fast_port(t1);

LAB12:
LAB6:
LAB3:    t1 = (t0 + 8952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 14820);
    t6 = (t0 + 9384);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 9448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 28U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t11 = (27 - 27);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t5 + t14);
    t15 = *((unsigned char *)t1);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9384);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 9448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 28U);
    xsi_driver_first_trans_fast_port(t1);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(114, ng0);
    t6 = (t0 + 1992U);
    t7 = *((char **)t6);
    t6 = (t0 + 9384);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 9448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 28U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB9;

LAB11:    xsi_set_current_line(123, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 9384);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 9448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 28U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB12;

}

static void work_a_3409959356_3708392848_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(135, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t5 = (27 - 27);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    t9 = *((unsigned char *)t1);
    t10 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t9);
    t11 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t10);
    t12 = (t0 + 9512);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 8968);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3409959356_3708392848_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(139, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (27 - 26);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 9576);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 27U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 8984);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3409959356_3708392848_p_6(char *t0)
{
    char t23[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(145, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = (27 - 27);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)2);
    if (t10 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = (27 - 27);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)2);
    if (t10 == 1)
        goto LAB16;

LAB17:    t2 = (unsigned char)0;

LAB18:    if (t2 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 9640);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(153, ng0);
    t3 = (t0 + 9704);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);

LAB3:    t3 = (t0 + 9000);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(146, ng0);
    t25 = (t0 + 9640);
    t29 = (t25 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)3;
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(147, ng0);
    t3 = (t0 + 9704);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

LAB5:    t19 = (t0 + 1032U);
    t20 = *((char **)t19);
    t19 = (t0 + 14200U);
    t21 = (t0 + 14828);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 7;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (7 - 0);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t28 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t20, t19, t21, t23);
    t1 = t28;
    goto LAB7;

LAB8:    t11 = (t0 + 1192U);
    t12 = *((char **)t11);
    t13 = (26 - 27);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = (t17 == (unsigned char)2);
    t2 = t18;
    goto LAB10;

LAB11:    xsi_set_current_line(149, ng0);
    t25 = (t0 + 9640);
    t29 = (t25 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)2;
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(150, ng0);
    t3 = (t0 + 9704);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

LAB13:    t19 = (t0 + 1032U);
    t20 = *((char **)t19);
    t19 = (t0 + 14200U);
    t21 = (t0 + 14836);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 7;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (7 - 0);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t28 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t20, t19, t21, t23);
    t1 = t28;
    goto LAB15;

LAB16:    t11 = (t0 + 1192U);
    t12 = *((char **)t11);
    t13 = (26 - 27);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = (t17 == (unsigned char)2);
    t2 = t18;
    goto LAB18;

}

static void work_a_3409959356_3708392848_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(159, ng0);

LAB3:    t1 = (t0 + 9768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3409959356_3708392848_p_8(char *t0)
{
    char t10[16];
    char t16[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4288U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(168, ng0);
    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    t4 = (7 - 7);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t3 = (t0 + 4288U);
    t9 = *((char **)t3);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t0 + 14424U);
    t3 = xsi_base_array_concat(t3, t10, t11, (char)99, t8, (char)97, t9, t12, (char)101);
    t13 = (t0 + 4048U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t15 = (1U + 8U);
    memcpy(t13, t3, t15);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 14392U);
    t3 = ieee_p_3499444699_sub_3139053033640941752_3536714472(IEEE_P_3499444699, t10, t2, t1, (unsigned char)3);
    t9 = (t0 + 4168U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    t12 = (t10 + 12U);
    t5 = *((unsigned int *)t12);
    t6 = (1U * t5);
    memcpy(t9, t3, t6);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    t5 = (8 - 7);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t16 + 0U);
    t9 = (t3 + 0U);
    *((int *)t9) = 7;
    t9 = (t3 + 4U);
    *((int *)t9) = 0;
    t9 = (t3 + 8U);
    *((int *)t9) = -1;
    t4 = (0 - 7);
    t15 = (t4 * -1);
    t15 = (t15 + 1);
    t9 = (t3 + 12U);
    *((unsigned int *)t9) = t15;
    t9 = ieee_p_3499444699_sub_1594084930451026041_3536714472(IEEE_P_3499444699, t10, t1, t16, 8);
    t11 = (t10 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    t8 = (8U != t15);
    if (t8 == 1)
        goto LAB2;

LAB3:    t12 = (t0 + 9832);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 8U);
    xsi_driver_first_trans_fast(t12);
    t1 = (t0 + 9016);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(8U, t15, 0);
    goto LAB3;

}

static void work_a_3409959356_3708392848_p_9(char *t0)
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
    int t33;
    unsigned int t34;
    unsigned int t35;

LAB0:    xsi_set_current_line(179, ng0);
    t1 = xsi_get_transient_memory(28U);
    memset(t1, 0, 28U);
    t2 = t1;
    memset(t2, (unsigned char)1, 28U);
    t3 = (t0 + 4648U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 28U);
    xsi_set_current_line(180, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 4408U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 5U);
    xsi_set_current_line(181, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 4648U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 28U);
    xsi_set_current_line(182, ng0);
    t1 = (t0 + 14844);
    *((int *)t1) = 4;
    t2 = (t0 + 14848);
    *((int *)t2) = 0;
    t5 = 4;
    t6 = 0;

LAB2:    if (t5 >= t6)
        goto LAB3;

LAB5:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    t1 = (t0 + 9896);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t10 = (t4 + 56U);
    t16 = *((char **)t10);
    memcpy(t16, t2, 28U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 9032);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(183, ng0);
    t3 = (t0 + 14844);
    t7 = *((int *)t3);
    t8 = (t7 < 5);
    if (t8 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(193, ng0);
    t1 = (t0 + 4408U);
    t2 = *((char **)t1);
    t1 = (t0 + 14844);
    t7 = *((int *)t1);
    t11 = (t7 - 4);
    t13 = (t11 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t1));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t9 = *((unsigned char *)t3);
    t17 = (t9 == (unsigned char)3);
    if (t17 == 1)
        goto LAB23;

LAB24:    t4 = (t0 + 4408U);
    t10 = *((char **)t4);
    t4 = (t0 + 14844);
    t12 = *((int *)t4);
    t21 = (t12 - 4);
    t23 = (t21 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t4));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t16 = (t10 + t25);
    t18 = *((unsigned char *)t16);
    t27 = (t18 == (unsigned char)7);
    t8 = t27;

LAB25:    if (t8 != 0)
        goto LAB20;

LAB22:    t1 = (t0 + 4408U);
    t2 = *((char **)t1);
    t1 = (t0 + 14844);
    t7 = *((int *)t1);
    t11 = (t7 - 4);
    t13 = (t11 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t1));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t9 = *((unsigned char *)t3);
    t17 = (t9 == (unsigned char)2);
    if (t17 == 1)
        goto LAB28;

LAB29:    t4 = (t0 + 4408U);
    t10 = *((char **)t4);
    t4 = (t0 + 14844);
    t12 = *((int *)t4);
    t21 = (t12 - 4);
    t23 = (t21 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t4));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t16 = (t10 + t25);
    t18 = *((unsigned char *)t16);
    t27 = (t18 == (unsigned char)6);
    t8 = t27;

LAB30:    if (t8 != 0)
        goto LAB26;

LAB27:    xsi_set_current_line(198, ng0);
    t1 = xsi_get_transient_memory(28U);
    memset(t1, 0, 28U);
    t2 = t1;
    memset(t2, (unsigned char)1, 28U);
    t3 = (t0 + 4528U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 28U);

LAB21:
LAB7:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    t1 = (t0 + 4648U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 28U);

LAB4:    t1 = (t0 + 14844);
    t5 = *((int *)t1);
    t2 = (t0 + 14848);
    t6 = *((int *)t2);
    if (t5 == t6)
        goto LAB5;

LAB31:    t7 = (t5 + -1);
    t5 = t7;
    t3 = (t0 + 14844);
    *((int *)t3) = t5;
    goto LAB2;

LAB6:    xsi_set_current_line(184, ng0);
    t4 = (t0 + 4408U);
    t10 = *((char **)t4);
    t4 = (t0 + 14844);
    t11 = *((int *)t4);
    t12 = (t11 - 4);
    t13 = (t12 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t4));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t16 = (t10 + t15);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    if (t18 == 1)
        goto LAB12;

LAB13:    t19 = (t0 + 4408U);
    t20 = *((char **)t19);
    t19 = (t0 + 14844);
    t21 = *((int *)t19);
    t22 = (t21 - 4);
    t23 = (t22 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t19));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t26 = (t20 + t25);
    t27 = *((unsigned char *)t26);
    t28 = (t27 == (unsigned char)7);
    t9 = t28;

LAB14:    if (t9 != 0)
        goto LAB9;

LAB11:    t1 = (t0 + 4408U);
    t2 = *((char **)t1);
    t1 = (t0 + 14844);
    t7 = *((int *)t1);
    t11 = (t7 - 4);
    t13 = (t11 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t1));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t9 = *((unsigned char *)t3);
    t17 = (t9 == (unsigned char)2);
    if (t17 == 1)
        goto LAB17;

LAB18:    t4 = (t0 + 4408U);
    t10 = *((char **)t4);
    t4 = (t0 + 14844);
    t12 = *((int *)t4);
    t21 = (t12 - 4);
    t23 = (t21 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t4));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t16 = (t10 + t25);
    t18 = *((unsigned char *)t16);
    t27 = (t18 == (unsigned char)6);
    t8 = t27;

LAB19:    if (t8 != 0)
        goto LAB15;

LAB16:    xsi_set_current_line(190, ng0);
    t1 = xsi_get_transient_memory(28U);
    memset(t1, 0, 28U);
    t2 = t1;
    memset(t2, (unsigned char)1, 28U);
    t3 = (t0 + 4528U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 28U);

LAB10:    goto LAB7;

LAB9:    xsi_set_current_line(185, ng0);
    t29 = xsi_get_transient_memory(28U);
    memset(t29, 0, 28U);
    t30 = t29;
    memset(t30, (unsigned char)2, 28U);
    t31 = (t0 + 4528U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    memcpy(t31, t29, 28U);
    xsi_set_current_line(186, ng0);
    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    t1 = (t0 + 14844);
    t7 = xsi_vhdl_pow(2, *((int *)t1));
    t11 = (27 - t7);
    t13 = (27 - t11);
    xsi_vhdl_check_range_of_slice(27, 0, -1, t11, 0, -1);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t4 = (t0 + 4528U);
    t10 = *((char **)t4);
    t23 = (27 - 27);
    t4 = (t0 + 14844);
    t12 = xsi_vhdl_pow(2, *((int *)t4));
    xsi_vhdl_check_range_of_slice(27, 0, -1, 27, t12, -1);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t16 = (t10 + t25);
    t19 = (t0 + 14844);
    t21 = xsi_vhdl_pow(2, *((int *)t19));
    t22 = (27 - t21);
    t33 = (0 - t22);
    t34 = (t33 * -1);
    t34 = (t34 + 1);
    t35 = (1U * t34);
    memcpy(t16, t3, t35);
    goto LAB10;

LAB12:    t9 = (unsigned char)1;
    goto LAB14;

LAB15:    xsi_set_current_line(188, ng0);
    t19 = (t0 + 4648U);
    t20 = *((char **)t19);
    t19 = (t0 + 4528U);
    t26 = *((char **)t19);
    t19 = (t26 + 0);
    memcpy(t19, t20, 28U);
    goto LAB10;

LAB17:    t8 = (unsigned char)1;
    goto LAB19;

LAB20:    xsi_set_current_line(194, ng0);
    t19 = xsi_get_transient_memory(28U);
    memset(t19, 0, 28U);
    t20 = t19;
    memset(t20, (unsigned char)2, 28U);
    t26 = (t0 + 4528U);
    t29 = *((char **)t26);
    t26 = (t29 + 0);
    memcpy(t26, t19, 28U);
    goto LAB21;

LAB23:    t8 = (unsigned char)1;
    goto LAB25;

LAB26:    xsi_set_current_line(196, ng0);
    t19 = (t0 + 4648U);
    t20 = *((char **)t19);
    t19 = (t0 + 4528U);
    t26 = *((char **)t19);
    t19 = (t26 + 0);
    memcpy(t19, t20, 28U);
    goto LAB21;

LAB28:    t8 = (unsigned char)1;
    goto LAB30;

}

static void work_a_3409959356_3708392848_p_10(char *t0)
{
    char t10[16];
    char t16[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(213, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t0 + 14200U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)99, t7, (char)97, t9, t12, (char)101);
    t13 = (t0 + 4768U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t15 = (1U + 8U);
    memcpy(t13, t8, t15);
    xsi_set_current_line(214, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2472U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t0 + 14328U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)99, t7, (char)97, t9, t12, (char)101);
    t13 = (t0 + 4888U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t15 = (1U + 8U);
    memcpy(t13, t8, t15);
    xsi_set_current_line(215, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (t0 + 5128U);
    t8 = *((char **)t1);
    t1 = (t8 + 0);
    *((unsigned char *)t1) = t7;
    xsi_set_current_line(216, ng0);
    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    t1 = (t0 + 14488U);
    t8 = (t0 + 4888U);
    t9 = *((char **)t8);
    t8 = (t0 + 14504U);
    t11 = ieee_p_3499444699_sub_444358469848921279_3536714472(IEEE_P_3499444699, t16, t2, t1, t9, t8);
    t12 = (t0 + 5128U);
    t13 = *((char **)t12);
    t7 = *((unsigned char *)t13);
    t12 = ieee_p_3499444699_sub_3139053033641013626_3536714472(IEEE_P_3499444699, t10, t11, t16, t7);
    t14 = (t0 + 5008U);
    t17 = *((char **)t14);
    t14 = (t17 + 0);
    t18 = (t10 + 12U);
    t4 = *((unsigned int *)t18);
    t5 = (1U * t4);
    memcpy(t14, t12, t5);
    xsi_set_current_line(217, ng0);
    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    t4 = (8 - 7);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t8 = (t16 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t3 = (0 - 7);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t15;
    t9 = ieee_p_3499444699_sub_1594084930451026041_3536714472(IEEE_P_3499444699, t10, t1, t16, 8);
    t11 = (t10 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    t7 = (8U != t15);
    if (t7 == 1)
        goto LAB2;

LAB3:    t12 = (t0 + 9960);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 8U);
    xsi_driver_first_trans_fast(t12);
    t1 = (t0 + 9048);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(8U, t15, 0);
    goto LAB3;

}


extern void work_a_3409959356_3708392848_init()
{
	static char *pe[] = {(void *)work_a_3409959356_3708392848_p_0,(void *)work_a_3409959356_3708392848_p_1,(void *)work_a_3409959356_3708392848_p_2,(void *)work_a_3409959356_3708392848_p_3,(void *)work_a_3409959356_3708392848_p_4,(void *)work_a_3409959356_3708392848_p_5,(void *)work_a_3409959356_3708392848_p_6,(void *)work_a_3409959356_3708392848_p_7,(void *)work_a_3409959356_3708392848_p_8,(void *)work_a_3409959356_3708392848_p_9,(void *)work_a_3409959356_3708392848_p_10};
	xsi_register_didat("work_a_3409959356_3708392848", "isim/FPadd_TestB_isim_beh.exe.sim/work/a_3409959356_3708392848.didat");
	xsi_register_executes(pe);
}
