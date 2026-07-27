#define GROUP_UNIT(a,b,c,d,e,f) class Unit##a { side = b; vehicle = c; rank = #d; position[] = {e,f,0}; }
class CfgGroups {
    class West {
        class ghost_b_us_spar_tropical {
            name = "[Ghost] US SPAR (Tropical)";
            class Infantry {
                name = "Infantry";
                class GVAR(FireTeam) {
                    name = "Fire Team";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_GL_F),CORPORAL,5,-5);
                    GROUP_UNIT(3,1,QGVAR(Soldier_LAT_F),PRIVATE,0,-10);
                };
                class GVAR(RifleSquad) {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_SL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_TL_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,1,QGVAR(Soldier_A_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,1,QGVAR(Soldier_GL_F),CORPORAL,-10,-10);
                    GROUP_UNIT(5,1,QGVAR(Soldier_LAT_F),PRIVATE,15,-15);
                    GROUP_UNIT(6,1,QGVAR(Medic_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,1,QGVAR(Soldier_F),PRIVATE,20,-20);
                };
                class GVAR(RifleSquadAT) {
                    name = "Rifle Squad (AT)";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_SL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_TL_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,1,QGVAR(Soldier_GL_F),CORPORAL,10,-10);
                    GROUP_UNIT(4,1,QGVAR(Soldier_AT_F),PRIVATE,-10,-10);
                    GROUP_UNIT(5,1,QGVAR(Soldier_A_F),PRIVATE,15,-15);
                    GROUP_UNIT(6,1,QGVAR(Medic_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,1,QGVAR(Soldier_F),PRIVATE,20,-20);
                };
                class GVAR(WeaponsSquad) {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_SL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,1,QGVAR(Soldier_AT_F),CORPORAL,10,-10);
                    GROUP_UNIT(4,1,QGVAR(Soldier_AA_F),CORPORAL,-10,-10);
                    GROUP_UNIT(5,1,QGVAR(Soldier_GL_F),PRIVATE,15,-15);
                    GROUP_UNIT(6,1,QGVAR(Medic_F),PRIVATE,-15,-15);
                };
                class GVAR(AssaultSquad) {
                    name = "Assault Squad";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_SL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_TL_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(3,1,QGVAR(Soldier_GL_F),CORPORAL,10,-10);
                    GROUP_UNIT(4,1,QGVAR(Soldier_TL_F),CORPORAL,-10,-10);
                    GROUP_UNIT(5,1,QGVAR(Soldier_AR_F),CORPORAL,15,-15);
                    GROUP_UNIT(6,1,QGVAR(Soldier_GL_F),PRIVATE,-15,-15);
                    GROUP_UNIT(7,1,QGVAR(Soldier_LAT_F),PRIVATE,20,-20);
                    GROUP_UNIT(8,1,QGVAR(Medic_F),PRIVATE,-20,-20);
                    GROUP_UNIT(9,1,QGVAR(Soldier_F),PRIVATE,25,-25);
                };
                class GVAR(Sentry) {
                    name = "Sentry";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_TL_F),CORPORAL,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_F),PRIVATE,-5,-5);
                };
            };
            class Support {
                name = "Support";
                class GVAR(ATTeam) {
                    name = "Anti-Tank Team";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_support.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_AT_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AT_F),PRIVATE,-5,-5);
                };
                class GVAR(AATeam) {
                    name = "Anti-Air Team";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_support.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_AA_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AA_F),PRIVATE,-5,-5);
                };
                class GVAR(MGTeam) {
                    name = "Machine Gun Team";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_support.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_AR_F),CORPORAL,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_A_F),PRIVATE,-5,-5);
                };
                class GVAR(EngineerTeam) {
                    name = "Engineer Team";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_support.paa";
                    GROUP_UNIT(0,1,QGVAR(Engineer_F),CORPORAL,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_Exp_F),PRIVATE,5,-5);
                    GROUP_UNIT(2,1,QGVAR(soldier_repair_F),PRIVATE,-5,-5);
                };
            };
            class SpecOps {
                name = "Recon";
                class GVAR(ReconTeam) {
                    name = "Recon Team";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    GROUP_UNIT(0,1,QGVAR(recon_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(recon_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(recon_LAT_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,1,QGVAR(recon_M_F),CORPORAL,10,-10);
                    GROUP_UNIT(4,1,QGVAR(recon_medic_F),PRIVATE,-10,-10);
                };
                class GVAR(ReconPatrol) {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    GROUP_UNIT(0,1,QGVAR(recon_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(recon_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(recon_F),PRIVATE,-5,-5);
                    GROUP_UNIT(3,1,QGVAR(recon_LAT_F),PRIVATE,10,-10);
                    GROUP_UNIT(4,1,QGVAR(recon_M_F),CORPORAL,-10,-10);
                };
                class GVAR(ReconSentry) {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    GROUP_UNIT(0,1,QGVAR(recon_F),CORPORAL,0,0);
                    GROUP_UNIT(1,1,QGVAR(recon_F),PRIVATE,-5,-5);
                };
                class GVAR(SniperTeam) {
                    name = "Sniper Team";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    GROUP_UNIT(0,1,QGVAR(sniper_F),CORPORAL,0,0);
                    GROUP_UNIT(1,1,QGVAR(spotter_F),CORPORAL,-5,-5);
                };
                class GVAR(JTACTeam) {
                    name = "Recon JTAC Team";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    GROUP_UNIT(0,1,QGVAR(recon_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(recon_JTAC_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(recon_exp_F),PRIVATE,-5,-5);
                };
            };
            class Motorized {
                name = "Motorized";
                class GVAR(MotPatrol) {
                    name = "Motorized Patrol";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(MRAP_01_hmg_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(MRAP_01_F),CORPORAL,-10,-10);
                    GROUP_UNIT(2,1,QGVAR(MRAP_01_gmg_F),CORPORAL,10,-10);
                };
                class GVAR(MotInfSquad) {
                    name = "Motorized Rifle Squad";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(MRAP_01_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_SL_F),SERGEANT,-5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(3,1,QGVAR(Soldier_GL_F),CORPORAL,-10,-10);
                    GROUP_UNIT(4,1,QGVAR(Medic_F),PRIVATE,10,-10);
                    GROUP_UNIT(5,1,QGVAR(Soldier_F),PRIVATE,0,-15);
                };
            };
            class Mechanized {
                name = "Mechanized";
                class GVAR(MechTeam) {
                    name = "Mechanized Team";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(APC_Tracked_01_rcws_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(APC_Tracked_01_CRV_F),CORPORAL,-10,-10);
                };
                class GVAR(MechInfSquad) {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(APC_Wheeled_01_cannon_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_SL_F),SERGEANT,-5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(3,1,QGVAR(Soldier_GL_F),CORPORAL,-10,-10);
                    GROUP_UNIT(4,1,QGVAR(Medic_F),PRIVATE,10,-10);
                    GROUP_UNIT(5,1,QGVAR(Soldier_F),PRIVATE,0,-15);
                };
                class GVAR(MechAPCSquad) {
                    name = "Mechanized APC Squad";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(APC_Wheeled_02_apc_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_SL_F),SERGEANT,-5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AR_F),CORPORAL,5,-5);
                    GROUP_UNIT(3,1,QGVAR(Medic_F),PRIVATE,-10,-10);
                    GROUP_UNIT(4,1,QGVAR(Soldier_F),PRIVATE,10,-10);
                };
            };
            class Armored {
                name = "Armored";
                class GVAR(TankSection) {
                    name = "Tank Section";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
                    GROUP_UNIT(0,1,QGVAR(MBT_01_cannon_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(MBT_01_cannon_F),CORPORAL,-15,-15);
                };
                class GVAR(TankPlatoon) {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
                    GROUP_UNIT(0,1,QGVAR(MBT_01_cannon_F),LIEUTENANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(MBT_01_TUSK_F),SERGEANT,-15,-15);
                    GROUP_UNIT(2,1,QGVAR(MBT_01_cannon_F),CORPORAL,15,-15);
                };
                class GVAR(AASection) {
                    name = "Anti-Air Section";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
                    GROUP_UNIT(0,1,QGVAR(APC_Tracked_01_AA_F),SERGEANT,0,0);
                };
                class GVAR(Artillery) {
                    name = "Artillery Battery";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
                    GROUP_UNIT(0,1,QGVAR(MBT_01_arty_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(MBT_01_mlrs_F),CORPORAL,-15,-15);
                };
            };
            class Air {
                name = "Air";
                class GVAR(HeliLight) {
                    name = "Light Helicopter";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";
                    GROUP_UNIT(0,1,QGVAR(Heli_Light_01_dynamicLoadout_F),CAPTAIN,0,0);
                };
                class GVAR(HeliTransport) {
                    name = "Transport Helicopter";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";
                    GROUP_UNIT(0,1,QGVAR(Heli_Transport_01_F),CAPTAIN,0,0);
                };
                class GVAR(HeliHeavy) {
                    name = "Heavy Transport Helicopter";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";
                    GROUP_UNIT(0,1,QGVAR(Heli_Transport_03_F),CAPTAIN,0,0);
                };
                class GVAR(HeliAttack) {
                    name = "Attack Helicopter";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";
                    GROUP_UNIT(0,1,QGVAR(Heli_Attack_01_dynamicLoadout_F),CAPTAIN,0,0);
                };
                class GVAR(CAS) {
                    name = "Close Air Support";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";
                    GROUP_UNIT(0,1,QGVAR(Plane_CAS_01_dynamicLoadout_F),CAPTAIN,0,0);
                };
            };
            class Sea {
                name = "Naval";
                class GVAR(BoatPatrol) {
                    name = "Boat Patrol";
                    side = 1;
                    faction = "ghost_b_us_spar_tropical";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_naval.paa";
                    GROUP_UNIT(0,1,QGVAR(Boat_Armed_01_minigun_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Boat_Transport_01_F),CORPORAL,-10,-10);
                };
            };
        };
    };
};
