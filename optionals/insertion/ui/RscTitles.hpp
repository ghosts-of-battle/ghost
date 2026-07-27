class RscTitles {
    // Fullscreen cover for the submarine transfer, shown by FUNC(splashScreen).
    class GVAR(splash) {
        idd = SPLASH_IDD;
        movingEnable = 0;
        duration = 99999999;
        fadeIn = 0;
        fadeOut = 0;

        class controls {
            class Image: RscPicture {
                idc = 1200;
                text = QPATHTOF(data\subtransfer.paa);
                x = "safeZoneX";
                y = "safeZoneY";
                w = "safeZoneW";
                h = "safeZoneH";
            };
        };
    };
};
