#include "script_component.hpp"
/*
 * Author: 3Mydlo3
 * Returns variable name of channel name for given side and channel number.
 *
 * Arguments:
 * 0: Side <SIDE>
 * 1: Number <NUMBER>
 *
 * Return Value:
 * <STRING> Eg. ghost_acre_BLUFORChannelName1
 *
 * Example:
 * [WEST, 1] call ghost_acre_fnc_getSideChannelNumberVariableName
 *
 * Public: No
 */

params ["_side", "_channelNumber"];

format ["%1_%2ChannelName%3%4", QUOTE(ADDON), _side, "Command", _channelNumber]
