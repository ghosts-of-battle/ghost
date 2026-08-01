class CfgGroups {
    class West {
        class ghost_b_fdf35 {
            name = "[Ghost] FDF 2035";
            class Infantry {
                name = "Infantry";
                class GVAR(InfSquad) {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SL";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_RIF";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_RIF";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                    class Unit3 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_GRE";
                        rank = "PRIVATE";
                        position[] = {3, -15, 0};
                    };
                    class Unit4 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_MG";
                        rank = "PRIVATE";
                        position[] = {-2, -20, 0};
                    };
                    class Unit5 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_AT";
                        rank = "PRIVATE";
                        position[] = {3, -25, 0};
                    };
                    class Unit6 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_MED";
                        rank = "PRIVATE";
                        position[] = {-2, -30, 0};
                    };
                    class Unit7 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {3, -35, 0};
                    };
                };
                class GVAR(InfTeam) {
                    name = "Fire Team";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SL";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_RIF";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_GRE";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                    class Unit3 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_AT";
                        rank = "PRIVATE";
                        position[] = {3, -15, 0};
                    };
                    class Unit4 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {-2, -20, 0};
                    };
                };
                class GVAR(JaegerSquad) {
                    name = "Jaeger Squad";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SIS_SL";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SIS";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SIS";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                    class Unit3 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SIS_AT";
                        rank = "PRIVATE";
                        position[] = {3, -15, 0};
                    };
                    class Unit4 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SIS_MK";
                        rank = "PRIVATE";
                        position[] = {-2, -20, 0};
                    };
                    class Unit5 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SIS_MED";
                        rank = "PRIVATE";
                        position[] = {3, -25, 0};
                    };
                    class Unit6 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SIS_RADISTI";
                        rank = "PRIVATE";
                        position[] = {-2, -30, 0};
                    };
                    class Unit7 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {3, -35, 0};
                    };
                };
            };
            class Support {
                name = "Support";
                class GVAR(ATTeam) {
                    name = "Anti-Tank Team";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_support.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SL";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_AT";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_AT";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                    class Unit3 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {3, -15, 0};
                    };
                };
                class GVAR(AATeam) {
                    name = "Anti-Air Team";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_support.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SL";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_AA";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_AA";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                    class Unit3 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {3, -15, 0};
                    };
                };
                class GVAR(EngTeam) {
                    name = "Engineer Team";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_support.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_ENG";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_EOD";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_RADISTI";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                    class Unit3 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {3, -15, 0};
                    };
                };
                // Crew-served statics. These are B_Mortar_01_F / B_SAM_System_03_F /
                // B_static_AA_F, so they belong here rather than under Armored.
                class GVAR(MortarSection) {
                    name = "Mortar Section";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_KRH";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_KRH";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                };
                class GVAR(AABattery) {
                    name = "Anti-Air Battery (Static)";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_ITOMIM";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_ITOHJ";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                };
            };
            class SpecOps {
                name = "Special Forces";
                class GVAR(SOFTeam) {
                    name = "SOF Team";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SOF_SL";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SOF_RIF";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SOF_MG";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                    class Unit3 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SOF_AT";
                        rank = "PRIVATE";
                        position[] = {3, -15, 0};
                    };
                    class Unit4 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SOF_MK";
                        rank = "PRIVATE";
                        position[] = {-2, -20, 0};
                    };
                    class Unit5 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SOF_MED";
                        rank = "PRIVATE";
                        position[] = {3, -25, 0};
                    };
                    class Unit6 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {-2, -30, 0};
                    };
                };
                class GVAR(SOFSniper) {
                    name = "SOF Sniper Team";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SOF_SNI";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SOF_SNI_G";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                };
                class GVAR(SniperTeam) {
                    name = "Sniper Team";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SNI";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_MK";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                };
            };
            class Motorized {
                name = "Motorized";
                class GVAR(MotPatrol) {
                    name = "Motorized Patrol";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_MRAP_HMG";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_MRAP";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                };
                class GVAR(MotSquad) {
                    name = "Motorized Rifle Squad";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_MRAP";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SL";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_RIF";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                    class Unit3 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_MG";
                        rank = "PRIVATE";
                        position[] = {3, -15, 0};
                    };
                    class Unit4 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_AT";
                        rank = "PRIVATE";
                        position[] = {-2, -20, 0};
                    };
                    class Unit5 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_MED";
                        rank = "PRIVATE";
                        position[] = {3, -25, 0};
                    };
                    class Unit6 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {-2, -30, 0};
                    };
                };
                class GVAR(MJTFPatrol) {
                    name = "MJTF Patrol";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_EF_B_MRAP_01_FSV_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_EF_B_MRAP_01_AT_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_EF_B_MRAP_01_LAAD_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                };
            };
            class Mechanized {
                name = "Mechanized";
                class GVAR(MechSquad) {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_PATRIA360";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_SL";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_RIF";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                    class Unit3 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_MG";
                        rank = "PRIVATE";
                        position[] = {3, -15, 0};
                    };
                    class Unit4 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_AT";
                        rank = "PRIVATE";
                        position[] = {-2, -20, 0};
                    };
                    class Unit5 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_MED";
                        rank = "PRIVATE";
                        position[] = {3, -25, 0};
                    };
                    class Unit6 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_UAV_OP";
                        rank = "PRIVATE";
                        position[] = {-2, -30, 0};
                    };
                };
                class GVAR(MechSection) {
                    name = "Mechanized Section";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_PATRIA360";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_PATRIA360_ATGM";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_PATRIA360_CV";
                        rank = "PRIVATE";
                        position[] = {-2, -10, 0};
                    };
                };
            };
            class Armored {
                name = "Armored";
                class GVAR(TankSection) {
                    name = "Tank Section";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_LEO2SG";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_LEO2SG";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                };
                // Self-propelled only. The KRH is a B_Mortar_01_F static, so it
                // moved to Support with the rest of the crew-served kit.
                class GVAR(Artillery) {
                    name = "Artillery Battery";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_ARTY";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_ARTY";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                    class Unit2 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_ARTY";
                        rank = "PRIVATE";
                        position[] = {8, -10, 0};
                    };
                };
                // MLRS battery, kept separate from the tube artillery above.
                class GVAR(MissileSection) {
                    name = "Missile Battery";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_RSRAKH";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_RSRAKH";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                };
                // Tracked AA vehicles. The ITOMIM/ITOHJ statics that used to sit
                // here are in Support now.
                class GVAR(AASection) {
                    name = "Anti-Air Section";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_IPTSV";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                    class Unit1 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_IPTSV";
                        rank = "PRIVATE";
                        position[] = {3, -5, 0};
                    };
                };
            };
            class Air {
                name = "Air";
                class GVAR(HeliLight) {
                    name = "Light Helicopter";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_HELI_L";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                };
                class GVAR(HeliTransport) {
                    name = "Transport Helicopter";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_HELIKIPOTER";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                };
                class GVAR(CAS) {
                    name = "Close Air Support";
                    side = 1;
                    faction = "ghost_b_fdf35";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_air.paa";
                    class Unit0 {
                        side = 1;
                        vehicle = "ghost_faction_b_fdf35_KAR_FDF35_F35";
                        rank = "SERGEANT";
                        position[] = {-2, 0, 0};
                    };
                };
            };
        };
    };
};
