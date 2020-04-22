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
static const char *ng0 = "C:/Users/Sergiu/Google Drive/Automatica/Semestrul 1/Arhitectura Calculatoarelor/Tema2/tema2_testeroffline/tema2_tester/build/bin/tester/tester.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2000, 0};
static const char *ng5 = "[TIMEOUT]Instruction %0d timeout after 2000cc";
static int ng6[] = {2, 0};
static const char *ng7 = "result.tester";
static const char *ng8 = "test %0s: %0d correct out of %0d (%6.2f%% completed)\n";
static const char *ng9 = "%6.2f: test %0s";
static const char *ng10 = " %0s in %0d clock cycles\n";
static int ng11[] = {28523, 0, 0, 0};
static int ng12[] = {1768711524, 0, 26209, 0};
static const char *ng13 = "\nMISMATCH for instruction %0d: \n";
static const char *ng14 = "header: 0x%x\n";
static const char *ng15 = "payloads: ";
static const char *ng16 = "0x%x ";
static const char *ng17 = "\n\n";
static const char *ng18 = "HEADER MISMATCH: expected header 0x%x, received header 0x%x \n\n";
static const char *ng19 = "PAYLOAD MISMATCH: expected payload 0x%x, received payload 0x%x \n\n";
static const char *ng20 = "[INSTRUCTION PASSED] Instruction %0d was checked correctly \n";
static const char *ng21 = "test.config";
static const char *ng22 = "r";
static const char *ng23 = "error opening config file\n";
static const char *ng24 = "name=%16s\n";
static const char *ng25 = "error reading test name\n";
static const char *ng26 = "value=%f\n";
static const char *ng27 = "error reading test value\n";
static const char *ng28 = "penalty=%f\n";
static const char *ng29 = "error reading test penalty\n";
static const char *ng30 = "test.data";
static const char *ng31 = "error opening data file\n";
static const char *ng32 = "nof_instructions = %d\n";
static const char *ng33 = "error reading nof_instructions\n";
static const char *ng34 = "header = %x\n";
static const char *ng35 = "error reading header\n";
static const char *ng36 = "%x\n";
static const char *ng37 = "error reading payload_%d for header_%d\n";
static int ng38[] = {5, 0};
static int ng39[] = {10, 0};
static int ng40[] = {1000, 0};



static int sp_drive_instruction(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t34[8];
    char t59[8];
    char t66[8];
    char t76[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(194, ng0);

LAB5:    xsi_set_current_line(195, ng0);
    xsi_set_current_line(195, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7768);
    t9 = (t1 + 7768);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7768);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:
LAB8:    t4 = (t1 + 7768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7768);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7768);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 8728);
    t19 = (t16 + 56U);
    t27 = *((char **)t19);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t7, 32, t27, 32);
    t28 = (t8 + 4);
    t17 = *((unsigned int *)t28);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB9:    xsi_set_current_line(195, ng0);

LAB11:    xsi_set_current_line(197, ng0);

LAB12:    t30 = (t1 + 8408);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    memset(t34, 0, 8);
    t35 = (t32 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB14;

LAB13:    if (t46 != 0)
        goto LAB15;

LAB16:    t50 = (t34 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t34);
    t54 = (t53 & t52);
    t55 = (t54 != 0);
    if (t55 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(200, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB20;
    goto LAB1;

LAB14:    *((unsigned int *)t34) = 1;
    goto LAB16;

LAB15:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(198, ng0);
    t56 = (t2 + 88U);
    t57 = *((char **)t56);
    t58 = (t57 + 0U);
    xsi_wp_set_status(t58, 1);
    *((char **)t3) = &&LAB19;
    goto LAB1;

LAB19:    goto LAB12;

LAB20:    xsi_set_current_line(201, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(204, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 10328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 10488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t4 = (t1 + 9208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9208);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 9208);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t1 + 7768);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t27 = (t1 + 7768);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 7768);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t19, t30, t33, 1, 1, t35, 32, 1);
    xsi_vlog_generic_get_array_select_value(t7, 16, t6, t11, t14, 2, 1, t8, 32, 1);
    t36 = (t1 + 10168);
    xsi_vlogvar_assign_value(t36, t7, 0, 0, 16);
    xsi_set_current_line(208, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(210, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    xsi_set_current_line(211, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 7448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB22:    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9208);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 9208);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t1 + 9208);
    t16 = (t15 + 64U);
    t19 = *((char **)t16);
    t27 = (t1 + 7768);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 7768);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t35 = (t1 + 7768);
    t36 = (t35 + 64U);
    t49 = *((char **)t36);
    t50 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t30, t33, t49, 1, 1, t50, 32, 1);
    xsi_vlog_generic_get_array_select_value(t7, 16, t11, t14, t19, 2, 1, t8, 32, 1);
    memset(t34, 0, 8);
    t56 = (t34 + 4);
    t57 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t20 = (t17 >> 0);
    *((unsigned int *)t34) = t20;
    t23 = *((unsigned int *)t57);
    t24 = (t23 >> 0);
    *((unsigned int *)t56) = t24;
    t29 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t29 & 63U);
    t37 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t37 & 63U);
    memset(t59, 0, 8);
    t58 = (t6 + 4);
    if (*((unsigned int *)t58) != 0)
        goto LAB24;

LAB23:    t60 = (t34 + 4);
    if (*((unsigned int *)t60) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t6) < *((unsigned int *)t34))
        goto LAB25;

LAB26:    t62 = (t59 + 4);
    t38 = *((unsigned int *)t62);
    t39 = (~(t38));
    t40 = *((unsigned int *)t59);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(217, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(218, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 10328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t4 = (t1 + 7768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7768);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7768);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 7768);
    t27 = (t1 + 7768);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 7768);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t34, t59, t30, t33, 1, 1, t35, 32, 1);
    t36 = (t34 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t49 = (t59 + 4);
    t20 = *((unsigned int *)t49);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB32;

LAB33:    goto LAB8;

LAB24:    t61 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t59) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(212, ng0);

LAB30:    xsi_set_current_line(213, ng0);
    t63 = (t1 + 9368);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t67 = (t1 + 9368);
    t68 = (t67 + 72U);
    t69 = *((char **)t68);
    t70 = (t1 + 9368);
    t71 = (t70 + 64U);
    t72 = *((char **)t71);
    t73 = (t1 + 7768);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t77 = (t1 + 7768);
    t78 = (t77 + 72U);
    t79 = *((char **)t78);
    t80 = (t1 + 7768);
    t81 = (t80 + 64U);
    t82 = *((char **)t81);
    t83 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t76, 32, t75, t79, t82, 1, 1, t83, 32, 1);
    t84 = (t1 + 7448);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    xsi_vlog_generic_get_array_select_value(t66, 16, t65, t69, t72, 2, 2, t76, 32, 1, t86, 32, 1);
    t87 = (t1 + 10168);
    xsi_vlogvar_assign_value(t87, t66, 0, 0, 16);
    xsi_set_current_line(214, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(211, ng0);
    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t9, 32);
    t10 = (t1 + 7448);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 32);
    goto LAB22;

LAB32:    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t59);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t19, t8, 0, *((unsigned int *)t59), t26);
    goto LAB33;

}

static int sp_monitor_instruction_ref(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t32[8];
    char t33[8];
    char t52[8];
    char t78[8];
    char t84[8];
    char t86[8];
    char t87[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    int t102;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(225, ng0);

LAB5:    xsi_set_current_line(226, ng0);
    xsi_set_current_line(226, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7768);
    t9 = (t1 + 7768);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7768);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:
LAB8:    t4 = (t1 + 7768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7768);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7768);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 8728);
    t19 = (t16 + 56U);
    t27 = *((char **)t19);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t7, 32, t27, 32);
    t28 = (t8 + 4);
    t17 = *((unsigned int *)t28);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB9:    xsi_set_current_line(226, ng0);

LAB11:    xsi_set_current_line(227, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t1 + 7928);
    t34 = (t1 + 7928);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 7928);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t36, t39, 1, 1, t40, 32, 1);
    t41 = (t32 + 4);
    t42 = *((unsigned int *)t41);
    t18 = (!(t42));
    t43 = (t33 + 4);
    t44 = *((unsigned int *)t43);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(228, ng0);

LAB14:    t4 = (t1 + 4328U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB17;

LAB15:    t6 = (t5 + 4);
    t9 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB17;

LAB16:    *((unsigned int *)t7) = 1;

LAB17:    memset(t8, 0, 8);
    t10 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t20 = (~(t17));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t20);
    t29 = (t24 & 1U);
    if (t29 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t10) != 0)
        goto LAB20;

LAB21:    t12 = (t8 + 4);
    t42 = *((unsigned int *)t8);
    t44 = (!(t42));
    t45 = *((unsigned int *)t12);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB22;

LAB23:    memcpy(t52, t8, 8);

LAB24:    t36 = (t52 + 4);
    t73 = *((unsigned int *)t36);
    t74 = (~(t73));
    t75 = *((unsigned int *)t52);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(239, ng0);
    t4 = (t1 + 3368U);
    t5 = *((char **)t4);
    t4 = (t1 + 9528);
    t6 = (t1 + 9528);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9528);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 7768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 7768);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 7768);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t32, 32, 1);
    t36 = (t7 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t8 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(241, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB47;
    goto LAB1;

LAB12:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t33);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t31, t30, 0, *((unsigned int *)t33), t26);
    goto LAB13;

LAB18:    *((unsigned int *)t8) = 1;
    goto LAB21;

LAB20:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB21;

LAB22:    t13 = (t1 + 3848U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng1)));
    memset(t32, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t13))
        goto LAB27;

LAB25:    t15 = (t14 + 4);
    t16 = (t13 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB27;

LAB26:    *((unsigned int *)t32) = 1;

LAB27:    memset(t33, 0, 8);
    t19 = (t32 + 4);
    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t32);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t19) != 0)
        goto LAB30;

LAB31:    t53 = *((unsigned int *)t8);
    t54 = *((unsigned int *)t33);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t28 = (t8 + 4);
    t30 = (t33 + 4);
    t31 = (t52 + 4);
    t56 = *((unsigned int *)t28);
    t57 = *((unsigned int *)t30);
    t58 = (t56 | t57);
    *((unsigned int *)t31) = t58;
    t59 = *((unsigned int *)t31);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB24;

LAB28:    *((unsigned int *)t33) = 1;
    goto LAB31;

LAB30:    t27 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB31;

LAB32:    t61 = *((unsigned int *)t52);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t52) = (t61 | t62);
    t34 = (t8 + 4);
    t35 = (t33 + 4);
    t63 = *((unsigned int *)t34);
    t64 = (~(t63));
    t65 = *((unsigned int *)t8);
    t18 = (t65 & t64);
    t66 = *((unsigned int *)t35);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t21 = (t68 & t67);
    t69 = (~(t18));
    t70 = (~(t21));
    t71 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t71 & t69);
    t72 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t72 & t70);
    goto LAB34;

LAB35:    xsi_set_current_line(229, ng0);

LAB37:    xsi_set_current_line(230, ng0);
    t37 = (t1 + 7928);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t1 + 7928);
    t41 = (t40 + 72U);
    t43 = *((char **)t41);
    t79 = (t1 + 7928);
    t80 = (t79 + 64U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t78, 32, t39, t43, t81, 1, 1, t82, 32, 1);
    t83 = ((char*)((ng3)));
    memset(t84, 0, 8);
    xsi_vlog_signed_minus(t84, 32, t78, 32, t83, 32);
    t85 = (t1 + 7928);
    t88 = (t1 + 7928);
    t89 = (t88 + 72U);
    t90 = *((char **)t89);
    t91 = (t1 + 7928);
    t92 = (t91 + 64U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t86, t87, t90, t93, 1, 1, t94, 32, 1);
    t95 = (t86 + 4);
    t96 = *((unsigned int *)t95);
    t22 = (!(t96));
    t97 = (t87 + 4);
    t98 = *((unsigned int *)t97);
    t25 = (!(t98));
    t26 = (t22 && t25);
    if (t26 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(231, ng0);
    t4 = (t1 + 7928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7928);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7928);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t16, 32);
    t19 = (t8 + 4);
    t17 = *((unsigned int *)t19);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(236, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB44;
    goto LAB1;

LAB38:    t99 = *((unsigned int *)t86);
    t100 = *((unsigned int *)t87);
    t101 = (t99 - t100);
    t102 = (t101 + 1);
    xsi_vlogvar_assign_value(t85, t84, 0, *((unsigned int *)t87), t102);
    goto LAB39;

LAB40:    xsi_set_current_line(232, ng0);

LAB43:    xsi_set_current_line(233, ng0);
    t27 = (t1 + 7768);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 7768);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 7768);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t30, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t40, (char)119, t32, 32);
    xsi_set_current_line(234, ng0);
    xsi_vlog_finish(1);
    goto LAB42;

LAB44:    goto LAB14;

LAB45:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t8), t26);
    goto LAB46;

LAB47:    xsi_set_current_line(243, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7928);
    t6 = (t1 + 7928);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 7928);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 1, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(244, ng0);

LAB50:    t4 = (t1 + 3848U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB53;

LAB51:    t6 = (t5 + 4);
    t9 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB53;

LAB52:    *((unsigned int *)t7) = 1;

LAB53:    t10 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t20 = (~(t17));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(255, ng0);
    t4 = (t1 + 3368U);
    t5 = *((char **)t4);
    t4 = (t1 + 9848);
    t6 = (t1 + 9848);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9848);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 7768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 7768);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 7768);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t32, 32, 1);
    t36 = (t7 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t8 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(257, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 8408);
    t6 = (t1 + 8408);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(226, ng0);
    t4 = (t1 + 7768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7768);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7768);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 7768);
    t27 = (t1 + 7768);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 7768);
    t34 = (t31 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t30, t35, 1, 1, t36, 32, 1);
    t37 = (t32 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (!(t17));
    t38 = (t33 + 4);
    t20 = *((unsigned int *)t38);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB68;

LAB69:    goto LAB8;

LAB48:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t8), t26);
    goto LAB49;

LAB54:    xsi_set_current_line(245, ng0);

LAB56:    xsi_set_current_line(246, ng0);
    t11 = (t1 + 7928);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 7928);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t19 = (t1 + 7928);
    t27 = (t19 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t13, t16, t28, 1, 1, t30, 32, 1);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t31, 32);
    t34 = (t1 + 7928);
    t35 = (t1 + 7928);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t1 + 7928);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t33, t52, t37, t40, 1, 1, t41, 32, 1);
    t43 = (t33 + 4);
    t42 = *((unsigned int *)t43);
    t18 = (!(t42));
    t79 = (t52 + 4);
    t44 = *((unsigned int *)t79);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(247, ng0);
    t4 = (t1 + 7928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7928);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7928);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t16, 32);
    t19 = (t8 + 4);
    t17 = *((unsigned int *)t19);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(252, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB63;
    goto LAB1;

LAB57:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t52);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t34, t32, 0, *((unsigned int *)t52), t26);
    goto LAB58;

LAB59:    xsi_set_current_line(248, ng0);

LAB62:    xsi_set_current_line(249, ng0);
    t27 = (t1 + 7768);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 7768);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 7768);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t30, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t40, (char)119, t32, 32);
    xsi_set_current_line(250, ng0);
    xsi_vlog_finish(1);
    goto LAB61;

LAB63:    goto LAB50;

LAB64:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t8), t26);
    goto LAB65;

LAB66:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB67;

LAB68:    t23 = *((unsigned int *)t32);
    t24 = *((unsigned int *)t33);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t19, t8, 0, *((unsigned int *)t33), t26);
    goto LAB69;

}

static int sp_monitor_instruction_tst(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t32[8];
    char t33[8];
    char t52[8];
    char t78[8];
    char t84[8];
    char t86[8];
    char t87[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    int t102;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(263, ng0);

LAB5:    xsi_set_current_line(264, ng0);
    xsi_set_current_line(264, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7768);
    t9 = (t1 + 7768);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7768);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:
LAB8:    t4 = (t1 + 7768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7768);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7768);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 8728);
    t19 = (t16 + 56U);
    t27 = *((char **)t19);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t7, 32, t27, 32);
    t28 = (t8 + 4);
    t17 = *((unsigned int *)t28);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB9:    xsi_set_current_line(264, ng0);

LAB11:    xsi_set_current_line(265, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t1 + 7928);
    t34 = (t1 + 7928);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 7928);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t36, t39, 1, 1, t40, 32, 1);
    t41 = (t32 + 4);
    t42 = *((unsigned int *)t41);
    t18 = (!(t42));
    t43 = (t33 + 4);
    t44 = *((unsigned int *)t43);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(266, ng0);

LAB14:    t4 = (t1 + 4168U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB17;

LAB15:    t6 = (t5 + 4);
    t9 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB17;

LAB16:    *((unsigned int *)t7) = 1;

LAB17:    memset(t8, 0, 8);
    t10 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t20 = (~(t17));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t20);
    t29 = (t24 & 1U);
    if (t29 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t10) != 0)
        goto LAB20;

LAB21:    t12 = (t8 + 4);
    t42 = *((unsigned int *)t8);
    t44 = (!(t42));
    t45 = *((unsigned int *)t12);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB22;

LAB23:    memcpy(t52, t8, 8);

LAB24:    t36 = (t52 + 4);
    t73 = *((unsigned int *)t36);
    t74 = (~(t73));
    t75 = *((unsigned int *)t52);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(277, ng0);
    t4 = (t1 + 3208U);
    t5 = *((char **)t4);
    t4 = (t1 + 9688);
    t6 = (t1 + 9688);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 9688);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 7768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 7768);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 7768);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t32, 32, 1);
    t36 = (t7 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t8 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(279, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB47;
    goto LAB1;

LAB12:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t33);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t31, t30, 0, *((unsigned int *)t33), t26);
    goto LAB13;

LAB18:    *((unsigned int *)t8) = 1;
    goto LAB21;

LAB20:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB21;

LAB22:    t13 = (t1 + 3688U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng1)));
    memset(t32, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t13))
        goto LAB27;

LAB25:    t15 = (t14 + 4);
    t16 = (t13 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t16))
        goto LAB27;

LAB26:    *((unsigned int *)t32) = 1;

LAB27:    memset(t33, 0, 8);
    t19 = (t32 + 4);
    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t32);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t19) != 0)
        goto LAB30;

LAB31:    t53 = *((unsigned int *)t8);
    t54 = *((unsigned int *)t33);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t28 = (t8 + 4);
    t30 = (t33 + 4);
    t31 = (t52 + 4);
    t56 = *((unsigned int *)t28);
    t57 = *((unsigned int *)t30);
    t58 = (t56 | t57);
    *((unsigned int *)t31) = t58;
    t59 = *((unsigned int *)t31);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB24;

LAB28:    *((unsigned int *)t33) = 1;
    goto LAB31;

LAB30:    t27 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB31;

LAB32:    t61 = *((unsigned int *)t52);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t52) = (t61 | t62);
    t34 = (t8 + 4);
    t35 = (t33 + 4);
    t63 = *((unsigned int *)t34);
    t64 = (~(t63));
    t65 = *((unsigned int *)t8);
    t18 = (t65 & t64);
    t66 = *((unsigned int *)t35);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t21 = (t68 & t67);
    t69 = (~(t18));
    t70 = (~(t21));
    t71 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t71 & t69);
    t72 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t72 & t70);
    goto LAB34;

LAB35:    xsi_set_current_line(267, ng0);

LAB37:    xsi_set_current_line(268, ng0);
    t37 = (t1 + 7928);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t1 + 7928);
    t41 = (t40 + 72U);
    t43 = *((char **)t41);
    t79 = (t1 + 7928);
    t80 = (t79 + 64U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t78, 32, t39, t43, t81, 1, 1, t82, 32, 1);
    t83 = ((char*)((ng3)));
    memset(t84, 0, 8);
    xsi_vlog_signed_minus(t84, 32, t78, 32, t83, 32);
    t85 = (t1 + 7928);
    t88 = (t1 + 7928);
    t89 = (t88 + 72U);
    t90 = *((char **)t89);
    t91 = (t1 + 7928);
    t92 = (t91 + 64U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t86, t87, t90, t93, 1, 1, t94, 32, 1);
    t95 = (t86 + 4);
    t96 = *((unsigned int *)t95);
    t22 = (!(t96));
    t97 = (t87 + 4);
    t98 = *((unsigned int *)t97);
    t25 = (!(t98));
    t26 = (t22 && t25);
    if (t26 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(269, ng0);
    t4 = (t1 + 7928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7928);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7928);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t16, 32);
    t19 = (t8 + 4);
    t17 = *((unsigned int *)t19);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(274, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB44;
    goto LAB1;

LAB38:    t99 = *((unsigned int *)t86);
    t100 = *((unsigned int *)t87);
    t101 = (t99 - t100);
    t102 = (t101 + 1);
    xsi_vlogvar_assign_value(t85, t84, 0, *((unsigned int *)t87), t102);
    goto LAB39;

LAB40:    xsi_set_current_line(270, ng0);

LAB43:    xsi_set_current_line(271, ng0);
    t27 = (t1 + 7768);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 7768);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 7768);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t30, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t40, (char)119, t32, 32);
    xsi_set_current_line(272, ng0);
    xsi_vlog_finish(1);
    goto LAB42;

LAB44:    goto LAB14;

LAB45:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t8), t26);
    goto LAB46;

LAB47:    xsi_set_current_line(281, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7928);
    t6 = (t1 + 7928);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 7928);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 1, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(282, ng0);

LAB50:    t4 = (t1 + 3688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB53;

LAB51:    t6 = (t5 + 4);
    t9 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB53;

LAB52:    *((unsigned int *)t7) = 1;

LAB53:    t10 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t20 = (~(t17));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(293, ng0);
    t4 = (t1 + 3208U);
    t5 = *((char **)t4);
    t4 = (t1 + 10008);
    t6 = (t1 + 10008);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 10008);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 7768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 7768);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 7768);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t32, 32, 1);
    t36 = (t7 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t8 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(295, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 8408);
    t6 = (t1 + 8408);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(264, ng0);
    t4 = (t1 + 7768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7768);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7768);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 7768);
    t27 = (t1 + 7768);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 7768);
    t34 = (t31 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t30, t35, 1, 1, t36, 32, 1);
    t37 = (t32 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (!(t17));
    t38 = (t33 + 4);
    t20 = *((unsigned int *)t38);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB68;

LAB69:    goto LAB8;

LAB48:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t8), t26);
    goto LAB49;

LAB54:    xsi_set_current_line(283, ng0);

LAB56:    xsi_set_current_line(284, ng0);
    t11 = (t1 + 7928);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 7928);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t19 = (t1 + 7928);
    t27 = (t19 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t13, t16, t28, 1, 1, t30, 32, 1);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t31, 32);
    t34 = (t1 + 7928);
    t35 = (t1 + 7928);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t1 + 7928);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t33, t52, t37, t40, 1, 1, t41, 32, 1);
    t43 = (t33 + 4);
    t42 = *((unsigned int *)t43);
    t18 = (!(t42));
    t79 = (t52 + 4);
    t44 = *((unsigned int *)t79);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(285, ng0);
    t4 = (t1 + 7928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 7928);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 7928);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t16, 32);
    t19 = (t8 + 4);
    t17 = *((unsigned int *)t19);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(290, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB63;
    goto LAB1;

LAB57:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t52);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t34, t32, 0, *((unsigned int *)t52), t26);
    goto LAB58;

LAB59:    xsi_set_current_line(286, ng0);

LAB62:    xsi_set_current_line(287, ng0);
    t27 = (t1 + 7768);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 7768);
    t34 = (t31 + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 7768);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t32, 32, t30, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t40, (char)119, t32, 32);
    xsi_set_current_line(288, ng0);
    xsi_vlog_finish(1);
    goto LAB61;

LAB63:    goto LAB50;

LAB64:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t8), t26);
    goto LAB65;

LAB66:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB67;

LAB68:    t23 = *((unsigned int *)t32);
    t24 = *((unsigned int *)t33);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t19, t8, 0, *((unsigned int *)t33), t26);
    goto LAB69;

}

static int sp_print_test_results(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t13[8];
    char t40[16];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    double t32;
    double t33;
    double t34;
    double t35;
    char *t36;
    char *t37;
    char *t38;
    double t39;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(301, ng0);

LAB5:    xsi_set_current_line(302, ng0);
    t7 = (t1 + 6488);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 8728);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t9, 32, t12, 32);
    memset(t6, 0, 8);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t14) != 0)
        goto LAB8;

LAB9:    t21 = (t6 + 4);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t21) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t6) > 0)
        goto LAB16;

LAB17:    memcpy(t5, t30, 8);

LAB18:    t31 = (t1 + 8248);
    xsi_vlogvar_assign_value(t31, t5, 0, 0, 1);
    xsi_set_current_line(305, ng0);
    *((int *)t5) = xsi_vlogfile_file_open_of_cname(ng7);
    t4 = (t5 + 4);
    *((int *)t4) = 0;
    t7 = (t1 + 6328);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    xsi_set_current_line(307, ng0);
    t4 = (t1 + 6488);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t32 = xsi_vlog_convert_to_real(t8, 32, 1);
    t33 = (t32 * 1.0000000000000000);
    t9 = (t1 + 8728);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t34 = xsi_vlog_convert_to_real(t11, 32, 1);
    t35 = (t33 / t34);
    t12 = (t1 + 6008);
    xsi_vlogvar_assign_value_double(t12, t35, 0);
    xsi_set_current_line(308, ng0);
    t4 = (t1 + 6488);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t32 = xsi_vlog_convert_to_real(t8, 32, 1);
    t33 = (t32 * 1.0000000000000000);
    t9 = (t1 + 8728);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t34 = xsi_vlog_convert_to_real(t11, 32, 1);
    t35 = (t33 / t34);
    t12 = (t1 + 6168);
    xsi_vlogvar_assign_value_double(t12, t35, 0);
    xsi_set_current_line(310, ng0);
    t4 = (t1 + 6328);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 6648);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 6488);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    t21 = (t1 + 8728);
    t25 = (t21 + 56U);
    t30 = *((char **)t25);
    t31 = (t1 + 6008);
    t36 = (t31 + 56U);
    t37 = *((char **)t36);
    t32 = *((double *)t37);
    t33 = (100.00000000000000 * t32);
    *((double *)t5) = t33;
    t38 = (t1 + 2144);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng8, 5, t38, (char)118, t11, 128, (char)119, t20, 32, (char)119, t30, 32, (char)114, t5, 64);
    xsi_set_current_line(312, ng0);
    t4 = (t1 + 6328);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 6808);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t32 = *((double *)t11);
    t12 = (t1 + 6168);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    t33 = *((double *)t20);
    t21 = (t1 + 6968);
    t25 = (t21 + 56U);
    t30 = *((char **)t25);
    t34 = *((double *)t30);
    t35 = (t33 - t34);
    t39 = (t32 * t35);
    *((double *)t5) = t39;
    t31 = (t1 + 6648);
    t36 = (t31 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 2144);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng9, 3, t38, (char)114, t5, 64, (char)118, t37, 128);
    xsi_set_current_line(315, ng0);
    t4 = (t1 + 6328);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 8248);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t5, 0, 8);
    t12 = (t11 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t11);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t12) != 0)
        goto LAB21;

LAB22:    t20 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t23 = *((unsigned int *)t20);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB23;

LAB24:    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t20);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t20) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t5) > 0)
        goto LAB29;

LAB30:    memcpy(t40, t25, 16);

LAB31:    t30 = (t1 + 8888);
    t31 = (t30 + 56U);
    t36 = *((char **)t31);
    t37 = (t1 + 2144);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng10, 3, t37, (char)118, t40, 48, (char)119, t36, 32);
    xsi_set_current_line(317, ng0);
    t4 = (t1 + 6328);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(318, ng0);
    xsi_vlog_finish(1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB9;

LAB10:    t25 = ((char*)((ng3)));
    goto LAB11;

LAB12:    t30 = ((char*)((ng1)));
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t5, 32, t25, 32, t30, 32);
    goto LAB18;

LAB16:    memcpy(t5, t25, 8);
    goto LAB18;

LAB19:    *((unsigned int *)t5) = 1;
    goto LAB22;

LAB21:    t14 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB23:    t21 = ((char*)((ng11)));
    goto LAB24;

LAB25:    t25 = ((char*)((ng12)));
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t40, 48, t21, 48, t25, 48);
    goto LAB31;

LAB29:    memcpy(t40, t21, 16);
    goto LAB31;

}

static int sp_end_of_test_checks(char *t1, char *t2)
{
    char t10[8];
    char t20[8];
    char t33[8];
    char t43[8];
    char t46[8];
    char t62[8];
    char t75[8];
    char t85[8];
    char t88[8];
    char t96[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(323, ng0);

LAB5:    xsi_set_current_line(324, ng0);
    xsi_set_current_line(324, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7448);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8728);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t9, 32);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB7;

LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(325, ng0);

LAB9:    xsi_set_current_line(326, ng0);
    t17 = (t1 + 9528);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t1 + 9528);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t1 + 9528);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t1 + 7448);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t20, 16, t19, t23, t26, 2, 1, t29, 32, 1);
    t30 = (t1 + 9688);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t34 = (t1 + 9688);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 9688);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = (t1 + 7448);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_get_array_select_value(t33, 16, t32, t36, t39, 2, 1, t42, 32, 1);
    memset(t43, 0, 8);
    if (*((unsigned int *)t20) != *((unsigned int *)t33))
        goto LAB11;

LAB10:    t44 = (t20 + 4);
    t45 = (t33 + 4);
    if (*((unsigned int *)t44) != *((unsigned int *)t45))
        goto LAB11;

LAB12:    memset(t46, 0, 8);
    t47 = (t43 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t47) != 0)
        goto LAB15;

LAB16:    t54 = (t46 + 4);
    t55 = *((unsigned int *)t46);
    t56 = (!(t55));
    t57 = *((unsigned int *)t54);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB17;

LAB18:    memcpy(t96, t46, 8);

LAB19:    t124 = (t96 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t96);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(338, ng0);
    t4 = (t1 + 9528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9528);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t1 + 9528);
    t17 = (t11 + 64U);
    t18 = *((char **)t17);
    t19 = (t1 + 7448);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t10, 16, t6, t9, t18, 2, 1, t22, 32, 1);
    t23 = (t1 + 9688);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 9688);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t1 + 9688);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t32 = (t1 + 7448);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_get_array_select_value(t20, 16, t25, t28, t31, 2, 1, t35, 32, 1);
    memset(t33, 0, 8);
    if (*((unsigned int *)t10) != *((unsigned int *)t20))
        goto LAB39;

LAB38:    t36 = (t10 + 4);
    t37 = (t20 + 4);
    if (*((unsigned int *)t36) != *((unsigned int *)t37))
        goto LAB39;

LAB40:    t38 = (t33 + 4);
    t12 = *((unsigned int *)t38);
    t13 = (~(t12));
    t14 = *((unsigned int *)t33);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(343, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB43:    xsi_set_current_line(345, ng0);
    t4 = (t1 + 9848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9848);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t1 + 9848);
    t17 = (t11 + 64U);
    t18 = *((char **)t17);
    t19 = (t1 + 7448);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t10, 16, t6, t9, t18, 2, 1, t22, 32, 1);
    t23 = (t1 + 10008);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 10008);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t1 + 10008);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t32 = (t1 + 7448);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_get_array_select_value(t20, 16, t25, t28, t31, 2, 1, t35, 32, 1);
    memset(t33, 0, 8);
    if (*((unsigned int *)t10) != *((unsigned int *)t20))
        goto LAB46;

LAB45:    t36 = (t10 + 4);
    t37 = (t20 + 4);
    if (*((unsigned int *)t36) != *((unsigned int *)t37))
        goto LAB46;

LAB47:    t38 = (t33 + 4);
    t12 = *((unsigned int *)t38);
    t13 = (~(t12));
    t14 = *((unsigned int *)t33);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(350, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB50:    xsi_set_current_line(352, ng0);
    t4 = (t1 + 8088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t9);
    t48 = (t15 ^ t16);
    t49 = (t14 | t48);
    t50 = *((unsigned int *)t8);
    t51 = *((unsigned int *)t9);
    t52 = (t50 | t51);
    t55 = (~(t52));
    t56 = (t49 & t55);
    if (t56 != 0)
        goto LAB55;

LAB52:    if (t52 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t10) = 1;

LAB55:    t17 = (t10 + 4);
    t57 = *((unsigned int *)t17);
    t58 = (~(t57));
    t90 = *((unsigned int *)t10);
    t91 = (t90 & t58);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB56;

LAB57:
LAB58:    xsi_set_current_line(324, ng0);
    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 7448);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB6;

LAB11:    *((unsigned int *)t43) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t46) = 1;
    goto LAB16;

LAB15:    t53 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB16;

LAB17:    t59 = (t1 + 9848);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t63 = (t1 + 9848);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = (t1 + 9848);
    t67 = (t66 + 64U);
    t68 = *((char **)t67);
    t69 = (t1 + 7448);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    xsi_vlog_generic_get_array_select_value(t62, 16, t61, t65, t68, 2, 1, t71, 32, 1);
    t72 = (t1 + 10008);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t76 = (t1 + 10008);
    t77 = (t76 + 72U);
    t78 = *((char **)t77);
    t79 = (t1 + 10008);
    t80 = (t79 + 64U);
    t81 = *((char **)t80);
    t82 = (t1 + 7448);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    xsi_vlog_generic_get_array_select_value(t75, 16, t74, t78, t81, 2, 1, t84, 32, 1);
    memset(t85, 0, 8);
    if (*((unsigned int *)t62) != *((unsigned int *)t75))
        goto LAB21;

LAB20:    t86 = (t62 + 4);
    t87 = (t75 + 4);
    if (*((unsigned int *)t86) != *((unsigned int *)t87))
        goto LAB21;

LAB22:    memset(t88, 0, 8);
    t89 = (t85 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t89) != 0)
        goto LAB25;

LAB26:    t97 = *((unsigned int *)t46);
    t98 = *((unsigned int *)t88);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = (t46 + 4);
    t101 = (t88 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB19;

LAB21:    *((unsigned int *)t85) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t88) = 1;
    goto LAB26;

LAB25:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB26;

LAB27:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t46 + 4);
    t111 = (t88 + 4);
    t112 = *((unsigned int *)t110);
    t113 = (~(t112));
    t114 = *((unsigned int *)t46);
    t115 = (t114 & t113);
    t116 = *((unsigned int *)t111);
    t117 = (~(t116));
    t118 = *((unsigned int *)t88);
    t119 = (t118 & t117);
    t120 = (~(t115));
    t121 = (~(t119));
    t122 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t122 & t120);
    t123 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t123 & t121);
    goto LAB29;

LAB30:    xsi_set_current_line(326, ng0);

LAB33:    xsi_set_current_line(327, ng0);
    t130 = (t1 + 7448);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    t133 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 1, ng13, 2, t133, (char)119, t132, 32);
    xsi_set_current_line(328, ng0);
    t4 = (t1 + 9208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9208);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t1 + 9208);
    t17 = (t11 + 64U);
    t18 = *((char **)t17);
    t19 = (t1 + 7448);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t10, 16, t6, t9, t18, 2, 1, t22, 32, 1);
    t23 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 1, ng14, 2, t23, (char)118, t10, 16);
    xsi_set_current_line(329, ng0);
    t4 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 1, ng15, 1, t4);
    xsi_set_current_line(331, ng0);
    t4 = (t1 + 9208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9208);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t1 + 9208);
    t17 = (t11 + 64U);
    t18 = *((char **)t17);
    t19 = (t1 + 7448);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t10, 16, t6, t9, t18, 2, 1, t22, 32, 1);
    memset(t20, 0, 8);
    t23 = (t20 + 4);
    t24 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t20) = t13;
    t14 = *((unsigned int *)t24);
    t15 = (t14 >> 0);
    *((unsigned int *)t23) = t15;
    t16 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t16 & 63U);
    t48 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t48 & 63U);
    t25 = (t1 + 8568);
    xsi_vlogvar_assign_value(t25, t20, 0, 0, 32);
    xsi_set_current_line(332, ng0);
    xsi_set_current_line(332, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 7608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB34:    t4 = (t1 + 7608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8568);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t9, 32);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(335, ng0);
    t4 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 1, ng17, 1, t4);
    goto LAB32;

LAB35:    xsi_set_current_line(332, ng0);

LAB37:    xsi_set_current_line(333, ng0);
    t17 = (t1 + 9368);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t1 + 9368);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t1 + 9368);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t1 + 7448);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t1 + 7608);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_array_select_value(t20, 16, t19, t23, t26, 2, 2, t29, 32, 1, t32, 32, 1);
    t34 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 1, ng16, 2, t34, (char)118, t20, 16);
    xsi_set_current_line(332, ng0);
    t4 = (t1 + 7608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 7608);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB34;

LAB39:    *((unsigned int *)t33) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(338, ng0);

LAB44:    xsi_set_current_line(339, ng0);
    t39 = (t1 + 9528);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t1 + 9528);
    t44 = (t42 + 72U);
    t45 = *((char **)t44);
    t47 = (t1 + 9528);
    t53 = (t47 + 64U);
    t54 = *((char **)t53);
    t59 = (t1 + 7448);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    xsi_vlog_generic_get_array_select_value(t43, 16, t41, t45, t54, 2, 1, t61, 32, 1);
    t63 = (t1 + 9688);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t66 = (t1 + 9688);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = (t1 + 9688);
    t70 = (t69 + 64U);
    t71 = *((char **)t70);
    t72 = (t1 + 7448);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    xsi_vlog_generic_get_array_select_value(t46, 16, t65, t68, t71, 2, 1, t74, 32, 1);
    t76 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 1, ng18, 3, t76, (char)118, t43, 16, (char)118, t46, 16);
    xsi_set_current_line(340, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 8088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB43;

LAB46:    *((unsigned int *)t33) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(345, ng0);

LAB51:    xsi_set_current_line(346, ng0);
    t39 = (t1 + 9848);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t1 + 9848);
    t44 = (t42 + 72U);
    t45 = *((char **)t44);
    t47 = (t1 + 9848);
    t53 = (t47 + 64U);
    t54 = *((char **)t53);
    t59 = (t1 + 7448);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    xsi_vlog_generic_get_array_select_value(t43, 16, t41, t45, t54, 2, 1, t61, 32, 1);
    t63 = (t1 + 10008);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t66 = (t1 + 10008);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = (t1 + 10008);
    t70 = (t69 + 64U);
    t71 = *((char **)t70);
    t72 = (t1 + 7448);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    xsi_vlog_generic_get_array_select_value(t46, 16, t65, t68, t71, 2, 1, t74, 32, 1);
    t76 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 1, ng19, 3, t76, (char)118, t43, 16, (char)118, t46, 16);
    xsi_set_current_line(347, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 8088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB50;

LAB54:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(352, ng0);

LAB59:    xsi_set_current_line(353, ng0);
    t18 = (t1 + 7448);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    t22 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 1, ng20, 2, t22, (char)119, t21, 32);
    xsi_set_current_line(354, ng0);
    t4 = (t1 + 6488);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 6488);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB58;

}

static void Initial_53_0(char *t0)
{
    char t3[8];
    char t19[32];
    char t23[8];
    char t26[8];
    char t39[8];
    char t42[8];
    char t43[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    double t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    int t54;
    char *t55;
    int t56;
    int t57;
    int t58;
    int t59;
    char *t60;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 11568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng21, ng22);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 7128);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 7128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 7128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6648);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t19, 0, t13, 0, 128);
    *((int *)t3) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng24, 2, t0, (char)118, t19, 128);
    t20 = (t3 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 6648);
    xsi_vlogvar_assign_value(t21, t19, 0, 0, 128);
    t22 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_signed_not_equal(t23, 32, t3, 32, t22, 32);
    t24 = (t23 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t23);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 7128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6808);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t25 = *((double *)t13);
    t20 = xsi_vlog_convert_real_to_bits(t25, t3, 64);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng26, 2, t0, (char)101, t3, 64);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 6808);
    xsi_vlogvar_assign_value_double(t22, *((double *)t3), 0);
    t24 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 7128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6968);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t25 = *((double *)t13);
    t20 = xsi_vlog_convert_real_to_bits(t25, t3, 64);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng28, 2, t0, (char)101, t3, 64);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 6968);
    xsi_vlogvar_assign_value_double(t22, *((double *)t3), 0);
    t24 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(75, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng30, ng22);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 7288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 7288);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t6) == 0)
        goto LAB25;

LAB27:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB28:    t13 = (t3 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 7288);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 8728);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t3, 0, t13, 0, 32);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng32, 2, t0, (char)119, t3, 32);
    t20 = (t23 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 8728);
    xsi_vlogvar_assign_value(t21, t3, 0, 0, 32);
    t22 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t22, 32);
    t24 = (t26 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(86, ng0);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 7448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB37:    t2 = (t0 + 7448);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 8728);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t13, 32);
    t20 = (t3 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 7288);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5688);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10168);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 16);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10328);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10488);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng38)));
    t4 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t54 = (t9 & t8);
    t5 = (t0 + 18984);
    *((int *)t5) = t54;

LAB57:    t6 = (t0 + 18984);
    if (*((int *)t6) > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t54 = (t9 & t8);
    t5 = (t0 + 18988);
    *((int *)t5) = t54;

LAB61:    t6 = (t0 + 18988);
    if (*((int *)t6) > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng38)));
    t4 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t54 = (t9 & t8);
    t5 = (t0 + 18992);
    *((int *)t5) = t54;

LAB65:    t6 = (t0 + 18992);
    if (*((int *)t6) > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 13360);
    t4 = (t0 + 11376);
    xsi_add_process_toexecute(0, t2, t4);
    t5 = (t0 + 13608);
    t6 = (t0 + 11376);
    xsi_add_process_toexecute(0, t5, t6);
    t12 = (t0 + 13856);
    t13 = (t0 + 11376);
    xsi_add_process_toexecute(0, t12, t13);
    t20 = (t0 + 10648);
    memset(t3, 0, 8);
    *((unsigned int *)t3) = 3;
    xsi_vlogvar_assign_value(t20, t3, 0, 0, 32);
    t21 = (t0 + 14416);
    *((int *)t21) = 1;
    *((char **)t1) = &&LAB69;

LAB1:    return;
LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(55, ng0);

LAB12:    xsi_set_current_line(56, ng0);
    xsi_vlogfile_write(0, 0, 1, ng23, 1, t0);
    xsi_set_current_line(57, ng0);
    xsi_vlog_finish(1);
    goto LAB11;

LAB13:    xsi_set_current_line(60, ng0);

LAB16:    xsi_set_current_line(61, ng0);
    xsi_vlogfile_write(0, 0, 1, ng25, 1, t0);
    xsi_set_current_line(62, ng0);
    xsi_vlog_finish(1);
    goto LAB15;

LAB17:    xsi_set_current_line(65, ng0);

LAB20:    xsi_set_current_line(66, ng0);
    xsi_vlogfile_write(0, 0, 1, ng27, 1, t0);
    xsi_set_current_line(67, ng0);
    xsi_vlog_finish(1);
    goto LAB19;

LAB21:    xsi_set_current_line(70, ng0);

LAB24:    xsi_set_current_line(71, ng0);
    xsi_vlogfile_write(0, 0, 1, ng29, 1, t0);
    xsi_set_current_line(72, ng0);
    xsi_vlog_finish(1);
    goto LAB23;

LAB25:    *((unsigned int *)t3) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(76, ng0);

LAB32:    xsi_set_current_line(77, ng0);
    xsi_vlogfile_write(0, 0, 1, ng31, 1, t0);
    xsi_set_current_line(78, ng0);
    xsi_vlog_finish(1);
    goto LAB31;

LAB33:    xsi_set_current_line(81, ng0);

LAB36:    xsi_set_current_line(82, ng0);
    xsi_vlogfile_write(0, 0, 1, ng33, 1, t0);
    xsi_set_current_line(83, ng0);
    xsi_vlog_finish(1);
    goto LAB35;

LAB38:    xsi_set_current_line(86, ng0);

LAB40:    xsi_set_current_line(87, ng0);
    t21 = (t0 + 7288);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 9208);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 9208);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 9208);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 7448);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t26, 16, t29, t32, t35, 2, 1, t38, 32, 1);
    xsi_vlog_bit_copy(t23, 0, t26, 0, 16);
    *((int *)t39) = xsi_vlogfile_fscanf(*((unsigned int *)t24), ng34, 2, t0, (char)118, t23, 16);
    t40 = (t39 + 4);
    *((int *)t40) = 0;
    t41 = (t0 + 9208);
    t44 = (t0 + 9208);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 9208);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 7448);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_convert_array_indices(t42, t43, t46, t49, 2, 1, t52, 32, 1);
    t53 = (t42 + 4);
    t14 = *((unsigned int *)t53);
    t54 = (!(t14));
    t55 = (t43 + 4);
    t15 = *((unsigned int *)t55);
    t56 = (!(t15));
    t57 = (t54 && t56);
    if (t57 == 1)
        goto LAB41;

LAB42:    t60 = ((char*)((ng3)));
    memset(t61, 0, 8);
    xsi_vlog_signed_not_equal(t61, 32, t39, 32, t60, 32);
    t62 = (t61 + 4);
    t18 = *((unsigned int *)t62);
    t63 = (~(t18));
    t64 = *((unsigned int *)t61);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 9208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 9208);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t20 = (t0 + 9208);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t24 = (t0 + 7448);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t3, 16, t5, t13, t22, 2, 1, t28, 32, 1);
    memset(t23, 0, 8);
    t29 = (t23 + 4);
    t30 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t23) = t8;
    t9 = *((unsigned int *)t30);
    t10 = (t9 >> 0);
    *((unsigned int *)t29) = t10;
    t11 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t11 & 63U);
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 63U);
    t31 = (t0 + 8568);
    xsi_vlogvar_assign_value(t31, t23, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 7608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB47:    t2 = (t0 + 7608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 8568);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t13, 32);
    t20 = (t3 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 7448);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t12 = (t0 + 7448);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 32);
    goto LAB37;

LAB41:    t16 = *((unsigned int *)t42);
    t17 = *((unsigned int *)t43);
    t58 = (t16 - t17);
    t59 = (t58 + 1);
    xsi_vlogvar_assign_value(t41, t23, 0, *((unsigned int *)t43), t59);
    goto LAB42;

LAB43:    xsi_set_current_line(87, ng0);

LAB46:    xsi_set_current_line(88, ng0);
    xsi_vlogfile_write(0, 0, 1, ng35, 1, t0);
    xsi_set_current_line(89, ng0);
    xsi_vlog_finish(1);
    goto LAB45;

LAB48:    xsi_set_current_line(93, ng0);

LAB50:    xsi_set_current_line(94, ng0);
    t21 = (t0 + 7288);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 9368);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 9368);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 9368);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 7448);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t40 = (t0 + 7608);
    t41 = (t40 + 56U);
    t44 = *((char **)t41);
    xsi_vlog_generic_get_array_select_value(t26, 16, t29, t32, t35, 2, 2, t38, 32, 1, t44, 32, 1);
    xsi_vlog_bit_copy(t23, 0, t26, 0, 16);
    *((int *)t39) = xsi_vlogfile_fscanf(*((unsigned int *)t24), ng36, 2, t0, (char)118, t23, 16);
    t45 = (t39 + 4);
    *((int *)t45) = 0;
    t46 = (t0 + 9368);
    t47 = (t0 + 9368);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t0 + 9368);
    t51 = (t50 + 64U);
    t52 = *((char **)t51);
    t53 = (t0 + 7448);
    t55 = (t53 + 56U);
    t60 = *((char **)t55);
    t62 = (t0 + 7608);
    t67 = (t62 + 56U);
    t68 = *((char **)t67);
    xsi_vlog_generic_convert_array_indices(t42, t43, t49, t52, 2, 2, t60, 32, 1, t68, 32, 1);
    t69 = (t42 + 4);
    t14 = *((unsigned int *)t69);
    t54 = (!(t14));
    t70 = (t43 + 4);
    t15 = *((unsigned int *)t70);
    t56 = (!(t15));
    t57 = (t54 && t56);
    if (t57 == 1)
        goto LAB51;

LAB52:    t71 = ((char*)((ng3)));
    memset(t61, 0, 8);
    xsi_vlog_signed_not_equal(t61, 32, t39, 32, t71, 32);
    t72 = (t61 + 4);
    t18 = *((unsigned int *)t72);
    t63 = (~(t18));
    t64 = *((unsigned int *)t61);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 7608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t12 = (t0 + 7608);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 32);
    goto LAB47;

LAB51:    t16 = *((unsigned int *)t42);
    t17 = *((unsigned int *)t43);
    t58 = (t16 - t17);
    t59 = (t58 + 1);
    xsi_vlogvar_assign_value(t46, t23, 0, *((unsigned int *)t43), t59);
    goto LAB52;

LAB53:    xsi_set_current_line(94, ng0);

LAB56:    xsi_set_current_line(95, ng0);
    t73 = (t0 + 7608);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t0 + 7448);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    xsi_vlogfile_write(0, 0, 1, ng37, 3, t0, (char)119, t75, 32, (char)119, t78, 32);
    xsi_set_current_line(96, ng0);
    xsi_vlog_finish(1);
    goto LAB55;

LAB58:    xsi_set_current_line(111, ng0);
    t12 = (t0 + 14368);
    *((int *)t12) = 1;
    t13 = (t0 + 11600);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    t2 = (t0 + 18984);
    t54 = *((int *)t2);
    *((int *)t2) = (t54 - 1);
    goto LAB57;

LAB62:    xsi_set_current_line(114, ng0);
    t12 = (t0 + 14384);
    *((int *)t12) = 1;
    t13 = (t0 + 11600);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB64:    t2 = (t0 + 18988);
    t54 = *((int *)t2);
    *((int *)t2) = (t54 - 1);
    goto LAB61;

LAB66:    xsi_set_current_line(117, ng0);
    t12 = (t0 + 14400);
    *((int *)t12) = 1;
    t13 = (t0 + 11600);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB68:    t2 = (t0 + 18992);
    t54 = *((int *)t2);
    *((int *)t2) = (t54 - 1);
    goto LAB65;

LAB69:    t22 = (t0 + 10648);
    t24 = (t22 + 56U);
    t27 = *((char **)t24);
    if (*((int *)t27) > 0)
        goto LAB70;

LAB71:    t29 = (t0 + 11376);
    xsi_clean_active_fork_process_list(t29);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng39)));
    t4 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t54 = (t9 & t8);
    t5 = (t0 + 18996);
    *((int *)t5) = t54;

LAB72:    t6 = (t0 + 18996);
    if (*((int *)t6) > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 11376);
    t4 = (t0 + 2576);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB78:    t6 = (t0 + 11472);
    t12 = *((char **)t6);
    t13 = (t12 + 80U);
    t20 = *((char **)t13);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t24 = (t22 + 0U);
    t27 = *((char **)t24);
    t54 = ((int  (*)(char *, char *))t27)(t0, t12);

LAB80:    if (t54 != 0)
        goto LAB81;

LAB76:    t12 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t12);

LAB77:    t28 = (t0 + 11472);
    t29 = *((char **)t28);
    t28 = (t0 + 2576);
    t30 = (t0 + 11376);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 11376);
    t4 = (t0 + 2144);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB84:    t6 = (t0 + 11472);
    t12 = *((char **)t6);
    t13 = (t12 + 80U);
    t20 = *((char **)t13);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t24 = (t22 + 0U);
    t27 = *((char **)t24);
    t54 = ((int  (*)(char *, char *))t27)(t0, t12);

LAB86:    if (t54 != 0)
        goto LAB87;

LAB82:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB83:    t28 = (t0 + 11472);
    t29 = *((char **)t28);
    t28 = (t0 + 2144);
    t30 = (t0 + 11376);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    goto LAB1;

LAB70:    t28 = (t0 + 14416);
    *((int *)t28) = 1;
    goto LAB1;

LAB73:    xsi_set_current_line(134, ng0);
    t12 = (t0 + 14432);
    *((int *)t12) = 1;
    t13 = (t0 + 11600);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB75:    t2 = (t0 + 18996);
    t54 = *((int *)t2);
    *((int *)t2) = (t54 - 1);
    goto LAB72;

LAB79:;
LAB81:    t6 = (t0 + 11568U);
    *((char **)t6) = &&LAB78;
    goto LAB1;

LAB85:;
LAB87:    t6 = (t0 + 11568U);
    *((char **)t6) = &&LAB84;
    goto LAB1;

}

static void Always_361_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 11816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(361, ng0);
    t2 = (t0 + 11624);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(361, ng0);
    t4 = (t0 + 5688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 5688);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Always_363_2(char *t0)
{
    char t8[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;

LAB0:    t1 = (t0 + 12064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(363, ng0);
    t2 = (t0 + 14608);
    *((int *)t2) = 1;
    t3 = (t0 + 12096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(363, ng0);

LAB5:    xsi_set_current_line(364, ng0);
    t4 = (t0 + 9048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng40)));
    memset(t8, 0, 8);
    xsi_vlog_signed_not_equal(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(366, ng0);
    t2 = (t0 + 4488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB11;

LAB9:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB11;

LAB10:    *((unsigned int *)t8) = 1;

LAB11:    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(365, ng0);
    t15 = (t0 + 8888);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t17, 32, t18, 32);
    t20 = (t0 + 8888);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    goto LAB8;

LAB12:    xsi_set_current_line(367, ng0);
    t7 = (t0 + 9048);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    t16 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t15, 32, t16, 32);
    t17 = (t0 + 9048);
    xsi_vlogvar_assign_value(t17, t19, 0, 0, 32);
    goto LAB14;

}

static void Cont_370_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 12312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(370, ng0);
    t2 = (t0 + 5688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 14624);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_371_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 12560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(371, ng0);
    t2 = (t0 + 5848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 14640);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_372_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 12808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(372, ng0);
    t2 = (t0 + 10168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14912);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 14656);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_373_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(373, ng0);
    t2 = (t0 + 10328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14976);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 14672);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_374_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(374, ng0);
    t2 = (t0 + 10488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15040);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 14688);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Forked_120_8(char *t0)
{
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;

LAB0:    t1 = (t0 + 13552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 13360);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(120, ng0);

LAB6:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 14704);
    *((int *)t3) = 1;
    t4 = (t0 + 13584);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB5:    t2 = (t0 + 10648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t18, t4, 8);
    t19 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t19 - 1);
    xsi_vlogvar_assign_value(t2, t18, 0, 0, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 13360);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB10:    t5 = (t0 + 13456);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB12:    if (t13 != 0)
        goto LAB13;

LAB8:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB9:    t14 = (t0 + 13456);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 13360);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    goto LAB5;

LAB11:;
LAB13:    t5 = (t0 + 13552U);
    *((char **)t5) = &&LAB10;
    goto LAB1;

}

static void Forked_125_9(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;

LAB0:    t1 = (t0 + 13800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 13608);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(125, ng0);

LAB6:    xsi_set_current_line(126, ng0);
    t3 = (t0 + 13608);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 13704);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB11:    if (t14 != 0)
        goto LAB12;

LAB7:    t7 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t7);

LAB8:    t15 = (t0 + 13704);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t17 = (t0 + 13608);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);

LAB5:    t2 = (t0 + 10648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t19, t4, 8);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 - 1);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);
    goto LAB2;

LAB10:;
LAB12:    t6 = (t0 + 13800U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

}

static void Forked_129_10(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;

LAB0:    t1 = (t0 + 14048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 13856);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(129, ng0);

LAB6:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 13856);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 13952);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB11:    if (t14 != 0)
        goto LAB12;

LAB7:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB8:    t15 = (t0 + 13952);
    t16 = *((char **)t15);
    t15 = (t0 + 1280);
    t17 = (t0 + 13856);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);

LAB5:    t2 = (t0 + 10648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t19, t4, 8);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 - 1);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);
    goto LAB2;

LAB10:;
LAB12:    t6 = (t0 + 14048U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

}


extern void tester_m_00000000001477305666_2613777659_init()
{
	static char *pe[] = {(void *)Initial_53_0,(void *)Always_361_1,(void *)Always_363_2,(void *)Cont_370_3,(void *)Cont_371_4,(void *)Cont_372_5,(void *)Cont_373_6,(void *)Cont_374_7,(void *)Forked_120_8,(void *)Forked_125_9,(void *)Forked_129_10};
	static char *se[] = {(void *)sp_drive_instruction,(void *)sp_monitor_instruction_ref,(void *)sp_monitor_instruction_tst,(void *)sp_print_test_results,(void *)sp_end_of_test_checks};
	xsi_register_didat("tester_m_00000000001477305666_2613777659", "isim/tester.exe.sim/tester/m_00000000001477305666_2613777659.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
