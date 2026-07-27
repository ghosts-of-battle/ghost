// Iran group tree — modeled on vanilla CSAT (OPF_F) as patched by Aegis
// (recon/sniper groups under SpecOps per the Aegis CfgGroups patch), plus a Drones category.

#define GROUP_UNIT(a,b,c,d,e,f) \
class Unit##a { \
    side = b; \
    vehicle = c; \
    rank = #d; \
    position[] = {e,f,0}; \
}

#define TKM_SIDE 0
#define TKM_FACTION faction = "ghost_O_Iran"

class CfgGroups {
    class East {
        class ghost_O_Iran {
            name = "[Ghost] Iran";
            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
                class GVAR(InfSquad) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_M_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(medic_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfSquad_Weapons) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AR_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_GL_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_M_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(Soldier_AT_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(medic_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfTeam) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_GL_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_LAT_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfTeam_AT) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AT_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_AT_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfTeam_AA) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AA_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_AA_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfSentry) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_GL_F),CORPORAL,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
            };
            class SpecOps {
                name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
                class GVAR(ReconTeam) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(recon_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(recon_M_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(recon_medic_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(recon_LAT_F),CORPORAL,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(recon_JTAC_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(recon_exp_F),PRIVATE,15,-15);
                };
                class GVAR(ReconPatrol) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(recon_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(recon_M_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(recon_medic_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(recon_F),PRIVATE,10,-10);
                };
                class GVAR(ReconSentry) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(recon_M_F),CORPORAL,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(recon_F),PRIVATE,5,-5);
                };
                class GVAR(SniperTeam) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_SniperTeam0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(spotter_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(sniper_F),CORPORAL,5,-5);
                };
                class GVAR(ReconSquad) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(recon_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(recon_M_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(recon_medic_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(recon_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(recon_LAT_F),CORPORAL,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(recon_JTAC_F),PRIVATE,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(recon_exp_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(Pathfinder_F),PRIVATE,20,-20);
                };
            };
            class Support {
                name = "$STR_A3_CfgGroups_West_BLU_F_Support0";
                class GVAR(Support_CLS) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(medic_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(medic_F),PRIVATE,10,-10);
                };
                class GVAR(Support_EOD) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(engineer_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_exp_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(soldier_exp_F),PRIVATE,10,-10);
                };
                class GVAR(Support_ENG) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(engineer_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_repair_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,10,-10);
                };
            };
            class Motorized {
                name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
                class GVAR(MotInf_Team) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MRAP_02_hmg_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_LAT_F),PRIVATE,-5,-5);
                };
                class GVAR(MotInf_AT) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MRAP_02_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AT_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_AT_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,0,-10);
                };
                class GVAR(MotInf_AA) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MRAP_02_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_AA_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_AA_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,0,-10);
                };
                class GVAR(MotInf_Reinforcements) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Truck_02_transport_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,5,0);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,5,-2);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,5,-4);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_M_F),PRIVATE,5,-6);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,5,-8);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,5,-10);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,5,-12);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(medic_F),PRIVATE,5,-14);
                    GROUP_UNIT(9,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,-5,0);
                    GROUP_UNIT(10,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,-5,-2);
                    GROUP_UNIT(11,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,-5,-4);
                    GROUP_UNIT(12,TKM_SIDE,QGVAR(soldier_M_F),PRIVATE,-5,-6);
                    GROUP_UNIT(13,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,-5,-8);
                    GROUP_UNIT(14,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,-5,-10);
                    GROUP_UNIT(15,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,-5,-12);
                    GROUP_UNIT(16,TKM_SIDE,QGVAR(medic_F),PRIVATE,-5,-14);
                };
            };
            class Mechanized {
                name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
                class GVAR(MechInfSquad) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(APC_Wheeled_02_rcws_v2_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(RadioOperator_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_LAT_F),CORPORAL,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_M_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_TL_F),SERGEANT,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(Soldier_A_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(medic_F),PRIVATE,-20,-20);
                };
                class GVAR(MechInf_AT) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(APC_Tracked_02_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_AT_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(Soldier_AT_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_AT_F),SERGEANT,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_F),CORPORAL,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,-20,-20);
                };
                class GVAR(MechInf_AA) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(APC_Tracked_02_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(Soldier_SL_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(Soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(Soldier_AA_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(Soldier_AA_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(Soldier_AA_F),SERGEANT,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(Soldier_F),CORPORAL,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(Soldier_F),PRIVATE,-20,-20);
                };
            };
            class Armored {
                name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";
                class GVAR(TankPlatoon) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MBT_02_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(MBT_02_cannon_F),SERGEANT,10,-10);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(MBT_02_cannon_F),SERGEANT,-10,-10);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(MBT_02_cannon_F),CORPORAL,20,-20);
                };
                class GVAR(TankSection) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MBT_02_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(MBT_02_cannon_F),SERGEANT,10,-10);
                };
                class GVAR(TankSection_Angara) {
                    name = "Tank Section (T-140)";
                    side = TKM_SIDE;
                    TKM_FACTION;
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(MBT_04_command_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(MBT_04_cannon_F),SERGEANT,10,-10);
                };
            };
        };
    };
};
