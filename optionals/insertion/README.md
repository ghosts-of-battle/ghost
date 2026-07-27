## Insertion Handler

Mission-planning interface for getting a team onto the ground: pick an aircraft,
mark an LZ on the map, build a manifest of players and prepared cargo, and run
one of three insertion types.

- **Static line** — the aircraft flies from the start position to the LZ and the
  stick jumps, with prepared cargo pushed out under chutes behind them.
- **HALO** — high-altitude drop, using `ghost_halogear`'s automatic activation
  device for both jumpers and cargo.
- **Submarine** — a submarine runs in submerged and the team transfers to SDVs,
  which can be cast off from the ACE self-interaction menu.

Any crate, vehicle or boat can be prepared as cargo through the ACE interaction
on it, given a display name, and then appears in the planner's manifest.

Settings live under CBA Settings > Ghosts of Battle > Insertion Handler: which
insertion types are offered, the aircraft list per side, and a blocklist of
classes the cargo loader will refuse.

### Origin and licence

Ported from **MRHInsertionHandler**, part of Mr H.'s *MRH Milsim Tools*
(<https://github.com/MrHUnnamed/MRHMilsimTools>), used under the
**Arma Public License Share Alike (ADPL-SA)**. This adaptation is distributed
under the same licence. Nine generic helpers taken from the same mod live in
`ghost_common`: `listGroupsWithPlayers`, `sortGroupsBySide`, `returnDepth`,
`objectFromString`, `realisticGrid`, `setCtrlHeightToText`,
`putContainerInVehicle`, `isOverWater` and `scatterPosition`.

Modifications made in this port:

- Restructured to the Ghost/CBA addon layout: `script_component.hpp`, `XEH_PREP`
  + 52 `PREP()`-registered functions under `functions/`, `GVAR`/`QGVAR` naming,
  CBA settings in `initSettings.inc.sqf`.
- MRH's macro set collides with CBA's — their `FUNC(x)` expands with the `call`
  *inside* the macro, and their `GVAR(x)`/`SVAR(...)` are `getVariable`/
  `setVariable` expressions where CBA's `GVAR(x)` is a variable name — so every
  call site was rewritten, not just renamed.
- **Five functions the original called are not defined anywhere in
  MRHMilsimTools**, so those paths would have thrown:
  - `MRH_fnc_completeAirInsertion` — the entire static-line branch. Reimplemented
    as `FUNC(completeAirInsertion)`.
  - `MRH_fnc_SplashScreen` — the submarine transfer cover. Reimplemented as
    `FUNC(splashScreen)` on a title layer.
  - `MRH_fnc_MoveInDriver` / `MoveInGunner` / `MoveInCargo` — replaced with the
    vanilla `moveInDriver` / `moveInGunner` / `moveInCargo` commands.
- `MRH_fnc_MilsimTools_ZeusModules_startHaloJump` replaced by a local
  `FUNC(startHaloJump)` that drives `ghost_halogear` directly, rather than
  importing that function and the three further MRH functions behind it.
- **Fixed `CfgSounds`**: `USSProteusComArrived` was declared with
  `name = "..._subAmbiant"`, so playing it by name got the wrong clip, and
  `sdvDetach.ogg` shipped with no entry at all — detaching an SDV was silent.
- **Fixed the SDV interaction**: the detach action was declared *as*
  `ACE_Passengers`, which replaces ACE's passenger submenu wholesale. It is a
  child of that container now.
- **Fixed a missing `;`** after the `RscControlsGroup_2300` block in
  `insertionmenu.hpp`, and quoted the `$STR_` references and safezone position
  expressions the GUI editor left bare — the game tolerates all of it, HEMTT's
  rapifier does not.
- Dropped the 33 KB `defines.hpp` of standalone GUI base classes; the dialogs
  derive from the vanilla `Rsc*` controls instead.
- `MRH_player` -> `ACE_player`. The original resolved to
  `missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player]`,
  which is what ACE's alias already is.
- `toExclude.h` -> `toExclude.inc.sqf`, and its setting is now split from a
  comma-separated string rather than assumed to be an array.

### Known gaps

The 52 function bodies were converted mechanically and compile clean, but have
not been exercised in game. The three insertion types, the cargo preparation
flow and the SDV handling all want a play-test.

### Authors

- Mr H. — original addon, interface, sounds and artwork
- Ghost — port, and the reimplemented static-line/splash/HALO entry points
