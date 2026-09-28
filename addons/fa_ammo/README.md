# Future Ammunition

`ghost_fa_ammo`

Adds the "Future Ammunition" briefing subject to a unit's map Notes tab, with one record per caliber / family. Runs client-side for the local player (see XEH_postInit), and re-runs on respawn since diary records live on the unit object.

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_fa_main`
- `ghost_notify`
- `cba_main` _(external)_
- `ace_ballistics` _(external)_
- `A3_Weapons_F_Mark` _(external)_
- `ghost_weapons`

## Ships

2 functions.

## CBA settings

| Setting | Type | Name |
|---|---|---|
| `ghost_fa_ammo_enableBreaching` | CHECKBOX | Enable Mk353 BRC Breaching Script |
| `ghost_fa_ammo_debugBreaching` | CHECKBOX | Debug Mk353 BRC Breaching |

## Functions

<details><summary>2</summary>

- `ghost_fa_ammo_fnc_addDiary`
- `ghost_fa_ammo_fnc_breach`

</details>
