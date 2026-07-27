// Taliban group tree — modeled on IND_TURA_lxWS's 7 groups (Infantry/Motorized/Mechanized)
// plus a Drones category (Independent drone variants). The WS CDLC group compositions are
// encrypted, so the six vanilla Tura groups are reconstructed from the faction's unit roles;
// the Mechanized squad matches the Aegis-defined Aegis_I_Tura_MechInfSquad composition.

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
        class ghost_I_Taliban {
            name = "[Ghost] Taliban";
            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
                class GVAR(InfSquad) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
                    side = TKM_SIDE;
                    faction = "ghost_I_Taliban";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(enforcer_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(watcher_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(hireling_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(scout_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(defector_F),SERGEANT,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(HeavyGunner_F),CORPORAL,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(thug_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(medic_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfTeam) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
                    side = TKM_SIDE;
                    faction = "ghost_I_Taliban";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(enforcer_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(deserter_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(defector_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(hireling_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
                class GVAR(InfSentry) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
                    side = TKM_SIDE;
                    faction = "ghost_I_Taliban";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(watcher_F),CORPORAL,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(deserter_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(soldier_UAV_F),CORPORAL,0,10);
                };
            };
            class Motorized {
                name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
                class GVAR(MotInf_Team) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
                    side = TKM_SIDE;
                    faction = "ghost_I_Taliban";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Offroad_armor_armed_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(deserter_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(hireling_F),PRIVATE,-5,-5);
                };
                class GVAR(MotInf_AT) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0";
                    side = TKM_SIDE;
                    faction = "ghost_I_Taliban";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Offroad_armor_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(hireling_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(hireling_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(deserter_F),PRIVATE,0,-10);
                };
                class GVAR(MotInf_Reinforce) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0";
                    side = TKM_SIDE;
                    faction = "ghost_I_Taliban";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(Pickup_F),SERGEANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(enforcer_F),SERGEANT,5,0);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(watcher_F),PRIVATE,5,-2);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(hireling_F),CORPORAL,5,-4);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(scout_F),PRIVATE,5,-6);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(defector_F),SERGEANT,5,-8);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(deserter_F),CORPORAL,5,-10);
                    GROUP_UNIT(7,TKM_SIDE,QGVAR(thug_F),PRIVATE,5,-12);
                    GROUP_UNIT(8,TKM_SIDE,QGVAR(medic_F),PRIVATE,5,-14);
                };
            };
            class Mechanized {
                name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
                class GVAR(MechInfSquad) {
                    name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
                    side = TKM_SIDE;
                    faction = "ghost_I_Taliban";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
                    GROUP_UNIT(0,TKM_SIDE,QGVAR(APC_Wheeled_04_export_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,TKM_SIDE,QGVAR(enforcer_F),SERGEANT,5,-5);
                    GROUP_UNIT(2,TKM_SIDE,QGVAR(hireling_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,TKM_SIDE,QGVAR(watcher_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,TKM_SIDE,QGVAR(defector_F),SERGEANT,-10,-10);
                    GROUP_UNIT(5,TKM_SIDE,QGVAR(scout_F),CORPORAL,15,-15);
                    GROUP_UNIT(6,TKM_SIDE,QGVAR(medic_F),PRIVATE,-15,-15);
                };
            };
        };
    };
};
