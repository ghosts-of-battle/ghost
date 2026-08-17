# Leaders

`ghost_leaders`

The asymmetric chain: **three leaders, and only a player's hand takes one off
the board.** A leader lost to crossfire, a mine or ALiVE's own war is quietly
replaced - a successor stands up in a new safe house, and the corpse stops
carrying the phone. A kill nobody earned must not end a hunt nobody got to
run.

They live in safe houses - enterable buildings in settlement clusters inside
the asymmetric commander's TAOR - and rotate between them. Intel points at the
**safe house, never the man**, and once he is moving it points at the house he
is going to, so the chain is followed rather than solved. A house may be
watched: walk in and 3-4 mortar rounds arrive. (IEDs stay ALiVE's.)

**Take one alive** and deliver him to a `ghost_prison*` marker and he gives up
another leader's position exactly - the only moment the chain hands over a
point instead of a circle, and it costs a live prisoner rather than a hack.

Killing or capturing one cuts the asymmetric pool by the slider, and the state
survives a restart.

    #ghostleaders    who is left, where, and in what state

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_main`
- `ghost_common`
- `ghost_notify`
- `cba_xeh` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

1 unit class, 16 functions.

## Eden modules

### Ghost - Leader Chain

`ghost_moduleLeaders`, category ghost_modules

Placing this module turns on leader chain. Without it, the system is off.<br>Pool Cut Per Leader (%) - How much of the asymmetric commander's force pool dies with each leader Rotate Every (sec) - How often a leader moves to another safe house Trap Chance (%) - Chance a watched safe house is trapped with mortars Internet Pops - How many rugged-server props are placed for players to find and pull leads from

<details><summary>5 attributes</summary>

- `poolCut`
- `pops`
- `rotateEvery`
- `taor`
- `trapChance`

</details>

## Functions

<details><summary>16</summary>

- `ghost_leaders_fnc_armTrap`
- `ghost_leaders_fnc_arrive`
- `ghost_leaders_fnc_down`
- `ghost_leaders_fnc_leaderCar`
- `ghost_leaders_fnc_moduleController`
- `ghost_leaders_fnc_parkSpot`
- `ghost_leaders_fnc_placePops`
- `ghost_leaders_fnc_prisonWatch`
- `ghost_leaders_fnc_productLeader`
- `ghost_leaders_fnc_replace`
- `ghost_leaders_fnc_reveal`
- `ghost_leaders_fnc_rotate`
- `ghost_leaders_fnc_safeHouses`
- `ghost_leaders_fnc_save`
- `ghost_leaders_fnc_spawnLeader`
- `ghost_leaders_fnc_start`

</details>
