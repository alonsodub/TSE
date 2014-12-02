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
static const char *ng0 = "/home/alonso/xilinxdev/fpuvhdl/fpnormalize_fpnormalize.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_2113763661_1163036994_p_0(char *t0)
{
    char t17[16];
    char t19[16];
    char t38[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (28 - 1);
    t4 = (t3 - 27);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 3184);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t16 = (t11 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t2, 28U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 3248);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t16 = (t11 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 3104);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(40, ng0);
    t10 = (t0 + 1032U);
    t11 = *((char **)t10);
    t12 = (28 - 1);
    t13 = (27 - t12);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t18 = ((IEEE_P_2592010699) + 4000);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 27;
    t21 = (t20 + 4U);
    *((int *)t21) = 2;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t22 = (2 - 27);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)99, (unsigned char)2, (char)97, t10, t19, (char)101);
    t21 = (t0 + 1032U);
    t24 = *((char **)t21);
    t25 = (1 - 27);
    t23 = (t25 * -1);
    t26 = (1U * t23);
    t27 = (0 + t26);
    t21 = (t24 + t27);
    t28 = *((unsigned char *)t21);
    t29 = (t0 + 1032U);
    t30 = *((char **)t29);
    t31 = (0 - 27);
    t32 = (t31 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t29 = (t30 + t34);
    t35 = *((unsigned char *)t29);
    t36 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t28, t35);
    t39 = ((IEEE_P_2592010699) + 4000);
    t37 = xsi_base_array_concat(t37, t38, t39, (char)97, t16, t17, (char)99, t36, (char)101);
    t40 = (1U + 26U);
    t41 = (t40 + 1U);
    t42 = (28U != t41);
    if (t42 == 1)
        goto LAB5;

LAB6:    t43 = (t0 + 3184);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t37, 28U);
    xsi_driver_first_trans_fast_port(t43);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5048U);
    t10 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t17, t2, t1, 1);
    t11 = (t17 + 12U);
    t5 = *((unsigned int *)t11);
    t6 = (1U * t5);
    t8 = (8U != t6);
    if (t8 == 1)
        goto LAB7;

LAB8:    t16 = (t0 + 3248);
    t18 = (t16 + 56U);
    t20 = *((char **)t18);
    t21 = (t20 + 56U);
    t24 = *((char **)t21);
    memcpy(t24, t10, 8U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB3;

LAB5:    xsi_size_not_matching(28U, t41, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(8U, t6, 0);
    goto LAB8;

}


extern void work_a_2113763661_1163036994_init()
{
	static char *pe[] = {(void *)work_a_2113763661_1163036994_p_0};
	xsi_register_didat("work_a_2113763661_1163036994", "isim/FPadd_TestB_isim_beh.exe.sim/work/a_2113763661_1163036994.didat");
	xsi_register_executes(pe);
}
