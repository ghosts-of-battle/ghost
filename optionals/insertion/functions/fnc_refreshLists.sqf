#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_refreshLists

Description:
    Rebuilds every listbox in the interface.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
call FUNC(fillPlayersToAddList);
call FUNC(fillPlayersToGoList);
call FUNC(fillGearToAddList);
call FUNC(fillGearLoadedList);
call FUNC(refreshCargoRoomIntel);
