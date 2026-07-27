class RscPicture;

class RscTitles {
    // Fullscreen scope-mask overlay. Shown with cutRsc on layer FS_IDD and torn
    // down with cutText, so it never steals input from the player.
    class GVAR(display) {
        idd = FS_IDD;
        movingEnable = 0;
        duration = 99999999;
        onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(display),_this select 0)]);
        onUnload = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(display),displayNull)]);

        class controls {
            class Mask: RscPicture {
                idc = 1200;
                text = QPATHTOF(data\FiberScopeMask.paa);
                x = "-0.00531249 * safezoneW + safezoneX";
                y = "-0.00399999 * safezoneH + safezoneY";
                w = "1.01063 * safezoneW";
                h = "1.008 * safezoneH";
            };
        };
    };
};
