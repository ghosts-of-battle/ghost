#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_tabletInRange

Description:
    Is the selected device still close enough to work on? One test for all three
    kinds - each carries its own range in the session, so a tower and a soldier
    are checked against their own numbers.

Parameters:
    _device  : OBJECT  - the target.
    _session : HASHMAP - the tablet session.

Returns:
    BOOL

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_device", "_session"];

if (isNull _device || {!alive _device}) exitWith { false };
(player distance _device) <= (_session get "range")
