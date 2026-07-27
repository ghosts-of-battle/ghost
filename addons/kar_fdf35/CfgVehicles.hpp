// KAR_FDF35_V declares its TransportMagazines entries with `name =`, which is
// the TransportItems key -- the engine reads `.magazine`, gets nothing, and
// logs `creating magazine  with scope=private` for each one.
//
// Each override below reuses the ORIGINAL subclass name: reopening a class
// merges, so renaming the subclass would leave KAR's broken one in place.
class CfgVehicles {
    class B_APC_Tracked_01_AA_F;
    class KAR_FDF35_IPTSV: B_APC_Tracked_01_AA_F {
        class TransportMagazines {
            class _xx_KAR_FDF35_RIFLE_RK62M2 {
                magazine = "KAR_FDF35_RK_MAG";
                count = 3;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
        };
    };

    class B_T_MRAP_01_hmg_F;
    class KAR_FDF35_MRAP_HMG: B_T_MRAP_01_hmg_F {
        class TransportMagazines {
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 10;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 4;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
        };
    };

    class B_T_MRAP_01_F;
    class KAR_FDF35_MRAP: B_T_MRAP_01_F {
        class TransportMagazines {
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 10;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 4;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
        };
    };

    class O_APC_Wheeled_02_unarmed_lxWS;
    class KAR_FDF35_PATRIA660: O_APC_Wheeled_02_unarmed_lxWS {
        class TransportMagazines {
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 30;
            };
            class _xx_20Rnd_762x51_Mag {
                magazine = "20Rnd_762x51_Mag";
                count = 10;
            };
            class _xx_150Rnd_762x54_Box_Tracer {
                magazine = "150Rnd_762x54_Box_Tracer";
                count = 5;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 4;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
        };
    };

    class Aegis_I_E_APC_Wheeled_01_cannon_v2_F;
    class KAR_FDF35_PATRIA360: Aegis_I_E_APC_Wheeled_01_cannon_v2_F {
        class TransportMagazines {
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 30;
            };
            class _xx_20Rnd_762x51_Mag {
                magazine = "20Rnd_762x51_Mag";
                count = 10;
            };
            class _xx_150Rnd_762x54_Box_Tracer {
                magazine = "150Rnd_762x54_Box_Tracer";
                count = 5;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 4;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
        };
    };

    class APC_Wheeled_01_atgm_base_lxWS;
    class KAR_FDF35_PATRIA360_ATGM: APC_Wheeled_01_atgm_base_lxWS {
        class TransportMagazines {
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 30;
            };
            class _xx_20Rnd_762x51_Mag {
                magazine = "20Rnd_762x51_Mag";
                count = 10;
            };
            class _xx_150Rnd_762x54_Box_Tracer {
                magazine = "150Rnd_762x54_Box_Tracer";
                count = 5;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 4;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
        };
    };

    class APC_Wheeled_01_command_base_lxWS;
    class KAR_FDF35_PATRIA360_CV: APC_Wheeled_01_command_base_lxWS {
        class TransportMagazines {
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 30;
            };
            class _xx_20Rnd_762x51_Mag {
                magazine = "20Rnd_762x51_Mag";
                count = 10;
            };
            class _xx_150Rnd_762x54_Box_Tracer {
                magazine = "150Rnd_762x54_Box_Tracer";
                count = 5;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 4;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
        };
    };

    class APC_Wheeled_01_mortar_base_lxWS;
    class KAR_FDF35_PATRIA360_AMOS: APC_Wheeled_01_mortar_base_lxWS {
        class TransportMagazines {
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 5;
            };
        };
    };

    class B_A_APC_tracked_03_cannon_v2_F;
    class KAR_FDF35_RPSV: B_A_APC_tracked_03_cannon_v2_F {
        class TransportMagazines {
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 5;
            };
        };
    };

    class MBT_03_base_F;
    class KAR_FDF35_LEO2SG: MBT_03_base_F {
        class TransportMagazines {
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
            class _xx_KAR_FDF35_RK_MAG {
                magazine = "KAR_FDF35_RK_MAG";
                count = 3;
            };
        };
    };

    class B_MBT_01_arty_F;
    class KAR_FDF35_ARTY: B_MBT_01_arty_F {
        class TransportMagazines {
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
            class _xx_KAR_FDF35_RK_MAG {
                magazine = "KAR_FDF35_RK_MAG";
                count = 3;
            };
        };
    };

    class B_MBT_01_mlrs_F;
    class KAR_FDF35_RSRAKH: B_MBT_01_mlrs_F {
        class TransportMagazines {
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
            class _xx_KAR_FDF35_RK_MAG {
                magazine = "KAR_FDF35_RK_MAG";
                count = 3;
            };
        };
    };

    class O_Truck_02_covered_F;
    class KAR_FDF35_SISU_COV: O_Truck_02_covered_F {
        class TransportMagazines {
            class _xx_FirstAidKit {
                // mis-filed item; the real one is in TransportItems
                magazine = "SmokeShell";
                count = 0;
            };
        };
    };

    class O_Truck_02_transport_F;
    class KAR_FDF35_SISU: O_Truck_02_transport_F {
        class TransportMagazines {
            class _xx_FirstAidKit {
                // mis-filed item; the real one is in TransportItems
                magazine = "SmokeShell";
                count = 0;
            };
        };
    };

    class O_Truck_02_box_F;
    class KAR_FDF35_SISU_REPAIR: O_Truck_02_box_F {
        class TransportMagazines {
            class _xx_ToolKit {
                // mis-filed item; the real one is in TransportItems
                magazine = "SmokeShell";
                count = 0;
            };
        };
    };

    class O_Truck_02_medical_F;
    class KAR_FDF35_SISU_MEDICAL: O_Truck_02_medical_F {
        class TransportMagazines {
            class _xx_FirstAidKit {
                // mis-filed item; the real one is in TransportItems
                magazine = "SmokeShell";
                count = 0;
            };
            class _xx_Medikit {
                // mis-filed item; the real one is in TransportItems
                magazine = "SmokeShell";
                count = 0;
            };
        };
    };

    class O_Truck_02_Ammo_F;
    class KAR_FDF35_SISU_AMMO: O_Truck_02_Ammo_F {
        class TransportMagazines {
            class _xx_150Rnd_762x54_Box {
                magazine = "150Rnd_762x54_Box";
                count = 10;
            };
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 50;
            };
            class _xx_1Rnd_HE_Grenade_shell {
                magazine = "1Rnd_HE_Grenade_shell";
                count = 10;
            };
            class _xx_20Rnd_762x51_Mag {
                magazine = "20Rnd_762x51_Mag";
                count = 20;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 4;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
            class _xx_SmokeShellGreen {
                magazine = "SmokeShellGreen";
                count = 4;
            };
            class _xx_SmokeShellYello {
                magazine = "SmokeShellYellow";
                count = 4;
            };
            class _xx_SmokeShellOrange {
                magazine = "SmokeShellOrange";
                count = 4;
            };
        };
    };

    class O_Truck_02_fuel_F;
    class KAR_FDF35_SISU_FUEL: O_Truck_02_fuel_F {
        class TransportMagazines {
            class _xx_ToolKit {
                // mis-filed item; the real one is in TransportItems
                magazine = "SmokeShell";
                count = 0;
            };
        };
    };

    class B_A_Heli_Transport_02_F;
    class KAR_FDF35_HELIKIPOTER: B_A_Heli_Transport_02_F {
        class TransportMagazines {
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 30;
            };
            class _xx_20Rnd_762x51_Mag {
                magazine = "20Rnd_762x51_Mag";
                count = 10;
            };
            class _xx_150Rnd_762x54_Box_Tracer {
                magazine = "150Rnd_762x54_Box_Tracer";
                count = 30;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 4;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
        };
    };

    class B_W_Heli_Light_01_F;
    class KAR_FDF35_HELI_L: B_W_Heli_Light_01_F {
        class TransportMagazines {
            class _xx_KAR_FDF35_556_PMAG {
                magazine = "KAR_FDF35_556_PMAG";
                count = 30;
            };
            class _xx_20Rnd_762x51_Mag {
                magazine = "20Rnd_762x51_Mag";
                count = 10;
            };
            class _xx_150Rnd_762x54_Box_Tracer {
                magazine = "150Rnd_762x54_Box_Tracer";
                count = 30;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 4;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 4;
            };
        };
    };
};
