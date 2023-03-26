class CfgVehicles {
    class B_supplyCrate_F;
    class GVAR(supply): B_supplyCrate_F {
        scope = 1;
        ace_cargo_size = 2;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {};
        class TransportBackpacks {};
    };
    class GVAR(supply_westSquad): GVAR(supply) {
        author = "GHOST";
        displayName = "[GHOST] Supply: West Squad";
        scope = 2;
        GVAR(faction) = "ghost_w";
        GVAR(type) = "squad";
    };
    class GVAR(supply_westPlatoon): GVAR(supply) {
        author = "GHOST";
        displayName = "[GHOST] Supply: West Platoon";
        scope = 2;
        GVAR(faction) = "ghost_w";
        GVAR(type) = "platoon";
    };
    class GVAR(supply_eastSquad): GVAR(supply) {
        author = "GHOST";
        displayName = "[GHOST] Supply: East Squad";
        scope = 2;
        GVAR(faction) = "ghost_e";
        GVAR(type) = "squad";
    };
    class GVAR(supply_eastPlatoon): GVAR(supply) {
        author = "GHOST";
        displayName = "[GHOST] Supply: East Platoon";
        scope = 2;
        GVAR(faction) = "ghost_e";
        GVAR(type) = "platoon";
    };
    class GVAR(supply_indSquad): GVAR(supply) {
        author = "GHOST";
        displayName = "[GHOST] Supply: Ind Squad";
        scope = 2;
        GVAR(faction) = "ghost_i";
        GVAR(type) = "squad";
    };
    class GVAR(supply_indPlatoon): GVAR(supply) {
        author = "GHOST";
        displayName = "[GHOST] Supply: Ind Platoon";
        scope = 2;
        GVAR(faction) = "ghost_i";
        GVAR(type) = "platoon";
    };
};
