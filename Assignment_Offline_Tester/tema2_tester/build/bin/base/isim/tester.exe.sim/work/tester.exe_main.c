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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    reference_m_00000000001385043734_3935653896_init();
    uut_m_00000000000639673017_2725559894_init();
    uut_m_00000000000013771851_3566469229_init();
    reference_m_00000000002684883022_3276274803_init();
    reference_m_00000000000013771851_0015566053_init();
    tester_m_00000000001477305666_2613777659_init();
    test_m_00000000003363540012_1985558087_init();


    xsi_register_tops("test_m_00000000003363540012_1985558087");


    return xsi_run_simulation(argc, argv);

}
