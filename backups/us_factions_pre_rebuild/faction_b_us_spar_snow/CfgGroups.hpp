#define GROUP_UNIT(a,b,c,d,e,f) class Unit##a { side = b; vehicle = c; rank = #d; position[] = {e,f,0}; }
class CfgGroups {
    class West {
        class ghost_b_us_spar_snow {
            name = "[Ghost] US SPAR (Snow)";
            class Infantry {
                name = "Infantry";
                class GVAR(FireTeam) {
                    name = "Fire Team";
                    side = 1;
                    faction = "ghost_b_us_spar_snow";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_AR_F),CORPORAL,-5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_GL_F),CORPORAL,5,-5);
                    GROUP_UNIT(3,1,QGVAR(Soldier_LAT_F),PRIVATE,0,-10);
                };
                class GVAR(RifleSquad) {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "ghost_b_us_spar_snow";
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
                    faction = "ghost_b_us_spar_snow";
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
                    faction = "ghost_b_us_spar_snow";
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
                    faction = "ghost_b_us_spar_snow";
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
                    faction = "ghost_b_us_spar_snow";
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
                    faction = "ghost_b_us_spar_snow";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_support.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_AT_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AT_F),PRIVATE,-5,-5);
                };
                class GVAR(AATeam) {
                    name = "Anti-Air Team";
                    side = 1;
                    faction = "ghost_b_us_spar_snow";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_support.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_AA_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(Soldier_AA_F),PRIVATE,-5,-5);
                };
                class GVAR(MGTeam) {
                    name = "Machine Gun Team";
                    side = 1;
                    faction = "ghost_b_us_spar_snow";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_support.paa";
                    GROUP_UNIT(0,1,QGVAR(Soldier_AR_F),CORPORAL,0,0);
                    GROUP_UNIT(1,1,QGVAR(Soldier_A_F),PRIVATE,-5,-5);
                };
                class GVAR(EngineerTeam) {
                    name = "Engineer Team";
                    side = 1;
                    faction = "ghost_b_us_spar_snow";
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
                    faction = "ghost_b_us_spar_snow";
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
                    faction = "ghost_b_us_spar_snow";
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
                    faction = "ghost_b_us_spar_snow";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    GROUP_UNIT(0,1,QGVAR(recon_F),CORPORAL,0,0);
                    GROUP_UNIT(1,1,QGVAR(recon_F),PRIVATE,-5,-5);
                };
                class GVAR(SniperTeam) {
                    name = "Sniper Team";
                    side = 1;
                    faction = "ghost_b_us_spar_snow";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    GROUP_UNIT(0,1,QGVAR(sniper_F),CORPORAL,0,0);
                    GROUP_UNIT(1,1,QGVAR(spotter_F),CORPORAL,-5,-5);
                };
                class GVAR(JTACTeam) {
                    name = "Recon JTAC Team";
                    side = 1;
                    faction = "ghost_b_us_spar_snow";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    GROUP_UNIT(0,1,QGVAR(recon_TL_F),SERGEANT,0,0);
                    GROUP_UNIT(1,1,QGVAR(recon_JTAC_F),CORPORAL,5,-5);
                    GROUP_UNIT(2,1,QGVAR(recon_exp_F),PRIVATE,-5,-5);
                };
            };
        };
    };
};
