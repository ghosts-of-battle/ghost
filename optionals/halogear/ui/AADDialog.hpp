class RscPicture;
class RscEdit;
class RscButtonMenu;

// Cypres-style AAD altitude panel. Opened by FUNC(openAADMenu); the typed value
// is read back in FUNC(onAADMenuClosed) when the dialog unloads.
class GVAR(aadMenu) {
    idd = AAD_DIALOG_IDD;
    movingEnable = 0;
    onLoad = "";
    onUnload = QUOTE([_this] call FUNC(onAADMenuClosed));

    class controls {
        class Background: RscPicture {
            idc = 1200;
            text = QPATHTOF(data\cypres2AAS.paa);
            x = "0.7475 * safezoneW + safezoneX";
            y = "0.709 * safezoneH + safezoneY";
            w = "0.257813 * safezoneW";
            h = "0.099 * safezoneH";
        };

        class Altitude: RscEdit {
            idc = AAD_ALT_IDC;
            text = "";
            x = "0.778437 * safezoneW + safezoneX";
            y = "0.742 * safezoneH + safezoneY";
            w = "0.0567187 * safezoneW";
            h = "0.033 * safezoneH";
        };

        class CloseButton: RscButtonMenu {
            idc = 1600;
            text = "";
            action = "closeDialog 0";
            x = "0.891875 * safezoneW + safezoneX";
            y = "0.731 * safezoneH + safezoneY";
            w = "0.04125 * safezoneW";
            h = "0.066 * safezoneH";
        };
    };
};
