// Hacking tablet. A real dialog, not a HUD layer: you are heads-down in a screen
// while it is open, which is the cost of hacking - and closing it pauses the
// hack rather than cancelling it.
//
// The bezel is MRHMilsimTools' tablet art (ADPL-SA, see data/README.md);
// everything inside the screen is ghost-drawn in the sign palette.

class RscText;
class RscPicture;
class RscButton;
class RscProgress;
class RscStructuredText;

// A device card: background, name, one line of detail, and a transparent button
// covering the lot so the whole card is clickable.
#define CARD(N) \
    class DOUBLES(CardBg,N): RscText { \
        idc = IDC_CARD_BG(N); \
        x = 0; y = 0; w = 0; h = 0; \
        colorBackground[] = {1, 1, 1, 0.06}; \
    }; \
    class DOUBLES(CardName,N): RscStructuredText { \
        idc = IDC_CARD_NAME(N); \
        x = 0; y = 0; w = 0; h = 0; \
        size = "0.8 * (pixelH * pixelGrid)"; \
        class Attributes { font = "RobotoCondensed"; color = "#EEE8DC"; align = "left"; }; \
    }; \
    class DOUBLES(CardInfo,N): RscStructuredText { \
        idc = IDC_CARD_INFO(N); \
        x = 0; y = 0; w = 0; h = 0; \
        size = "0.7 * (pixelH * pixelGrid)"; \
        class Attributes { font = "RobotoCondensed"; color = "#9CAABA"; align = "left"; }; \
    }; \
    class DOUBLES(CardBtn,N): RscButton { \
        idc = IDC_CARD_BTN(N); \
        x = 0; y = 0; w = 0; h = 0; \
        text = ""; \
        colorBackground[] = {0, 0, 0, 0}; \
        colorBackgroundActive[] = {0.871, 0.361, 0.188, 0.25}; \
        colorFocused[] = {0.871, 0.361, 0.188, 0.25}; \
        colorBackgroundDisabled[] = {0, 0, 0, 0}; \
        borderSize = 0; \
        soundEnter[] = {"", 0, 0}; soundPush[] = {"", 0, 0}; \
        soundClick[] = {"", 0, 0}; soundEscape[] = {"", 0, 0}; \
    }

#define INTELBTN(N) \
    class DOUBLES(IntelBtn,N): RscButton { \
        idc = IDC_INTEL_BTN(N); \
        x = 0; y = 0; w = 0; h = 0; \
        text = ""; \
        sizeEx = "0.75 * (pixelH * pixelGrid)"; \
        colorBackground[] = {1, 1, 1, 0.06}; \
        colorBackgroundActive[] = {0.914, 0.651, 0.235, 0.35}; \
        colorFocused[] = {0.914, 0.651, 0.235, 0.35}; \
        colorText[] = {0.933, 0.910, 0.863, 1}; \
        borderSize = 0; \
        soundEnter[] = {"", 0, 0}; soundPush[] = {"", 0, 0}; \
        soundClick[] = {"", 0, 0}; soundEscape[] = {"", 0, 0}; \
    }

class GVAR(tablet) {
    idd = IDD_TABLET;
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(tablet),_this select 0)]);
    onUnload = QUOTE(call FUNC(tabletClosed));

    class controls {
        class Bezel: RscPicture {
            idc = IDC_TAB_BEZEL;
            text = QPATHTOF(data\tablet.paa);
            x = 0; y = 0; w = 0; h = 0;
        };
        class Screen: RscText {
            idc = IDC_TAB_SCREEN;
            x = 0; y = 0; w = 0; h = 0;
            colorBackground[] = {0.04, 0.05, 0.06, 1};
        };
        class Title: RscStructuredText {
            idc = IDC_TAB_TITLE;
            x = 0; y = 0; w = 0; h = 0;
            size = "0.95 * (pixelH * pixelGrid)";
            class Attributes { font = "RobotoCondensed"; color = "#DE5C30"; align = "left"; };
        };
        class DevHead: RscStructuredText {
            idc = IDC_TAB_DEVHEAD;
            x = 0; y = 0; w = 0; h = 0;
            size = "0.75 * (pixelH * pixelGrid)";
            class Attributes { font = "RobotoCondensed"; color = "#9CAABA"; align = "left"; };
        };
        class IntelHead: RscStructuredText {
            idc = IDC_TAB_INTELHEAD;
            x = 0; y = 0; w = 0; h = 0;
            size = "0.75 * (pixelH * pixelGrid)";
            class Attributes { font = "RobotoCondensed"; color = "#9CAABA"; align = "left"; };
        };
        CARD(0); CARD(1); CARD(2); CARD(3); CARD(4); CARD(5);
        INTELBTN(0); INTELBTN(1); INTELBTN(2); INTELBTN(3); INTELBTN(4); INTELBTN(5); INTELBTN(6); INTELBTN(7); INTELBTN(8);
        class Status: RscStructuredText {
            idc = IDC_TAB_STATUS;
            x = 0; y = 0; w = 0; h = 0;
            size = "0.8 * (pixelH * pixelGrid)";
            class Attributes { font = "RobotoCondensed"; color = "#E9A63C"; align = "left"; };
        };
        class Bar: RscProgress {
            idc = IDC_TAB_BAR;
            x = 0; y = 0; w = 0; h = 0;
            colorFrame[] = {0.61, 0.67, 0.73, 0.5};
            colorBar[] = {0.914, 0.651, 0.235, 1};
        };
        class Pct: RscText {
            idc = IDC_TAB_PCT;
            x = 0; y = 0; w = 0; h = 0;
            colorBackground[] = {0, 0, 0, 0};
            colorText[] = {0.933, 0.910, 0.863, 1};
            sizeEx = "0.8 * (pixelH * pixelGrid)";
            style = 1;
        };
        class ActionBtn: RscButton {
            idc = IDC_TAB_ACTION;
            x = 0; y = 0; w = 0; h = 0;
            text = "START";
            sizeEx = "0.8 * (pixelH * pixelGrid)";
            colorBackground[] = {0.871, 0.361, 0.188, 0.8};
            colorBackgroundActive[] = {0.871, 0.361, 0.188, 1};
            colorFocused[] = {0.871, 0.361, 0.188, 1};
            colorText[] = {1, 1, 1, 1};
            borderSize = 0;
            soundEnter[] = {"", 0, 0}; soundPush[] = {"", 0, 0};
            soundClick[] = {"", 0, 0}; soundEscape[] = {"", 0, 0};
        };
        class CloseBtn: RscButton {
            idc = IDC_TAB_CLOSE;
            x = 0; y = 0; w = 0; h = 0;
            text = "CLOSE";
            sizeEx = "0.8 * (pixelH * pixelGrid)";
            colorBackground[] = {1, 1, 1, 0.1};
            colorBackgroundActive[] = {1, 1, 1, 0.2};
            colorFocused[] = {1, 1, 1, 0.2};
            colorText[] = {0.61, 0.67, 0.73, 1};
            borderSize = 0;
            soundEnter[] = {"", 0, 0}; soundPush[] = {"", 0, 0};
            soundClick[] = {"", 0, 0}; soundEscape[] = {"", 0, 0};
        };
    };
};

#include "scanner.hpp"
