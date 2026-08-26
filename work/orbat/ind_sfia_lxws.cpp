//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class IND_SFIA_lxWS {
        displayName = "SFIA";
        side = 2;
        priority = 3;
        icon = "\lxws\data_f_lxws\img\ui\cfgFactionClasses_SFIA_ca.paa";
        flag = "\lxws\data_f_lxws\img\Flags\flag_SFIA_CO.paa";
    };
};


class CfgGroups {
    class Indep {
        class IND_SFIA_lxWS {
            class Armored {
                class ISFIA_HAF_TankPlatoon_AA_lxWS {
                    name = "Tank Platoon (Combined)";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_MBT_02_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_MBT_02_cannon_lxWS";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_MBT_02_cannon_lxWS";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "I_SFIA_APC_Tracked_02_30mm_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,-15,0};
                    };

                    class Unit4 {
                        vehicle = "I_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,-20,0};
                    };

                    class Unit5 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-25,0};
                    };

                    class Unit6 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-25,0};
                    };

                    class Unit7 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-30,0};
                    };

                    class Unit8 {
                        vehicle = "I_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-30,0};
                    };

                    class Unit9 {
                        vehicle = "I_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-35,0};
                    };

                    class Unit10 {
                        vehicle = "I_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-35,0};
                    };
                };
                class ISFIA_HAF_TankPlatoon_lxWS {
                    name = "Tank Platoon";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_MBT_02_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_MBT_02_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_MBT_02_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "I_SFIA_MBT_02_cannon_lxWS";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class ISFIA_HAF_TankSection_lxWS {
                    name = "Tank Section";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_MBT_02_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_MBT_02_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class ISFIA_HAF_InfTeam_AA_lxWS {
                    name = "Air-defense Team";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class ISFIA_HAF_InfTeam_AT_lxWS {
                    name = "Anti-armor Team";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_SFIA_Soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class ISFIA_InfSentry_lxWS {
                    name = "Sentry";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_Soldier_GL_lxWS";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class ISFIA_InfSquad_Weapons_lxWS {
                    name = "Weapons Squad";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_Soldier_AR_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_Soldier_GL_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_SFIA_sharpshooter_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_SFIA_Soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_SFIA_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class ISFIA_InfSquad_lxWS {
                    name = "Rifle Squad";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_SFIA_sharpshooter_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_SFIA_soldier_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_SFIA_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class ISFIA_InfTeam_lxWS {
                    name = "Fire Team";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_Soldier_GL_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class ISFIA_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_APC_Tracked_02_30mm_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_SFIA_Soldier_AAA_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "I_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class ISFIA_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_APC_Tracked_02_30mm_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_SFIA_Soldier_AAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_SFIA_Soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "I_SFIA_Soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class ISFIA_MotInf_AA_lxWS {
                    name = "Motorized Air-defense Team";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_Offroad_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class ISFIA_MotInf_AT_lxWS {
                    name = "Motorized Anti-armor Team";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_Offroad_AT_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
                class ISFIA_MotInf_Reinforce_lxWS {
                    name = "Motorized Reinforcements";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_Truck_02_transport_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_officer_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "I_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "I_SFIA_sharpshooter_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "I_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "I_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "I_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "I_SFIA_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "I_SFIA_officer_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "I_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "I_SFIA_sharpshooter_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "I_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "I_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "I_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "I_SFIA_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class ISFIA_MotInf_Team_lxWS {
                    name = "Motorized Team";
                    side = 2;
                    faction = "IND_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_SFIA_Offroad_armed_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
        };
    };
};
