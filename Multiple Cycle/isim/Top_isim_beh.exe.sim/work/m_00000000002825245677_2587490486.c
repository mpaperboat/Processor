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
static const char *ng0 = "C:/Users/mpape/Documents/GitHub/Processors/Multiple Cycle/Alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {7U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {12U, 0U};



static void Always_9_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB19;

LAB16:    if (t18 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;

LAB19:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB29;

LAB26:    if (t18 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;

LAB29:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB36;

LAB33:    if (t18 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t6) = 1;

LAB36:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t6) = 1;

LAB43:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:
LAB46:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB59:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB60;

LAB61:
LAB62:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB71;

LAB68:    if (t18 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t6) = 1;

LAB71:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB72;

LAB73:
LAB74:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    t28 = (t0 + 1208U);
    t30 = *((char **)t28);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t28 = (t29 + 4);
    t35 = (t30 + 4);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB13;

LAB14:
LAB15:    t62 = (t0 + 1928);
    xsi_vlogvar_assign_value(t62, t31, 0, 0, 32);
    goto LAB12;

LAB13:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t31) = (t42 | t43);
    t44 = (t29 + 4);
    t45 = (t30 + 4);
    t46 = *((unsigned int *)t29);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t60 & t56);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    goto LAB15;

LAB18:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(14, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t31 + 4);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    *((unsigned int *)t30) = t39;
    t40 = *((unsigned int *)t30);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB23;

LAB24:
LAB25:    t44 = (t0 + 1928);
    xsi_vlogvar_assign_value(t44, t31, 0, 0, 32);
    goto LAB22;

LAB23:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t31) = (t42 | t43);
    t35 = (t22 + 4);
    t36 = (t28 + 4);
    t46 = *((unsigned int *)t35);
    t47 = (~(t46));
    t48 = *((unsigned int *)t22);
    t54 = (t48 & t47);
    t49 = *((unsigned int *)t36);
    t50 = (~(t49));
    t51 = *((unsigned int *)t28);
    t55 = (t51 & t50);
    t52 = (~(t54));
    t53 = (~(t55));
    t56 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t56 & t52);
    t57 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t57 & t53);
    goto LAB25;

LAB28:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(16, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t22, 32, t28, 32);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    goto LAB32;

LAB35:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(18, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t22, 32, t28, 32);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    goto LAB39;

LAB42:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(20, ng0);

LAB47:    xsi_set_current_line(21, ng0);
    t21 = ((char*)((ng6)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB49;

LAB48:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB50;

LAB51:    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB53;

LAB54:
LAB55:    goto LAB46;

LAB49:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t6) = 1;
    goto LAB51;

LAB53:    xsi_set_current_line(23, ng0);
    t21 = ((char*)((ng7)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB55;

LAB58:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(26, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 1208U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 | t33);
    *((unsigned int *)t63) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t63 + 4);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    *((unsigned int *)t30) = t39;
    t40 = *((unsigned int *)t30);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB63;

LAB64:
LAB65:    memset(t31, 0, 8);
    t44 = (t31 + 4);
    t45 = (t63 + 4);
    t58 = *((unsigned int *)t63);
    t59 = (~(t58));
    *((unsigned int *)t31) = t59;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB67;

LAB66:    t66 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t66 & 4294967295U);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & 4294967295U);
    t62 = (t0 + 1928);
    xsi_vlogvar_assign_value(t62, t31, 0, 0, 32);
    goto LAB62;

LAB63:    t42 = *((unsigned int *)t63);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t63) = (t42 | t43);
    t35 = (t22 + 4);
    t36 = (t28 + 4);
    t46 = *((unsigned int *)t35);
    t47 = (~(t46));
    t48 = *((unsigned int *)t22);
    t54 = (t48 & t47);
    t49 = *((unsigned int *)t36);
    t50 = (~(t49));
    t51 = *((unsigned int *)t28);
    t55 = (t51 & t50);
    t52 = (~(t54));
    t53 = (~(t55));
    t56 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t56 & t52);
    t57 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t57 & t53);
    goto LAB65;

LAB67:    t60 = *((unsigned int *)t31);
    t61 = *((unsigned int *)t45);
    *((unsigned int *)t31) = (t60 | t61);
    t64 = *((unsigned int *)t44);
    t65 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t64 | t65);
    goto LAB66;

LAB70:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(29, ng0);
    t28 = ((char*)((ng7)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB74;

}


extern void work_m_00000000002825245677_2587490486_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000002825245677_2587490486", "isim/Top_isim_beh.exe.sim/work/m_00000000002825245677_2587490486.didat");
	xsi_register_executes(pe);
}
