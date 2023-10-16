#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "GHOST_MorphineItem",
            "GHOST_epinephrineItem",
            "GHOST_fentanylItem",
            "GHOST_naloxonelItem",
            "GHOST_ketamineItem",
            "GHOST_ApapItem"
        };

        weapons[] = {
            "GHOST_naloxone",
            "GHOST_fentanyl",
            "GHOST_ketamine",
            "GHOST_ketamine_200mg",
            "GHOST_tetra",
            "GHOST_Apap",
            "GHOST_VPN",
            "GHOST_NDC"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "ace_medical",
            "ace_medical_engine",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals",
            "ghost_defib"
        };
        author = "";
        authors[] = {"GHOST J4"};
        authorUrl = "https://ghost.com";
        VERSION_CONFIG;
    };
};  
class ItemCore;
class ACE_ItemCore;
class CBA_MiscItem_ItemInfo;

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"

#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"

// #include "configs\ACE_Medical_Statemachine.hpp"
#include "configs\ACE_Medical_Treatment.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"

#include "configs\ZEN_Context_Actions.hpp"


class CfgFunctions
{
    class ace_medical_statemachine
    {
        tag = "ace_medical_statemachine";
        class Functions
        {
            class handleStateCardiacArrest{
                
            file="z\ghost\addons\medical\function_overwrites\fn_handleStateCardiacArrest.sqf";
            };
        };
    };
};
