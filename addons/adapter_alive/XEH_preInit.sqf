#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

GVAR(ready) = false;
GVAR(fireSeq) = 0;
// one-shot latch: FUNC(profileObjects) reports an odd profile shape once
GVAR(shapeLogged) = false;

ADDON = true;
