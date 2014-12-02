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
static const char *ng0 = "/home/alonso/xilinxdev/fpuvhdl/fpround_fpround.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_0162971107_0623859641_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(36, ng0);

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

static void work_a_0162971107_0623859641_p_1(char *t0)
{
    char t15[16];
    char t16[16];
    char t19[16];
    char t20[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t17;
    unsigned int t18;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (2 - 27);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (28 - 1);
    t4 = (27 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t9 = (t16 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 27;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t17 = (3 - 27);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t18;
    t10 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t15, t1, t16, 1);
    t11 = (t0 + 5392);
    t14 = ((IEEE_P_2592010699) + 4000);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 2;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (2 - 0);
    t18 = (t23 * 1);
    t18 = (t18 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t18;
    t13 = xsi_base_array_concat(t13, t19, t14, (char)97, t10, t15, (char)97, t11, t20, (char)101);
    t22 = (t15 + 12U);
    t18 = *((unsigned int *)t22);
    t24 = (1U * t18);
    t25 = (t24 + 3U);
    t7 = (28U != t25);
    if (t7 == 1)
        goto LAB5;

LAB6:    t26 = (t0 + 3512);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t13, 28U);
    xsi_driver_first_trans_fast_port(t26);

LAB3:    t1 = (t0 + 3368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t9 = (t0 + 1032U);
    t10 = *((char **)t9);
    t9 = (t0 + 3512);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 28U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB3;

LAB5:    xsi_size_not_matching(28U, t25, 0);
    goto LAB6;

}


extern void work_a_0162971107_0623859641_init()
{
	static char *pe[] = {(void *)work_a_0162971107_0623859641_p_0,(void *)work_a_0162971107_0623859641_p_1};
	xsi_register_didat("work_a_0162971107_0623859641", "isim/FPadd_TestB_isim_beh.exe.sim/work/a_0162971107_0623859641.didat");
	xsi_register_executes(pe);
}
