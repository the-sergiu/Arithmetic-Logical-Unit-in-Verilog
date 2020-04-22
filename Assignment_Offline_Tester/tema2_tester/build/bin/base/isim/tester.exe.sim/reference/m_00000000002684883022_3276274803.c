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
static const char *ng0 = "C:/Users/Sergiu/Google Drive/Automatica/Semestrul 1/Arhitectura Calculatoarelor/Tema2/tema2_testeroffline/tema2_tester/build/bin/reference/ref_alu.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {7, 0};
static int ng6[] = {4, 0};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};
static unsigned int ng10[] = {255U, 0U};
static int ng11[] = {8, 0};
static int ng12[] = {9, 0};
static unsigned int ng13[] = {2989U, 0U};



static void Initial_121_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(121, ng0);

LAB2:    xsi_set_current_line(122, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(123, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_127_1(char *t0)
{
    char t8[8];
    char t9[8];
    char t10[8];
    char t51[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    int t63;
    char *t64;
    int t65;
    int t66;
    int t67;
    int t68;

LAB0:    t1 = (t0 + 8856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 10664);
    *((int *)t2) = 1;
    t3 = (t0 + 8888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(128, ng0);

LAB5:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t10) = 1;

LAB9:    memset(t9, 0, 8);
    t24 = (t10 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t24) != 0)
        goto LAB12;

LAB13:    t31 = (t9 + 4);
    t32 = *((unsigned int *)t9);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t36 = *((unsigned int *)t9);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t9) > 0)
        goto LAB20;

LAB21:    memcpy(t8, t42, 8);

LAB22:    t43 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t43, t8, 0, 0, 32, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t5) != 0)
        goto LAB25;

LAB26:    t7 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t7);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB27;

LAB28:    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t7) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t9) > 0)
        goto LAB33;

LAB34:    memcpy(t8, t10, 8);

LAB35:    t50 = (t0 + 4808);
    t53 = (t0 + 4808);
    t54 = (t53 + 72U);
    t55 = *((char **)t54);
    t56 = (t0 + 4808);
    t57 = (t56 + 64U);
    t58 = *((char **)t57);
    t59 = (t0 + 5128);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    xsi_vlog_generic_convert_array_indices(t51, t52, t55, t58, 2, 1, t61, 32, 1);
    t62 = (t51 + 4);
    t25 = *((unsigned int *)t62);
    t63 = (!(t25));
    t64 = (t52 + 4);
    t26 = *((unsigned int *)t64);
    t65 = (!(t26));
    t66 = (t63 && t65);
    if (t66 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 7048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 7368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB41;

LAB38:    if (t20 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t8) = 1;

LAB41:    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB2;

LAB8:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB12:    t30 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = ((char*)((ng2)));
    goto LAB15;

LAB16:    t40 = (t0 + 5288);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t8, 32, t35, 32, t42, 32);
    goto LAB22;

LAB20:    memcpy(t8, t35, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t9) = 1;
    goto LAB26;

LAB25:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB26;

LAB27:    t23 = (t0 + 5608);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    goto LAB28;

LAB29:    t31 = (t0 + 4808);
    t35 = (t31 + 56U);
    t40 = *((char **)t35);
    t41 = (t0 + 4808);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 4808);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = (t0 + 5128);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t10, 16, t40, t43, t46, 2, 1, t49, 32, 1);
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t8, 16, t30, 16, t10, 16);
    goto LAB35;

LAB33:    memcpy(t8, t30, 8);
    goto LAB35;

LAB36:    t27 = *((unsigned int *)t51);
    t28 = *((unsigned int *)t52);
    t67 = (t27 - t28);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t50, t8, 0, *((unsigned int *)t52), t68, 0LL);
    goto LAB37;

LAB40:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(136, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 32, 0LL);
    goto LAB44;

}

static void Always_139_2(char *t0)
{
    char t9[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t101[8];
    char t105[8];
    char t116[8];
    char t122[8];
    char t138[8];
    char t154[8];
    char t170[8];
    char t178[8];
    char t210[8];
    char t218[8];
    char t246[8];
    char t263[8];
    char t279[8];
    char t287[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
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
    unsigned int t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
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
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    int t202;
    int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t222;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t232;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    char *t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    char *t253;
    char *t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    char *t260;
    char *t261;
    char *t262;
    char *t264;
    char *t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    char *t278;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    char *t291;
    char *t292;
    char *t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    char *t301;
    char *t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    char *t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    char *t321;
    char *t322;

LAB0:    t1 = (t0 + 9104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 10680);
    *((int *)t2) = 1;
    t3 = (t0 + 9136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(140, ng0);

LAB5:    xsi_set_current_line(141, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(149, ng0);

LAB24:    xsi_set_current_line(150, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3848);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 12);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB23;

LAB9:    xsi_set_current_line(158, ng0);

LAB25:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 12);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB29;

LAB26:    if (t19 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t9) = 1;

LAB29:    memset(t22, 0, 8);
    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t23) != 0)
        goto LAB32;

LAB33:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB34;

LAB35:    memcpy(t60, t22, 8);

LAB36:    t91 = (t60 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t60);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB23;

LAB11:    xsi_set_current_line(182, ng0);

LAB133:    xsi_set_current_line(183, ng0);
    t3 = (t0 + 1688U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB137;

LAB134:    if (t19 != 0)
        goto LAB136;

LAB135:    *((unsigned int *)t9) = 1;

LAB137:    t29 = (t9 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB138;

LAB139:
LAB140:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 7688);
    t8 = (t7 + 56U);
    t23 = *((char **)t8);
    t29 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t23, 6, t29, 32);
    memset(t22, 0, 8);
    t30 = (t5 + 4);
    t34 = (t9 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t9);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t30);
    t14 = *((unsigned int *)t34);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t34);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB145;

LAB142:    if (t19 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t22) = 1;

LAB145:    t37 = (t22 + 4);
    t24 = *((unsigned int *)t37);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB146;

LAB147:
LAB148:    goto LAB23;

LAB13:    xsi_set_current_line(199, ng0);

LAB150:    xsi_set_current_line(200, ng0);
    t3 = (t0 + 4808);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4808);
    t23 = (t8 + 72U);
    t29 = *((char **)t23);
    t30 = (t0 + 4808);
    t34 = (t30 + 64U);
    t35 = *((char **)t34);
    t37 = (t0 + 5128);
    t38 = (t37 + 56U);
    t51 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t9, 16, t7, t29, t35, 2, 1, t51, 32, 1);
    memset(t22, 0, 8);
    t53 = (t22 + 4);
    t59 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 8);
    *((unsigned int *)t22) = t11;
    t12 = *((unsigned int *)t59);
    t13 = (t12 >> 8);
    *((unsigned int *)t53) = t13;
    t14 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t14 & 3U);
    t15 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t15 & 3U);
    t64 = (t0 + 6248);
    xsi_vlogvar_assign_value(t64, t22, 0, 0, 2);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t23 = (t7 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t23);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB154;

LAB151:    if (t19 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t9) = 1;

LAB154:    t30 = (t9 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB155;

LAB156:    xsi_set_current_line(205, ng0);

LAB159:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4808);
    t8 = (t7 + 72U);
    t23 = *((char **)t8);
    t29 = (t0 + 4808);
    t30 = (t29 + 64U);
    t34 = *((char **)t30);
    t35 = (t0 + 5128);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t9, 16, t5, t23, t34, 2, 1, t38, 32, 1);
    memset(t22, 0, 8);
    t51 = (t22 + 4);
    t53 = (t9 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (t10 >> 0);
    *((unsigned int *)t22) = t11;
    t12 = *((unsigned int *)t53);
    t13 = (t12 >> 0);
    *((unsigned int *)t51) = t13;
    t14 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t14 & 255U);
    t15 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t15 & 255U);
    t59 = (t0 + 5768);
    xsi_vlogvar_assign_value(t59, t22, 0, 0, 8);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB157:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t23 = (t7 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t23);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB163;

LAB160:    if (t19 != 0)
        goto LAB162;

LAB161:    *((unsigned int *)t9) = 1;

LAB163:    t30 = (t9 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB164;

LAB165:
LAB166:    goto LAB23;

LAB15:    xsi_set_current_line(215, ng0);

LAB168:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4648);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB172;

LAB169:    if (t19 != 0)
        goto LAB171;

LAB170:    *((unsigned int *)t9) = 1;

LAB172:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB173;

LAB174:
LAB175:    goto LAB23;

LAB17:    xsi_set_current_line(229, ng0);

LAB185:    xsi_set_current_line(230, ng0);
    t3 = (t0 + 7528);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);

LAB186:    t8 = ((char*)((ng2)));
    t84 = xsi_vlog_unsigned_case_compare(t7, 4, t8, 32);
    if (t84 == 1)
        goto LAB187;

LAB188:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t6 == 1)
        goto LAB189;

LAB190:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t6 == 1)
        goto LAB191;

LAB192:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t6 == 1)
        goto LAB193;

LAB194:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t6 == 1)
        goto LAB195;

LAB196:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t6 == 1)
        goto LAB197;

LAB198:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t6 == 1)
        goto LAB199;

LAB200:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t6 == 1)
        goto LAB201;

LAB202:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t6 == 1)
        goto LAB203;

LAB204:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t6 == 1)
        goto LAB205;

LAB206:
LAB207:    xsi_set_current_line(271, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t23 = (t5 + 4);
    t29 = (t8 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t23);
    t14 = *((unsigned int *)t29);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t23);
    t18 = *((unsigned int *)t29);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB256;

LAB253:    if (t19 != 0)
        goto LAB255;

LAB254:    *((unsigned int *)t9) = 1;

LAB256:    t34 = (t9 + 4);
    t24 = *((unsigned int *)t34);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB257;

LAB258:    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB259:    goto LAB23;

LAB19:    xsi_set_current_line(277, ng0);

LAB260:    xsi_set_current_line(278, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4168);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(279, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(280, ng0);
    t2 = (t0 + 7528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 6728);
    t23 = (t8 + 56U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng7)));
    xsi_vlogtype_concat(t9, 16, 16, 3U, t30, 11, t29, 1, t5, 4);
    t34 = (t0 + 4008);
    xsi_vlogvar_assign_value(t34, t9, 0, 0, 16);
    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB23;

LAB21:    xsi_set_current_line(284, ng0);

LAB261:    xsi_set_current_line(285, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4168);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(286, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t22, 0, 8);
    t8 = (t5 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB262;

LAB263:    if (*((unsigned int *)t8) != 0)
        goto LAB264;

LAB265:    t29 = (t22 + 4);
    t15 = *((unsigned int *)t22);
    t16 = *((unsigned int *)t29);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB266;

LAB267:    t18 = *((unsigned int *)t22);
    t19 = (~(t18));
    t20 = *((unsigned int *)t29);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB268;

LAB269:    if (*((unsigned int *)t29) > 0)
        goto LAB270;

LAB271:    if (*((unsigned int *)t22) > 0)
        goto LAB272;

LAB273:    memcpy(t9, t36, 8);

LAB274:    t38 = (t0 + 4008);
    xsi_vlogvar_assign_value(t38, t9, 0, 0, 16);
    xsi_set_current_line(287, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB23;

LAB28:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t22) = 1;
    goto LAB33;

LAB32:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB33;

LAB34:    t34 = (t0 + 1848U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB40;

LAB37:    if (t48 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t36) = 1;

LAB40:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t53) != 0)
        goto LAB43;

LAB44:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB36;

LAB39:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t52) = 1;
    goto LAB44;

LAB43:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB44;

LAB45:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t6 = (t77 & t79);
    t84 = (t81 & t83);
    t85 = (~(t6));
    t86 = (~(t84));
    t87 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t87 & t85);
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t89 & t85);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    goto LAB47;

LAB48:    xsi_set_current_line(167, ng0);

LAB51:    xsi_set_current_line(168, ng0);
    t97 = (t0 + 1528U);
    t98 = *((char **)t97);
    t97 = (t0 + 7688);
    xsi_vlogvar_assign_value(t97, t98, 0, 0, 6);
    t99 = (t0 + 6568);
    xsi_vlogvar_assign_value(t99, t98, 6, 0, 2);
    t100 = (t0 + 7528);
    xsi_vlogvar_assign_value(t100, t98, 8, 0, 4);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 7528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 7528);
    t8 = (t7 + 72U);
    t23 = *((char **)t8);
    t29 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t5, t23, 2, t29, 32, 1);
    t30 = ((char*)((ng1)));
    memset(t22, 0, 8);
    t34 = (t9 + 4);
    t35 = (t30 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t30);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t34);
    t14 = *((unsigned int *)t35);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t34);
    t18 = *((unsigned int *)t35);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB55;

LAB52:    if (t19 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t22) = 1;

LAB55:    memset(t36, 0, 8);
    t38 = (t22 + 4);
    t24 = *((unsigned int *)t38);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t38) != 0)
        goto LAB58;

LAB59:    t53 = (t36 + 4);
    t31 = *((unsigned int *)t36);
    t32 = *((unsigned int *)t53);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB60;

LAB61:    memcpy(t101, t36, 8);

LAB62:    memset(t105, 0, 8);
    t106 = (t101 + 4);
    t92 = *((unsigned int *)t106);
    t93 = (~(t92));
    t94 = *((unsigned int *)t101);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t106) != 0)
        goto LAB76;

LAB77:    t108 = (t105 + 4);
    t109 = *((unsigned int *)t105);
    t110 = (!(t109));
    t111 = *((unsigned int *)t108);
    t112 = (t110 || t111);
    if (t112 > 0)
        goto LAB78;

LAB79:    memcpy(t218, t105, 8);

LAB80:    memset(t246, 0, 8);
    t247 = (t218 + 4);
    t248 = *((unsigned int *)t247);
    t249 = (~(t248));
    t250 = *((unsigned int *)t218);
    t251 = (t250 & t249);
    t252 = (t251 & 1U);
    if (t252 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t247) != 0)
        goto LAB112;

LAB113:    t254 = (t246 + 4);
    t255 = *((unsigned int *)t246);
    t256 = (!(t255));
    t257 = *((unsigned int *)t254);
    t258 = (t256 || t257);
    if (t258 > 0)
        goto LAB114;

LAB115:    memcpy(t287, t246, 8);

LAB116:    t315 = (t287 + 4);
    t316 = *((unsigned int *)t315);
    t317 = (~(t316));
    t318 = *((unsigned int *)t287);
    t319 = (t318 & t317);
    t320 = (t319 != 0);
    if (t320 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(174, ng0);

LAB132:    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB130:    goto LAB50;

LAB54:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t36) = 1;
    goto LAB59;

LAB58:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB59;

LAB60:    t59 = (t0 + 7688);
    t64 = (t59 + 56U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng3)));
    memset(t52, 0, 8);
    t74 = (t65 + 4);
    t75 = (t66 + 4);
    t39 = *((unsigned int *)t65);
    t40 = *((unsigned int *)t66);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t74);
    t43 = *((unsigned int *)t75);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t74);
    t47 = *((unsigned int *)t75);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB64;

LAB63:    if (t48 != 0)
        goto LAB65;

LAB66:    memset(t60, 0, 8);
    t97 = (t52 + 4);
    t54 = *((unsigned int *)t97);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t97) != 0)
        goto LAB69;

LAB70:    t61 = *((unsigned int *)t36);
    t62 = *((unsigned int *)t60);
    t63 = (t61 & t62);
    *((unsigned int *)t101) = t63;
    t99 = (t36 + 4);
    t100 = (t60 + 4);
    t102 = (t101 + 4);
    t67 = *((unsigned int *)t99);
    t68 = *((unsigned int *)t100);
    t69 = (t67 | t68);
    *((unsigned int *)t102) = t69;
    t70 = *((unsigned int *)t102);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB62;

LAB64:    *((unsigned int *)t52) = 1;
    goto LAB66;

LAB65:    t91 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB66;

LAB67:    *((unsigned int *)t60) = 1;
    goto LAB70;

LAB69:    t98 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB70;

LAB71:    t72 = *((unsigned int *)t101);
    t73 = *((unsigned int *)t102);
    *((unsigned int *)t101) = (t72 | t73);
    t103 = (t36 + 4);
    t104 = (t60 + 4);
    t76 = *((unsigned int *)t36);
    t77 = (~(t76));
    t78 = *((unsigned int *)t103);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (~(t80));
    t82 = *((unsigned int *)t104);
    t83 = (~(t82));
    t6 = (t77 & t79);
    t84 = (t81 & t83);
    t85 = (~(t6));
    t86 = (~(t84));
    t87 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t87 & t85);
    t88 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t88 & t86);
    t89 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t89 & t85);
    t90 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t90 & t86);
    goto LAB73;

LAB74:    *((unsigned int *)t105) = 1;
    goto LAB77;

LAB76:    t107 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB77;

LAB78:    t113 = (t0 + 7528);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    t117 = (t0 + 7528);
    t118 = (t117 + 72U);
    t119 = *((char **)t118);
    t120 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t116, 32, t115, t119, 2, t120, 32, 1);
    t121 = ((char*)((ng1)));
    memset(t122, 0, 8);
    t123 = (t116 + 4);
    t124 = (t121 + 4);
    t125 = *((unsigned int *)t116);
    t126 = *((unsigned int *)t121);
    t127 = (t125 ^ t126);
    t128 = *((unsigned int *)t123);
    t129 = *((unsigned int *)t124);
    t130 = (t128 ^ t129);
    t131 = (t127 | t130);
    t132 = *((unsigned int *)t123);
    t133 = *((unsigned int *)t124);
    t134 = (t132 | t133);
    t135 = (~(t134));
    t136 = (t131 & t135);
    if (t136 != 0)
        goto LAB84;

LAB81:    if (t134 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t122) = 1;

LAB84:    memset(t138, 0, 8);
    t139 = (t122 + 4);
    t140 = *((unsigned int *)t139);
    t141 = (~(t140));
    t142 = *((unsigned int *)t122);
    t143 = (t142 & t141);
    t144 = (t143 & 1U);
    if (t144 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t139) != 0)
        goto LAB87;

LAB88:    t146 = (t138 + 4);
    t147 = *((unsigned int *)t138);
    t148 = *((unsigned int *)t146);
    t149 = (t147 || t148);
    if (t149 > 0)
        goto LAB89;

LAB90:    memcpy(t178, t138, 8);

LAB91:    memset(t210, 0, 8);
    t211 = (t178 + 4);
    t212 = *((unsigned int *)t211);
    t213 = (~(t212));
    t214 = *((unsigned int *)t178);
    t215 = (t214 & t213);
    t216 = (t215 & 1U);
    if (t216 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t211) != 0)
        goto LAB105;

LAB106:    t219 = *((unsigned int *)t105);
    t220 = *((unsigned int *)t210);
    t221 = (t219 | t220);
    *((unsigned int *)t218) = t221;
    t222 = (t105 + 4);
    t223 = (t210 + 4);
    t224 = (t218 + 4);
    t225 = *((unsigned int *)t222);
    t226 = *((unsigned int *)t223);
    t227 = (t225 | t226);
    *((unsigned int *)t224) = t227;
    t228 = *((unsigned int *)t224);
    t229 = (t228 != 0);
    if (t229 == 1)
        goto LAB107;

LAB108:
LAB109:    goto LAB80;

LAB83:    t137 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t138) = 1;
    goto LAB88;

LAB87:    t145 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t145) = 1;
    goto LAB88;

LAB89:    t150 = (t0 + 7688);
    t151 = (t150 + 56U);
    t152 = *((char **)t151);
    t153 = ((char*)((ng1)));
    memset(t154, 0, 8);
    t155 = (t152 + 4);
    t156 = (t153 + 4);
    t157 = *((unsigned int *)t152);
    t158 = *((unsigned int *)t153);
    t159 = (t157 ^ t158);
    t160 = *((unsigned int *)t155);
    t161 = *((unsigned int *)t156);
    t162 = (t160 ^ t161);
    t163 = (t159 | t162);
    t164 = *((unsigned int *)t155);
    t165 = *((unsigned int *)t156);
    t166 = (t164 | t165);
    t167 = (~(t166));
    t168 = (t163 & t167);
    if (t168 != 0)
        goto LAB93;

LAB92:    if (t166 != 0)
        goto LAB94;

LAB95:    memset(t170, 0, 8);
    t171 = (t154 + 4);
    t172 = *((unsigned int *)t171);
    t173 = (~(t172));
    t174 = *((unsigned int *)t154);
    t175 = (t174 & t173);
    t176 = (t175 & 1U);
    if (t176 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t171) != 0)
        goto LAB98;

LAB99:    t179 = *((unsigned int *)t138);
    t180 = *((unsigned int *)t170);
    t181 = (t179 & t180);
    *((unsigned int *)t178) = t181;
    t182 = (t138 + 4);
    t183 = (t170 + 4);
    t184 = (t178 + 4);
    t185 = *((unsigned int *)t182);
    t186 = *((unsigned int *)t183);
    t187 = (t185 | t186);
    *((unsigned int *)t184) = t187;
    t188 = *((unsigned int *)t184);
    t189 = (t188 != 0);
    if (t189 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB91;

LAB93:    *((unsigned int *)t154) = 1;
    goto LAB95;

LAB94:    t169 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t170) = 1;
    goto LAB99;

LAB98:    t177 = (t170 + 4);
    *((unsigned int *)t170) = 1;
    *((unsigned int *)t177) = 1;
    goto LAB99;

LAB100:    t190 = *((unsigned int *)t178);
    t191 = *((unsigned int *)t184);
    *((unsigned int *)t178) = (t190 | t191);
    t192 = (t138 + 4);
    t193 = (t170 + 4);
    t194 = *((unsigned int *)t138);
    t195 = (~(t194));
    t196 = *((unsigned int *)t192);
    t197 = (~(t196));
    t198 = *((unsigned int *)t170);
    t199 = (~(t198));
    t200 = *((unsigned int *)t193);
    t201 = (~(t200));
    t202 = (t195 & t197);
    t203 = (t199 & t201);
    t204 = (~(t202));
    t205 = (~(t203));
    t206 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t206 & t204);
    t207 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t207 & t205);
    t208 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t208 & t204);
    t209 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t209 & t205);
    goto LAB102;

LAB103:    *((unsigned int *)t210) = 1;
    goto LAB106;

LAB105:    t217 = (t210 + 4);
    *((unsigned int *)t210) = 1;
    *((unsigned int *)t217) = 1;
    goto LAB106;

LAB107:    t230 = *((unsigned int *)t218);
    t231 = *((unsigned int *)t224);
    *((unsigned int *)t218) = (t230 | t231);
    t232 = (t105 + 4);
    t233 = (t210 + 4);
    t234 = *((unsigned int *)t232);
    t235 = (~(t234));
    t236 = *((unsigned int *)t105);
    t237 = (t236 & t235);
    t238 = *((unsigned int *)t233);
    t239 = (~(t238));
    t240 = *((unsigned int *)t210);
    t241 = (t240 & t239);
    t242 = (~(t237));
    t243 = (~(t241));
    t244 = *((unsigned int *)t224);
    *((unsigned int *)t224) = (t244 & t242);
    t245 = *((unsigned int *)t224);
    *((unsigned int *)t224) = (t245 & t243);
    goto LAB109;

LAB110:    *((unsigned int *)t246) = 1;
    goto LAB113;

LAB112:    t253 = (t246 + 4);
    *((unsigned int *)t246) = 1;
    *((unsigned int *)t253) = 1;
    goto LAB113;

LAB114:    t259 = (t0 + 7688);
    t260 = (t259 + 56U);
    t261 = *((char **)t260);
    t262 = ((char*)((ng2)));
    memset(t263, 0, 8);
    t264 = (t261 + 4);
    t265 = (t262 + 4);
    t266 = *((unsigned int *)t261);
    t267 = *((unsigned int *)t262);
    t268 = (t266 ^ t267);
    t269 = *((unsigned int *)t264);
    t270 = *((unsigned int *)t265);
    t271 = (t269 ^ t270);
    t272 = (t268 | t271);
    t273 = *((unsigned int *)t264);
    t274 = *((unsigned int *)t265);
    t275 = (t273 | t274);
    t276 = (~(t275));
    t277 = (t272 & t276);
    if (t277 != 0)
        goto LAB120;

LAB117:    if (t275 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t263) = 1;

LAB120:    memset(t279, 0, 8);
    t280 = (t263 + 4);
    t281 = *((unsigned int *)t280);
    t282 = (~(t281));
    t283 = *((unsigned int *)t263);
    t284 = (t283 & t282);
    t285 = (t284 & 1U);
    if (t285 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t280) != 0)
        goto LAB123;

LAB124:    t288 = *((unsigned int *)t246);
    t289 = *((unsigned int *)t279);
    t290 = (t288 | t289);
    *((unsigned int *)t287) = t290;
    t291 = (t246 + 4);
    t292 = (t279 + 4);
    t293 = (t287 + 4);
    t294 = *((unsigned int *)t291);
    t295 = *((unsigned int *)t292);
    t296 = (t294 | t295);
    *((unsigned int *)t293) = t296;
    t297 = *((unsigned int *)t293);
    t298 = (t297 != 0);
    if (t298 == 1)
        goto LAB125;

LAB126:
LAB127:    goto LAB116;

LAB119:    t278 = (t263 + 4);
    *((unsigned int *)t263) = 1;
    *((unsigned int *)t278) = 1;
    goto LAB120;

LAB121:    *((unsigned int *)t279) = 1;
    goto LAB124;

LAB123:    t286 = (t279 + 4);
    *((unsigned int *)t279) = 1;
    *((unsigned int *)t286) = 1;
    goto LAB124;

LAB125:    t299 = *((unsigned int *)t287);
    t300 = *((unsigned int *)t293);
    *((unsigned int *)t287) = (t299 | t300);
    t301 = (t246 + 4);
    t302 = (t279 + 4);
    t303 = *((unsigned int *)t301);
    t304 = (~(t303));
    t305 = *((unsigned int *)t246);
    t306 = (t305 & t304);
    t307 = *((unsigned int *)t302);
    t308 = (~(t307));
    t309 = *((unsigned int *)t279);
    t310 = (t309 & t308);
    t311 = (~(t306));
    t312 = (~(t310));
    t313 = *((unsigned int *)t293);
    *((unsigned int *)t293) = (t313 & t311);
    t314 = *((unsigned int *)t293);
    *((unsigned int *)t293) = (t314 & t312);
    goto LAB127;

LAB128:    xsi_set_current_line(170, ng0);

LAB131:    xsi_set_current_line(171, ng0);
    t321 = ((char*)((ng1)));
    t322 = (t0 + 6728);
    xsi_vlogvar_assign_value(t322, t321, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB130;

LAB136:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB137;

LAB138:    xsi_set_current_line(184, ng0);

LAB141:    xsi_set_current_line(185, ng0);
    t30 = ((char*)((ng1)));
    t34 = (t0 + 5448);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 5608);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t8 = (t0 + 5288);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB140;

LAB144:    t35 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB145;

LAB146:    xsi_set_current_line(193, ng0);

LAB149:    xsi_set_current_line(194, ng0);
    t38 = (t0 + 5128);
    t51 = (t38 + 56U);
    t53 = *((char **)t51);
    t59 = (t0 + 5288);
    xsi_vlogvar_assign_value(t59, t53, 0, 0, 32);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB148;

LAB153:    t29 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB154;

LAB155:    xsi_set_current_line(201, ng0);

LAB158:    xsi_set_current_line(202, ng0);
    t34 = (t0 + 4808);
    t35 = (t34 + 56U);
    t37 = *((char **)t35);
    t38 = (t0 + 4808);
    t51 = (t38 + 72U);
    t53 = *((char **)t51);
    t59 = (t0 + 4808);
    t64 = (t59 + 64U);
    t65 = *((char **)t64);
    t66 = (t0 + 5128);
    t74 = (t66 + 56U);
    t75 = *((char **)t74);
    xsi_vlog_generic_get_array_select_value(t22, 16, t37, t53, t65, 2, 1, t75, 32, 1);
    memset(t36, 0, 8);
    t91 = (t36 + 4);
    t97 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (t31 >> 0);
    *((unsigned int *)t36) = t32;
    t33 = *((unsigned int *)t97);
    t39 = (t33 >> 0);
    *((unsigned int *)t91) = t39;
    t40 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t40 & 255U);
    t41 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t41 & 255U);
    t98 = (t0 + 5928);
    xsi_vlogvar_assign_value(t98, t36, 0, 0, 8);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB157;

LAB162:    t29 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB163;

LAB164:    xsi_set_current_line(209, ng0);

LAB167:    xsi_set_current_line(210, ng0);
    t34 = (t0 + 5128);
    t35 = (t34 + 56U);
    t37 = *((char **)t35);
    t38 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_signed_minus(t22, 32, t37, 32, t38, 32);
    t51 = (t0 + 5288);
    xsi_vlogvar_assign_value(t51, t22, 0, 0, 32);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t5, 32, t7, 32);
    t8 = (t0 + 4968);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 1);
    goto LAB166;

LAB171:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB172;

LAB173:    xsi_set_current_line(218, ng0);

LAB176:    xsi_set_current_line(219, ng0);
    t29 = (t0 + 2328U);
    t30 = *((char **)t29);
    t29 = (t0 + 5928);
    xsi_vlogvar_assign_value(t29, t30, 0, 0, 8);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 6408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 6408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t23 = (t7 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t23);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t23);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB180;

LAB177:    if (t19 != 0)
        goto LAB179;

LAB178:    *((unsigned int *)t9) = 1;

LAB180:    t30 = (t9 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB181;

LAB182:    xsi_set_current_line(223, ng0);

LAB184:    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB183:    goto LAB175;

LAB179:    t29 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB180;

LAB181:    xsi_set_current_line(222, ng0);
    t34 = ((char*)((ng8)));
    t35 = (t0 + 3528);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 32);
    goto LAB183;

LAB187:    xsi_set_current_line(231, ng0);
    t23 = (t0 + 3688);
    t29 = (t23 + 56U);
    t30 = *((char **)t29);
    t34 = (t0 + 5928);
    t35 = (t34 + 56U);
    t37 = *((char **)t35);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 12, t30, 12, t37, 8);
    t38 = (t0 + 3848);
    xsi_vlogvar_assign_value(t38, t9, 0, 0, 12);
    goto LAB207;

LAB189:    xsi_set_current_line(232, ng0);

LAB208:    xsi_set_current_line(233, ng0);
    t3 = (t0 + 6888);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t23 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t29 = (t8 + 4);
    t30 = (t23 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t23);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t29);
    t14 = *((unsigned int *)t30);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t29);
    t18 = *((unsigned int *)t30);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB212;

LAB209:    if (t19 != 0)
        goto LAB211;

LAB210:    *((unsigned int *)t9) = 1;

LAB212:    t35 = (t9 + 4);
    t24 = *((unsigned int *)t35);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB213;

LAB214:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 5928);
    t23 = (t8 + 56U);
    t29 = *((char **)t23);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t29);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t30 = (t5 + 4);
    t34 = (t29 + 4);
    t35 = (t9 + 4);
    t13 = *((unsigned int *)t30);
    t14 = *((unsigned int *)t34);
    t15 = (t13 | t14);
    *((unsigned int *)t35) = t15;
    t16 = *((unsigned int *)t35);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB217;

LAB218:
LAB219:    t51 = (t0 + 3848);
    xsi_vlogvar_assign_value(t51, t9, 0, 0, 12);

LAB215:    goto LAB207;

LAB191:    xsi_set_current_line(240, ng0);
    t3 = (t0 + 3688);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t23 = (t0 + 5928);
    t29 = (t23 + 56U);
    t30 = *((char **)t29);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t30);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t34 = (t8 + 4);
    t35 = (t30 + 4);
    t37 = (t9 + 4);
    t13 = *((unsigned int *)t34);
    t14 = *((unsigned int *)t35);
    t15 = (t13 | t14);
    *((unsigned int *)t37) = t15;
    t16 = *((unsigned int *)t37);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB220;

LAB221:
LAB222:    t53 = (t0 + 3848);
    xsi_vlogvar_assign_value(t53, t9, 0, 0, 12);
    goto LAB207;

LAB193:    xsi_set_current_line(241, ng0);
    t3 = (t0 + 3688);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t23 = (t0 + 5928);
    t29 = (t23 + 56U);
    t30 = *((char **)t29);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t30);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t34 = (t8 + 4);
    t35 = (t30 + 4);
    t37 = (t9 + 4);
    t13 = *((unsigned int *)t34);
    t14 = *((unsigned int *)t35);
    t15 = (t13 | t14);
    *((unsigned int *)t37) = t15;
    t16 = *((unsigned int *)t37);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB223;

LAB224:
LAB225:    t38 = (t0 + 3848);
    xsi_vlogvar_assign_value(t38, t9, 0, 0, 12);
    goto LAB207;

LAB195:    xsi_set_current_line(243, ng0);
    t3 = (t0 + 5928);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t29 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    *((unsigned int *)t22) = t11;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB227;

LAB226:    t16 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t16 & 255U);
    t17 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t17 & 255U);
    t30 = ((char*)((ng7)));
    xsi_vlogtype_concat(t9, 12, 12, 2U, t30, 4, t22, 8);
    t34 = (t0 + 3848);
    xsi_vlogvar_assign_value(t34, t9, 0, 0, 12);
    goto LAB207;

LAB197:    xsi_set_current_line(244, ng0);
    t3 = (t0 + 5928);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t23 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t8, 8, t23, 32);
    t29 = (t0 + 3848);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 12);
    goto LAB207;

LAB199:    xsi_set_current_line(245, ng0);
    t3 = (t0 + 5928);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t23 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t8, 8, t23, 32);
    t29 = (t0 + 3848);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 12);
    goto LAB207;

LAB201:    xsi_set_current_line(246, ng0);

LAB228:    xsi_set_current_line(247, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5928);
    t8 = (t5 + 56U);
    t23 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t3, 32, t23, 8);
    t29 = (t0 + 3848);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 12);
    xsi_set_current_line(248, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng10)));
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t8);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t23 = (t5 + 4);
    t29 = (t8 + 4);
    t30 = (t9 + 4);
    t13 = *((unsigned int *)t23);
    t14 = *((unsigned int *)t29);
    t15 = (t13 | t14);
    *((unsigned int *)t30) = t15;
    t16 = *((unsigned int *)t30);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB229;

LAB230:
LAB231:    t37 = (t0 + 3848);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 12);
    goto LAB207;

LAB203:    xsi_set_current_line(250, ng0);

LAB232:    xsi_set_current_line(251, ng0);
    t3 = (t0 + 6888);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t23 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t29 = (t8 + 4);
    t30 = (t23 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t23);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t29);
    t14 = *((unsigned int *)t30);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t29);
    t18 = *((unsigned int *)t30);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB236;

LAB233:    if (t19 != 0)
        goto LAB235;

LAB234:    *((unsigned int *)t9) = 1;

LAB236:    t35 = (t9 + 4);
    t24 = *((unsigned int *)t35);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB237;

LAB238:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 6088);
    t23 = (t8 + 56U);
    t29 = *((char **)t23);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_rshift(t9, 12, t5, 8, t29, 8);
    t30 = (t0 + 3848);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 12);

LAB239:    goto LAB207;

LAB205:    xsi_set_current_line(259, ng0);

LAB241:    xsi_set_current_line(260, ng0);
    t3 = (t0 + 6888);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t23 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t29 = (t8 + 4);
    t30 = (t23 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t23);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t29);
    t14 = *((unsigned int *)t30);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t29);
    t18 = *((unsigned int *)t30);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB245;

LAB242:    if (t19 != 0)
        goto LAB244;

LAB243:    *((unsigned int *)t9) = 1;

LAB245:    t35 = (t9 + 4);
    t24 = *((unsigned int *)t35);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB246;

LAB247:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 6088);
    t23 = (t8 + 56U);
    t29 = *((char **)t23);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 12, t5, 8, t29, 8);
    t30 = (t0 + 3848);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 12);

LAB248:    xsi_set_current_line(266, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng10)));
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t8);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t23 = (t5 + 4);
    t29 = (t8 + 4);
    t30 = (t9 + 4);
    t13 = *((unsigned int *)t23);
    t14 = *((unsigned int *)t29);
    t15 = (t13 | t14);
    *((unsigned int *)t30) = t15;
    t16 = *((unsigned int *)t30);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB250;

LAB251:
LAB252:    t37 = (t0 + 3848);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 12);
    goto LAB207;

LAB211:    t34 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB212;

LAB213:    xsi_set_current_line(233, ng0);

LAB216:    xsi_set_current_line(234, ng0);
    t37 = (t0 + 5928);
    t38 = (t37 + 56U);
    t51 = *((char **)t38);
    memcpy(t22, t51, 8);
    t53 = (t0 + 3848);
    xsi_vlogvar_assign_value(t53, t22, 0, 0, 12);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB215;

LAB217:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t35);
    *((unsigned int *)t9) = (t18 | t19);
    t37 = (t5 + 4);
    t38 = (t29 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    t24 = *((unsigned int *)t37);
    t25 = (~(t24));
    t26 = *((unsigned int *)t29);
    t27 = (~(t26));
    t28 = *((unsigned int *)t38);
    t31 = (~(t28));
    t6 = (t21 & t25);
    t84 = (t27 & t31);
    t32 = (~(t6));
    t33 = (~(t84));
    t39 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t39 & t32);
    t40 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t40 & t33);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t32);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t33);
    goto LAB219;

LAB220:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t37);
    *((unsigned int *)t9) = (t18 | t19);
    t38 = (t8 + 4);
    t51 = (t30 + 4);
    t20 = *((unsigned int *)t38);
    t21 = (~(t20));
    t24 = *((unsigned int *)t8);
    t84 = (t24 & t21);
    t25 = *((unsigned int *)t51);
    t26 = (~(t25));
    t27 = *((unsigned int *)t30);
    t202 = (t27 & t26);
    t28 = (~(t84));
    t31 = (~(t202));
    t32 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t32 & t28);
    t33 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t33 & t31);
    goto LAB222;

LAB223:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t37);
    *((unsigned int *)t9) = (t18 | t19);
    goto LAB225;

LAB227:    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t29);
    *((unsigned int *)t22) = (t12 | t13);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t14 | t15);
    goto LAB226;

LAB229:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t30);
    *((unsigned int *)t9) = (t18 | t19);
    t34 = (t5 + 4);
    t35 = (t8 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    t24 = *((unsigned int *)t34);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t35);
    t31 = (~(t28));
    t6 = (t21 & t25);
    t84 = (t27 & t31);
    t32 = (~(t6));
    t33 = (~(t84));
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & t32);
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & t33);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t32);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t33);
    goto LAB231;

LAB235:    t34 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB236;

LAB237:    xsi_set_current_line(251, ng0);

LAB240:    xsi_set_current_line(252, ng0);
    t37 = (t0 + 5928);
    t38 = (t37 + 56U);
    t51 = *((char **)t38);
    t53 = (t0 + 6088);
    xsi_vlogvar_assign_value(t53, t51, 0, 0, 8);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB239;

LAB244:    t34 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB245;

LAB246:    xsi_set_current_line(260, ng0);

LAB249:    xsi_set_current_line(261, ng0);
    t37 = (t0 + 5928);
    t38 = (t37 + 56U);
    t51 = *((char **)t38);
    t53 = (t0 + 6088);
    xsi_vlogvar_assign_value(t53, t51, 0, 0, 8);
    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB248;

LAB250:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t30);
    *((unsigned int *)t9) = (t18 | t19);
    t34 = (t5 + 4);
    t35 = (t8 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    t24 = *((unsigned int *)t34);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t35);
    t31 = (~(t28));
    t6 = (t21 & t25);
    t84 = (t27 & t31);
    t32 = (~(t6));
    t33 = (~(t84));
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & t32);
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & t33);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t32);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t33);
    goto LAB252;

LAB255:    t30 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB256;

LAB257:    xsi_set_current_line(272, ng0);
    t35 = ((char*)((ng5)));
    t37 = (t0 + 3528);
    xsi_vlogvar_assign_value(t37, t35, 0, 0, 32);
    goto LAB259;

LAB262:    *((unsigned int *)t22) = 1;
    goto LAB265;

LAB264:    t23 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB265;

LAB266:    t30 = ((char*)((ng13)));
    goto LAB267;

LAB268:    t34 = (t0 + 3688);
    t35 = (t34 + 56U);
    t37 = *((char **)t35);
    memcpy(t36, t37, 8);
    goto LAB269;

LAB270:    xsi_vlog_unsigned_bit_combine(t9, 16, t30, 16, t36, 16);
    goto LAB274;

LAB272:    memcpy(t9, t30, 8);
    goto LAB274;

}

static void Cont_294_3(char *t0)
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

LAB0:    t1 = (t0 + 9352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(294, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10840);
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
    t18 = (t0 + 10696);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_295_4(char *t0)
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

LAB0:    t1 = (t0 + 9600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(295, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10904);
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
    t18 = (t0 + 10712);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_296_5(char *t0)
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

LAB0:    t1 = (t0 + 9848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(296, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10968);
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
    t18 = (t0 + 10728);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_297_6(char *t0)
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

LAB0:    t1 = (t0 + 10096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(297, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11032);
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
    t18 = (t0 + 10744);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_298_7(char *t0)
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

LAB0:    t1 = (t0 + 10344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(298, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 10760);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void reference_m_00000000002684883022_3276274803_init()
{
	static char *pe[] = {(void *)Initial_121_0,(void *)Always_127_1,(void *)Always_139_2,(void *)Cont_294_3,(void *)Cont_295_4,(void *)Cont_296_5,(void *)Cont_297_6,(void *)Cont_298_7};
	xsi_register_didat("reference_m_00000000002684883022_3276274803", "isim/tester.exe.sim/reference/m_00000000002684883022_3276274803.didat");
	xsi_register_executes(pe);
}
