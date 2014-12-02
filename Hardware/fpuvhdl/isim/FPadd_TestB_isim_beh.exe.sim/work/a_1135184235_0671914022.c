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
static const char *ng0 = "/home/alonso/xilinxdev/fpuvhdl/fpselcomplement_fpselcomplement.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_1135184235_0671914022_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(37, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 3448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3352);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1135184235_0671914022_p_1(char *t0)
{
    char t9[16];
    char t10[16];
    char t17[16];
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
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (28 - 28);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (28 - 1);
    t4 = (28 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t11 = (t0 + 3512);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    memcpy(t22, t1, 28U);
    xsi_driver_first_trans_fast_port(t11);

LAB3:    t1 = (t0 + 3368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(42, ng0);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t13 = (28 - 1);
    t14 = (28 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 27;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - 27);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t10, t11, t17);
    t22 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t9, t19, t10, 1);
    t23 = (t9 + 12U);
    t21 = *((unsigned int *)t23);
    t24 = (1U * t21);
    t25 = (28U != t24);
    if (t25 == 1)
        goto LAB5;

LAB6:    t26 = (t0 + 3512);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t22, 28U);
    xsi_driver_first_trans_fast_port(t26);
    goto LAB3;

LAB5:    xsi_size_not_matching(28U, t24, 0);
    goto LAB6;

}


extern void work_a_1135184235_0671914022_init()
{
	static char *pe[] = {(void *)work_a_1135184235_0671914022_p_0,(void *)work_a_1135184235_0671914022_p_1};
	xsi_register_didat("work_a_1135184235_0671914022", "isim/FPadd_TestB_isim_beh.exe.sim/work/a_1135184235_0671914022.didat");
	xsi_register_executes(pe);
}
