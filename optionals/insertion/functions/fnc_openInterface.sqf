#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_openInterface

Description:
    Opens the insertion planning interface.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
if (!(createDialog QGVAR(interface))) exitWith {
    TRACE_1("insertion interface failed to open",QGVAR(interface));
};

call FUNC(fillVehCombo);
call FUNC(fillGrpCombo);
call FUNC(startPosMark);
call FUNC(fillInsertionTypeCombo);


call FUNC(fillPlayersToAddList);
call FUNC(fillPlayersToGoList);
call FUNC(fillGearToAddList);
call FUNC(fillGearLoadedList);
call FUNC(updateVarList);



