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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/mpape/Documents/GitHub/Processors/Multiple Cycle/SignExt.v";
static int ng1[] = {15, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {65535U, 0U};
static int ng4[] = {31, 0};
static int ng5[] = {16, 0};



static void Always_6_0(char *t0)
{
    char t6[8];
    char t11[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(11, ng0);

LAB13:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memcpy(t6, t3, 8);
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    t4 = (t0 + 1448);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng4)));
    t9 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t6, t11, t35, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t10 = (t6 + 4);
    t14 = *((unsigned int *)t10);
    t36 = (!(t14));
    t12 = (t11 + 4);
    t15 = *((unsigned int *)t12);
    t37 = (!(t15));
    t38 = (t36 && t37);
    t13 = (t35 + 4);
    t16 = *((unsigned int *)t13);
    t39 = (!(t16));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB14;

LAB15:
LAB12:    goto LAB2;

LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(9, ng0);
    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    memcpy(t35, t34, 8);
    t33 = (t0 + 1448);
    xsi_vlogvar_assign_value(t33, t35, 0, 0, 32);
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t35);
    t41 = (t17 + 0);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t11);
    t42 = (t18 - t19);
    t43 = (t42 + 1);
    xsi_vlogvar_assign_value(t3, t2, t41, *((unsigned int *)t11), t43);
    goto LAB15;

}


extern void work_m_00000000003065592373_3461722539_init()
{
	static char *pe[] = {(void *)Always_6_0};
	xsi_register_didat("work_m_00000000003065592373_3461722539", "isim/TopSim_isim_beh.exe.sim/work/m_00000000003065592373_3461722539.didat");
	xsi_register_executes(pe);
}
