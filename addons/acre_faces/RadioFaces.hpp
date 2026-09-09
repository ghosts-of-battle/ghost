// THE CHANNEL CARD ON THE RADIO ITSELF (user, 2026-09-01). ACRE draws each
// radio as a stack of pictures over a body plate; these two classes replace the
// body plate and nothing else, so every knob, key, display and animation is
// still ACRE's own and keeps working. Swap the two paths back and the radios
// are stock again.
//
// The art is generated - tools/gen_radio_faces.py, sources in paa\radios. The
// channel lists it paints are TABLES AT THE TOP OF THAT SCRIPT, which is where
// anyone changing the net plan should go. Nothing checks that the picture and
// config\config_radio.hpp agree, because a painted card cannot read a config:
// change the plan, re-run the generator, ship both.
//
// WHY MERGE-OVERRIDES AND NOT COPIES OF ACRE'S DIALOGS. Naming a class that
// already exists and setting one property inside it leaves the rest of ACRE's
// definition alone, so an ACRE update that moves a knob or adds a control needs
// nothing from us. It does mean this PBO must load AFTER ACRE's - which is what
// the requiredAddons in config.cpp are for, and why they are hard rather than
// soft. skipWhenMissingDependencies drops the whole PBO on an ACRE-less server
// rather than breaking the load order.

// PRC-148 - the team radio. Fourteen channels, one per element, written on the
// battery pack in paint pen the way a man who has to remember them would.
class PRC148_RadioDialog {
    class controls {
        class FrontPanel {
            text = QPATHTOF(data\prc148_ui_backplate.paa);
        };
    };
};

// PRC-152 - the net radio. Sixteen named nets on a card taped to the pack,
// frequencies down the right, because the man reading it is about to turn to
// one of them.
class Prc152_RadioDialog {
    class Prc152Background {
        text = QPATHTOF(data\prc152c_ui.paa);
    };
};
