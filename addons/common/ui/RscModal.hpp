class RscText;
class RscTitle;
class RscButtonMenuOK;
class RscControlsGroupNoScrollbars;
class RscStructuredText;

#define MODAL_W                 28
#define MODAL_WIDE_W            38
#define MODAL_MAIN_BTN_W        6.25
#define MODAL_CONTENT_BORDER    0.2

// Modal - standard
class GVAR(Modal) {
    idd = -1;
    enableSimulation = 0;

    onLoad = QUOTE(call FUNC(onModalOpen));
    onUnload = QUOTE(call FUNC(onModalClose));

    class ControlsBackground {
        class TitleBackground: RscText {
            // COLOR_BCG's alpha is the player's own GUI background setting,
            // which is 0.8 by default and is what made the title bar look
            // washed out over the map. The RGB stays theirs; only the alpha
            // is forced, so a player who has recoloured their UI keeps it.
            colorBackground[] = {
                "(profileNamespace getVariable ['GUI_BCG_RGB_R',0.13])",
                "(profileNamespace getVariable ['GUI_BCG_RGB_G',0.54])",
                "(profileNamespace getVariable ['GUI_BCG_RGB_B',0.21])",
                1
            };

            x = QUOTE(POS_X(7));
            y = QUOTE(POS_Y(1));
            w = QUOTE(POS_W(MODAL_W));
            h = QUOTE(POS_H(1));
        };
        class MainBackground: RscText {
            // 0.95, not 0.7 (user, 2026-08-29: "this needs to be more solid").
            // The welcome screen is read over the map, and at 0.7 the terrain
            // showed through the body text enough to make it hard to read.
            // Not a flat 1.0 - a hairline of the map behind keeps it looking
            // like part of the briefing screen rather than a pasted-on panel.
            colorBackground[] = {0,0,0,0.95};

            x = QUOTE(POS_X(7));
            y = QUOTE(POS_Y(2.1));
            w = QUOTE(POS_W(MODAL_W));
            h = QUOTE(POS_H(20));
        };
    };

    class Controls {
        class TitleLeft: RscTitle {
            idc = IDC_MODAL_TITLE_L;
            style = ST_LEFT;

            text = "$STR_DISP_OPTIONS_GAME_OPTIONS";

            x = QUOTE(POS_X(7));
            y = QUOTE(POS_Y(1));
            w = QUOTE(POS_W(MODAL_W/2));
            h = QUOTE(POS_H(1));
        };
        class TitleRight: TitleLeft {
            idc = IDC_MODAL_TITLE_R;
            style = ST_RIGHT;
            // colorBackground[] = {0,0,0,0};

            text = "$STR_DISP_OPTIONS_GAME_OPTIONS";

            x = QUOTE(POS_X(7+MODAL_W/2));
            w = QUOTE(POS_W(MODAL_W/2));
        };

        // Content container
        class Content: RscControlsGroupNoScrollbars {
            idc = IDC_MODAL_GROUP_CONTENT;

            x = QUOTE(POS_X(7 + MODAL_CONTENT_BORDER));
            y = QUOTE(POS_Y(2.1 + MODAL_CONTENT_BORDER));
            w = QUOTE(POS_W(MODAL_W - MODAL_CONTENT_BORDER*2));
            h = QUOTE(POS_H(20 - MODAL_CONTENT_BORDER*2));

            class Controls {
                class Text: RscStructuredText {
                    idc = IDC_MODAL_CONTENT_TEXT;

                    // relative to ctrl group
                    x = 0;
                    y = 0;
                    // relative to display
                    w = QUOTE(POS_W(MODAL_W - MODAL_CONTENT_BORDER*2));
                    h = QUOTE(POS_H(20 - MODAL_CONTENT_BORDER*2));
                };
            };
        };

        // OK ONLY (user, 2026-08-29: "no need for a cancel button"). Nothing
        // this modal shows is a choice - it is a briefing you acknowledge - so
        // a Cancel beside OK only asked a question with no meaning. ESC still
        // closes it and still reports the cancel exit code to the onClose
        // callback, so any caller that distinguishes the two keeps working.
        class ButtonOK: RscButtonMenuOK {
            idc = IDC_OK;

            x = QUOTE(POS_X(7 + MODAL_W - MODAL_MAIN_BTN_W));
            y = QUOTE(POS_Y(22.2));
            w = QUOTE(POS_W(MODAL_MAIN_BTN_W));
            h = QUOTE(POS_H(1));
        };
    };
};

// Modal - wide
class GVAR(ModalWide): GVAR(Modal) {
    class ControlsBackground: ControlsBackground {
        class TitleBackground: TitleBackground {
            x = QUOTE(POS_X(1));
            w = QUOTE(POS_W(MODAL_WIDE_W));
        };
        class MainBackground: MainBackground {
            x = QUOTE(POS_X(1));
            w = QUOTE(POS_W(MODAL_WIDE_W));
        };
    };

    class Controls: Controls {
        class TitleLeft: TitleLeft {
            x = QUOTE(POS_X(1));
            w = QUOTE(POS_W(MODAL_WIDE_W/2));
        };
        class TitleRight: TitleRight {
            x = QUOTE(POS_X(1+MODAL_WIDE_W/2));
            w = QUOTE(POS_W(MODAL_WIDE_W/2));
        };

        class Content: Content {
            x = QUOTE(POS_X(1));
            w = QUOTE(POS_W(MODAL_WIDE_W - MODAL_CONTENT_BORDER*2));

            class Controls: Controls {
                class Text: Text {
                    // relative to display
                    w = QUOTE(POS_W(MODAL_WIDE_W - MODAL_CONTENT_BORDER*2));
                };
            };
        };

        class ButtonOK: ButtonOK {
            x = QUOTE(POS_X(1 + MODAL_WIDE_W - MODAL_MAIN_BTN_W));
        };
    };
};
