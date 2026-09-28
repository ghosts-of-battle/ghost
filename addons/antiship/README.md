# AntiShip

`ghost_antiship`

A coastal anti-ship battery whose launchers sit inland behind terrain
and cannot see the sea.

Something else has to see for them, which is what makes the surface search radar
worth attacking: kill it, or wait out its tracks, and the battery is blind. The
missile flies faster than any interceptor so it has to be met head-on rather
than chased, and it carries a decoy the defending side's AA and CIWS can engage.

**There is no module.** In ghost this addon was driven by `ghost_moduleAntiShip`,
which sited batteries automatically on coastal ground inside a side's ALiVE TAOR
markers. DIVINER has no TAORs and no commanders to own them, so the siting had
nothing to read from. Place the launcher and the radar where you want them, in
Eden or in Zeus, and both bring themselves on line - the launcher registers as a
battery and starts its own clock, the radar starts sweeping.

**One launcher is one battery.** The module grouped several under one interval;
a hand-placed launcher owns its own, so three on a headland are three tubes on
three cycles rather than one battery firing three times as fast.

**How they behave is CBA settings**, under *Ghosts of Battle > Anti-Ship*:
interval, search range, target classes, missile speed, cruise altitude, terminal
range, whether the missile is interceptable, and debug. The module's other
fourteen attributes described where to SITE a battery and died with it.

**LOCATE ANTI-SHIP and LOCATE RADAR read this addon.** `ghost_antiship_batteries`
and `ghost_antiship_radars` are what the intrusion suite's products and its
Intel Hunt pool hunt through - without this addon loaded neither product is ever
offered.

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_main`
- `ghost_common`
- `cba_xeh` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

5 unit classes, 7 functions.

## CBA settings

| Setting | Type | Name |
|---|---|---|
| `ghost_antiship_interval` | SLIDER | Seconds between launches |
| `ghost_antiship_searchRange` | SLIDER | Search range (m) |
| `ghost_antiship_targetClasses` | EDITBOX | Target classes |
| `ghost_antiship_missileSpeed` | SLIDER | Missile speed (m/s) |
| `ghost_antiship_cruiseAlt` | SLIDER | Cruise altitude (m) |
| `ghost_antiship_terminalRange` | SLIDER | Terminal range (m) |
| `ghost_antiship_interceptable` | CHECKBOX | Interceptable |
| `ghost_antiship_debug` | CHECKBOX | Debug |

## Functions

<details><summary>7</summary>

- `ghost_antiship_fnc_fly`
- `ghost_antiship_fnc_launch`
- `ghost_antiship_fnc_launcherInit`
- `ghost_antiship_fnc_pickTarget`
- `ghost_antiship_fnc_radarInit`
- `ghost_antiship_fnc_radarSweep`
- `ghost_antiship_fnc_tick`

</details>
