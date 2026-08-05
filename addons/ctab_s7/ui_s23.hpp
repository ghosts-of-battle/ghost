// ---------------------------------------------------------------------------
// The S23 handhelds. Their OWN display class - not a patch of the S7's -
// because every device here is configured separately: the S23 case has a
// different glass to the S7 (x 163, y 659, 1609 x 729 of 2048 against the S7's
// 452, 713, 1134 x 624), so sharing the S7's dialog put every control in the
// wrong place. That was the "screwed up" S23.
//
// It inherits cTab_Android_dlg, so it starts with the map, the OSD, cTab's own
// groups and this addon's app pages and card menu, then adds the menu key the
// handhelds carry instead of a bezel key. FUNC(s23Layout) moves the inherited
// controls into its glass at open.
//
// Both colours share this one display - the case is a texture, not a layout,
// so black and tan differ only in the art FUNC(deviceSkin) hangs on the bezel.
// ---------------------------------------------------------------------------

class GVAR(s23_dlg): cTab_Android_dlg {
    idd = 177391;
    onLoad = QUOTE(_this call cTab_fnc_onIfOpen;);
    onUnload = QUOTE([] call cTab_fnc_onIfclose;);

    class controls {
        // Fires whenever an S23 opens.
        class GVAR(s23Holder): RscText {
            idc = -1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            colorBackground[] = {0, 0, 0, 0};
            onLoad = QUOTE(call FUNC(deviceOpen););
        };

        // The menu key on the glass - these cases have no spare bezel key.
        class GVAR(s23BtnMenu): cTab_RscButton {
            idc = 467395;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            text = "";
            colorBackground[] = {0, 0, 0, 0.55};
            colorBackgroundActive[] = {0.32, 0.34, 0.36, 0.85};
            colorFocused[] = {0, 0, 0, 0.55};
            colorShadow[] = {0, 0, 0, 0};
            colorBorder[] = {0, 0, 0, 0};
            borderSize = 0;
            offsetX = 0;
            offsetY = 0;
            offsetPressedX = 0;
            offsetPressedY = 0;
            tooltip = "Apps";
            action = QUOTE(['menu'] call FUNC(click););
        };
        class GVAR(s23BtnMenuGlyph): RscPicture {
            idc = 467396;
            text = QPATHTOF(data\icon_menu_ca.paa);
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };
    };
};
