// The hand-held scanner screen. An RscTitles layer rather than a dialog, on
// purpose: this is a device you hold while you walk, so the readings have to
// keep updating while you move and shoot. Closing it is putting it away.
//
// The handset is MRHMilsimTools' art (ADPL-SA, see data/README.md). Everything
// on the screen is drawn as a monochrome terminal - green readings, red when
// something wants your attention - in EtelkaMonospacePro, the same face ACE's
// MicroDAGR uses, so the two devices read like they came out of the same crate.
//
// No control here carries a position: FUNC(scannerLayout) sets all of them from
// the screen rectangle, so the whole device scales as one and the text can never
// drift off the glass.

#define SCN_GREEN {0, 0.67, 0.22, 1}

#define SCN_LINE(NAME,IDCV,STYLE) \
    class NAME: RscText { \
        idc = IDCV; \
        style = STYLE; \
        x = 0; y = 0; w = 0; h = 0; \
        font = "EtelkaMonospacePro"; \
        colorBackground[] = {0, 0, 0, 0}; \
        colorText[] = SCN_GREEN; \
        sizeEx = "0.9 * (pixelH * pixelGrid)"; \
    }

// Row glyphs. The art is white on transparent, so colorText is the whole colour
// of the icon - which means an icon takes the state colour of its row for free
// and the screen never has two things saying the same thing in two colours.
#define SCN_ICON(NAME,IDCV,FILE) \
    class NAME: RscPicture { \
        idc = IDCV; \
        x = 0; y = 0; w = 0; h = 0; \
        text = QPATHTOF(data\icons\FILE.paa); \
        colorText[] = SCN_GREEN; \
    }

class RscTitles {
    class GVAR(scanner) {
        idd = IDD_SCANNER;
        movingEnable = 0;
        fadeIn = 0;
        fadeOut = 0;
        duration = "1e+011";
        onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(scanner),_this select 0)]);

        class controls {
            // Order is paint order: handset first, then the text straight onto
            // it. There is no panel behind the text - the art's own glass is
            // already black, and an opaque rectangle sized to it can only ever
            // be slightly wrong, which shows up as a hard edge clipping over the
            // moulding. Every text control below is transparent too.
            class Bezel: RscPicture {
                idc = IDC_SCN_BEZEL;
                text = QPATHTOF(data\phone.paa);
                x = 0; y = 0; w = 0; h = 0;
            };

            SCN_LINE(Title,IDC_SCN_TITLE,2);

            // Three readings. Glyph, then label hard left, then value hard
            // right, so the eye runs down one column for "what" and another for
            // "how bad".
            SCN_ICON(DroneI,IDC_SCN_ICO_DRONE,signal);
            SCN_LINE(DroneL,IDC_SCN_DRONE_L,0);
            SCN_LINE(DroneV,IDC_SCN_DRONE_V,1);
            SCN_ICON(JamI,IDC_SCN_ICO_JAM,jam);
            SCN_LINE(JamL,IDC_SCN_JAM_L,0);
            SCN_LINE(JamV,IDC_SCN_JAM_V,1);
            SCN_ICON(MeshI,IDC_SCN_ICO_MESH,mesh);
            SCN_LINE(MeshL,IDC_SCN_MESH_L,0);
            SCN_LINE(MeshV,IDC_SCN_MESH_V,1);

            SCN_LINE(NetHead,IDC_SCN_NETHEAD,2);
            SCN_ICON(NetI,IDC_SCN_ICO_NET,antenna);
            SCN_LINE(NetL,IDC_SCN_NET_L,0);
            SCN_LINE(NetV,IDC_SCN_NET_V,1);

            SCN_LINE(Alarm,IDC_SCN_ALARM,2);
            SCN_LINE(Timer,IDC_SCN_TIMER,2);
            SCN_LINE(Status,IDC_SCN_STATUS,2);
        };
    };
};
