## HALO Gear

High-altitude jump kit: oxygen masks, hypoxia, and a Cypres-style automatic
activation device for both jumpers and dropped cargo.

- **Masks** — `ghost_halogear_mask` (full ESS lens, tinted, HUD) and
  `ghost_halogear_maskNoESS` (air only). Both count as an air supply; the ESS
  mask can crack in freefall, at which point it becomes
  `ghost_halogear_maskBroken` and stops supplying air.
- **Hypoxia** — above the configured altitude with no air supply, blur and
  desaturation build over ~50 s with damage ticks and gasping audio, ending in
  unconsciousness. Each subsequent cycle is faster and harsher until it kills.
- **AAD** — `ghost_halogear_aad`, fitted to the two AAD parachute rigs, or
  attached to a crate, vehicle, tank, bike or boat through the ACE interaction
  so it deploys its own chutes when dropped (chute count scales with mass).
- **HUD** — altitude, vertical speed and a floating compass on the ESS lens,
  each toggleable.

Everything is configurable under CBA Settings > Ghosts of Battle > HALO Gear.

Any goggles, headgear or vehicle can opt in as an air supply by setting
`ghost_halogear_rebreather = 1` in its config; the setting *Extra protective
gear* does the same by classname for mods this addon does not know about.

### Origin and licence

Ported from **MRHHaloGear**, part of Mr H.'s *MRH Milsim Tools*
(<https://github.com/MrHUnnamed/MRHMilsimTools>), used under the
**Arma Public License Share Alike (ADPL-SA)**. This adaptation is distributed
under the same licence. Four generic helpers taken from the same mod live in
`ghost_common`: `conditionalPFEH`, `addParachuteToObject`,
`addMultipleParachutesToObject` and `ensureSafeLanding`.

Modifications made in this port:

- Restructured to the Ghost/CBA addon layout: `script_component.hpp`, `XEH_PREP`
  + `PREP()`-registered functions under `functions/`, `GVAR`/`QGVAR` naming,
  `CSTRING`/`LLSTRING` localisation, CBA settings in `initSettings.inc.sqf`.
- Classes renamed `MRH_HaloMask*` -> `ghost_halogear_mask*`, `MRH_AAD_Item` ->
  `ghost_halogear_aad`, `MRH_AADEquipped*Parachute` ->
  `ghost_halogear_parachute`/`_parachuteNS`; the config marker property
  `MRH_hypoxiaRebreather` is now `ghost_halogear_rebreather`.
- Dropped the `MRHMilsimTools` dependency; the five helpers it was used for are
  either ported (above) or inlined (`returnAltitude`, `parseMagazinesList` were
  one-liners).
- **Fixed a syntax error in the original**: the `MRH_DetachAAD` ACE action was
  missing the `;` after its `statement`, immediately before `exceptions[]`. The
  game tolerated it; HEMTT's rapifier does not.
- **Fixed the stringtable**, which had an unterminated quote on `<Project>` and
  several stray `</Key>` tags.
- Removed the three masks from `CfgPatches >> weapons[]` — they are `CfgGlasses`
  classes, so listing them there is wrong.
- Collapsed the four near-identical `aboveHypoEH`/`underHypoEH` and
  `startedFreefallEH`/`freeFallEndedEH` functions into `watchHypoxia` and
  `watchFreefall`, each taking a direction argument.
- Folded `removeObjectAAD` into `detachAAD`, and added `attachAAD` so the
  interaction statements are functions rather than inline SQF strings.
- The hypoxia sequence's five stages became a data table instead of five copied
  blocks; the three post-process effects likewise.
- Guarded the ACE goggles display lookups (`ACE_Goggles_Display`) which were
  previously assumed non-null, and the AAD dialog's `createDialog` return.
- `MACRO_ATTACHAAD` expanded inline on each of the five base classes rather than
  hidden in a `#define`.
- rvmat texture paths re-pointed at the new location. **The `.p3d` files still
  reference `\MRHHaloGear\...` internally and need re-pathing in a model tool.**

### Authors

- Mr H. — original addon, models, textures and sounds
- Ghost — port
