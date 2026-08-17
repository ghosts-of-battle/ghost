# ghost_teleport

Teleport points: an object anyone on the right side can walk up to and be moved
from, with a map-and-list menu for choosing where.

**Reeveli wrote this system.** It came into ghost from the Roomba mission's
`scripts\Rev_teleport`, function for function. The names are ghost's now; the
design and the code are his.

## Using it

A point is any object:

```sqf
[this, "Staging area", west] call ghost_teleport_fnc_addPoint;
```

in an Eden init field, or from Zeus with **Ghosts of Battle > Add teleport
point** if ZEN is loaded. The point carries a "Teleport" action, shown only to
the side it was made for, and taken off the list if the object is destroyed.

Open the menu from anywhere with:

```sqf
[] call ghost_teleport_fnc_open;
```

## Settings

CBA, under **Ghosts of Battle > Teleport**:

- **Action visibility radius** - how close you must be for the action to show
- **Teleportation time** - how long the move and its fade last

## Notes

- ZEN is optional. Without it the Zeus modules are not registered and
  everything else works unchanged.
- The point list is published, so it survives JIP without a handshake.
- The old `Rev_tp_fnc_*` names are **not** aliased. They were, while the Roomba
  mission.sqm was binarised; it is text now and calls the ghost names. Nine
  other missions still ship Reeveli's originals and define those names
  themselves, so a mod-side alias would overwrite a mission's own copy.
