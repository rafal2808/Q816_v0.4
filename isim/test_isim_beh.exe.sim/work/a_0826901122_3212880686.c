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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ja/Desktop/work/FPGA/projekty/DCEQ816/I_O.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0826901122_3212880686_p_0(char *t0)
{
    char *t1;
    int t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1792U);
    t2 = (3 - 3);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, t5);
    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t2 = (0 - 3);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 3808);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    t13 = *((unsigned char *)t7);
    t14 = (t13 == (unsigned char)2);
    if (t14 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(26, ng0);
    t15 = (t0 + 1032U);
    t16 = *((char **)t15);
    t15 = (t0 + 3920);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 8U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB6;

LAB8:    xsi_set_current_line(30, ng0);
    t8 = (t0 + 6188);
    t16 = (t0 + 3920);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB9;

}

static void work_a_0826901122_3212880686_p_1(char *t0)
{
    char *t1;
    int t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1792U);
    t2 = (2 - 3);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 1U, t5);
    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t2 = (0 - 3);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 3824);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    t13 = *((unsigned char *)t7);
    t14 = (t13 == (unsigned char)2);
    if (t14 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(38, ng0);
    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t15 = (t0 + 3984);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 8U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB6;

LAB8:    xsi_set_current_line(42, ng0);
    t8 = (t0 + 6196);
    t16 = (t0 + 3984);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB9;

}

static void work_a_0826901122_3212880686_p_2(char *t0)
{
    char *t1;
    int t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1792U);
    t2 = (1 - 3);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 2U, t5);
    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t2 = (0 - 3);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 3840);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    t13 = *((unsigned char *)t7);
    t14 = (t13 == (unsigned char)2);
    if (t14 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(50, ng0);
    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t15 = (t0 + 4048);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 8U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB6;

LAB8:    xsi_set_current_line(54, ng0);
    t8 = (t0 + 6204);
    t16 = (t0 + 4048);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB9;

}


extern void work_a_0826901122_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0826901122_3212880686_p_0,(void *)work_a_0826901122_3212880686_p_1,(void *)work_a_0826901122_3212880686_p_2};
	xsi_register_didat("work_a_0826901122_3212880686", "isim/test_isim_beh.exe.sim/work/a_0826901122_3212880686.didat");
	xsi_register_executes(pe);
}
