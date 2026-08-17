// THE HUD LAYER, AND THE TWO BOXES THE LAYOUT EDITOR MOVES.
//
// POSITION IS THE GAME'S JOB, NOT OURS. Ghost had its own move-and-save for
// overlays - ghost_common_fnc_hudPos and friends - and it never worked: it
// meant learning a ghost-specific way to move a ghost-specific widget, and it
// knew nothing about the panels the player had already arranged. Options > Game
// > Layout is where every other overlay in the game is placed, so it is where
// these are placed.
//
// THE REGISTRY IS CfgUIGrids, AND THAT IS THE WHOLE FIX. Two earlier attempts
// wrote grids into `CfgUIColors >> IGUI >> Grids` - which is where the BASE GAME
// keeps the positions of its own furniture, and reading it is what made that
// look right. It is not what the Layout editor enumerates. A mod's grid goes in
// `CfgUIGrids >> IGUI`, in two halves:
//
//   Presets > Arma3 > Variables    the DEFAULT geometry, as an array
//   Variables > <name>             the entry the editor LISTS, with its label,
//                                  what may be moved, and whether it resizes
//
// ACE's Micro DAGR is exactly this and is placed the same way; that is the
// working example this was rebuilt from.
//
// THE PROFILE VARIABLE NAMES FOLLOW THE CLASS NAME EXACTLY, case included:
// class grid_ghost_hudLeft gives IGUI_grid_ghost_hudLeft_X / _Y / _W / _H. They
// are NOT the IGUI_GRID_<SHOUTED>_X form the base game's own grids use - that
// was the other half of why nothing moved.
//
// saveToProfile[] = {0,1,2,3} is x, y, w and h: these may be moved AND
// resized, because a squad list wants to be tall and a jamming bar wants to be
// short, and only the player knows which they are looking at.
//
// TEN CELLS BY TWENTY, which is the vanilla Custom Info panel's ACTUAL size -
// measured off DefaultVehicleSystemsDisplayManagerLeft in ui_f: 10 cells wide,
// y at bottom minus 21 with a one-cell margin, so the box itself is 20 tall.
// This said "ten by ten ... the panel's own size" for six rounds of "resize it
// to match the custom info", and ten by ten is a squat letterbox half the
// vanilla panel's height - the exact shape in every red-box screenshot. The
// left slot now takes the vanilla panel's own width and height and parks one
// cell above the vanilla box, which sits at bottom-left holding the GPS.
//
// The defaults below are macros ONLY where they are array elements. The control
// positions underneath are written out in full: a config value cannot be built
// by putting two strings next to each other, which is a thing this mod has been
// caught by before.

class RscControlsGroupNoScrollbars;

#define HUD_DEF_LEFT_X "(safeZoneX + 0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40))"
#define HUD_DEF_LEFT_Y "(safeZoneY + safeZoneH - 42 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25))"
#define HUD_DEF_RIGHT_X "((safeZoneX + safeZoneW) - 11 * (((safeZoneW / safeZoneH) min 1.2) / 40))"
#define HUD_DEF_RIGHT_Y "(safeZoneY + 6 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25))"
#define HUD_DEF_W "(10 * (((safeZoneW / safeZoneH) min 1.2) / 40))"
#define HUD_DEF_H "(20 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25))"
#define HUD_CELL_W "(((safeZoneW / safeZoneH) min 1.2) / 40)"
#define HUD_CELL_H "((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)"

class CfgUIGrids {
    class IGUI {
        class Presets {
            class Arma3 {
                class Variables {
                    grid_ghost_hudLeft[] = {
                        {HUD_DEF_LEFT_X, HUD_DEF_LEFT_Y, HUD_DEF_W, HUD_DEF_H},
                        HUD_CELL_W,
                        HUD_CELL_H
                    };
                    grid_ghost_hudRight[] = {
                        {HUD_DEF_RIGHT_X, HUD_DEF_RIGHT_Y, HUD_DEF_W, HUD_DEF_H},
                        HUD_CELL_W,
                        HUD_CELL_H
                    };
                };
            };
        };

        class Variables {
            class grid_ghost_hudLeft {
                displayName = "Ghost HUD - left";
                description = "The left readout slot. Cycle what is in it with Alt + [.";
                // NOT DECORATION. Every working grid in ACE and ACRE carries a
                // preview, and the editor lists the entry beside it - an entry
                // without one is an entry that does not appear, which is why
                // the two slots showed through the Layout screen without ever
                // being on it.
                preview = QPATHTOF(ui\igui_preview.paa);
                saveToProfile[] = {0, 1, 2, 3};
                canResize = 1;
            };
            class grid_ghost_hudRight {
                displayName = "Ghost HUD - right";
                description = "The right readout slot. Cycle what is in it with Alt + ].";
                preview = QPATHTOF(ui\igui_preview.paa);
                saveToProfile[] = {0, 1, 2, 3};
                canResize = 1;
            };
        };
    };
};

// NOT AN RscTitles LAYER. THIS IS THE WHOLE MAIN-MENU FIX.
//
// The HUD used to be a title layer raised with cutRsc and a duration of 1e11.
// A named title layer is NOT cleared by leaving a mission, so the left slot -
// showing the SCANNER readout - stayed on screen over the Arma 3 main menu,
// where it could not be clicked and would not go away. It was chased for eight
// builds with menu-side teardowns, and none of them could work: on the menu
// both the stored handle and findDisplay come back null, the main menu display
// is REUSED rather than created so it raises no event to hook, and a title
// layer's duration does not count down outside a mission so it can never lapse.
//
// So the layer is gone. Both slots are now plain controls created on the
// MISSION DISPLAY (findDisplay 46) - see FUNC(open). That display is created
// with the mission and destroyed with it by the engine, which means the HUD
// cannot reach the main menu whatever route the player takes out - abort,
// mission end, kick, or dropped server. It is a guarantee rather than a hook
// that has to fire.
//
// They are root-level classes because that is where ctrlCreate looks them up.
//
// NOTHING IS DECLARED INSIDE THEM. Both slots are filled at runtime with the
// tacpad's own drawFill/drawFrame/drawText, so the HUD and the map screens
// cannot drift apart in type, rule weight or colour - there is one design in
// this mod and one implementation of it.
//
// The four numbers come straight off the grid, so a slot moved or resized in
// the Layout editor IS the box the readout is drawn in - FUNC(draw) measures
// the control rather than assuming a size.
class GVAR(slotLeft): RscControlsGroupNoScrollbars {
    idc = IDC_HUD_LEFT;
    x = "(profilenamespace getVariable ['IGUI_grid_ghost_hudLeft_X', (safeZoneX + 0.5 * (((safeZoneW / safeZoneH) min 1.2) / 40))])";
    y = "(profilenamespace getVariable ['IGUI_grid_ghost_hudLeft_Y', (safeZoneY + safeZoneH - 42 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25))])";
    w = "(profilenamespace getVariable ['IGUI_grid_ghost_hudLeft_W', (10 * (((safeZoneW / safeZoneH) min 1.2) / 40))])";
    h = "(profilenamespace getVariable ['IGUI_grid_ghost_hudLeft_H', (20 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25))])";
};

class GVAR(slotRight): RscControlsGroupNoScrollbars {
    idc = IDC_HUD_RIGHT;
    x = "(profilenamespace getVariable ['IGUI_grid_ghost_hudRight_X', ((safeZoneX + safeZoneW) - 11 * (((safeZoneW / safeZoneH) min 1.2) / 40))])";
    y = "(profilenamespace getVariable ['IGUI_grid_ghost_hudRight_Y', (safeZoneY + 6 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25))])";
    w = "(profilenamespace getVariable ['IGUI_grid_ghost_hudRight_W', (10 * (((safeZoneW / safeZoneH) min 1.2) / 40))])";
    h = "(profilenamespace getVariable ['IGUI_grid_ghost_hudRight_H', (20 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25))])";
};
