class CfgRespawnFactions {
    class ghost_w {
        displayName = "BluFor";
        callsignPrefix = "BluFor";
        factionClassname = "ghost_w";
        factionPrefix = "ghost_w_";
        groups[] = {
            "Command",
            "PlatoonLead",
            "SquadLead",
            "FireTeamFull",
            "FireTeamReduced",
            "MMG",
            "HMG",
            "MAT",
            "HAT",
            "Mortar",
            "Artillery",
            "MSAM",
            "ST",
            "DEMO",
            "ENG",
            "ArmorGroup",
            "THGroup",
            "AHGroup"
        };
    };

    class ghost_e: ghost_w {
        displayName = "OpFor";
        callsignPrefix = "OpFor";
        factionClassname = "ghost_e";
        factionPrefix = "ghost_e_";
    };

    class ghost_i: ghost_w {
        displayName = "Independent";
        callsignPrefix = "Indy";
        factionClassname = "ghost_i";
        factionPrefix = "ghost_i_";
    };

    class msv {
        displayName = "OpFor: Mechanized";
        callsignPrefix = "MSV";
        factionClassname = "ghost_e";
        factionPrefix = "ghost_e_";
        groups[] = {
            "MSVCommand",
            "MSVPlatoonLead",
            "MSVSquad",
            "MSVMMG",
            "MSVHMG",
            "MSVMAT",
            "MSVHAT",
            "MSVArty",
            "MSVMSAM",
            "MSVDEMO",
            "MSVENG",
            //"MSVSF",
            "MSVArmor",
            "MSVTH",
            "MSVAH"
        };
    };
    class cwl {
        displayName = "BluFor: Commonwealth";
        callsignPrefix = "CWL";
        factionClassname = "ghost_w";
        factionPrefix = "ghost_w_";
        groups[] = {
            "CWLCommand",
            "CWLPlatoonLead",
            "CWLSection",
            "CWLMMG",
            "CWLHMG",
            "CWLMAT",
            "CWLHAT",
            "CWLArty",
            "CWLMSAM",
            "CWLDEMO",
            "CWLENG",
            "CWLArmor",
            "CWLTH",
            "CWLAH"
        };
    };
    class civ_f {
        displayName = "Civilian";
        callsignPrefix = "Civ";
        factionClassname = "civ_f";
        factionPrefix = "";
        groups[] = {
            "MiscCivilians",
            "PressTeam"
        };
    };
};
