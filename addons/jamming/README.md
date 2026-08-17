# Jamming

`ghost_jamming`

The jamming model: zones with a full-strength core and a falloff, one shared
calculator (`jamFactor`) that every consumer agrees with - radio degradation,
the device's jam readout, the scanner needle.

Zones come from static jammer props placed at the enemy's own objectives: a
communications HUB holds up a large zone, a TERMINAL a small one. The prop IS
the zone - **hack it or destroy it and the zone dies immediately and
permanently**. Both props are hackable towers, and LOCATE JAMMER plots them.

The direction-finding stack the old EW addon carried is gone; radio detection
(new.md section 2) replaces it, and responses belong to the reaction ladder.

    #ghostjam    list live zones

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_main`
- `ghost_common`
- `cba_xeh` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

1 unit class, 13 functions.

## Eden modules

### Ghost - Jamming

`ghost_moduleJamming`, category ghost_modules

Placing this module turns on jamming. Without it, the system is off.<br>Hub Radius (m) - Reach of a communications hub, placed at the biggest objectives Terminal Radius (m) - Reach of a terminal, placed at the rest Objectives With Jammers (%) - Share of a commander's objectives that get an emitter Max Jammers Per Side - Hard ceiling per commander whatever the share works out to

<details><summary>4 attributes</summary>

- `largeRadius`
- `maxPerSide`
- `objectiveShare`
- `smallRadius`

</details>

## Functions

<details><summary>13</summary>

- `ghost_jamming_fnc_getZones`
- `ghost_jamming_fnc_jamFactor`
- `ghost_jamming_fnc_jamHud`
- `ghost_jamming_fnc_jammerLoop`
- `ghost_jamming_fnc_moduleController`
- `ghost_jamming_fnc_productLocateJammer`
- `ghost_jamming_fnc_pruneJammers`
- `ghost_jamming_fnc_publishZones`
- `ghost_jamming_fnc_spawnObjectiveJammers`
- `ghost_jamming_fnc_spawnTempZone`
- `ghost_jamming_fnc_spawnZoneAt`
- `ghost_jamming_fnc_start`
- `ghost_jamming_fnc_zoneModel`

</details>
