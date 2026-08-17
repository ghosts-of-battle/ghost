# S7 ATAK

`ghost_ctab_devices`

Three re-skinned cTab devices - the S23 handset, the GFT-1 tablet
and the FBCB4 vehicle screen - with an ATAK-style app drawer on each.

Beyond the map: squad medical for medics, an engineering page that fires ACE
remote charges out to five kilometres, a convoy board, weather, the EW readout,
and the two intel pictures - the network link chart and the threat board's
contacts, shown as beliefs with an error and an age rather than as pins.

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `cba_xeh` _(external)_
- `ghost_main`
- `cTab` _(external)_

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

65 functions.

## CBA settings

| Setting | Type | Name |
|---|---|---|
| `ghost_ctab_devices_enabled` | CHECKBOX | Enable Device App Menus |
| `ghost_ctab_devices_s23Case` | LIST | S23 Case |
| `ghost_ctab_devices_hideStockSignalIcons` | CHECKBOX | Hide cTab's Signal Icons |
| `ghost_ctab_devices_mirrorNotifications` | CHECKBOX | Mirror cTab Notifications |
| `ghost_ctab_devices_dspRight` | SLIDER | Held-Up S23: Right |
| `ghost_ctab_devices_dspUp` | SLIDER | Held-Up S23: Up |
| `ghost_ctab_devices_convoyNames` | EDITBOX | Convoy / Callsign List |

## Functions

<details><summary>65</summary>

- `ghost_ctab_devices_fnc_aceSelfActions`
- `ghost_ctab_devices_fnc_aceSubActions`
- `ghost_ctab_devices_fnc_acreRack`
- `ghost_ctab_devices_fnc_alarmAdd`
- `ghost_ctab_devices_fnc_alarmAt`
- `ghost_ctab_devices_fnc_alarmClear`
- `ghost_ctab_devices_fnc_alarmDelSync`
- `ghost_ctab_devices_fnc_alarmDelete`
- `ghost_ctab_devices_fnc_alarmSilence`
- `ghost_ctab_devices_fnc_androidLayout`
- `ghost_ctab_devices_fnc_app`
- `ghost_ctab_devices_fnc_applyIconColor`
- `ghost_ctab_devices_fnc_applyTheme`
- `ghost_ctab_devices_fnc_auditLayout`
- `ghost_ctab_devices_fnc_camEnter`
- `ghost_ctab_devices_fnc_camExit`
- `ghost_ctab_devices_fnc_camSelect`
- `ghost_ctab_devices_fnc_cardFit`
- `ghost_ctab_devices_fnc_click`
- `ghost_ctab_devices_fnc_convoyNames`
- `ghost_ctab_devices_fnc_convoyPage`
- `ghost_ctab_devices_fnc_convoyPick`
- `ghost_ctab_devices_fnc_convoyRead`
- `ghost_ctab_devices_fnc_convoyRegister`
- `ghost_ctab_devices_fnc_deviceLayout`
- `ghost_ctab_devices_fnc_deviceOpen`
- `ghost_ctab_devices_fnc_deviceSkin`
- `ghost_ctab_devices_fnc_deviceTick`
- `ghost_ctab_devices_fnc_droneTag`
- `ghost_ctab_devices_fnc_dspNudge`
- `ghost_ctab_devices_fnc_engineerPage`
- `ghost_ctab_devices_fnc_engineerRead`
- `ghost_ctab_devices_fnc_fbcb4Layout`
- `ghost_ctab_devices_fnc_hackBuild`
- `ghost_ctab_devices_fnc_hackOpen`
- `ghost_ctab_devices_fnc_ifName`
- `ghost_ctab_devices_fnc_infoEnter`
- `ghost_ctab_devices_fnc_infoText`
- `ghost_ctab_devices_fnc_isEngineer`
- `ghost_ctab_devices_fnc_isMedic`
- `ghost_ctab_devices_fnc_logCount`
- `ghost_ctab_devices_fnc_medicalNotes`
- `ghost_ctab_devices_fnc_medicalPage`
- `ghost_ctab_devices_fnc_medicalRead`
- `ghost_ctab_devices_fnc_medicalRoster`
- `ghost_ctab_devices_fnc_medicalTile`
- `ghost_ctab_devices_fnc_menuToggle`
- `ghost_ctab_devices_fnc_messageLayout`
- `ghost_ctab_devices_fnc_notifyMirror`
- `ghost_ctab_devices_fnc_osdCapture`
- `ghost_ctab_devices_fnc_osdRestore`
- `ghost_ctab_devices_fnc_overlayTick`
- `ghost_ctab_devices_fnc_overlayToggle`
- `ghost_ctab_devices_fnc_remapControls`
- `ghost_ctab_devices_fnc_setBgColor`
- `ghost_ctab_devices_fnc_setFont`
- `ghost_ctab_devices_fnc_setIconColor`
- `ghost_ctab_devices_fnc_supportFit`
- `ghost_ctab_devices_fnc_supportOpen`
- `ghost_ctab_devices_fnc_syncCatchers`
- `ghost_ctab_devices_fnc_tabletLayout`
- `ghost_ctab_devices_fnc_toolPick`
- `ghost_ctab_devices_fnc_toolsToggle`
- `ghost_ctab_devices_fnc_widgetTick`
- `ghost_ctab_devices_fnc_wireButtons`

</details>
