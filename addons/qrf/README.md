# QRF

`ghost_qrf`

Answers the players taking ground. **No countdown and no warning** - the reply
is the consequence, not a timer.

Capture is the held condition: players of one side inside, nobody hostile,
for the hold time. Any break resets it. Watched over every AI commander's
objectives and any `ghost_qrf*` marker - markers work with no ALiVE at all.

The commander that owns the fight answers in three waves: **artillery** asked
of its own guns and scaled to the ground taken (an asymmetric commander has
no gun line, so 3-4 mortar rounds about half the time), a **drone** out of its
cache-limited ceiling, and **squads** spawned 3-6 km out, profiled, and walked
in so they arrive rather than appear.

    #ghostqrf    the watch list and what is currently held

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_main`
- `ghost_common`
- `ghost_notify`
- `cba_xeh` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

1 unit class, 9 functions.

## Eden modules

### Ghost - QRF

`ghost_moduleQRF`, category ghost_modules

Placing this module turns on qrf. Without it, the system is off.<br>Hold Time (sec) - How long players must hold an objective, uncontested, before it counts as taken Players Needed - How many players inside before a hold counts at all Squads Min - Fewest squads the third wave sends Squads Max - Most squads Asymmetric Mortar Chance (%) - An asymmetric commander answers with a few mortar rounds or with nothing - never a full barrage Cooldown (sec) - Retaking the same objective inside this window brings no second QRF

<details><summary>6 attributes</summary>

- `asymMortarChance`
- `cooldown`
- `holdTime`
- `minPlayers`
- `squadsMax`
- `squadsMin`

</details>

## Functions

<details><summary>9</summary>

- `ghost_qrf_fnc_check`
- `ghost_qrf_fnc_contested`
- `ghost_qrf_fnc_gather`
- `ghost_qrf_fnc_moduleController`
- `ghost_qrf_fnc_onCaptured`
- `ghost_qrf_fnc_start`
- `ghost_qrf_fnc_waveArty`
- `ghost_qrf_fnc_waveDrones`
- `ghost_qrf_fnc_waveSquads`

</details>
