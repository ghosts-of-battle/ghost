// Jamming meter. Same idiom as the hack strip: RscTitles + cutRsc, drawn from
// primitives, positioned by the shared ghost HUD helper.
//
// Ghost used to jam silently, which reads as a TFAR/ACRE bug rather than an
// enemy capability. This is the missing feedback for the whole EW layer.

class RscText;
class RscProgress;

class RscTitles {
    class GVAR(jamHud) {
        idd = -1;
        movingEnable = 0;
        fadeIn = 0;
        fadeOut = 0;
        duration = "1e+011";
        onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(jamHud),_this select 0)]);

        class controls {
            class Panel: RscText {
                idc = IDC_JAM_PANEL;
                x = "safeZoneX"; y = "safeZoneY"; w = 0; h = 0;
                colorBackground[] = {0, 0, 0, 0.55};
            };
            class Label: RscText {
                idc = IDC_JAM_LABEL;
                x = "safeZoneX"; y = "safeZoneY"; w = 0; h = 0;
                colorBackground[] = {0, 0, 0, 0};
                colorText[] = {0.871, 0.361, 0.188, 1};
                sizeEx = "0.75 * (pixelH * pixelGrid)";
                text = "SIGNAL JAMMED";
            };
            class Bar: RscProgress {
                idc = IDC_JAM_BAR;
                x = "safeZoneX"; y = "safeZoneY"; w = 0; h = 0;
                colorFrame[] = {0.61, 0.67, 0.73, 0.5};
                colorBar[] = {0.871, 0.361, 0.188, 1};
            };
        };
    };
};
