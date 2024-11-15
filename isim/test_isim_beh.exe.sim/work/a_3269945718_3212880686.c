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
static const char *ng0 = "C:/Users/ja/Desktop/work/FPGA/projekty/DCEQ816/CORE_MS2.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3269945718_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(55, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (8 - 9);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6360);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_delta(t8, 1U, 1, 0LL);

LAB2:    t13 = (t0 + 6168);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3269945718_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (9 - 9);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6424);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_delta(t8, 0U, 1, 0LL);

LAB2:    t13 = (t0 + 6184);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3269945718_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 10136);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 10138);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 10140);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 6488);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(58, ng0);

LAB15:    t2 = (t0 + 6200);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(59, ng0);
    t12 = (t0 + 1032U);
    t13 = *((char **)t12);
    t12 = (t0 + 6488);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t13, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB4;

LAB6:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6488);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6488);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB12:;
LAB13:    t3 = (t0 + 6200);
    *((int *)t3) = 0;
    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}

static void work_a_3269945718_3212880686_p_3(char *t0)
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

LAB0:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1472U);
    t2 = (3 - 9);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 6U, t5);
    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t2 = (7 - 9);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 6216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(69, ng0);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = (7 - 9);
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

LAB5:    xsi_set_current_line(70, ng0);
    t15 = (t0 + 2792U);
    t16 = *((char **)t15);
    t15 = (t0 + 6552);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 8U);
    xsi_driver_first_trans_fast(t15);
    goto LAB6;

LAB8:    xsi_set_current_line(74, ng0);
    t8 = (t0 + 10142);
    t16 = (t0 + 6552);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

}

static void work_a_3269945718_3212880686_p_4(char *t0)
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

LAB0:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1472U);
    t2 = (2 - 9);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 7U, t5);
    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t2 = (6 - 9);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 6232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(83, ng0);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = (6 - 9);
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

LAB5:    xsi_set_current_line(84, ng0);
    t15 = (t0 + 1992U);
    t16 = *((char **)t15);
    t15 = (t0 + 6616);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 8U);
    xsi_driver_first_trans_fast(t15);
    goto LAB6;

LAB8:    xsi_set_current_line(88, ng0);
    t8 = (t0 + 10150);
    t16 = (t0 + 6616);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

}

static void work_a_3269945718_3212880686_p_5(char *t0)
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
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1472U);
    t2 = (1 - 9);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 8U, t5);
    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t2 = (5 - 9);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 6248);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(97, ng0);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = (5 - 9);
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

LAB5:    xsi_set_current_line(98, ng0);
    t15 = (t0 + 1992U);
    t16 = *((char **)t15);
    t17 = (0 - 7);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t15 = (t16 + t20);
    t21 = *((unsigned char *)t15);
    t22 = (t0 + 6680);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t21;
    xsi_driver_first_trans_delta(t22, 3U, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1992U);
    t7 = *((char **)t1);
    t2 = (1 - 7);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t8 = (t0 + 6680);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t6;
    xsi_driver_first_trans_delta(t8, 2U, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1992U);
    t7 = *((char **)t1);
    t2 = (2 - 7);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t8 = (t0 + 6680);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t6;
    xsi_driver_first_trans_delta(t8, 1U, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1992U);
    t7 = *((char **)t1);
    t2 = (3 - 7);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t8 = (t0 + 6680);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t6;
    xsi_driver_first_trans_delta(t8, 0U, 1, 0LL);
    goto LAB6;

LAB8:    xsi_set_current_line(105, ng0);
    t8 = (t0 + 10158);
    t16 = (t0 + 6680);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t8, 4U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

}

static void work_a_3269945718_3212880686_p_6(char *t0)
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

LAB0:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1472U);
    t2 = (0 - 9);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 9U, t5);
    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t2 = (4 - 9);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 6264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(114, ng0);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = (4 - 9);
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

LAB5:    xsi_set_current_line(115, ng0);
    t15 = (t0 + 2472U);
    t16 = *((char **)t15);
    t15 = (t0 + 6744);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 4U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB6;

LAB8:    xsi_set_current_line(119, ng0);
    t8 = (t0 + 10162);
    t16 = (t0 + 6744);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 4U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB9;

}

static void work_a_3269945718_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(124, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 6808);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6280);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3269945718_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3269945718_3212880686_p_0,(void *)work_a_3269945718_3212880686_p_1,(void *)work_a_3269945718_3212880686_p_2,(void *)work_a_3269945718_3212880686_p_3,(void *)work_a_3269945718_3212880686_p_4,(void *)work_a_3269945718_3212880686_p_5,(void *)work_a_3269945718_3212880686_p_6,(void *)work_a_3269945718_3212880686_p_7};
	xsi_register_didat("work_a_3269945718_3212880686", "isim/test_isim_beh.exe.sim/work/a_3269945718_3212880686.didat");
	xsi_register_executes(pe);
}
