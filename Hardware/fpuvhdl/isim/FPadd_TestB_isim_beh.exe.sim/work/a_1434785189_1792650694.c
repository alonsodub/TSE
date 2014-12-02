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
static const char *ng0 = "/home/alonso/xilinxdev/fpuvhdl/fpinvert_fpinvert.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);


static void work_a_1434785189_1792650694_p_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
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
    char *t23;

LAB0:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t17 = (t0 + 1032U);
    t18 = *((char **)t17);
    t17 = (t0 + 3768);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 29U);
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t23 = (t0 + 3672);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1032U);
    t6 = *((char **)t1);
    t1 = (t0 + 5704U);
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t5, t6, t1);
    t8 = (t5 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (1U * t9);
    t11 = (29U != t10);
    if (t11 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 3768);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 29U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    xsi_size_not_matching(29U, t10, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_1434785189_1792650694_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
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
    char *t23;

LAB0:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t17 = (t0 + 3832);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 29U);
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t23 = (t0 + 3688);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t1 = (t0 + 5720U);
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t5, t6, t1);
    t8 = (t5 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (1U * t9);
    t11 = (29U != t10);
    if (t11 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 3832);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 29U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB5:    xsi_size_not_matching(29U, t10, 0);
    goto LAB6;

LAB8:    goto LAB2;

}


extern void work_a_1434785189_1792650694_init()
{
	static char *pe[] = {(void *)work_a_1434785189_1792650694_p_0,(void *)work_a_1434785189_1792650694_p_1};
	xsi_register_didat("work_a_1434785189_1792650694", "isim/FPadd_TestB_isim_beh.exe.sim/work/a_1434785189_1792650694.didat");
	xsi_register_executes(pe);
}
