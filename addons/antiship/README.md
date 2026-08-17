# AntiShip

`ghost_antiship`

A coastal anti-ship battery whose launchers sit inland behind terrain
and cannot see the sea.

Something else has to see for them, which is what makes the surface search radar
worth attacking: kill it, or wait out its tracks, and the battery is blind. The
missile flies faster than any interceptor so it has to be met head-on rather
than chased, and it carries a decoy the defending side's AA and CIWS can engage.

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_main`
- `ghost_common`
- `cba_xeh` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

6 unit classes, 7 functions.

## Eden modules

### Anti-Ship Battery (Burevestnik)

`ghost_moduleAntiShip`, category ghost_modules

Coastal anti-ship batteries, one module for every side. Switch a side on and the addon sites a battery on coastal ground inside that side's TAOR markers, with that side's launchers, and places crewed launchers there - kill them all and the battery is silenced. Every interval a battery looks for a hull inside its search range and puts a Burevestnik into it - climb, sea-skimming cruise, terminal dive; it can be met head-on and it carries a decoy the defending side's AA will engage. With every switch off, the module is one battery for its own side, standing where you put it.

<details><summary>22 attributes</summary>

- `cruise_alt`
- `debug`
- `decoy_classes`
- `enableEast`
- `enableGuer`
- `enableWest`
- `interceptable`
- `interval`
- `launcherEast`
- `launcherGuer`
- `launcherWest`
- `launcher_classes`
- `launcher_count`
- `missile_classes`
- `missile_speed`
- `rearm_interval`
- `search_range`
- `taorEast`
- `taorGuer`
- `taorWest`
- `target_classes`
- `terminal_range`

</details>

## Functions

<details><summary>7</summary>

- `ghost_antiship_fnc_fly`
- `ghost_antiship_fnc_launch`
- `ghost_antiship_fnc_moduleController`
- `ghost_antiship_fnc_pickTarget`
- `ghost_antiship_fnc_radarInit`
- `ghost_antiship_fnc_radarSweep`
- `ghost_antiship_fnc_tick`

</details>
