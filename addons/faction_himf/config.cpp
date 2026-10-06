#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Rifleman),
            QGVAR(Rifleman_Unarmed),
            QGVAR(SquadLeader),
            QGVAR(TeamLeader),
            QGVAR(Autorifleman),
            QGVAR(AmmoBearer),
            QGVAR(Grenadier),
            QGVAR(Rifleman_AT),
            QGVAR(Rifleman_AA),
            QGVAR(Rifleman_AAA),
            QGVAR(Marksman),
            QGVAR(HeavyGunner),
            QGVAR(Medic),
            QGVAR(Engineer),
            QGVAR(ExplosiveSpecialist),
            QGVAR(Officer),
            QGVAR(RadioOperator),
            QGVAR(MortarGunner),
            QGVAR(MortarAssistant),
            QGVAR(Crew),
            QGVAR(Helipilot),
            QGVAR(Helicrew),
            QGVAR(Pilot),
            QGVAR(Recon),
            QGVAR(Recon_TL),
            QGVAR(Recon_AR),
            QGVAR(Recon_GL),
            QGVAR(Recon_AT),
            QGVAR(Recon_M),
            QGVAR(Recon_Medic),
            QGVAR(Recon_JTAC),
            QGVAR(Recon_Demo),
            QGVAR(UAV_01_Bag),
            QGVAR(UAV_06_Bag),
            QGVAR(UAVOperator),
            QGVAR(PelicanOperator),
            QGVAR(APC),
            QGVAR(APC_HMG),
            QGVAR(Boat),
            QGVAR(Boat_Armed),
            QGVAR(Mortar),
            QGVAR(HMG),
            QGVAR(HMG_High),
            QGVAR(Mortar_Commando),
            QGVAR(Mortar_Mk6),
            QGVAR(AT_Dragon),
            QGVAR(LM_Tube_300),
            QGVAR(LM_Tube_600),
            QGVAR(UAV_Hunter_SP),
            QGVAR(Heli_Transport),
            QGVAR(Heli_Transport_Unarmed),
            QGVAR(Heli_Light),
            QGVAR(Heli_Light_Armed),
            QGVAR(Heli_Light_Hellcat),
            QGVAR(Offroad),
            QGVAR(Offroad_LMG),
            QGVAR(Offroad_AT),
            QGVAR(Plane_Tucano),
            QGVAR(Plane_Civil),
            QGVAR(Quadbike),
            QGVAR(UAV_Darter),
            QGVAR(UAV_Falcon),
            QGVAR(UAV_Pelican),
            QGVAR(UGV_Stomper),
            QGVAR(UGV_Stomper_RCWS),
            QGVAR(UGV_Pelter),
            QGVAR(UAV_Shadow),
            QGVAR(UAV_Aeroshark),
            QGVAR(USV_Magura),
            QGVAR(UAV_Raven),
            QGVAR(Pickup),
            QGVAR(Pickup_Comms),
            QGVAR(Pickup_Covered),
            QGVAR(Pickup_HMG),
            QGVAR(Pickup_MMG),
            QGVAR(Pickup_RCWS),
            QGVAR(Pickup_AA),
            QGVAR(Pickup_MRL),
            QGVAR(Pickup_Rocket),
            QGVAR(Pickup_Fuel),
            QGVAR(Pickup_Repair)
        };
        weapons[] = {
        };
        requiredVersion = REQUIRED_VERSION;
        // Every man inherits Atlas's own HIMF - since 2026-10-04 the copies
        // imported into ghost_uniform (tools/aegis_port --seeds), so Atlas is
        // no longer required. The tier magazines are still named as STRINGS,
        // so ghost_fa_tiers is not required.
        requiredAddons[] = {"ghost_main", "ghost_uniform", "ghost_vehicle", "ghost_weapons"};
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
