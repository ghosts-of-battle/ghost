class CfgGroups {
    class WEST {

        class B_FinlandArmy_WDL {
            name = "[GHOST] FDF 2040";

            class Infantry {
                name = "Infantry";

                class BUS_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_SL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AR_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_GL_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_M_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AT_F";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AAT_F";
                    };
                    class Unit6 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_medic_F";
                    };
                    class Unit7 {
                        position[] = {-15,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_UAV_Operator_switchblade_WDL_01";
                    };
                };

                class BUS_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_Soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AT_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AT_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AAT_F";
                    };
                };

                class BUS_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_GL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_F";
                    };
                };

                class BUS_ReconPatrol {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_recon_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_recon_M_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_recon_medic_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_recon_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_UAV_Operator_switchblade_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_UAV_Operator_switchblade_WDL_01";
                    };
                };

                class BUS_SniperTeam {
                    name = "Sniper Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_sniper_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_spotter_F";
                    };
                };

                class BUS_InfAssault {
                    name = "Assault Squad";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_Soldier_SL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AR_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_HeavyGunner_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AAR_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_M_F";
                    };
                    class Unit5 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_LAT_F";
                    };
                    class Unit6 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_medic_F";
                    };
                    class Unit7 {
                        position[] = {-15,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_UAV_Operator_switchblade_WDL_01";
                    };
                };

                class B_InfTeam_Light {
                    name = "Fire Team (Light)";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_F";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_LAT2_F";
                    };
                    class Unit3 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_UAV_Operator_switchblade_WDL_01";
                    };
                };

                class b_finlandarmy_infantry_fire_team_wdl {
                    name = "Fire Team";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_Soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_GL_F";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_LAT_F";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_UAV_Operator_switchblade_WDL_01";
                    };
                };

                class b_finlandarmy_infantry_recon_team_wdl {
                    name = "Recon Team";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_recon_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_recon_M_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_recon_medic_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_recon_LAT_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_recon_JTAC_F";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_recon_exp_F";
                    };
                };

                class b_finlandarmy_infantry_qrf_rifle_squad_wdl {
                    name = "QRF Rifle Squad";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_QRF_Soldier_SL_RF";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_QRF_Sharpshooter_RF";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_QRF_medic_RF";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_QRF_Soldier_RF";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_QRF_soldier_LAT2_RF";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_QRF_Soldier_AR_RF";
                    };
                    class Unit6 {
                        position[] = {20,-20,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_QRF_Soldier_GL_RF";
                    };
                    class Unit7 {
                        position[] = {-15,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_UAV_Operator_switchblade_WDL_01";
                    };
                };

                class b_finlandarmy_airborneinfantry_airborne_reinforcements_wdl {
                    name = "Airborne Reinforcements";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_Heli_EC_04_military_RF";
                    };
                    class Unit1 {
                        position[] = {5,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_SL_F";
                    };
                    class Unit2 {
                        position[] = {5,-2,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_F";
                    };
                    class Unit3 {
                        position[] = {5,-4,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_LAT_F";
                    };
                    class Unit4 {
                        position[] = {5,-6,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_M_F";
                    };
                    class Unit5 {
                        position[] = {5,-8,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit6 {
                        position[] = {5,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AR_F";
                    };
                    class Unit7 {
                        position[] = {5,-12,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_A_F";
                    };
                    class Unit8 {
                        position[] = {5,-14,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_medic_F";
                    };
                    class Unit9 {
                        position[] = {5,-16,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_repair_F";
                    };
                    class Unit10 {
                        position[] = {5,-18,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_support_CMort_RF";
                    };
                    class Unit11 {
                        position[] = {-5,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_SL_F";
                    };
                    class Unit12 {
                        position[] = {-5,-2,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_F";
                    };
                    class Unit13 {
                        position[] = {-5,-4,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_LAT_F";
                    };
                    class Unit14 {
                        position[] = {-5,-6,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_M_F";
                    };
                    class Unit15 {
                        position[] = {-5,-8,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit16 {
                        position[] = {-5,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AR_F";
                    };
                    class Unit17 {
                        position[] = {-5,-12,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_A_F";
                    };
                    class Unit18 {
                        position[] = {-5,-14,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_medic_F";
                    };
                    class Unit19 {
                        position[] = {-5,-16,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_repair_F";
                    };
                    class Unit20 {
                        position[] = {-5,-18,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_support_CMort_RF";
                    };
                };
            };

            class SpecOps {
                name = "SpecOps";

                class BUS_DiverTeam_Boat {
                    name = "Diver Team (Boat)";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_diver_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_diver_exp_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_diver_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_diver_F";
                    };
                    class Unit4 {
                        position[] = {0,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_Boat_Transport_01_F";
                    };
                };

                class BUS_SmallTeam_UAV {
                    name = "Small UAV Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_UAV_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_UAV_01_F";
                    };
                };

                class BUS_AttackTeam_UGV {
                    name = "Attack UGV Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_UAV_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_UGV_01_rcws_F";
                    };
                };

                class BUS_AttackTeam_UAV {
                    name = "Attack UAV Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_UAV_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_UAV_02_CAS_F";
                    };
                };

                class b_finlandarmy_specops_diver_team_sdv_wdl {
                    name = "Diver Team (SDV)";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_diver_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_diver_exp_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_diver_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_diver_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_SDV_01_F";
                    };
                    class Unit5 {
                        position[] = {0,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_SDV_01_F";
                    };
                };

                class b_finlandarmy_specops_recon_uav_team_wdl {
                    name = "Recon UAV Team";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_UAV_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_UAV_02_F";
                    };
                };

            };

            class Motorized {
                name = "Motorized";

                class BUS_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MRAP_01_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AT_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AT_F";
                    };
                    class Unit3 {
                        position[] = {0,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AAT_F";
                    };
                };

                class BUS_MotInf_MGTeam {
                    name = "Motorized HMG Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MRAP_01_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_support_MG_F";
                    };
                    class Unit3 {
                        position[] = {0,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_support_AMG_F";
                    };
                };

                class BUS_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MRAP_01_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_support_Mort_F";
                    };
                    class Unit3 {
                        position[] = {0,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_support_AMort_F";
                    };
                };

                class BUS_MotInf_AA_RF {
                    name = "Light Motorized Air-defense Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {10,-19,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_MATV_LAAD_WDL_01";
                    };
                    class Unit1 {
                        position[] = {-10,-19,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_MATV_LAAD_WDL_01";
                    };
                    class Unit2 {
                        position[] = {15,-24,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_MATV_LAAD_WDL_01";
                    };
                };

                class b_finlandarmy_motorized_motorized_team_wdl {
                    name = "Motorized Team";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MRAP_01_gmg_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AR_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_LAT_F";
                    };
                };

                class b_finlandarmy_motorized_motorized_gmg_team_wdl {
                    name = "Motorized GMG Team";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MRAP_01_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_support_GMG_F";
                    };
                    class Unit3 {
                        position[] = {0,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_support_AMG_F";
                    };
                };

                class b_finlandarmy_motorized_light_motorized_mmg_team_wdl {
                    name = "Light Motorized MMG Team";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_Pickup_mmg_rf";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_Soldier_TL_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_Soldier_GL_F";
                    };
                };

                class b_finlandarmy_motorized_light_aa_wdl {
                    name = "Light AA";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_FinlandArmy_Ram_1500_AA_WDL_01";
                    };
                    class Unit1 {
                        position[] = {6,-12,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_FinlandArmy_Ram_1500_AA_WDL_01";
                    };
                };

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support";

                class BUS_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_engineer_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_exp_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_exp_F";
                    };
                };

                class BUS_Recon_EOD {
                    name = "Recon Support Team (EOD)";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_recon_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_recon_exp_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_recon_exp_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_recon_F";
                    };
                };

                class BUS_Support_GMG {
                    name = "GMG Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_support_GMG_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_support_AMG_F";
                    };
                };

                class BUS_Support_Mort_RF {
                    name = "Light Mortar Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_support_CMort_RF";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_support_CMort_RF";
                    };
                };

                class b_finlandarmy_support_support_team_engineer_wdl {
                    name = "Support Team (Engineer)";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_engineer_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_engineer_F";
                    };
                    class Unit3 {
                        position[] = {10,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_repair_F";
                    };
                };

                class b_finlandarmy_support_mortar_team_wdl {
                    name = "Mortar Team";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_support_Mort_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_support_AMort_F";
                    };
                };

            };

            class Mechanized {
                name = "Mechanized";

                class BUS_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "B_APC_Tracked_01_rcws_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_SL_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AR_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AT_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AT_F";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_AT_F";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AAT_F";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AAT_F";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AAT_F";
                    };
                };

                class BUS_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "B_APC_Wheeled_01_cannon_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_SL_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_TL_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_repair_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_engineer_F";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_medic_F";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AR_F";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_exp_F";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_A_F";
                    };
                };

                class b_finlandarmy_mechanized_mechanized_air_defense_squad_wdl {
                    name = "Mechanized Air-defense Squad";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "B_APC_Tracked_01_aa_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_SL_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AR_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AA_F";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AA_F";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_soldier_AA_F";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_soldier_AAA_F";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AAA_F";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_soldier_AAA_F";
                    };
                };

            };

            class Armored {
                name = "Armored";

                class BUS_TankPlatoon_AA {
                    name = "Tank Platoon (Combined)";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "B_MBT_01_cannon_F";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_APC_Tracked_01_aa_F";
                    };
                    class Unit2 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MBT_01_cannon_F";
                    };
                    class Unit3 {
                        position[] = {20,-20,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_APC_Tracked_01_aa_F";
                    };
                };

                class BUS_SPGPlatoon_Scorcher {
                    name = "Artillery SPG Platoon";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "B_MBT_01_arty_F";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MBT_01_arty_F";
                    };
                    class Unit2 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MBT_01_arty_F";
                    };
                    class Unit3 {
                        position[] = {20,-20,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_MBT_01_arty_F";
                    };
                };

                class BUS_SPGSection_MLRS {
                    name = "MLRS Section";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "B_MBT_01_mlrs_F";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MBT_01_mlrs_F";
                    };
                };

                class B_TankDestrSection_RhinoUP {
                    name = "Tank Destroyer Section (UP)";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "B_AFV_Wheeled_01_up_cannon_F";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_AFV_Wheeled_01_up_cannon_F";
                    };
                };

                class b_finlandarmy_armored_tank_section_wdl {
                    name = "Tank Section";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "B_MBT_01_cannon_F";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MBT_01_cannon_F";
                    };
                };

                class b_finlandarmy_armored_tank_destroyer_section_wdl {
                    name = "Tank Destroyer Section";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "B_AFV_Wheeled_01_cannon_F";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_AFV_Wheeled_01_cannon_F";
                    };
                };

                class b_bfinlandarmywdl_armored_aa_section {
                    name = "AA Section";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_BFinlandArmyWDL_Bardelas_01";
                    };
                    class Unit1 {
                        position[] = {8,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_BFinlandArmyWDL_Bardelas_01";
                    };
                };

            };

            class Artillery {
                name = "Artillery";

                class b_finlandarmy_artillery_artillery_section_wdl {
                    name = "Artillery Section";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_MBT_01_arty_F";
                    };
                    class Unit1 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_MBT_01_arty_F";
                    };
                };

            };

            class Naval {
                name = "Naval";

                class BUS_DiverTeam {
                    name = "Diver Team";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_diver_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_diver_exp_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_diver_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_diver_F";
                    };
                };

                class BUS_DiverTeam_SDV {
                    name = "Diver Team (SDV)";
                    side = 1;
                    faction = "blu_f";
                    icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_diver_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_diver_exp_F";
                    };
                    class Unit2 {
                        position[] = {-6,-6,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_diver_F";
                    };
                    class Unit3 {
                        position[] = {11,-11,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_diver_F";
                    };
                    class Unit4 {
                        position[] = {-16,-16,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_SDV_01_F";
                    };
                    class Unit5 {
                        position[] = {21,-21,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_SDV_01_F";
                    };
                };

                class b_finlandarmy_naval_diver_team_boat_wdl {
                    name = "Diver Team (Boat)";
                    side = 1;
                    faction = "B_FinlandArmy_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_diver_TL_F";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_diver_exp_F";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_diver_F";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_diver_F";
                    };
                    class Unit4 {
                        position[] = {-32,-57,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_Boat_Transport_01_F";
                    };
                };

            };

            class Air {
                name = "Air";

            };
        };
    };
};
