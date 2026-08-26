// ONE MAN PER THEATRE, AND THAT IS THE WHOLE FACTION.
//
// MFRC IS A PLAYER FACTION. Almost everything about a player is set in the
// mission - the slot's loadout, its gear, its vehicle - so a config roster of
// thirty specialists would be thirty classes nobody ever spawns. One scout is
// what a slot needs in order to exist; the mission does the rest.
//
// THE LOADOUT IS AN ARRAY, NOT A PILE OF weapons[] LINES. That is the
// authoring loop the faction builder handoff describes (section 9): an arsenal
// export becomes a getUnitLoadout array and a spawn hook applies it. The
// weapons[]/linkedItems[] underneath are what the EDITOR reads for its preview
// and what the man carries before the hook runs - they mirror the array rather
// than competing with it.
//
// ONLY THE UNIFORM CHANGES BETWEEN THE FOUR. Vest and booniehat are the same
// on all of them by call - the camo that reads at fifty metres is the one he
// is wearing, not the one on his hat.

// CBA'S EXTENDED EVENT HANDLERS, DECLARED SO THEY CAN BE KEPT.
// A class that writes its own EventHandlers REPLACES the parent's, and the
// parent's is where CBA put its XEH hooks - so every one of these men was
// reported as "does not support Extended Event Handlers" and dropped out of
// everything built on them. Inheriting the class below inside our own
// EventHandlers keeps both: CBA's hooks and our loadout init.
class CBA_Extended_EventHandlers;

class CfgVehicles {
    // FORWARD DECLARATION, NOT A DEPENDENCY. B_CTRG_Soldier_v2_F belongs to
    // somebody else's mod. Declaring it means a load order without that mod
    // gets an inert class rather than a config that refuses to build.
    class B_CTRG_Soldier_v2_F;

    class ghost_MFRC_tna_ReconScout: B_CTRG_Soldier_v2_F {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Recon Scout";
        side = 1;
        faction = "ghost_MFRC_tna";
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";

        uniformClass = "ghost_uniform_sof_SOF_U_B_SFFatigues_Shortsleeve_tna";
        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        // PISTOL ONLY, BY DESIGN. He observes and leaves; the Glock is what
        // he has when leaving stops being an option.
        weapons[] = {"hgun_Glock19_auto_khk_RF","Throw","Put"};
        respawnWeapons[] = {"hgun_Glock19_auto_khk_RF","Throw","Put"};
        magazines[] = {"17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","H_Booniehat_tna_F","ItemMap","ItemGPS","ItemCompass"};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","H_Booniehat_tna_F","ItemMap","ItemGPS","ItemCompass"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Glock19_auto_khk_RF","","","",{"17Rnd_9x19_Mag_RF",17},{},""},{"ghost_uniform_sof_SOF_U_B_SFFatigues_Shortsleeve_tna",{{"FirstAidKit",1},{"optic_NVS",1}}},{"Aegis_V_CarrierRigKBT_01_holster_olive_F",{{"MiniGrenade",2,1},{"SmokeShell",2,1}}},{},"H_Booniehat_tna_F","",{},{"ItemMap","ItemGPS","","ItemCompass","ACE_Altimeter",""}};

        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
            class ghost_MFRC_loadout {
                init = "if (local (_this select 0)) then {_apply = {(_this select 0) spawn {sleep 0.2;if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setUnitLoadout _loadout;reload _this}}};_this call _apply;(_this select 0) addMPEventHandler ['MPRespawn', _apply];};";
            };
        };
    };

    class ghost_MFRC_ocp_ReconScout: B_CTRG_Soldier_v2_F {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Recon Scout";
        side = 1;
        faction = "ghost_MFRC_ocp";
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";

        uniformClass = "ghost_uniform_sof_SOF_U_B_SFFatigues_Shortsleeve_ocp";
        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        // PISTOL ONLY, BY DESIGN. He observes and leaves; the Glock is what
        // he has when leaving stops being an option.
        weapons[] = {"hgun_Glock19_auto_khk_RF","Throw","Put"};
        respawnWeapons[] = {"hgun_Glock19_auto_khk_RF","Throw","Put"};
        magazines[] = {"17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","ghost_headware_H_Booniehat_ocp_F","ItemMap","ItemGPS","ItemCompass"};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","ghost_headware_H_Booniehat_ocp_F","ItemMap","ItemGPS","ItemCompass"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Glock19_auto_khk_RF","","","",{"17Rnd_9x19_Mag_RF",17},{},""},{"ghost_uniform_sof_SOF_U_B_SFFatigues_Shortsleeve_ocp",{{"FirstAidKit",1},{"optic_NVS",1}}},{"Aegis_V_CarrierRigKBT_01_holster_olive_F",{{"MiniGrenade",2,1},{"SmokeShell",2,1}}},{},"ghost_headware_H_Booniehat_ocp_F","",{},{"ItemMap","ItemGPS","","ItemCompass","ACE_Altimeter",""}};

        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
            class ghost_MFRC_loadout {
                init = "if (local (_this select 0)) then {_apply = {(_this select 0) spawn {sleep 0.2;if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setUnitLoadout _loadout;reload _this}}};_this call _apply;(_this select 0) addMPEventHandler ['MPRespawn', _apply];};";
            };
        };
    };

    class ghost_MFRC_wdl_ReconScout: B_CTRG_Soldier_v2_F {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Recon Scout";
        side = 1;
        faction = "ghost_MFRC_wdl";
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";

        uniformClass = "ghost_uniform_sof_SOF_U_B_SFFatigues_Shortsleeve_wdl";
        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        // PISTOL ONLY, BY DESIGN. He observes and leaves; the Glock is what
        // he has when leaving stops being an option.
        weapons[] = {"hgun_Glock19_auto_khk_RF","Throw","Put"};
        respawnWeapons[] = {"hgun_Glock19_auto_khk_RF","Throw","Put"};
        magazines[] = {"17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","ghost_headware_H_Booniehat_Multicam_Woodland_F","ItemMap","ItemGPS","ItemCompass"};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","ghost_headware_H_Booniehat_Multicam_Woodland_F","ItemMap","ItemGPS","ItemCompass"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Glock19_auto_khk_RF","","","",{"17Rnd_9x19_Mag_RF",17},{},""},{"ghost_uniform_sof_SOF_U_B_SFFatigues_Shortsleeve_wdl",{{"FirstAidKit",1},{"optic_NVS",1}}},{"Aegis_V_CarrierRigKBT_01_holster_olive_F",{{"MiniGrenade",2,1},{"SmokeShell",2,1}}},{},"ghost_headware_H_Booniehat_Multicam_Woodland_F","",{},{"ItemMap","ItemGPS","","ItemCompass","ACE_Altimeter",""}};

        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
            class ghost_MFRC_loadout {
                init = "if (local (_this select 0)) then {_apply = {(_this select 0) spawn {sleep 0.2;if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setUnitLoadout _loadout;reload _this}}};_this call _apply;(_this select 0) addMPEventHandler ['MPRespawn', _apply];};";
            };
        };
    };

    class ghost_MFRC_mtp_ReconScout: B_CTRG_Soldier_v2_F {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "Recon Scout";
        side = 1;
        faction = "ghost_MFRC_mtp";
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";

        uniformClass = "ghost_uniform_sof_SOF_U_B_SFFatigues_Shortsleeve_mcam";
        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        // PISTOL ONLY, BY DESIGN. He observes and leaves; the Glock is what
        // he has when leaving stops being an option.
        weapons[] = {"hgun_Glock19_auto_khk_RF","Throw","Put"};
        respawnWeapons[] = {"hgun_Glock19_auto_khk_RF","Throw","Put"};
        magazines[] = {"17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","ghost_headware_H_Booniehat_Multicam_F","ItemMap","ItemGPS","ItemCompass"};
        respawnLinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","ghost_headware_H_Booniehat_Multicam_F","ItemMap","ItemGPS","ItemCompass"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Glock19_auto_khk_RF","","","",{"17Rnd_9x19_Mag_RF",17},{},""},{"ghost_uniform_sof_SOF_U_B_SFFatigues_Shortsleeve_mcam",{{"FirstAidKit",1},{"optic_NVS",1}}},{"Aegis_V_CarrierRigKBT_01_holster_olive_F",{{"MiniGrenade",2,1},{"SmokeShell",2,1}}},{},"ghost_headware_H_Booniehat_Multicam_F","",{},{"ItemMap","ItemGPS","","ItemCompass","ACE_Altimeter",""}};

        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
            class ghost_MFRC_loadout {
                init = "if (local (_this select 0)) then {_apply = {(_this select 0) spawn {sleep 0.2;if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setUnitLoadout _loadout;reload _this}}};_this call _apply;(_this select 0) addMPEventHandler ['MPRespawn', _apply];};";
            };
        };
    };

};
