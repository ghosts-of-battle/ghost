// ---------------------------------------------------------------------------
// Custom Eden attribute controls for the Ghost drone / EW modules:
//   ghost_DroneFactionChoice   - single-select faction dropdown, populated at
//                                panel-open from the factions that own drones.
//   ghost_DroneChoice_<var>     - faction-filtered multi-select drone picker,
//                                one subclass per stored logic variable.
//
// Same technique as ALiVE's ALiVE_FactionChoice / ALiVE_AAUnitChoiceMulti:
// a BI attribute-template base (Combo / a controlsGroup) whose listbox is
// filled dynamically by an attributeLoad SQF handler. NO ALiVE dependency -
// the handlers live in this addon (ghost_main) and read plain CfgVehicles /
// CfgFactionClasses, so the drone modules keep requiring only ghost_main.
//
// This file is #included INSIDE `class Cfg3DEN >> class Attributes` (see
// CfgEden.hpp) - HEMTT forbids re-opening `class Cfg3DEN` in a second file, so
// there is exactly one Cfg3DEN and this is a fragment of its Attributes body.
// The engine ctrl* classes it inherits from are forward-declared at TOP-LEVEL
// scope in CfgEden.hpp (declaring them inside Attributes shadows BI's global
// ctrl* classes and breaks BI attributes that chain through ctrlStatic - a
// hard-won ALiVE lesson).
// ---------------------------------------------------------------------------

class Combo;   // BI Combo attribute template (title + combo at IDC 100)

// ---- faction dropdown -------------------------------------------
class ghost_DroneFactionChoice: Combo {
    attributeLoad = "[_this, _value] call ghost_common_fnc_edenDroneFactionLoad";
    attributeSave = "call ghost_common_fnc_edenDroneFactionSave";
};

        // ---- filtered multi-select base (the drone-picker "window") -----
        class ghost_FilteredMultiSelect_Base: ctrlControlsGroupNoScrollbars {
            type  = 15;
            style = 0;
            idc   = -1;
            x = 0;
            y = 0;
            w = "130 * (pixelW * pixelGrid * 0.5)";
            h = "58 * (pixelH * pixelGrid * 0.5)";
            colorBackground[] = {0, 0, 0, 0};
            colorText[]       = {1, 1, 1, 1};
            text   = "";
            font   = "RobotoCondensed";
            sizeEx = "pixelH * pixelGrid * 2.2";

            class VScrollbar {};
            class HScrollbar {};

            class controls {
                class Title: ctrlStatic {
                    idc = 101; type = 0; style = 1;
                    x = 0; y = 0;
                    w = "48 * (pixelW * pixelGrid * 0.5)";
                    h = "5 * (pixelH * pixelGrid * 0.5)";
                    colorBackground[] = {0, 0, 0, 0};
                    colorText[] = {1, 1, 1, 0.9};
                    text = "Drones:";
                    font = "RobotoCondensed";
                    sizeEx = "pixelH * pixelGrid * 2.2";
                    tooltip = "Tick drones from the list. They fill this type slot at spawn. Multi-select: Ctrl+click toggles a row, Shift+click a range, plain click replaces the selection. Type button filters air/ground. Set the module Faction first, then re-open to filter the list to that faction's drones.";
                };
                class FilterLabel: ctrlStatic {
                    idc = 1200; type = 0; style = 0;
                    x = "48 * (pixelW * pixelGrid * 0.5)"; y = 0;
                    w = "65 * (pixelW * pixelGrid * 0.5)";
                    h = "4 * (pixelH * pixelGrid * 0.5)";
                    colorBackground[] = {0, 0, 0, 0.5};
                    colorText[] = {1, 0.62, 0, 1};
                    text = "Type: All";
                    font = "RobotoCondensed";
                    sizeEx = "pixelH * pixelGrid * 1.8";
                    tooltip = "Filter the list by category. Click Next > to cycle All / air / ground.";
                };
                class FilterNext: ctrlButton {
                    idc = 1210; type = 1; style = 2;
                    x = "115 * (pixelW * pixelGrid * 0.5)"; y = 0;
                    w = "15 * (pixelW * pixelGrid * 0.5)";
                    h = "4 * (pixelH * pixelGrid * 0.5)";
                    text = "Next >";
                    default = 0;
                    colorBackground[]         = {1, 0.62, 0, 0.6};
                    colorBackgroundDisabled[] = {0.4, 0.4, 0.4, 0.5};
                    colorBackgroundActive[]   = {1, 0.62, 0, 1};
                    colorFocused[]            = {1, 0.62, 0, 1};
                    colorBackgroundFocused[]  = {1, 0.62, 0, 1};
                    colorText[]               = {1, 1, 1, 1};
                    colorDisabled[]           = {1, 1, 1, 0.25};
                    colorBorder[]             = {0, 0, 0, 1};
                    borderSize = 0;
                    offsetX = 0; offsetY = 0; offsetPressedX = 0; offsetPressedY = 0;
                    colorShadow[] = {0, 0, 0, 0};
                    soundEnter[]  = {"", 0, 0};
                    soundPush[]   = {"", 0, 0};
                    soundClick[]  = {"", 0, 0};
                    soundEscape[] = {"", 0, 0};
                    font = "RobotoCondensed";
                    sizeEx = "pixelH * pixelGrid * 1.6";
                };
                class List: ctrlListBox {
                    idc = 100;
                    type = 5;            // CT_LISTBOX
                    style = 16 + 0x20;   // ST_FRAME + LB_MULTI
                    x = "4 * (pixelW * pixelGrid * 0.5)";
                    y = "10 * (pixelH * pixelGrid * 0.5)";
                    w = "126 * (pixelW * pixelGrid * 0.5)";
                    h = "42 * (pixelH * pixelGrid * 0.5)";
                    color[]                  = {1, 0.62, 0, 1};
                    colorActive[]            = {0, 0, 0, 0.5};
                    colorFocused[]           = {0, 0, 0, 0.5};
                    colorHover[]             = {0, 0, 0, 0.5};
                    colorText[]              = {1, 1, 1, 1};
                    colorBackground[]        = {0, 0, 0, 0.5};
                    colorSelect[]            = {0, 0, 0, 1};
                    colorSelect2[]           = {0, 0, 0, 1};
                    colorSelectBackground[]  = {1, 0.62, 0, 1};
                    colorSelectBackground2[] = {1, 0.62, 0, 1};
                    colorDisabled[]          = {1, 1, 1, 0.25};
                    shadow = 0;
                    colorShadow[] = {0, 0, 0, 0};
                    tooltip = "Multi-select: Ctrl+click toggles a row, Shift+click a range, plain click replaces the selection. Ticks from the hidden category are preserved across filter cycles.";
                    font = "RobotoCondensed";
                    sizeEx = "pixelH * pixelGrid * 2.0";
                    rowHeight = "pixelH * pixelGrid * 2.4";
                    period = 1.2;
                    soundSelect[] = {"", 0, 0};
                    maxHistoryDelay = 1.0;
                    class ListScrollBar {
                        color[]         = {1, 1, 1, 0.6};
                        colorActive[]   = {1, 1, 1, 1};
                        colorDisabled[] = {1, 1, 1, 0.3};
                        arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                        arrowFull  = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                        border     = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                        thumb      = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                    };
                };
                class OverrideLabel: ctrlStatic {
                    idc = 103; type = 0; style = 1;
                    x = 0; y = "53 * (pixelH * pixelGrid * 0.5)";
                    w = "48 * (pixelW * pixelGrid * 0.5)";
                    h = "5 * (pixelH * pixelGrid * 0.5)";
                    colorBackground[] = {0, 0, 0, 0};
                    colorText[] = {1, 1, 1, 0.7};
                    text = "Override:";
                    font = "RobotoCondensed";
                    sizeEx = "pixelH * pixelGrid * 2.2";
                    tooltip = "Comma-separated classnames for mod drones the list doesn't surface. Merged with the ticks above at save time.";
                };
                class Override: ctrlEdit {
                    idc = 102; type = 2; style = 0;
                    x = "48 * (pixelW * pixelGrid * 0.5)";
                    y = "53 * (pixelH * pixelGrid * 0.5)";
                    w = "82 * (pixelW * pixelGrid * 0.5)";
                    h = "5 * (pixelH * pixelGrid * 0.5)";
                    text = "";
                    colorBackground[] = {0, 0, 0, 0.5};
                    colorText[]       = {1, 1, 1, 1};
                    colorSelection[]  = {1, 0.62, 0, 0.6};
                    colorDisabled[]   = {1, 1, 1, 0.25};
                    font = "RobotoCondensed";
                    sizeEx = "pixelH * pixelGrid * 1.8";
                    autocomplete = "";
                    canModify = 1;
                };
            };
        };

        // ---- per-type drone pickers (one per stored logic variable) -----
        // Hand-written (not macro-generated): Arma's config preprocessor does
        // NOT concatenate adjacent string literals, so the varName/title have
        // to be baked into each attributeLoad/Save string directly.

        // alive_drones / ambient_drones / base_defense type slots:
        class ghost_DroneChoice_antiair_classes: ghost_FilteredMultiSelect_Base {
            attributeLoad = "[_this, 'antiair_classes', 'faction', 'Anti-Air Drones:', _value] call ghost_common_fnc_edenDroneChoiceLoad";
            attributeSave = "[_this, 'antiair_classes'] call ghost_common_fnc_edenDroneChoiceSave";
        };
        class ghost_DroneChoice_antiarmor_classes: ghost_FilteredMultiSelect_Base {
            attributeLoad = "[_this, 'antiarmor_classes', 'faction', 'Anti-Armor Drones:', _value] call ghost_common_fnc_edenDroneChoiceLoad";
            attributeSave = "[_this, 'antiarmor_classes'] call ghost_common_fnc_edenDroneChoiceSave";
        };
        class ghost_DroneChoice_antipersonnel_classes: ghost_FilteredMultiSelect_Base {
            attributeLoad = "[_this, 'antipersonnel_classes', 'faction', 'Anti-Personnel Drones:', _value] call ghost_common_fnc_edenDroneChoiceLoad";
            attributeSave = "[_this, 'antipersonnel_classes'] call ghost_common_fnc_edenDroneChoiceSave";
        };
        class ghost_DroneChoice_loiterfixed_classes: ghost_FilteredMultiSelect_Base {
            attributeLoad = "[_this, 'loiterfixed_classes', 'faction', 'Loiter Fixed-Wing Drones:', _value] call ghost_common_fnc_edenDroneChoiceLoad";
            attributeSave = "[_this, 'loiterfixed_classes'] call ghost_common_fnc_edenDroneChoiceSave";
        };
        class ghost_DroneChoice_loiterrotor_classes: ghost_FilteredMultiSelect_Base {
            attributeLoad = "[_this, 'loiterrotor_classes', 'faction', 'Loiter Rotor Drones:', _value] call ghost_common_fnc_edenDroneChoiceLoad";
            attributeSave = "[_this, 'loiterrotor_classes'] call ghost_common_fnc_edenDroneChoiceSave";
        };
        class ghost_DroneChoice_recon_classes: ghost_FilteredMultiSelect_Base {
            attributeLoad = "[_this, 'recon_classes', 'faction', 'Recon Drones:', _value] call ghost_common_fnc_edenDroneChoiceLoad";
            attributeSave = "[_this, 'recon_classes'] call ghost_common_fnc_edenDroneChoiceSave";
        };
        class ghost_DroneChoice_ground_classes: ghost_FilteredMultiSelect_Base {
            attributeLoad = "[_this, 'ground_classes', 'faction', 'Ground (UGV) Drones:', _value] call ghost_common_fnc_edenDroneChoiceLoad";
            attributeSave = "[_this, 'ground_classes'] call ghost_common_fnc_edenDroneChoiceSave";
        };

        // electronic_war_zones response slots:
        class ghost_DroneChoice_response_personnel_classes: ghost_FilteredMultiSelect_Base {
            attributeLoad = "[_this, 'response_personnel_classes', 'faction', 'Anti-Personnel Response Drones:', _value] call ghost_common_fnc_edenDroneChoiceLoad";
            attributeSave = "[_this, 'response_personnel_classes'] call ghost_common_fnc_edenDroneChoiceSave";
        };
        class ghost_DroneChoice_response_vehicle_classes: ghost_FilteredMultiSelect_Base {
            attributeLoad = "[_this, 'response_vehicle_classes', 'faction', 'Anti-Vehicle Response Drones:', _value] call ghost_common_fnc_edenDroneChoiceLoad";
            attributeSave = "[_this, 'response_vehicle_classes'] call ghost_common_fnc_edenDroneChoiceSave";
        };
// ---- end of Cfg3DEN >> Attributes fragment ----
