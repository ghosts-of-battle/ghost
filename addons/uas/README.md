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

## Nobody near, nothing flying

A patrol exists to be **met**. One orbiting a base four kilometres from the
nearest player is an airframe, a crew and an AI pilot being simulated for an
audience of nobody — twenty of them on a full map, all mission.

So a patrol is put up only when somebody is within `UAS_PLAYER_RANGE` (4 km) of
the ground it would orbit, and stood down again when everybody has left. The
planner filters its objective list on it and says how many it skipped;
`topUp` refuses a launch outright, so the reaction ladder and the QRF cannot
route around it; `standDown` runs first on every planning tick and takes back
the ones that outlived their audience.

**Measured to the orbit centre, not to the aircraft.** A patrol wanders 800 m
around its objective, and measuring the airframe would have a drone standing
itself down and back up as it flew the far side of its own circle.

A stood-down drone is flagged before it is deleted, so the coroner in `topUp`
knows the removal was ours — *DELETED WHILE STILL FLYING* stays a real alarm.

### The cycle, as a section moves

One beat, every `UAS_PATROL_TICK` (60 s), in this order:

1. **Stand down** — patrols whose orbit centre no longer has a player inside 4 km
   are deleted, crew included. Each side is handed a *credit* for exactly how
   many it gave back.
2. **Plan** — objectives are filtered to this side's own ground, then to the
   ones with somebody within 4 km, ranked biggest-first, and topped up to the
   ceiling.

**The credit is what makes the second half work.** Replacement is normally a
drip — one airframe per side per tick — so that a fleet lost to a jammer bubble
does not rain back into it. A stand-down is not a loss, and under the drip alone
a section driving from one valley to the next would arrive in empty sky and wait
ten minutes for the first drone. Ground now refills at the speed it emptied,
while attrition still drips.

**Nothing vanishes in front of anybody.** A patrol on the near side of a circle
whose centre has just gone out of range is still a real aircraft in somebody's
sky, so a drone with a player within `UAS_SEEN_RANGE` (2 km) of the *airframe*
is kept regardless, and goes on a later tick once it has flown on or they have.

At 4 km with a 60-second beat, a vehicle doing 60 km/h has about four minutes of
ring to cross before it reaches anything, so the air is always up before the
ground is in sight.

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_main`
- `ghost_common`
- `cba_xeh` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

1 unit class, 13 functions.

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

<details><summary>13</summary>

- `ghost_uas_fnc_cacheDown`
- `ghost_uas_fnc_ceilingFor`
- `ghost_uas_fnc_factionUav`
- `ghost_uas_fnc_livePatrols`
- `ghost_uas_fnc_moduleController`
- `ghost_uas_fnc_placeCaches`
- `ghost_uas_fnc_planPatrols`
- `ghost_uas_fnc_playerNear`
- `ghost_uas_fnc_respondTo`
- `ghost_uas_fnc_spotSweep`
- `ghost_uas_fnc_standDown`
- `ghost_uas_fnc_start`
- `ghost_uas_fnc_topUp`

</details>
