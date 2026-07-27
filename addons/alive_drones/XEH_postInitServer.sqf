#include "script_component.hpp"

// Fleet state + global reaper are lazily started by the first placed module (FUNC(ensureReaper)).
// Nothing to do here unless a module is present.
