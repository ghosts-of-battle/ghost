#include "script_component.hpp"
/*
 * Author: YonV
 * The child action under a cTab device entry: the toggle that swaps the device
 * between its dialog and its held-up display.
 *
 * THIS IS A LEAF. It must not hand itself back as its own children function.
 *
 * cTab writes this as a code block whose children slot references the block's
 * own local variable - which is nil by the time ACE calls it, because SQF has
 * no lexical capture. That reads like a bug and was "fixed" here by making it a
 * real function that can name itself. It is not a bug: the nil is what
 * TERMINATES the tree. Naming itself gave the node a children function that
 * builds another identical node, forever - ACE's collectActiveActionTree walks
 * that until the game runs out of memory and dies. Whole-game crash, and it
 * only surfaced once the config override made this fork reachable at all.
 *
 * A device has exactly two states, dialog and display, so one level is all
 * there ever was to build.
 *
 * Arguments: ACE children arguments
 * 0: Target <OBJECT>
 * 1: Player <OBJECT>
 * 2: Parameters - [type, display name, player, vehicle] <ARRAY>
 *
 * Return Value:
 * ACE child actions <ARRAY>
 *
 * Example:
 * _this call ghost_ctab_devices_fnc_aceSubActions
 */

params ["_target", "", "_params"];
_params params ["_type", "_dlg", "_player", "_vehicle"];

[
    [[
        "dsp",
        "Display/Hide",
        "",
        {
            params ["", "", "_params"];
            // PREP'd, not PREPMAIN'd - there is no cTab_fnc_toggleInterface
            _params call ctab_core_fnc_toggleInterface;
        },
        {true},
        {},
        [0, [_dlg, "_dlg", "_dsp"] call CBA_fnc_replace, _player, _vehicle]
    ] call ace_interact_menu_fnc_createAction, [], _target]
]
