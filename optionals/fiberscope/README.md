## Fiberscope

Carried fiberscope. Opened from the ACE self-interaction menu (Equipment > Use
fiberscope) while holding `ghost_fiberscope_item`. Drops a camera at ankle
height in front of the player and locks them in place; the view only opens if
the probe actually finds a building surface to see through. Keys default to
A / E to pan, N for nightvision, S to exit, all rebindable under the
"Ghosts of Battle" CBA keybind category.

### Origin and licence

Ported from **MRHFiberScope**, part of Mr H.'s *MRH Milsim Tools*
(<https://github.com/MrHUnnamed/MRHMilsimTools>), used under the
**Arma Public License Share Alike (ADPL-SA)**. This adaptation is distributed
under the same licence.

Modifications made in this port:

- Restructured to the Ghost/CBA addon layout: `script_component.hpp`,
  `XEH_PREP` + `PREP()`-registered functions under `functions/`, `GVAR`/`QGVAR`
  class and variable naming, `CSTRING`/`LLSTRING` localisation.
- Classes renamed `MRH_FiberScope` -> `ghost_fiberscope_item`, functions
  `MRH_fnc_FiberScope*` -> `ghost_fiberscope_fnc_*`.
- Keybind registration moved from a `preProcessFileLineNumbers` clientInit into
  `initKeybinds.inc.sqf`, and the keys now no-op unless a scope is deployed
  instead of being globally bound.
- Nightvision toggle inverted so the first press turns NVG on.
- Overlay torn down with `cutText` rather than `closeDisplay` (it is a title
  layer, not a dialog), and the camera/NVG variables are cleared on close.
- Dropped the 23 KB copy of the BI dialog `defines.hpp`; the mask control now
  derives from vanilla `RscPicture`.
- Dropped the unused `MRHMilsimTools` dependency (only an unreferenced debug
  `TRACE` macro used it), so this stands alone on CBA + ACE.

### Authors

- Mr H. — original addon, models, textures and sounds
- Ghost — port
