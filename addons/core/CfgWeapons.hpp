class CfgWeapons {
    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[] += {"ghost_ghostMuzzle"};

        class ThrowMuzzle;
        class ghost_ghostMuzzle: ThrowMuzzle {
            magazines[] = {"ghost_ghost"};
        };
    };
};
