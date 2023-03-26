class CfgVehicles {
    class VirtualMan_F;

    // add spectate group holder
    class GVAR(holder): VirtualMan_F {
        author = "GHOST";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        icon = "iconManDead";

        weapons[] = {}; // empty weapons array

        delete ACE_Actions;
        delete ACE_SelfActions;
    };

    // add spectator
    class GVAR(spectator): GVAR(holder) {
        author = "GHOST";
    };

    // add playable spectator
    class GVAR(playableSpectator): GVAR(spectator) {
        author = "GHOST";
        displayName = "GHOST Spectator";
        displayNameShort = "Spectator";
        icon = "iconGhostSpectate";
        scope = 2;
    };
};
