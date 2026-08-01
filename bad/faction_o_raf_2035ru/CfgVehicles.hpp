class CfgVehicles {
    // 2035RU (min_rf) base classes
    class min_rf_sa_22;
    class min_rf_2b26;
    class min_rf_gaz_2330;
    class min_rf_gaz_2330_HMG;
    class min_rf_ka_52;
    class min_rf_t_14;
    class min_rf_pchela_1t;

    // RAF-faction wrappers (RAF crews).
    class ghost_o_raf_min_rf_sa_22: min_rf_sa_22 {
        faction = "ghost_o_raf";
        side = 0;
        crew = "ghost_o_raf_Crewman_F";
    };
    class ghost_o_raf_min_rf_2b26: min_rf_2b26 {
        faction = "ghost_o_raf";
        side = 0;
        crew = "ghost_o_raf_Crewman_F";
    };
    class ghost_o_raf_min_rf_gaz_2330: min_rf_gaz_2330 {
        faction = "ghost_o_raf";
        side = 0;
        crew = "ghost_o_raf_Crewman_F";
    };
    class ghost_o_raf_min_rf_gaz_2330_HMG: min_rf_gaz_2330_HMG {
        faction = "ghost_o_raf";
        side = 0;
        crew = "ghost_o_raf_Crewman_F";
    };
    class ghost_o_raf_min_rf_ka_52: min_rf_ka_52 {
        faction = "ghost_o_raf";
        side = 0;
        crew = "ghost_o_raf_Helipilot_F";
    };
    class ghost_o_raf_min_rf_t_14: min_rf_t_14 {
        faction = "ghost_o_raf";
        side = 0;
        crew = "ghost_o_raf_Crewman_F";
    };
    class ghost_o_raf_min_rf_pchela_1t: min_rf_pchela_1t {
        faction = "ghost_o_raf";
        side = 0;
    };
};
