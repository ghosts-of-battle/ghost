class CfgGroups {
    class East {
        class ghost_o_raf {
            name = "[Ghost] RAF (Northstar, East)";
            class Armour {
                name = "Armour";
                class OPF_RAF_RU_TankSection {
                    name = "T-14 Tank Section";
                    side = 0;
                    faction = "ghost_o_raf";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
                    class Unit0 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_t_14";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_t_14";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };
                };
            };
            class AirDefense {
                name = "Air Defense";
                class OPF_RAF_RU_SA22Section {
                    name = "SA-22 Section";
                    side = 0;
                    faction = "ghost_o_raf";
                    icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
                    class Unit0 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_sa_22";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_sa_22";
                        rank = "CORPORAL";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Artillery {
                name = "Artillery";
                class OPF_RAF_RU_GradBattery {
                    name = "2B26 Grad Battery";
                    side = 0;
                    faction = "ghost_o_raf";
                    icon = "\A3\ui_f\data\map\markers\nato\n_art.paa";
                    class Unit0 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_2b26";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_2b26";
                        rank = "CORPORAL";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                name = "Motorized";
                class OPF_RAF_RU_MotPatrol {
                    name = "Motorized Patrol";
                    side = 0;
                    faction = "ghost_o_raf";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
                    class Unit0 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_gaz_2330_HMG";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_gaz_2330";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };
                };
            };
            class Air {
                name = "Air";
                class OPF_RAF_RU_Ka52Flight {
                    name = "Ka-52 Flight";
                    side = 0;
                    faction = "ghost_o_raf";
                    icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
                    class Unit0 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_ka_52";
                        rank = "CAPTAIN";
                        position[] = {0,0,0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_ka_52";
                        rank = "LIEUTENANT";
                        position[] = {-25,-25,0};
                    };
                };
                class OPF_RAF_RU_PchelaUAV {
                    name = "Pchela-1T UAV";
                    side = 0;
                    faction = "ghost_o_raf";
                    icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
                    class Unit0 {
                        side = 0;
                        vehicle = "ghost_o_raf_min_rf_pchela_1t";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                };
            };
        };
    };
};
