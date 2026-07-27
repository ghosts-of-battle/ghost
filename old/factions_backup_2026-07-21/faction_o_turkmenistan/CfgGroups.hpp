// Turkmenistan (East) group tree — 1:1 duplicate of Atlas_OPF_T_F, plus a Drones category.

#define GROUP_UNIT(a,b,c,d,e,f) \
class Unit##a { \
    side = b; \
    vehicle = c; \
    rank = #d; \
    position[] = {e,f,0}; \
}

#define TKM_SIDE 0

class CfgGroups {
    class East {
        class ghost_O_Turkmenistan {
            name = "[Ghost] Turkmenistan";
            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
                class GVAR(InfSquad) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(soldier_SL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_LAT_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_M_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_TL_F),SERGEANT,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(soldier_AR_F),CORPORAL,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(soldier_A_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(medic_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfSquad_Conscript) {
                    name = "Infantry Squad (Conscripts)";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(soldier_SL_conscript_F),CORPORAL,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_2_conscript_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_LAT_conscript_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_M_conscript_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_TL_conscript_F),CORPORAL,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(soldier_AR_conscript_F),PRIVATE,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(soldier_1_conscript_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(medic_conscript_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfSquad_Weapons) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(soldier_SL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_AR_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_GL_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_M_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_AT_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(soldier_F),PRIVATE,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(soldier_A_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(medic_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfTeam) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_GL_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_LAT_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfTeam_AT) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_AT_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_AT_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfTeam_AA) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_AA_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_AA_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfSentry) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(soldier_GL_F),CORPORAL,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
            };
            class Motorized {
                name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
                class GVAR(MotInf_Team) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(LSV_02_armed_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_LAT_F),PRIVATE,-5,-5);
                };
                class GVAR(MotInf_AT) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(LSV_02_unarmed_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_AT_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_AT_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_F),PRIVATE,0,-10);
                };
                class GVAR(MotInf_AA) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(LSV_02_unarmed_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_AA_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_AA_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_F),PRIVATE,0,-10);
                };
                class GVAR(MotInf_Reinforcements) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Truck_02_transport_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_SL_F),SERGEANT,5,0);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,5,-2);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_LAT_F),CORPORAL,5,-4);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_M_F),PRIVATE,5,-6);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(soldier_TL_F),SERGEANT,5,-8);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(soldier_AR_F),CORPORAL,5,-10);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(soldier_A_F),PRIVATE,5,-12);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(medic_F),PRIVATE,5,-14);
                    GROUP_UNIT(9,TKM_SIDE,QGVAR(soldier_SL_F),SERGEANT,-5,0);
                    GROUP_UNIT(10,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,-5,-2);
                    GROUP_UNIT(11,TKM_SIDE,QGVAR(soldier_LAT_F),CORPORAL,-5,-4);
                    GROUP_UNIT(12,TKM_SIDE,QGVAR(soldier_M_F),PRIVATE,-5,-6);
                    GROUP_UNIT(13,TKM_SIDE,QGVAR(soldier_TL_F),SERGEANT,-5,-8);
                    GROUP_UNIT(14,TKM_SIDE,QGVAR(soldier_AR_F),CORPORAL,-5,-10);
                    GROUP_UNIT(15,TKM_SIDE,QGVAR(soldier_A_F),PRIVATE,-5,-12);
                    GROUP_UNIT(16,TKM_SIDE,QGVAR(medic_F),PRIVATE,-5,-14);
                };
            };
            class Mechanized {
                name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
                class GVAR(MechInfSquad) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(APC_Wheeled_02_rcws_v2_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_SL_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_LAT_F),CORPORAL,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_M_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(soldier_TL_F),SERGEANT,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(soldier_AR_F),CORPORAL,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(soldier_A_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(medic_F),PRIVATE,-20,-20);
                };
                class GVAR(MechInf_AT) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(APC_Tracked_02_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_SL_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_AT_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_AT_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(soldier_AT_F),SERGEANT,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(soldier_F),CORPORAL,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(soldier_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(soldier_F),PRIVATE,-20,-20);
                };
                class GVAR(MechInf_AA) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(APC_Tracked_02_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_SL_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_AA_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_AA_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(soldier_AA_F),SERGEANT,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(soldier_F),CORPORAL,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(soldier_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(soldier_F),PRIVATE,-20,-20);
                };
            };
            class Armored {
                name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";
                class GVAR(TankPlatoon) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MBT_02_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(MBT_02_cannon_F),SERGEANT,10,-10);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(MBT_02_cannon_F),SERGEANT,-10,-10);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(MBT_02_cannon_F),CORPORAL,20,-20);
                };
                class GVAR(TankSection) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";
                    side = TKM_SIDE;
                    faction = "ghost_O_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MBT_02_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(MBT_02_cannon_F),SERGEANT,10,-10);
                };
            };
        };
    };
};
