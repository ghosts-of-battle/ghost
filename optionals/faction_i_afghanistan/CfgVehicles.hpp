class CfgVehicles {
    class I_SFIA_Truck_02_aa_lxWS;
    class I_SFIA_ZU23_lxWS;
    class I_SFIA_APC_Tracked_02_30mm_lxWS;
    class I_SFIA_soldier_lxWS;
    class I_SFIA_Soldier_universal_lxWS;
    class I_SFIA_Soldier_TL_lxWS;
    class I_SFIA_Soldier_GL_lxWS;
    class I_SFIA_Soldier_AR_lxWS;
    class I_SFIA_officer_lxWS;
    class I_SFIA_sharpshooter_lxWS;
    class I_SFIA_crew_lxWS;
    class I_SFIA_pilot_lxWS;
    class I_SFIA_soldier_at_lxWS;
    class I_SFIA_soldier_aa_lxWS;
    class I_SFIA_medic_lxWS;
    class I_SFIA_exp_lxWS;
    class I_SFIA_repair_lxWS;
    class I_SFIA_soldier_unarmed_lxWS;
    class I_SFIA_survivor_lxWS;
    class I_SFIA_Soldier_AAT_lxWS;
    class I_SFIA_Soldier_AAA_lxWS;
    class I_SFIA_APC_Wheeled_02_unarmed_lxWS;
    class I_SFIA_APC_Wheeled_02_hmg_lxWS;
    class I_SFIA_APC_Tracked_02_cannon_lxWS;
    class I_SFIA_APC_Tracked_02_AA_lxWS;
    class I_SFIA_Mortar_lxWS;
    class I_SFIA_HMG_02_lxWS;
    class I_SFIA_HMG_02_high_lxWS;
    class I_SFIA_Offroad_lxWS;
    class I_SFIA_Offroad_AT_lxWS;
    class I_SFIA_Offroad_armed_lxWS;
    class I_SFIA_Offroad_AA_lxWS;
    class I_SFIA_Truck_02_transport_lxWS;
    class I_SFIA_Truck_02_flatbed_lxWS;
    class I_SFIA_Truck_02_cargo_lxWS;
    class I_SFIA_Truck_02_covered_lxWS;
    class I_SFIA_Truck_02_box_lxWS;
    class I_SFIA_Truck_02_Ammo_lxWS;
    class I_SFIA_Truck_02_MRL_lxWS;
    class I_SFIA_Truck_02_fuel_lxWS;

    class ghost_afghanistan_Truck_02_aa_lxWS: I_SFIA_Truck_02_aa_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
        class Extended_Init_EventHandlers {
            class ADDON {
            };
        };
    };
    class ghost_afghanistan_ZU23_lxWS: I_SFIA_ZU23_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
        scope = 2;
        scopeCurator = 2;
        faction = "ghost_afghanistan";
        side = 2;
        textureList[] = {
            "SFIA",
            1
        };
        class Extended_Init_EventHandlers {
            class ADDON {
            };
        };
    };
    class ghost_afghanistan_APC_Tracked_02_30mm_lxWS: I_SFIA_APC_Tracked_02_30mm_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ghost_afghanistan_APC_Tracked_02_30mm_lxWS.jpg";
        faction = "ghost_afghanistan";
        crew = "ghost_afghanistan_crew_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_soldier_lxWS: I_SFIA_soldier_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_Soldier_universal_lxWS: I_SFIA_Soldier_universal_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_Soldier_TL_lxWS: I_SFIA_Soldier_TL_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_Soldier_GL_lxWS: I_SFIA_Soldier_GL_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_Soldier_AR_lxWS: I_SFIA_Soldier_AR_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_officer_lxWS: I_SFIA_officer_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_sharpshooter_lxWS: I_SFIA_sharpshooter_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_crew_lxWS: I_SFIA_crew_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_pilot_lxWS: I_SFIA_pilot_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_soldier_at_lxWS: I_SFIA_soldier_at_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_soldier_aa_lxWS: I_SFIA_soldier_aa_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_medic_lxWS: I_SFIA_medic_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_exp_lxWS: I_SFIA_exp_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_repair_lxWS: I_SFIA_repair_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_soldier_unarmed_lxWS: I_SFIA_soldier_unarmed_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_survivor_lxWS: I_SFIA_survivor_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_Soldier_AAT_lxWS: I_SFIA_Soldier_AAT_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_Soldier_AAA_lxWS: I_SFIA_Soldier_AAA_lxWS {
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        modelSides[] = {6};
        scope = 2;
        scopeCurator = 2;
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };
    class ghost_afghanistan_APC_Wheeled_02_unarmed_lxWS: I_SFIA_APC_Wheeled_02_unarmed_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_crew_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_APC_Wheeled_02_hmg_lxWS: I_SFIA_APC_Wheeled_02_hmg_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "ghost_afghanistan";
        crew = "ghost_afghanistan_crew_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
        class Turrets
        {
            class MainTurret
            {
            };
            class mg_station
            {
                gunnerType = "ghost_afghanistan_soldier_lite_lxWS";
            };
        };
    };
    class ghost_afghanistan_APC_Tracked_02_cannon_lxWS: I_SFIA_APC_Tracked_02_cannon_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_crew_lxWS";
        typicalCargo[] = {
            "ghost_afghanistan_soldier_lxWS",
            "ghost_afghanistan_soldier_lxWS",
            "ghost_afghanistan_soldier_lxWS"
        };
    };
    class ghost_afghanistan_APC_Tracked_02_AA_lxWS: I_SFIA_APC_Tracked_02_AA_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_crew_lxWS";
        typicalCargo[] = {
            "ghost_afghanistan_soldier_lxWS",
            "ghost_afghanistan_soldier_lxWS",
            "ghost_afghanistan_soldier_lxWS"
        };
    };
    class ghost_afghanistan_Mortar_lxWS: I_SFIA_Mortar_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
    };
    class ghost_afghanistan_HMG_02_lxWS: I_SFIA_HMG_02_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
    };
    class ghost_afghanistan_HMG_02_high_lxWS: I_SFIA_HMG_02_high_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
    };
    class ghost_afghanistan_Offroad_lxWS: I_SFIA_Offroad_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Offroad_AT_lxWS: I_SFIA_Offroad_AT_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Offroad_armed_lxWS: I_SFIA_Offroad_armed_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Offroad_aa_lxWS: I_SFIA_Offroad_AA_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        side = 2;
        faction = "ghost_afghanistan";
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Truck_02_transport_lxWS: I_SFIA_Truck_02_transport_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Truck_02_flatbed_lxWS: I_SFIA_Truck_02_flatbed_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Truck_02_cargo_lxWS: I_SFIA_Truck_02_cargo_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Truck_02_covered_lxWS: I_SFIA_Truck_02_covered_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Truck_02_box_lxWS: I_SFIA_Truck_02_box_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Truck_02_Ammo_lxWS: I_SFIA_Truck_02_Ammo_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Truck_02_MRL_lxWS: I_SFIA_Truck_02_MRL_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_Truck_02_fuel_lxWS: I_SFIA_Truck_02_fuel_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        side = 2;
        faction = "ghost_afghanistan";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_afghanistan_soldier_lxWS";
        typicalCargo[] = {"ghost_afghanistan_soldier_lxWS"};
    };
    class ghost_afghanistan_ZU23_stripped_lxWS: ghost_afghanistan_ZU23_lxWS {
        side = 2;
        faction = "ghost_afghanistan";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        model = "\lxws\vehicles_f_lxws\zu23\zu23_stripped_lxws.p3d";
        textureList[] = {
            "SFIA",
            1
        };
    };
    class ghost_afghanistan_HeavyGunner_lxWS: ghost_afghanistan_Soldier_AR_lxWS {
        side = 2;
        faction = "ghost_afghanistan";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        textSingular = "machinegunner";
        textPlural = "machinegunners";
        nameSound = "veh_infantry_MG_s";
        editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ghost_afghanistan_HeavyGunner_lxWS.jpg";
        displayName = "Heavy Gunner";
        icon = "iconManMG";
        role = "MachineGunner";
        linkedItems[] = {
            "V_lxWS_HarnessO_oli",
            "lxWS_H_ssh40_green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "G_Bandanna_khk"
        };
        respawnLinkedItems[] = {
            "V_lxWS_HarnessO_oli",
            "lxWS_H_ssh40_green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "G_Bandanna_khk"
        };
        weapons[] = {
            "LMG_S77_ACO_lxWS",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "LMG_S77_ACO_lxWS",
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "100Rnd_762x51_S77_Yellow_lxWS",
            "100Rnd_762x51_S77_Yellow_lxWS",
            "100Rnd_762x51_S77_Yellow_lxWS",
            "100Rnd_762x51_S77_Yellow_lxWS",
            "100Rnd_762x51_S77_Yellow_Tracer_lxWS",
            "9Rnd_45ACP_Mag",
            "9Rnd_45ACP_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "100Rnd_762x51_S77_Yellow_lxWS",
            "100Rnd_762x51_S77_Yellow_lxWS",
            "100Rnd_762x51_S77_Yellow_lxWS",
            "100Rnd_762x51_S77_Yellow_lxWS",
            "100Rnd_762x51_S77_Yellow_Tracer_lxWS",
            "9Rnd_45ACP_Mag",
            "9Rnd_45ACP_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_green",
            "Chemlight_green"
        };
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_MG_s"};
                speechPlural[] = {"veh_infantry_MG_p"};
            };
        };
    };
    class ghost_afghanistan_soldier_lite_lxWS: ghost_afghanistan_soldier_lxWS {
        side = 2;
        faction = "ghost_afghanistan";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Lite_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        author = "Rotators Collective";
        DLC = "ws";
        editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ghost_afghanistan_soldier_lite_lxWS.jpg";
        displayName = "Rifleman (Light)";


        weapons[] = {
            "arifle_Galat_lxWS",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_Galat_lxWS",
            "Throw",
            "Put"
        };
        magazines[] = {
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "HandGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        respawnMagazines[] = {
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "HandGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        uniformClass = "Dust_U_FTG_OL_GUE_10";
    };

    class I_Heli_light_03_dynamicLoadout_F;
    class I_Heli_light_03_unarmed_F;
    class ghost_afghanistan_Heli_light_03_dynamicLoadout_F: I_Heli_light_03_dynamicLoadout_F {
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "ghost_afghanistan";
        displayName = "Light Helicopter (Armed)";
        crew = "ghost_afghanistan_pilot_lxWS";
        hiddenSelectionsTextures[] = {
            "\lxRF\air_rf\Heli_Light_03\data\Heli_Light_03_base_tan_CO.paa",
            "a3\weapons_f\ammoboxes\data\ammobox_co.paa",
            "a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
        };
    };
    class ghost_afghanistan_Heli_light_03_unarmed_F: I_Heli_light_03_unarmed_F {
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "ghost_afghanistan";
        displayName = "Light Helicopter (Transport)";
        crew = "ghost_afghanistan_pilot_lxWS";
        hiddenSelectionsTextures[] = {
            "\lxRF\air_rf\Heli_Light_03\data\Heli_Light_03_base_tan_CO.paa",
            "a3\weapons_f\ammoboxes\data\ammobox_co.paa",
            "a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
        };
    };
};
