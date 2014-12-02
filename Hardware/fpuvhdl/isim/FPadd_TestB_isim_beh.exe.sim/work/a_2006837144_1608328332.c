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
static const char *ng0 = "/home/alonso/xilinxdev/fpuvhdl/source/adder/fpadd_single_cycle.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
char *ieee_p_3499444699_sub_1594084930451026041_3536714472(char *, char *, char *, char *, int );
char *ieee_p_3499444699_sub_3139053033640941752_3536714472(char *, char *, char *, char *, unsigned char );
char *ieee_p_3499444699_sub_3139053033641013626_3536714472(char *, char *, char *, char *, unsigned char );
char *ieee_p_3499444699_sub_444358469848849405_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_444358469848921279_3536714472(char *, char *, char *, char *, char *, char *);


static void work_a_2006837144_1608328332_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(221, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 4232U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t1 = (t0 + 4712U);
    t9 = *((char **)t1);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t8, t10);
    t12 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t6, t11);
    t1 = (t0 + 17920);
    t13 = (t1 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast(t1);

LAB2:    t17 = (t0 + 17536);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2006837144_1608328332_p_1(char *t0)
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

LAB0:    xsi_set_current_line(225, ng0);

LAB3:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    t3 = (27 - 25);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 17984);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 23U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 17552);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2006837144_1608328332_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(233, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB12;

LAB13:    t4 = (unsigned char)0;

LAB14:    if (t4 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)2);
    if (t10 == 1)
        goto LAB20;

LAB21:    t4 = (unsigned char)0;

LAB22:    if (t4 == 1)
        goto LAB17;

LAB18:    t3 = (unsigned char)0;

LAB19:    if (t3 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB23;

LAB24:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB25;

LAB26:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t9 = (t4 == (unsigned char)3);
    if (t9 == 1)
        goto LAB29;

LAB30:    t3 = (unsigned char)0;

LAB31:    if (t3 != 0)
        goto LAB27;

LAB28:    xsi_set_current_line(262, ng0);
    t1 = (t0 + 18048);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(263, ng0);
    t1 = (t0 + 18112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(264, ng0);
    t1 = (t0 + 18176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 17568);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(234, ng0);
    t1 = (t0 + 18048);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(235, ng0);
    t1 = (t0 + 18112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(236, ng0);
    t1 = (t0 + 18176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(238, ng0);
    t1 = (t0 + 18048);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(239, ng0);
    t1 = (t0 + 18112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(240, ng0);
    t1 = (t0 + 18176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    xsi_set_current_line(242, ng0);
    t1 = (t0 + 18048);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(243, ng0);
    t1 = (t0 + 18112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(244, ng0);
    t1 = (t0 + 18176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB9:    t1 = (t0 + 4392U);
    t6 = *((char **)t1);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB11;

LAB12:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t4 = t12;
    goto LAB14;

LAB15:    xsi_set_current_line(246, ng0);
    t1 = (t0 + 18048);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(247, ng0);
    t1 = (t0 + 18112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(248, ng0);
    t1 = (t0 + 18176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB17:    t1 = (t0 + 4392U);
    t6 = *((char **)t1);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB19;

LAB20:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t4 = t12;
    goto LAB22;

LAB23:    xsi_set_current_line(250, ng0);
    t1 = (t0 + 18048);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(251, ng0);
    t1 = (t0 + 18112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(252, ng0);
    t1 = (t0 + 18176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB25:    xsi_set_current_line(254, ng0);
    t1 = (t0 + 18048);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(255, ng0);
    t1 = (t0 + 18112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(256, ng0);
    t1 = (t0 + 18176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB27:    xsi_set_current_line(258, ng0);
    t1 = (t0 + 18048);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(259, ng0);
    t1 = (t0 + 18112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(260, ng0);
    t1 = (t0 + 18176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB29:    t1 = (t0 + 4712U);
    t5 = *((char **)t1);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB31;

}

static void work_a_2006837144_1608328332_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(275, ng0);

LAB3:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 18240);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 17584);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2006837144_1608328332_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(284, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB10;

LAB11:    t1 = (unsigned char)0;

LAB12:    if (t1 != 0)
        goto LAB8;

LAB9:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t7 = (t5 == (unsigned char)2);
    if (t7 == 1)
        goto LAB18;

LAB19:    t4 = (unsigned char)0;

LAB20:    if (t4 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t7 = (t5 == (unsigned char)2);
    if (t7 == 1)
        goto LAB26;

LAB27:    t4 = (unsigned char)0;

LAB28:    if (t4 == 1)
        goto LAB23;

LAB24:    t1 = (unsigned char)0;

LAB25:    if (t1 != 0)
        goto LAB21;

LAB22:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t7 = (t5 == (unsigned char)3);
    if (t7 == 1)
        goto LAB34;

LAB35:    t4 = (unsigned char)0;

LAB36:    if (t4 == 1)
        goto LAB31;

LAB32:    t1 = (unsigned char)0;

LAB33:    if (t1 != 0)
        goto LAB29;

LAB30:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t7 = (t5 == (unsigned char)3);
    if (t7 == 1)
        goto LAB42;

LAB43:    t4 = (unsigned char)0;

LAB44:    if (t4 == 1)
        goto LAB39;

LAB40:    t1 = (unsigned char)0;

LAB41:    if (t1 != 0)
        goto LAB37;

LAB38:    xsi_set_current_line(303, ng0);
    t2 = (t0 + 18304);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(304, ng0);
    t2 = (t0 + 18368);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB3:    t2 = (t0 + 17600);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(285, ng0);
    t2 = (t0 + 18304);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(286, ng0);
    t2 = (t0 + 18368);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

LAB8:    xsi_set_current_line(288, ng0);
    t2 = (t0 + 18304);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(289, ng0);
    t2 = (t0 + 18368);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB10:    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB12;

LAB13:    xsi_set_current_line(291, ng0);
    t10 = (t0 + 18304);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(292, ng0);
    t2 = (t0 + 18368);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB15:    t2 = (t0 + 5032U);
    t9 = *((char **)t2);
    t14 = (8 - 8);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t9 + t17);
    t18 = *((unsigned char *)t2);
    t19 = (t18 == (unsigned char)2);
    t1 = t19;
    goto LAB17;

LAB18:    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t8 = *((unsigned char *)t6);
    t13 = (t8 == (unsigned char)3);
    t4 = t13;
    goto LAB20;

LAB21:    xsi_set_current_line(294, ng0);
    t10 = (t0 + 18304);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(295, ng0);
    t2 = (t0 + 18368);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB23:    t2 = (t0 + 5032U);
    t9 = *((char **)t2);
    t14 = (8 - 8);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t9 + t17);
    t18 = *((unsigned char *)t2);
    t19 = (t18 == (unsigned char)3);
    t1 = t19;
    goto LAB25;

LAB26:    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t8 = *((unsigned char *)t6);
    t13 = (t8 == (unsigned char)3);
    t4 = t13;
    goto LAB28;

LAB29:    xsi_set_current_line(297, ng0);
    t10 = (t0 + 18304);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(298, ng0);
    t2 = (t0 + 18368);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB31:    t2 = (t0 + 5032U);
    t9 = *((char **)t2);
    t14 = (8 - 8);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t9 + t17);
    t18 = *((unsigned char *)t2);
    t19 = (t18 == (unsigned char)2);
    t1 = t19;
    goto LAB33;

LAB34:    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t8 = *((unsigned char *)t6);
    t13 = (t8 == (unsigned char)2);
    t4 = t13;
    goto LAB36;

LAB37:    xsi_set_current_line(300, ng0);
    t10 = (t0 + 18304);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(301, ng0);
    t2 = (t0 + 18368);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB39:    t2 = (t0 + 5032U);
    t9 = *((char **)t2);
    t14 = (8 - 8);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t9 + t17);
    t18 = *((unsigned char *)t2);
    t19 = (t18 == (unsigned char)3);
    t1 = t19;
    goto LAB41;

LAB42:    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t8 = *((unsigned char *)t6);
    t13 = (t8 == (unsigned char)2);
    t4 = t13;
    goto LAB44;

}

static void work_a_2006837144_1608328332_p_5(char *t0)
{
    char t6[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(321, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3912U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t1 = xsi_base_array_concat(t1, t6, t7, (char)99, t3, (char)99, t5, (char)101);
    t8 = (t0 + 7592U);
    t9 = *((char **)t8);
    t10 = (28 - 28);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t17 = ((IEEE_P_2592010699) + 4000);
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t1, t6, (char)99, t14, (char)101);
    t18 = (t0 + 10448U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t20 = (1U + 1U);
    t21 = (t20 + 1U);
    memcpy(t18, t15, t21);
    xsi_set_current_line(323, ng0);
    t1 = (t0 + 10448U);
    t2 = *((char **)t1);
    t1 = (t0 + 30583);
    t10 = xsi_mem_cmp(t1, t2, 3U);
    if (t10 == 1)
        goto LAB3;

LAB12:    t7 = (t0 + 30586);
    t22 = xsi_mem_cmp(t7, t2, 3U);
    if (t22 == 1)
        goto LAB4;

LAB13:    t9 = (t0 + 30589);
    t23 = xsi_mem_cmp(t9, t2, 3U);
    if (t23 == 1)
        goto LAB5;

LAB14:    t17 = (t0 + 30592);
    t24 = xsi_mem_cmp(t17, t2, 3U);
    if (t24 == 1)
        goto LAB6;

LAB15:    t19 = (t0 + 30595);
    t26 = xsi_mem_cmp(t19, t2, 3U);
    if (t26 == 1)
        goto LAB7;

LAB16:    t27 = (t0 + 30598);
    t29 = xsi_mem_cmp(t27, t2, 3U);
    if (t29 == 1)
        goto LAB8;

LAB17:    t30 = (t0 + 30601);
    t32 = xsi_mem_cmp(t30, t2, 3U);
    if (t32 == 1)
        goto LAB9;

LAB18:    t33 = (t0 + 30604);
    t35 = xsi_mem_cmp(t33, t2, 3U);
    if (t35 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(349, ng0);
    t1 = (t0 + 18432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(350, ng0);
    t1 = (t0 + 18496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:    t1 = (t0 + 17616);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(325, ng0);
    t36 = (t0 + 18432);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)2;
    xsi_driver_first_trans_fast(t36);
    xsi_set_current_line(326, ng0);
    t1 = (t0 + 18496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(328, ng0);
    t1 = (t0 + 18432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(329, ng0);
    t1 = (t0 + 18496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(331, ng0);
    t1 = (t0 + 18432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(332, ng0);
    t1 = (t0 + 18496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(334, ng0);
    t1 = (t0 + 18432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(335, ng0);
    t1 = (t0 + 18496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(337, ng0);
    t1 = (t0 + 18432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(338, ng0);
    t1 = (t0 + 18496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(340, ng0);
    t1 = (t0 + 18432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(341, ng0);
    t1 = (t0 + 18496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(343, ng0);
    t1 = (t0 + 18432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(344, ng0);
    t1 = (t0 + 18496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(346, ng0);
    t1 = (t0 + 18432);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(347, ng0);
    t1 = (t0 + 18496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB20:;
}

static void work_a_2006837144_1608328332_p_6(char *t0)
{
    char t9[16];
    char t11[16];
    char t16[16];
    char t21[16];
    char t23[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    int t18;
    char *t20;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(361, ng0);

LAB3:    t1 = (t0 + 30607);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = (31 - 23);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t16 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 23;
    t17 = (t13 + 4U);
    *((int *)t17) = 0;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 23);
    t15 = (t18 * -1);
    t15 = (t15 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t1, t11, (char)97, t3, t16, (char)101);
    t17 = (t0 + 30609);
    t22 = ((IEEE_P_2592010699) + 4000);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 2;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (2 - 0);
    t15 = (t26 * 1);
    t15 = (t15 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t15;
    t20 = xsi_base_array_concat(t20, t21, t22, (char)97, t8, t9, (char)97, t17, t23, (char)101);
    t15 = (2U + 24U);
    t27 = (t15 + 3U);
    t28 = (29U != t27);
    if (t28 == 1)
        goto LAB5;

LAB6:    t25 = (t0 + 18560);
    t29 = (t25 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t20, 29U);
    xsi_driver_first_trans_fast(t25);

LAB2:    t33 = (t0 + 17632);
    *((int *)t33) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(29U, t27, 0);
    goto LAB6;

}

static void work_a_2006837144_1608328332_p_7(char *t0)
{
    char t9[16];
    char t11[16];
    char t16[16];
    char t21[16];
    char t23[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    int t18;
    char *t20;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(365, ng0);

LAB3:    t1 = (t0 + 30612);
    t3 = (t0 + 3592U);
    t4 = *((char **)t3);
    t5 = (31 - 23);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t16 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 23;
    t17 = (t13 + 4U);
    *((int *)t17) = 0;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 23);
    t15 = (t18 * -1);
    t15 = (t15 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t1, t11, (char)97, t3, t16, (char)101);
    t17 = (t0 + 30614);
    t22 = ((IEEE_P_2592010699) + 4000);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 2;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (2 - 0);
    t15 = (t26 * 1);
    t15 = (t15 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t15;
    t20 = xsi_base_array_concat(t20, t21, t22, (char)97, t8, t9, (char)97, t17, t23, (char)101);
    t15 = (2U + 24U);
    t27 = (t15 + 3U);
    t28 = (29U != t27);
    if (t28 == 1)
        goto LAB5;

LAB6:    t25 = (t0 + 18624);
    t29 = (t25 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t20, 29U);
    xsi_driver_first_trans_fast(t25);

LAB2:    t33 = (t0 + 17648);
    *((int *)t33) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(29U, t27, 0);
    goto LAB6;

}

static void work_a_2006837144_1608328332_p_8(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(369, ng0);
    t2 = (t0 + 5832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 6632U);
    t6 = *((char **)t2);
    t2 = (t0 + 30617);
    t8 = 1;
    if (8U == 8U)
        goto LAB8;

LAB9:    t8 = 0;

LAB10:    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t17 = (t0 + 18688);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 17664);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 18688);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t9 = 0;

LAB11:    if (t9 < 8U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t10 = (t6 + t9);
    t11 = (t2 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB9;

LAB13:    t9 = (t9 + 1);
    goto LAB11;

LAB15:    goto LAB2;

}

static void work_a_2006837144_1608328332_p_9(char *t0)
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

LAB0:    xsi_set_current_line(373, ng0);

LAB3:    t1 = (t0 + 30625);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 29232U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t11 = (1U + 8U);
    t12 = (9U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 18752);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 9U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 17680);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t11, 0);
    goto LAB6;

}

static void work_a_2006837144_1608328332_p_10(char *t0)
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

LAB0:    xsi_set_current_line(377, ng0);

LAB3:    t1 = (t0 + 30626);
    t3 = (t0 + 3432U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 29296U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t11 = (1U + 8U);
    t12 = (9U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 18816);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 9U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 17696);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t11, 0);
    goto LAB6;

}

static void work_a_2006837144_1608328332_p_11(char *t0)
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

LAB0:    xsi_set_current_line(387, ng0);
    t1 = (t0 + 7432U);
    t2 = *((char **)t1);
    t3 = (28 - 28);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 7432U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t0 + 29552U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)99, t7, (char)97, t9, t12, (char)101);
    t13 = (t0 + 10568U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t15 = (1U + 29U);
    memcpy(t13, t8, t15);
    xsi_set_current_line(388, ng0);
    t1 = (t0 + 8072U);
    t2 = *((char **)t1);
    t3 = (28 - 28);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8072U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t0 + 29616U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)99, t7, (char)97, t9, t12, (char)101);
    t13 = (t0 + 10688U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t15 = (1U + 29U);
    memcpy(t13, t8, t15);
    xsi_set_current_line(389, ng0);
    t1 = (t0 + 8232U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (t0 + 10928U);
    t8 = *((char **)t1);
    t1 = (t8 + 0);
    *((unsigned char *)t1) = t7;
    xsi_set_current_line(390, ng0);
    t1 = (t0 + 10568U);
    t2 = *((char **)t1);
    t1 = (t0 + 29680U);
    t8 = (t0 + 10688U);
    t9 = *((char **)t8);
    t8 = (t0 + 29696U);
    t11 = ieee_p_3499444699_sub_444358469848849405_3536714472(IEEE_P_3499444699, t16, t2, t1, t9, t8);
    t12 = (t0 + 10928U);
    t13 = *((char **)t12);
    t7 = *((unsigned char *)t13);
    t12 = ieee_p_3499444699_sub_3139053033640941752_3536714472(IEEE_P_3499444699, t10, t11, t16, t7);
    t14 = (t0 + 10808U);
    t17 = *((char **)t14);
    t14 = (t17 + 0);
    t18 = (t10 + 12U);
    t4 = *((unsigned int *)t18);
    t5 = (1U * t4);
    memcpy(t14, t12, t5);
    xsi_set_current_line(391, ng0);
    t1 = (t0 + 10808U);
    t2 = *((char **)t1);
    t4 = (29 - 28);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t8 = (t16 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 28;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t3 = (0 - 28);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t15;
    t9 = ieee_p_3499444699_sub_1594084930451026041_3536714472(IEEE_P_3499444699, t10, t1, t16, 29);
    t11 = (t10 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    t7 = (29U != t15);
    if (t7 == 1)
        goto LAB2;

LAB3:    t12 = (t0 + 18880);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 29U);
    xsi_driver_first_trans_fast(t12);
    t1 = (t0 + 17712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(29U, t15, 0);
    goto LAB3;

}

static void work_a_2006837144_1608328332_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    static char *nl0[] = {&&LAB5, &&LAB5, &&LAB3, &&LAB4, &&LAB5, &&LAB5, &&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(398, ng0);
    t1 = (t0 + 9672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    xsi_set_current_line(403, ng0);
    t1 = (t0 + 11048U);
    t2 = *((char **)t1);
    t1 = (t0 + 18944);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 17728);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(399, ng0);
    t4 = (t0 + 9992U);
    t5 = *((char **)t4);
    t4 = (t0 + 11048U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    memcpy(t4, t5, 8U);
    goto LAB2;

LAB4:    xsi_set_current_line(400, ng0);
    t1 = (t0 + 10152U);
    t2 = *((char **)t1);
    t1 = (t0 + 11048U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t2, 8U);
    goto LAB2;

LAB5:    xsi_set_current_line(401, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)1, 8U);
    t4 = (t0 + 11048U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    memcpy(t4, t1, 8U);
    goto LAB2;

}

static void work_a_2006837144_1608328332_p_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(405, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 19008);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 17744);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2006837144_1608328332_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(406, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 19072);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 17760);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2006837144_1608328332_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(409, ng0);

LAB3:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9032U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 19136);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 17776);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2006837144_1608328332_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(412, ng0);

LAB3:    t1 = (t0 + 8712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8552U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 19200);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 17792);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2006837144_1608328332_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(415, ng0);

LAB3:    t1 = (t0 + 9832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9512U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 19264);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 17808);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2006837144_1608328332_p_18(char *t0)
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

LAB0:    xsi_set_current_line(424, ng0);
    t1 = (t0 + 7272U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 7272U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t0 + 29536U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)99, t7, (char)97, t9, t12, (char)101);
    t13 = (t0 + 11168U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t15 = (1U + 9U);
    memcpy(t13, t8, t15);
    xsi_set_current_line(425, ng0);
    t1 = (t0 + 7912U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 7912U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t0 + 29600U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)99, t7, (char)97, t9, t12, (char)101);
    t13 = (t0 + 11288U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t15 = (1U + 9U);
    memcpy(t13, t8, t15);
    xsi_set_current_line(426, ng0);
    t1 = (t0 + 8392U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (t0 + 11528U);
    t8 = *((char **)t1);
    t1 = (t8 + 0);
    *((unsigned char *)t1) = t7;
    xsi_set_current_line(427, ng0);
    t1 = (t0 + 11168U);
    t2 = *((char **)t1);
    t1 = (t0 + 29744U);
    t8 = (t0 + 11288U);
    t9 = *((char **)t8);
    t8 = (t0 + 29760U);
    t11 = ieee_p_3499444699_sub_444358469848921279_3536714472(IEEE_P_3499444699, t16, t2, t1, t9, t8);
    t12 = (t0 + 11528U);
    t13 = *((char **)t12);
    t7 = *((unsigned char *)t13);
    t12 = ieee_p_3499444699_sub_3139053033641013626_3536714472(IEEE_P_3499444699, t10, t11, t16, t7);
    t14 = (t0 + 11408U);
    t17 = *((char **)t14);
    t14 = (t17 + 0);
    t18 = (t10 + 12U);
    t4 = *((unsigned int *)t18);
    t5 = (1U * t4);
    memcpy(t14, t12, t5);
    xsi_set_current_line(428, ng0);
    t1 = (t0 + 11408U);
    t2 = *((char **)t1);
    t4 = (9 - 8);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t8 = (t16 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 8;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t3 = (0 - 8);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t15;
    t9 = ieee_p_3499444699_sub_1594084930451026041_3536714472(IEEE_P_3499444699, t10, t1, t16, 9);
    t11 = (t10 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    t7 = (9U != t15);
    if (t7 == 1)
        goto LAB2;

LAB3:    t12 = (t0 + 19328);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 9U);
    xsi_driver_first_trans_fast(t12);
    t1 = (t0 + 17824);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(9U, t15, 0);
    goto LAB3;

}

static void work_a_2006837144_1608328332_p_19(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(432, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t5);
    t7 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 19392);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 17840);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2006837144_1608328332_init()
{
	static char *pe[] = {(void *)work_a_2006837144_1608328332_p_0,(void *)work_a_2006837144_1608328332_p_1,(void *)work_a_2006837144_1608328332_p_2,(void *)work_a_2006837144_1608328332_p_3,(void *)work_a_2006837144_1608328332_p_4,(void *)work_a_2006837144_1608328332_p_5,(void *)work_a_2006837144_1608328332_p_6,(void *)work_a_2006837144_1608328332_p_7,(void *)work_a_2006837144_1608328332_p_8,(void *)work_a_2006837144_1608328332_p_9,(void *)work_a_2006837144_1608328332_p_10,(void *)work_a_2006837144_1608328332_p_11,(void *)work_a_2006837144_1608328332_p_12,(void *)work_a_2006837144_1608328332_p_13,(void *)work_a_2006837144_1608328332_p_14,(void *)work_a_2006837144_1608328332_p_15,(void *)work_a_2006837144_1608328332_p_16,(void *)work_a_2006837144_1608328332_p_17,(void *)work_a_2006837144_1608328332_p_18,(void *)work_a_2006837144_1608328332_p_19};
	xsi_register_didat("work_a_2006837144_1608328332", "isim/FPadd_TestB_isim_beh.exe.sim/work/a_2006837144_1608328332.didat");
	xsi_register_executes(pe);
}
