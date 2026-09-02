#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_HIMF_Rifleman",
            "ghost_HIMF_Rifleman_Unarmed",
            "ghost_HIMF_SquadLeader",
            "ghost_HIMF_TeamLeader",
            "ghost_HIMF_Autorifleman",
            "ghost_HIMF_AmmoBearer",
            "ghost_HIMF_Grenadier",
            "ghost_HIMF_Rifleman_AT",
            "ghost_HIMF_Rifleman_AA",
            "ghost_HIMF_Rifleman_AAA",
            "ghost_HIMF_Marksman",
            "ghost_HIMF_HeavyGunner",
            "ghost_HIMF_Medic",
            "ghost_HIMF_Engineer",
            "ghost_HIMF_ExplosiveSpecialist",
            "ghost_HIMF_Officer",
            "ghost_HIMF_RadioOperator",
            "ghost_HIMF_MortarGunner",
            "ghost_HIMF_MortarAssistant",
            "ghost_HIMF_Crew",
            "ghost_HIMF_Helipilot",
            "ghost_HIMF_Helicrew",
            "ghost_HIMF_Pilot",
            "ghost_HIMF_Recon",
            "ghost_HIMF_Recon_TL",
            "ghost_HIMF_Recon_AR",
            "ghost_HIMF_Recon_GL",
            "ghost_HIMF_Recon_AT",
            "ghost_HIMF_Recon_M",
            "ghost_HIMF_Recon_Medic",
            "ghost_HIMF_Recon_JTAC",
            "ghost_HIMF_Recon_Demo",
            "ghost_HIMF_UAV_01_Bag",
            "ghost_HIMF_UAV_06_Bag",
            "ghost_HIMF_UAVOperator",
            "ghost_HIMF_PelicanOperator",
            "ghost_HIMF_APC",
            "ghost_HIMF_APC_HMG",
            "ghost_HIMF_Boat",
            "ghost_HIMF_Boat_Armed",
            "ghost_HIMF_Mortar",
            "ghost_HIMF_HMG",
            "ghost_HIMF_HMG_High",
            "ghost_HIMF_Mortar_Commando",
            "ghost_HIMF_Mortar_Mk6",
            "ghost_HIMF_AT_Dragon",
            "ghost_HIMF_LM_Tube_300",
            "ghost_HIMF_LM_Tube_600",
            "ghost_HIMF_UAV_Hunter_SP",
            "ghost_HIMF_Heli_Transport",
            "ghost_HIMF_Heli_Transport_Unarmed",
            "ghost_HIMF_Heli_Light",
            "ghost_HIMF_Heli_Light_Armed",
            "ghost_HIMF_Heli_Light_Hellcat",
            "ghost_HIMF_Offroad",
            "ghost_HIMF_Offroad_LMG",
            "ghost_HIMF_Offroad_AT",
            "ghost_HIMF_Plane_Tucano",
            "ghost_HIMF_Plane_Civil",
            "ghost_HIMF_Quadbike",
            "ghost_HIMF_UAV_Darter",
            "ghost_HIMF_UAV_Falcon",
            "ghost_HIMF_UAV_Pelican",
            "ghost_HIMF_UGV_Stomper",
            "ghost_HIMF_UGV_Stomper_RCWS",
            "ghost_HIMF_UGV_Pelter",
            "ghost_HIMF_UAV_Shadow",
            "ghost_HIMF_UAV_Aeroshark",
            "ghost_HIMF_USV_Magura",
            "ghost_HIMF_UAV_Raven",
            "ghost_HIMF_Pickup",
            "ghost_HIMF_Pickup_Comms",
            "ghost_HIMF_Pickup_Covered",
            "ghost_HIMF_Pickup_HMG",
            "ghost_HIMF_Pickup_MMG",
            "ghost_HIMF_Pickup_RCWS",
            "ghost_HIMF_Pickup_AA",
            "ghost_HIMF_Pickup_MRL",
            "ghost_HIMF_Pickup_Rocket",
            "ghost_HIMF_Pickup_Fuel",
            "ghost_HIMF_Pickup_Repair"
        };
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        // ATLAS IS A REAL DEPENDENCY (2026-08-29): every man inherits
        // from Atlas's own HIMF, so without Atlas there is no faction -
        // and skipWhenMissingDependencies says so rather than loading
        // thirty men with no parent. The tier magazines are still named
        // as STRINGS, so ghost_fa_tiers is not required.
        requiredAddons[] = {"ghost_main", "A3_Atlas_Characters_F_Atlas"};
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
