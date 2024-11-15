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
static const char *ng0 = "C:/Users/ja/Desktop/work/FPGA/projekty/DCEQ816/DCE_Q816.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_2079906387_3212880686_p_0(char *t0)
{
    char t3[16];
    char *t1;
    unsigned char t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 1952U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5816);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(122, ng0);
    t4 = (t0 + 3432U);
    t5 = *((char **)t4);
    t4 = (t0 + 9812U);
    t6 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t3, t5, t4, 1);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (22U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 5944);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 22U);
    xsi_driver_first_trans_fast(t11);
    goto LAB3;

LAB5:    xsi_size_not_matching(22U, t9, 0);
    goto LAB6;

}

static void work_a_2079906387_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(126, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 6008);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 5832);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2079906387_3212880686_p_2(char *t0)
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
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    int t38;
    char *t39;
    int t41;
    char *t42;
    int t44;
    char *t45;
    int t47;
    char *t48;
    int t50;
    char *t51;
    int t53;
    char *t54;
    int t56;
    char *t57;
    int t59;
    char *t60;
    int t62;
    char *t63;
    int t65;
    char *t66;
    int t68;
    char *t69;
    int t71;
    char *t72;
    char *t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned char t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;

LAB0:    t1 = (t0 + 5248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 9947);
    t5 = xsi_mem_cmp(t2, t3, 8U);
    if (t5 == 1)
        goto LAB5;

LAB29:    t6 = (t0 + 9955);
    t8 = xsi_mem_cmp(t6, t3, 8U);
    if (t8 == 1)
        goto LAB6;

LAB30:    t9 = (t0 + 9963);
    t11 = xsi_mem_cmp(t9, t3, 8U);
    if (t11 == 1)
        goto LAB7;

LAB31:    t12 = (t0 + 9971);
    t14 = xsi_mem_cmp(t12, t3, 8U);
    if (t14 == 1)
        goto LAB8;

LAB32:    t15 = (t0 + 9979);
    t17 = xsi_mem_cmp(t15, t3, 8U);
    if (t17 == 1)
        goto LAB9;

LAB33:    t18 = (t0 + 9987);
    t20 = xsi_mem_cmp(t18, t3, 8U);
    if (t20 == 1)
        goto LAB10;

LAB34:    t21 = (t0 + 9995);
    t23 = xsi_mem_cmp(t21, t3, 8U);
    if (t23 == 1)
        goto LAB11;

LAB35:    t24 = (t0 + 10003);
    t26 = xsi_mem_cmp(t24, t3, 8U);
    if (t26 == 1)
        goto LAB12;

LAB36:    t27 = (t0 + 10011);
    t29 = xsi_mem_cmp(t27, t3, 8U);
    if (t29 == 1)
        goto LAB13;

LAB37:    t30 = (t0 + 10019);
    t32 = xsi_mem_cmp(t30, t3, 8U);
    if (t32 == 1)
        goto LAB14;

LAB38:    t33 = (t0 + 10027);
    t35 = xsi_mem_cmp(t33, t3, 8U);
    if (t35 == 1)
        goto LAB15;

LAB39:    t36 = (t0 + 10035);
    t38 = xsi_mem_cmp(t36, t3, 8U);
    if (t38 == 1)
        goto LAB16;

LAB40:    t39 = (t0 + 10043);
    t41 = xsi_mem_cmp(t39, t3, 8U);
    if (t41 == 1)
        goto LAB17;

LAB41:    t42 = (t0 + 10051);
    t44 = xsi_mem_cmp(t42, t3, 8U);
    if (t44 == 1)
        goto LAB18;

LAB42:    t45 = (t0 + 10059);
    t47 = xsi_mem_cmp(t45, t3, 8U);
    if (t47 == 1)
        goto LAB19;

LAB43:    t48 = (t0 + 10067);
    t50 = xsi_mem_cmp(t48, t3, 8U);
    if (t50 == 1)
        goto LAB20;

LAB44:    t51 = (t0 + 10075);
    t53 = xsi_mem_cmp(t51, t3, 8U);
    if (t53 == 1)
        goto LAB21;

LAB45:    t54 = (t0 + 10083);
    t56 = xsi_mem_cmp(t54, t3, 8U);
    if (t56 == 1)
        goto LAB22;

LAB46:    t57 = (t0 + 10091);
    t59 = xsi_mem_cmp(t57, t3, 8U);
    if (t59 == 1)
        goto LAB23;

LAB47:    t60 = (t0 + 10099);
    t62 = xsi_mem_cmp(t60, t3, 8U);
    if (t62 == 1)
        goto LAB24;

LAB48:    t63 = (t0 + 10107);
    t65 = xsi_mem_cmp(t63, t3, 8U);
    if (t65 == 1)
        goto LAB25;

LAB49:    t66 = (t0 + 10115);
    t68 = xsi_mem_cmp(t66, t3, 8U);
    if (t68 == 1)
        goto LAB26;

LAB50:    t69 = (t0 + 10123);
    t71 = xsi_mem_cmp(t69, t3, 8U);
    if (t71 == 1)
        goto LAB27;

LAB51:
LAB28:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (21 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);

LAB4:    xsi_set_current_line(128, ng0);

LAB55:    t2 = (t0 + 5848);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB56;

LAB1:    return;
LAB5:    xsi_set_current_line(129, ng0);
    t72 = (t0 + 3432U);
    t73 = *((char **)t72);
    t74 = (21 - 21);
    t75 = (t74 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t72 = (t73 + t77);
    t78 = *((unsigned char *)t72);
    t79 = (t0 + 6072);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    *((unsigned char *)t83) = t78;
    xsi_driver_first_trans_fast(t79);
    goto LAB4;

LAB6:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (20 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (19 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB8:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (18 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB9:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (17 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB10:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (16 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB11:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (15 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB12:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (14 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB13:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (13 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB14:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (12 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB15:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (11 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB16:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (10 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB17:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (9 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB18:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (8 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB19:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (7 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB20:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (6 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB21:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (5 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB22:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (4 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB23:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (3 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB24:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (2 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB25:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (1 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB26:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t5 = (0 - 21);
    t75 = (t5 * -1);
    t76 = (1U * t75);
    t77 = (0 + t76);
    t2 = (t3 + t77);
    t78 = *((unsigned char *)t2);
    t4 = (t0 + 6072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t78;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB27:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t78 = *((unsigned char *)t3);
    t2 = (t0 + 6072);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t78;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB52:;
LAB53:    t3 = (t0 + 5848);
    *((int *)t3) = 0;
    goto LAB2;

LAB54:    goto LAB53;

LAB56:    goto LAB54;

}

static void work_a_2079906387_3212880686_p_3(char *t0)
{
    char *t1;
    int t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 2752U);
    t2 = (18 - 19);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 1U, t5);
    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 2792U);
    t7 = *((char **)t1);
    t2 = (19 - 19);
    t3 = (t2 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t6 = *((unsigned char *)t1);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB5;

LAB7:
LAB6:    t1 = (t0 + 5864);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(157, ng0);
    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t7 = (t0 + 6136);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    xsi_set_current_line(161, ng0);
    t8 = (t0 + 10131);
    t10 = (t0 + 6136);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB6;

}


extern void work_a_2079906387_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2079906387_3212880686_p_0,(void *)work_a_2079906387_3212880686_p_1,(void *)work_a_2079906387_3212880686_p_2,(void *)work_a_2079906387_3212880686_p_3};
	xsi_register_didat("work_a_2079906387_3212880686", "isim/test_isim_beh.exe.sim/work/a_2079906387_3212880686.didat");
	xsi_register_executes(pe);
}
