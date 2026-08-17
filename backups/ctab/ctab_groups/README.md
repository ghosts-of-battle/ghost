# cTab Group Messaging

`ghost_ctab_groups`

Group-addressed cTab messaging, plus auto-posting CONTACTREP and
SITREP into ALiVE as spotreps and sitreps with markers.

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `cba_xeh` _(external)_
- `ghost_main`
- `ctab_messaging` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

10 functions.

## CBA settings

| Setting | Type | Name |
|---|---|---|
| `ghost_ctab_groups_enabled` | CHECKBOX | Enable Group Target Boxes |
| `ghost_ctab_groups_defaultGroupMedical` | EDITBOX | Default Medical Group |
| `ghost_ctab_groups_defaultGroupFires` | EDITBOX | Default Fires/Air Group |
| `ghost_ctab_groups_statusLogBox` | EDITBOX | Status Report Log |
| `ghost_ctab_groups_commandGroup` | EDITBOX | Command Group |
| `ghost_ctab_groups_fileBoxes` | EDITBOX | Shared Message Boxes |
| `ghost_ctab_groups_ticAlarm` | CHECKBOX | TIC Rings Scanner Phones |
| `ghost_ctab_groups_ticMarkerType` | LIST | TIC Marker Type |
| `ghost_ctab_groups_ticMarkerColor` | LIST | TIC Marker Color |

## Functions

<details><summary>10</summary>

- `ghost_ctab_groups_fnc_btnSend`
- `ghost_ctab_groups_fnc_fileReport`
- `ghost_ctab_groups_fnc_listFileBoxes`
- `ghost_ctab_groups_fnc_listGroups`
- `ghost_ctab_groups_fnc_onTicAlert`
- `ghost_ctab_groups_fnc_quickTic`
- `ghost_ctab_groups_fnc_readFileBox`
- `ghost_ctab_groups_fnc_readLog`
- `ghost_ctab_groups_fnc_resolveGroupToken`
- `ghost_ctab_groups_fnc_sendTicAlert`

</details>
