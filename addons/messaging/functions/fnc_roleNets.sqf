#include "script_component.hpp"
/*
 * Author: Ghost
 * Which nets a man's ROLE lets him onto, read from the mission's own role
 * config. The mission is where roles live, so the mission is where their
 * access lives too - a mod-side setting would be a second list to keep in
 * step with the first.
 *
 * The shape is the one the role configs already use for traits: a name and
 * a flag.
 *
 *   class jfoNomad {
 *       nets[] = {
 *           {"HQ", "true"},
 *           {"AIR", "true"},
 *           {"FIRES", "true"}
 *       };
 *   };
 *
 * NO CONFIGURED VALUE, NO ACCESS - the user's rule. A net absent from the
 * list is not his, and a role that lists none gets none.
 *
 * THE FEATURE IS OFF UNTIL SOMEBODY USES IT. If no role in the mission
 * declares nets[] at all, the gate does not exist and every net reads as it
 * always did - otherwise adding this addon to a mission that never asked
 * for role gating would silently take every net away from everybody.
 *
 * The role itself is the mission's own record: setupPlayer writes the
 * chosen role class to YMF_role on the man.
 *
 * Arguments:
 * 0: The man <OBJECT>
 *
 * Return Value:
 * 0: The gate is in force <BOOL> - false means "no gating in this mission"
 * 1: Net names he may read <ARRAY>
 *
 * Public: Yes
 */

params [["_unit", objNull, [objNull]]];

// Is anybody using this? Answered once - a config walk per message would be
// a config walk per message.
if (isNil QGVAR(roleNetsGated)) then {
    private _gated = false;
    {
        if (isArray (_x >> "nets")) exitWith {_gated = true};
    } forEach ("true" configClasses (missionConfigFile >> "Dynamic_Roles"));
    GVAR(roleNetsGated) = _gated;
    // Hoisted: a comma inside a macro argument reads as an argument separator.
    private _said = ["off - no role declares nets", "ON - roles without nets get none"] select _gated;
    INFO_1("role net gating is %1",_said);
};

if (!GVAR(roleNetsGated)) exitWith {[false, []]};
if (isNull _unit) exitWith {[true, []]};

private _role = _unit getVariable ["YMF_role", ""];
if (_role isEqualTo "") exitWith {[true, []]};

private _cfg = missionConfigFile >> "Dynamic_Roles" >> _role >> "nets";
if (!isArray _cfg) exitWith {[true, []]};

private _out = [];
{
    _x params [["_name", ""], ["_flag", "true"]];
    if (!(_name isEqualType "") || {_name isEqualTo ""}) then {continue};

    // The flag is a string in the role configs ("true"), because that is how
    // traits and customVariables are written there; a real boolean is taken
    // too rather than being quietly ignored.
    private _on = if (_flag isEqualType "") then {
        (toLower trim _flag) in ["true", "1", "yes"]
    } else {
        _flag isEqualTo true || {_flag isEqualTo 1}
    };

    if (_on) then {_out pushBackUnique _name};
} forEach (getArray _cfg);

[true, _out]
