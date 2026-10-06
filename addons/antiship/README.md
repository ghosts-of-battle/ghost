# AntiShip

`ghost_antiship`

A coastal anti-ship battery whose launchers sit inland behind terrain
and cannot see the sea.

Something else has to see for them, which is what makes the surface search radar
worth attacking: kill it, or wait out its tracks, and the battery is blind. The
missile flies faster than any interceptor so it has to be met head-on rather
than chased, and it carries a decoy the defending side's AA and CIWS can engage.

**Ghost - Anti-Ship Batteries sites them for you.** Place the module and every
ALiVE commander the players are not on gets its batteries inside its own TAOR: a
surface search radar on the shoreline, where it can see the sea, and launchers
inland behind it, where they cannot. Nobody building the mission knows where they
ended up. The module asks only how many - batteries per side, launchers per
battery, radars per battery. With no ALiVE commanders its own area is the ground,
for the side the players oppose. (DIVINER dropped this module because it has no
TAORs; ghost runs ALiVE, so it is back under its old class name.)

**Or place them by hand.** A launcher or a radar placed in Eden or Zeus brings
itself on line the same way - the launcher registers as a battery and starts its
own clock, the radar starts sweeping.

**One launcher is one tube on its own clock**, sited or hand-placed, so three on
a headland are three cycles rather than one battery firing three times as fast.
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

6 unit classes, 8 functions.

## Eden modules

### Ghost - Anti-Ship Batteries

`ghost_moduleAntiShip`, category ghost_modules

Sites coastal anti-ship batteries for every ALiVE commander the players are not on, inside its own TAOR: a surface search radar on the shoreline and launchers inland behind it. Nobody placing the mission knows where. Without ALiVE, the module's own area is the ground and the battery belongs to the side opposing the players. How they fire is under CBA settings, Anti-Ship.

<details><summary>3 attributes</summary>

- `batteriesPerSide`
- `launchersPerBattery`
- `radarsPerBattery`

</details>

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

<details><summary>8</summary>

- `ghost_antiship_fnc_fly`
- `ghost_antiship_fnc_launch`
- `ghost_antiship_fnc_launcherInit`
- `ghost_antiship_fnc_moduleAntiShip`
- `ghost_antiship_fnc_pickTarget`
- `ghost_antiship_fnc_radarInit`
- `ghost_antiship_fnc_radarSweep`
- `ghost_antiship_fnc_tick`

</details>
