# UAS

`ghost_uas`

Patrol drones and the supply that limits them.

Patrols sit over each commander's own objectives as **profiles** - records
that walk the map and become real aircraft only when players are near, so an
empty map costs nothing and the drone a section meets was always there. The
airframe is the commander's own faction's, read from ALiVE.

**Supply caches** are real crates in each side's TAOR, unmarked and unhinted -
finding them is what the intel economy is for. Kill one and that side's
airframe ceiling drops to the reduced number for a random window: the sky
visibly thins, then comes back. Outages extend rather than stack, so supply
raids are raids and not a win button.

A drone that actually sees a player - `knowsAbout`, not proximity - reports it
down the same path a failed hack takes.

    #ghostuas    ceilings, patrol counts, live outages

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_main`
- `ghost_common`
- `cba_xeh` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

1 unit class, 11 functions.

## Eden modules

### Ghost - Enemy Drones

`ghost_moduleUAS`, category ghost_modules

Placing this module turns on enemy drones. Without it, the system is off.<br>Airframes Per Side - How many drones a commander flies at once while its supply is intact After A Cache Is Lost - The ceiling while a supply cache is down Outage Min (sec) - Shortest time a destroyed cache holds the ceiling down Outage Max (sec) - Longest time Caches Per Side - Supply caches placed in each commander's area for players to find

<details><summary>9 attributes</summary>

- `baseMax`
- `cachesPerSide`
- `patrolOver`
- `reducedMax`
- `uavEast`
- `uavGuer`
- `uavWest`
- `windowMax`
- `windowMin`

</details>

## Functions

<details><summary>11</summary>

- `ghost_uas_fnc_cacheDown`
- `ghost_uas_fnc_ceilingFor`
- `ghost_uas_fnc_factionUav`
- `ghost_uas_fnc_livePatrols`
- `ghost_uas_fnc_moduleController`
- `ghost_uas_fnc_placeCaches`
- `ghost_uas_fnc_planPatrols`
- `ghost_uas_fnc_respondTo`
- `ghost_uas_fnc_spotSweep`
- `ghost_uas_fnc_start`
- `ghost_uas_fnc_topUp`

</details>
