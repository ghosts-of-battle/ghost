// Turkmenistan faction group tree - duplicated from Atlas_IND_AR_F (Ardistan), Independent side.
// Unit/vehicle references point at the ghost_turkmenistan_* classes from CfgVehicles.hpp.

#define GROUP_UNIT(a,b,c,d,e,f) \
class Unit##a { \
    side = b; \
    vehicle = c; \
    rank = #d; \
    position[] = {e,f,0}; \
}

#define TKM_SIDE 2

class CfgGroups {
    class Indep {
        class ghost_Turkmenistan {
            name = CSTRING(Faction);
            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
                class GVAR(InfSquad) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_M_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(Medic_F),PRIVATE,20,-20);
                };
                class GVAR(InfSquad_Weapons) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AR_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_GL_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_M_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(Soldier_LAT_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(Medic_F),PRIVATE,20,-20);
                };
                class GVAR(InfTeam) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_GL_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_LAT_F),PRIVATE,10,-10);
                };
                class GVAR(InfTeam_AT) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_LAT_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,10,-10);
                };
                class GVAR(InfTeam_AA) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_AA_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_AA_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,10,-10);
                };
                class GVAR(InfSentry) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_GL_F),CORPORAL,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,5,-5);
                };
            };
            class Support {
                name = "$STR_A3_CfgGroups_West_BLU_F_Support0";
                class GVAR(Support_CLS) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Medic_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Medic_F),PRIVATE,10,-10);
                };
                class GVAR(Support_EOD) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Engineer_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_Exp_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_Exp_F),PRIVATE,10,-10);
                };
                class GVAR(Support_ENG) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Engineer_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Engineer_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,10,-10);
                };
            };
            class Motorized {
                name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
                class GVAR(MotInf_Team) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MRAP_02_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_LAT_F),PRIVATE,-5,-5);
                };
                class GVAR(MotInf_AT) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MRAP_02_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,0,-10);
                };
                class GVAR(MotInf_AA) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MRAP_02_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(soldier_AA_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_AA_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_AAA_F),PRIVATE,0,-10);
                };
                class GVAR(MotInf_Reinforcements) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Truck_02_transport_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,5,0);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,5,-2);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,5,-4);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(Soldier_M_F),PRIVATE,5,-6);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,5,-8);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,5,-10);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,5,-12);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(Medic_F),PRIVATE,5,-14);
                    GROUP_UNIT(9,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,-5,0);
                    GROUP_UNIT(10,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,-5,-2);
                    GROUP_UNIT(11,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,-5,-4);
                    GROUP_UNIT(12,TKM_SIDE,QGVAR(Soldier_M_F),PRIVATE,-5,-6);
                    GROUP_UNIT(13,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,-5,-8);
                    GROUP_UNIT(14,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,-5,-10);
                    GROUP_UNIT(15,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,-5,-12);
                    GROUP_UNIT(16,TKM_SIDE,QGVAR(Medic_F),PRIVATE,-5,-14);
                };
            };
            class Mechanized {
                name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
                class GVAR(MechInfSquad) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Wheeled_04_export_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(Soldier_M_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(Medic_F),PRIVATE,-20,-20);
                };
                class GVAR(MechInf_AT) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(APC_Tracked_02_30mm_lxWS),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_LAT_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(Soldier_LAT_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_LAT_F),SERGEANT,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_A_F),CORPORAL,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(soldier_AAR_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,-20,-20);
                };
                class GVAR(MechInf_AA) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Wheeled_04_export_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_AA_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_AA_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(soldier_AA_F),SERGEANT,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(soldier_AAA_F),CORPORAL,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(soldier_AAA_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(soldier_AAA_F),PRIVATE,-20,-20);
                };
                class GVAR(MechInf_Support) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(APC_Tracked_02_30mm_lxWS),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_F),CORPORAL,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(Engineer_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Medic_F),PRIVATE,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(Soldier_Exp_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,-20,-20);
                };
            };
            class Armored {
                name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";
                class GVAR(TankPlatoon) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MBT_02_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(MBT_02_cannon_F),SERGEANT,10,-10);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(MBT_02_cannon_F),SERGEANT,-10,-10);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(MBT_02_cannon_F),CORPORAL,20,-20);
                };
                class GVAR(TankSection) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MBT_02_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(MBT_02_cannon_F),SERGEANT,10,-10);
                };
                class GVAR(TankDestrSection_Nosorog) {
                    name = "$STR_A3_CfgGroups_TDSection";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(APC_Wheeled_04_cannon_v2_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(APC_Wheeled_04_cannon_v2_F),SERGEANT,10,-10);
                };
            };
            class UAV {
                name = CSTRING(Group_UAV);
                // --- Aegis recon UAV ---
                class GVAR(UAV_Aegis_07) {
                    name = "UAV - Aegis UAV-07";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"Aegis_I_UAV_07_F",CAPTAIN,0,0);
                };
                // --- Crocus FPV loitering munitions (ArmaFPV) ---
                class GVAR(UAV_Crocus_AP) {
                    name = "FPV - Crocus (AP)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"I_Crocus_AP",CORPORAL,0,0);
                };
                class GVAR(UAV_Crocus_AP_TI) {
                    name = "FPV - Crocus (AP, TI)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"I_Crocus_AP_TI",CORPORAL,0,0);
                };
                class GVAR(UAV_Crocus_AT) {
                    name = "FPV - Crocus (AT)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"I_Crocus_AT",CORPORAL,0,0);
                };
                class GVAR(UAV_Crocus_AT_TI) {
                    name = "FPV - Crocus (AT, TI)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"I_Crocus_AT_TI",CORPORAL,0,0);
                };
                // --- Orion armed UAV (orion) ---
                class GVAR(UAV_Orion) {
                    name = "UAV - Orion";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"orion_F_IND",CAPTAIN,0,0);
                };
                class GVAR(UAV_Orion_KAB20) {
                    name = "UAV - Orion (KAB-20)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"orion_F_KAB20_IND",CAPTAIN,0,0);
                };
                class GVAR(UAV_Orion_KAB50) {
                    name = "UAV - Orion (KAB-50)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"orion_F_KAB50_IND",CAPTAIN,0,0);
                };
                class GVAR(UAV_Orion_KORNET) {
                    name = "UAV - Orion (Kornet)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"orion_F_KORNET_IND",CAPTAIN,0,0);
                };
                // --- Orlan recon UAV (orlan) ---
                class GVAR(UAV_Orlan) {
                    name = "UAV - Orlan-10";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"orlan_F_IND",CAPTAIN,0,0);
                };
                // --- GX drones ---
                class GVAR(UAV_GX_RQ11B) {
                    name = "UAV - RQ-11B Raven";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"GX_I_RQ11B_UAV",CORPORAL,0,0);
                };
                class GVAR(UAV_GX_Hunter) {
                    name = "UAV - Hunter (Loitering)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"GX_I_HUNTER_SP_UAV",CORPORAL,0,0);
                };
                // --- KVN FPV loitering munitions (vnd_main) ---
                class GVAR(UAV_KVN_AP) {
                    name = "FPV - KVN (AP)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"I_KVN_AP",CORPORAL,0,0);
                };
                class GVAR(UAV_KVN_AP_TI) {
                    name = "FPV - KVN (AP, TI)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"I_KVN_AP_TI",CORPORAL,0,0);
                };
                class GVAR(UAV_KVN_AT) {
                    name = "FPV - KVN (AT)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"I_KVN_AT",CORPORAL,0,0);
                };
                class GVAR(UAV_KVN_AT_TI) {
                    name = "FPV - KVN (AT, TI)";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"I_KVN_AT_TI",CORPORAL,0,0);
                };
                // --- Western Sahara CDLC drones (Independent) ---
                class GVAR(UAV_Bustard) {
                    name = "UAV - AP-5 Bustard";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"I_UAV_02_lxWS",CORPORAL,0,0);
                };
                class GVAR(UAV_IED) {
                    name = "FPV - IED UAV";
                    side = TKM_SIDE;
                    faction = "ghost_Turkmenistan";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_air.paa";
                    GROUP_UNIT(0,TKM_SIDE,"I_G_UAV_02_IED_lxWS",CORPORAL,0,0);
                };
            };
        };
    };
};
