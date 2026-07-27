#include "script_component.hpp"

// Player-facing "Establish Patrol Base" action + Zeus module registration.
if (hasInterface) then {
    [] call FUNC(initPlayer);
    [] call FUNC(addZeusModule);
};
