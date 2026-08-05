# Ghost Intel System Rework — implementation doc

Target repo: `ghost` (Ghosts of Battle). Addons touched: `hacking`,
`electronic_war_zones`, `alive_drones` (rename), `alive_aircraft` (rename),
plus one new addon for the Intel Hunt module.

This doc is the authoritative design. Open decisions are collected in §12
with chosen defaults — implement the defaults, flag any deviation in the
commit/PR message. Sections marked **[DISCOVER]** require reading the
existing source first; prefer the repo's reality over this doc's
assumptions and note deviations.

After all work: re-run `tools/gen_docs.py` so docs/ (ADDONS.md, MODULES.md,
SETTINGS.md, README.md counts) reflects the changes. Do not hand-edit
generated docs.

---

## 0. Architecture rules (apply to every item)

**A. ALiVE-independent core.** Every feature below is ghost-native and
framework-agnostic: it must work with no ALiVE loaded, alongside ALiVE, or
with other AI frameworks (HAL/NR6, Zeus, vanilla). ALiVE may only ever be
an *optional enricher* behind an `isNil` guard — never a `requiredAddons`
entry, never a hard call. The hacking addon's current use of ALiVE's admin
debug reveal (`ALiVE_fnc_debugVirtualisedProfilesClient` snapshot path) is
**removed outright**, not branched around.

**Settings policy (item 6).** All per-mission tuning lives as attributes on
map-placed Eden modules. CBA settings are only for player-side globals that
exist independent of any placement: the existing hacking master enable,
required-items list, hack condition, tower classes — plus one new CBA
setting for the ISR variable name (§8). Add **no other** CBA settings.

**Marker lifecycle (item 2).** Every intel product renders as map markers
placed **once** at reveal time from a server-built snapshot, local to the
receiving side's clients (`createMarkerLocal`), deleted after the owning
module's `intel_lifetime`. No tracking loops, no per-frame marker updates.
Each marker-producing module carries:

| Attribute        | Type   | Default | Meaning |
|------------------|--------|---------|---------|
| `intel_lifetime` | NUMBER | 300     | Seconds markers persist |
| `intel_alpha`    | NUMBER | 0.5     | Starting alpha for area markers |
| `intel_fade`     | BOOL   | false   | false = hold alpha, vanish at lifetime; true = step alpha down (~5 scheduled steps) to 0 across the lifetime |

Fade uses scheduled `setMarkerAlphaLocal` steps via `CBA_fnc_waitAndExecute`
— never a per-frame handler.

**Side privacy.** Intel is visible only to the side that earned it. Use the
repo's existing side-scoped broadcast pattern **[DISCOVER: check `chat` /
`tasks` addons]**; if none exists, remoteExec the render fn to all clients
and gate inside on `side group player == _side`.

---

## 1. Addon renames (item B)

- `alive_drones` → **`drones`** (PBO `ghost_drones`)
- `alive_aircraft` → **`aircraft`** (PBO `ghost_aircraft`)
- The `alive` addon keeps its name (it genuinely requires
  `ALiVE_splashscreen`).

Module classes: `ghost_moduleAliveDrones` → `ghost_moduleDrones`.
`ghost_moduleAircraftStrike` keeps its classname (already clean); only its
addon folder/PBO renames. 3DEN display names drop "ALiVE" (e.g. "Drones
Controller"). Update `requiredAddons[]` in the dependents:
`ambient_drones`, `base_defense`, `electronic_war_zones`, `alive_aircraft`
(now `aircraft`).

**Backward compatibility (keep permanently):**

1. Stub CfgPatches class `ghost_alive_drones` (and `ghost_alive_aircraft`)
   with `requiredAddons[] = {"ghost_drones"}` (resp. `ghost_aircraft`) and
   nothing else — existing mission.sqm `addons[]` lists keep loading.
2. Deprecated module alias: `class ghost_moduleAliveDrones :
   ghost_moduleDrones { scope = 1; };` — existing placed modules work, new
   placements hidden from the Eden list.
3. Grep the whole repo for `ghost_alive_drones` /
   `alive_drones` in function names, global variables (airframe ceiling
   counters etc.), stringtables, and rename internally — no function-name
   aliases needed unless **[DISCOVER]** mission-facing docs advertise any
   `ghost_alive_drones_fnc_*` as public API.

Do the rename as its own commit **before** the feature work, so all new
code references the new names only.

---

## 2. Hacking: intel products (item 1)

Replaces the auto-reveal. A hack buys **one** intel product, chosen on the
tablet (§5) **before** the run starts rather than offered afterwards. Products: Local Picture (1a), SIGINT Hint (1b),
Locate Jammer (1c-i), Locate Detector (1c-ii), Mark Nearest Intel Target
(1e). Entries hide when unavailable (see each product).

- **Timing:** choice is made **after** the hack completes (D1). Present as
  ACE interactions on the hacked tower, available for 60 s after
  completion, one pick total per completed hack.
- **Re-hackability:** per-tower cooldown, module attribute `hack_cooldown`
  (NUMBER, seconds, default 600; `-1` = tower is one-shot). The existing
  HackTargets `one_shot` attribute keeps governing 1e's target-pool
  behavior only — do not conflate the two. (D2)
- **Hack duration:** module attribute `hack_time` (NUMBER, seconds,
  default 60). **Hack signal range:** `hack_range` (NUMBER, meters,
  default 20) — used by the GUI (§5).
- The choice, once made, remoteExecs to the server which builds the
  snapshot and broadcasts the render (per §0 lifecycle).

**[DISCOVER]** Locate the current hack-success handler among the hacking
addon's 9 functions; the reveal path being replaced is wherever the ALiVE
debug call / all-units marking happens. Preserve the existing tower
interaction flow (required items CBA gate, tower classes incl. EW
emitters).

### 2a. Local Picture (1a)

Enemy contacts within `local_picture_radius` (module attr, NUMBER, default
1500 m) **of the hacked tower**.

- Primary scan (always): `allGroups` filtered to enemy side, group leader
  within radius, at least one alive unit. One snapshot row per **group**:
  `[pos, isVehicleGroup]` where `isVehicleGroup` = leader's `vehicle` is
  not the leader.
- Optional ALiVE enricher: if `!isNil "ALIVE_fnc_getNearProfiles"`, also
  query `[_towerPos, _radius, [_enemySideStr]] call ALIVE_fnc_getNearProfiles`
  and append rows for **virtualized** profiles only (active profiles are
  already covered by the entity scan — dedupe by skipping active ones).
  Profile type "vehicle" maps to `isVehicleGroup = true`.
- Render: one icon marker per row, NATO icon by side prefix + type
  (`o_inf`/`o_armor` style, matching side of the contacts), **no text
  label** — icons only. Standard lifecycle/fade.
- GPL note: do not copy ALiVE marker-rendering source; the renderer is
  ghost-original. Calling ALiVE public functions at runtime is fine.

### 2b. SIGINT Hint (1b)

One circle over the **densest enemy cluster** within the same coverage
radius as 2a. Default algorithm (D3):

1. Collect enemy group-leader positions in coverage (same scan as 2a,
   entity + optional profile merge).
2. If none → entry hidden.
3. Bin positions into a 500 m grid; take the bin with the most groups;
   cluster = all positions within 750 m of that bin's centroid.
4. Circle center = cluster centroid; radius = max distance from centroid
   to a cluster member + 200 m padding (min radius 300 m).
5. Render one `ELLIPSE`, `SolidFull`, `intel_alpha`, standard lifecycle.
   No count, no icons, no label.

### 2c. EW Zone Reveal (1c) — depends on §3 registry

Two menu entries: **Locate Enemy Jammer** (`"jam"`, red) and **Locate
Enemy Detector** (`"detect"`, orange).

- Selection: nearest zone to the hack point **not in the spent set**.
- **Spent set is permanent** (mission lifetime): server array of zone ids,
  append-only. The same zone is never individually revealed twice. Marker
  decay is visual only and never re-opens the pool.
- **Graduation, per type (D4):** when every non-temp zone of a type has
  been spent, that entry relabels to "…Network Overview" and each
  subsequent pick renders **all currently-live zones of that type** at
  once (repeatable, standard lifecycle). Dead emitters drop out of the
  overview automatically (alive filter) — the overview shrinks as the
  network is destroyed.
- Temp zones (§6 failure jamming): excluded from discovery selection and
  the spent set; **included** in overview renders while alive.
- Entry visibility: hidden if `isNil "ghost_ewz_fnc_getZones"` or the
  type's registry (discovery pool *and* live-zone list) is empty.
- Render per zone: `ELLIPSE` at true position and radius (`SolidFull`,
  `intel_alpha`, type color) + center icon (`mil_warning`, text "JAM" /
  "DETECT"). Standard lifecycle/fade.

### 2e. Mark Nearest Intel Target (1e)

The existing HackTargets behavior, unchanged, as a menu entry. Entry
hidden when no HackTargets module is synced/pool empty. Keeps its existing
attributes (`marker_colour`, `marker_text`, `marker_type`, `max_range`,
`one_shot`).

---

## 3. electronic_war_zones: zone registry + public API

**Settled (was [DISCOVER], see §13/N2).** The two types are **not** symmetric
in the source and the registry must not pretend they are:

- **Jam** zones are real: each spawned emitter is an object in
  `ghost_electronic_war_zones_jammers` as `[obj, rEff, rFall]`. One registry
  entry per emitter, true position, true radius.
- **Detect** has no zone objects at all. `fnc_hasDetector` tests
  `detector_range` (default 2000) around *every live emitter*, and additionally
  around every **recon drone** in the shared fleet. The coverage is a union of
  circles, most of it moving.

**Decision (D35): `"detect"` is a single synthetic zone covering the whole net,
not one zone per emitter.** The registry holds exactly one `"detect"` entry,
id `"detect_net"`, recomputed at query time from the live emitters:

```
centre = centroid of live emitter positions
radius = (max distance from centre to any live emitter) + detector_range
         (so a single emitter yields exactly detector_range)
```

This is a covering circle, not a minimal one — correct, cheap, and it degrades
the right way: as emitters die the circle shrinks, and with none left the entry
disappears.

**Decision (D36): recon drones are excluded from that circle.** They are the
mobile half of the net, and §0 markers are one-shot snapshots with no tracking,
so a circle drawn around a moving drone is wrong within seconds. "Locate Enemy
Detector" therefore reveals the *fixed* detection infrastructure only. Mobile DF
stays something the players have to notice the hard way.

Consequence for §2c: the detect pool is size one, so the first pick exhausts it
and it graduates to "Detector Network Overview" immediately. Discovery and
overview collapse into the same render for this type — that is intended, not a
special case to code around. Jam keeps the full walk-the-network behaviour.

Server-side registry, one entry per live zone:

```sqf
// [_id, _type, _pos, _radius, _emitterObj, _isTemp]
//  _id STRING unique; _type "jam"|"detect"; _emitterObj may be objNull;
//  _isTemp BOOL (false for module-spawned zones)
ghost_ewz_zoneRegistry = [];
```

Register at spawn; deregister on emitter death if a cleanup path exists,
otherwise rely on the alive filter below.

**Public API (the only cross-addon surface):**

```sqf
// ghost_ewz_fnc_getZones — server
// params: _type "jam"|"detect"|"all" (default "all"),
//         _excludeIds ARRAY (default []),
//         _includeTemp BOOL (default true)
// returns [[_id,_type,_pos,_radius,_isTemp], ...] — live zones only
//         (isNull _obj || alive _obj), no object refs leak out.

// ghost_ewz_fnc_spawnTempZone — server
// params: _pos, _radius, _durationSeconds
// Registers an abstract ("jam", objNull, _isTemp=true) zone, runs it
// through the EXISTING jamming loop (TFAR + ACRE behavior, RF-7800S/
// exempt-list logic identical to permanent zones), deregisters itself
// after _duration. Returns _id.
```

No other addon may read `ghost_ewz_zoneRegistry` directly.

---

## 4. Counter-detection on EW emitters (item 3)

Hacking a tower that is an **EW emitter** (not a plain comm tower) rolls a
chance to dispatch the ew-zones Type-2 drone response to the hacker's
grid, reusing the existing dispatch path, per-transmitter cooldown, and
global airframe ceiling. Module attribute on the hack module:
`emitter_hack_response_chance` (NUMBER 0–100, default 25). Optional
bridge: skipped silently if ew-zones absent. Comm towers never trigger
this.

---

## 5. Hack interface (item 4) — the tablet

**Superseded the terminal strip.** This section originally specified an
`RscTitles` strip that ran alongside a set of ACE actions. That was built, then
replaced wholesale: choosing what to hack and choosing what to pull out of it are
screen jobs, not radial-menu jobs. What shipped is a **tablet dialog** that is the
entire hacking interface. The strip and its `fnc_hackGui*` functions are deleted.

**Kit and training, both required.** Hacking needs a carried **Intrusion Tablet**
item AND the unit to be flagged ISR. Taking the tablet off a body does not make
you an operator; being an operator without one gets you nothing. The ISR flag is
`ghost_common_fnc_isISR`, shared with Intel Hunt (§7) so a mission marks its
operators once — the variable name is the one CBA setting either system has.

**Layout.** Device cards down the left, intel choice down the right, progress and
START/ABORT along the bottom, all inside a rugged tablet bezel. Six fixed card
slots rather than `ctrlCreate`, same technique as the notification stack.

| Column | Contents |
|---|---|
| Devices | One card per hackable thing in range: comm towers, EW emitters, hostile UAVs, enemy soldiers. Each card carries **its own range**, so a tower you must stand at and a soldier 800 m away coexist honestly; out of its own range, a card's distance goes red. Nearest first, refreshed every second. |
| Intel | One button per product this mission can actually produce — no ew-zones means no Locate Jammer button at all. A drone collapses the list to "DOWN THE DRONE", which has nothing to choose. |
| Footer | Progress bar, percent, status line, START / ABORT. |

**Intel is chosen BEFORE the hack (reverses D1).** You decide what you are going
in for, and the run either gets it or it does not. There is no post-hack menu.

**Closing the tablet pauses the hack.** This needed no special case: the tick
handler that advances progress lives and dies with the display, and progress is
stored on the device rather than in the dialog. Reopening resumes with target and
intel intact. Walking out of range pauses the same way without closing. ABORT is
the deliberate way to throw progress away; `abandon_timeout` no longer applies,
because a paused hack is now the player's choice rather than a timer.

**Art.** The bezel, both models and both icons are vendored from MRHMilsimTools
(ADPL-SA — ghost may copy it, unlike the GPL mods). Everything drawn inside the
screen is ghost-original. See `addons/hacking/data/README.md`, which also records
a constraint worth knowing before anyone touches those files: the MLOD p3ds
hard-code their texture paths, so the repathed replacements are **byte-length
matched**, and the one-letter `data\p\` folder exists purely to pad a path.

---

## 5a. Signal Scanner (added, not in the original spec)

A second, separate device: hand-held, MicroDAGR-shaped, **no ISR flag needed**
because reading a warning lamp is not a trained skill. The tablet is what you
hack with; the scanner tells you whether hacking here is a good idea.

An `RscTitles` layer rather than a dialog, so it stays up while you walk and every
reading changes as you move. Three lamps and a radio block:

| Lamp | Green | Amber | Red |
|---|---|---|---|
| UAV | nothing within 2 km | inside 2 km | inside 1 km |
| JAM | clear | partial | >= 75% |
| MESH | a friendly within 200 m | — | isolated |

NET shows the live ACRE channel and TX frequency, falling back to TFAR.

Two things deliberately not re-derived: jamming reads the `localJamFactor` the EW
loop already publishes, so the scanner cannot disagree with what the radios are
doing; and **MESH is a stand-in** — there is no mesh networking, so a nearby
friendly represents someone able to relay. When a real mesh exists only
`fnc_scannerRead` changes.

## 6. Remote Unit Hack (item 9)

New Eden module `ghost_moduleRemoteHack` (category with the other ghost
modules). Feature exists only when the module is placed.

| Attribute        | Type   | Default | Meaning |
|------------------|--------|---------|---------|
| `max_range`      | NUMBER | 800     | Max distance to target to start/continue |
| `hack_time`      | NUMBER | 60      | Seconds |
| `fail_chance`    | NUMBER | 15      | % — rolled at **completion** (D7) |
| `alert_radius`   | NUMBER | 2000    | Failure: enemy alert radius around hacker |
| `jam_chance`     | NUMBER | 50      | Failure: % chance of temp jam zone |
| `jam_radius_min` | NUMBER | 500     | Temp zone radius roll, min |
| `jam_radius_max` | NUMBER | 2000    | Temp zone radius roll, max (hard cap 2000) |
| `jam_duration`   | NUMBER | 600     | Temp zone lifetime, seconds |
| `abandon_timeout`| NUMBER | 60      | §5 |
| `combat_interrupts` | BOOL | false  | §5 |
| ~~`intel_lifetime` / `intel_alpha` / `intel_fade`~~ | — | — | **Not duplicated here.** The Hacking Settings module owns intel styling; `renderProduct` reads one set of values |

- **Initiation:** the enemy appears as a **device card on the tablet** (§5) when
  within `max_range`, gated on the tablet's own item + ISR requirement. No
  line-of-sight requirement (D9). It is not an ACE interaction on the target:
  ACE object menus need arm's reach and this is an 800 m feature.
- **During:** §5 GUI; target or hacker moving out of `max_range` =
  signal-lost pause-persist (D10).
- **Success:** the intel chosen before the run is delivered, with the hacked
  **unit's position at completion time** standing in for the tower for every
  product (local picture around the unit, SIGINT in its area, nearest-unspent
  zone from it, nearest intel target from it).
- **Failure (fail_chance roll at completion):**
  1. Alert — every enemy group with a unit inside `alert_radius` of the
     hacker: `reveal [_hacker, 4]` to the group + set behaviour COMBAT.
  2. Independent roll `jam_chance` (D11): temp jamming zone centered on
     the **hacker's position at failure time**, radius `random
     [jam_radius_min, ., jam_radius_max]`, via
     `ghost_ewz_fnc_spawnTempZone` — skipped silently if ew-zones absent.
  3. **No** drone dispatch on remote-hack failure (D12) — that stays
     exclusive to §4 emitter hacks.
- Failed hacks respect `hack_cooldown` semantics? No — remote hacks have
  no per-target cooldown in v1; the fail risk is the limiter. (D13)

---

## 7. Intel Hunt (item 5) — standalone system, new addon

New addon (suggested name `intel_hunt`) + Eden module
`ghost_moduleIntelHunt`. Sync one or more units/objects = the hunted
targets. At module init set `group _x setVariable ["ALIVE_profileIgnore",
true]` (and on vehicles directly) for every synced target — inert without
ALiVE, prevents virtualization with it, so object refs / killed EHs / hint
positions always work.

| Attribute         | Type   | Default        | Meaning |
|-------------------|--------|----------------|---------|
| `intel_required`  | NUMBER | 10             | Pickups per processing |
| `hint_radii`      | STRING | "3000,2000,1000" | Comma list, meters, per successive hint |
| `marker_duration` | NUMBER | 60             | Seconds hint circle shows |
| `marker_alpha`    | NUMBER | 0.7            | "Mostly opaque" |
| `intel_fade`      | BOOL   | false          | §0 |
| `drop_chance`     | NUMBER | 30             | % per enemy corpse (D14) |

**Loop:**

1. **Drops (D14):** server `killed`/CBA death event on enemy units near
   players → `drop_chance` roll → the corpse gains an ACE interaction
   "Search for Intel" (one use). Using it increments the side-wide counter
   `ghost_intelhunt_count` and removes the action.
2. **Processing:** ACE **self**-interaction "Process Intel", condition:
   `player getVariable [ISR_VAR, false] && counter >= intel_required`.
   ISR_VAR is a CBA setting (STRING, default `"isISR"`). On use:
   counter resets to 0, hint tier advances, hint fires.
3. **Hint:** radius = `hint_radii` entry for the current tier; past the
   end of the list, **repeat the last radius** (D15). Circle center =
   target pos + random bearing + random offset in `[0, radius * 0.6]` —
   off-center but always covering the target. Broadcast to the side:
   notification "Intel processed — check your map." + `ELLIPSE`
   (`SolidFull`, `marker_alpha`) for `marker_duration`. One-shot render
   per §0.
4. **Target order (D16):** multiple synced targets are hunted
   sequentially, nearest-first from the module's position; hints point at
   the current target only. When the current target dies (any cause —
   D17), side notification, tier resets to the first radius, hunt
   advances to the next synced target. All targets dead → side-wide
   completion message; further processing disabled.

---

## 8. AI ambient emitters (item 7)

Ghost-native RadioChatter-concept loop (no Crows EW dependency, concept
only — do not port code) so the EW/DF layer can detect AI, not just human
players. **[DISCOVER]** how ew-zones consumes transmissions (TFAR OnSpeak
handler → detection path) and feed AI emissions into the same path:

- Server loop (CBA PFH, slow tick ~10 s): pick random AI units of the
  hunted side within some range of players; flag each as "transmitting"
  for 3–6 s; while flagged, the unit is a valid detection source for
  ew-zones recon-drone DF / Type-2 dispatch, subject to the same
  exempt-radio semantics (AI count as long-range transmitters).
- Module attribute on the EW zones module: `ai_chatter` (BOOL, default
  false) + `ai_chatter_interval` (NUMBER, default 10).
- Scope note (D18): v1 wires AI chatter into ew-zones detection only — it
  does not create spectrum signals or audible traffic.

---

## 9. Shared plumbing (item 8)

Implement **one** circle-render helper used by 1b, 1c, and Intel Hunt
hints: `ghost_common_fnc_renderIntelCircle
[_id,_pos,_radius,_color,_alpha,_lifetime,_fade,_iconType,_iconText]`
(icon optional), living in `ghost_common`, plus a matching icon-marker
helper for 1a. All products differ only in the snapshot they build, never
in how markers render. (D19)

---

## 10. Files summary (expected shape — adapt to repo layout)

```
addons/drones/                      (renamed from alive_drones; internal renames)
addons/aircraft/                    (renamed from alive_aircraft)
addons/<compat>/config.cpp          (stub CfgPatches ghost_alive_drones / _aircraft
                                     — or stubs inside the renamed addons' configs)
addons/common/fnc_renderIntelCircle.sqf   (new, §9)
addons/electronic_war_zones/
    fnc_getZones.sqf                (new)
    fnc_spawnTempZone.sqf           (new)
    <spawn/init/cleanup fns>        (edit: registry; ai_chatter loop §8)
addons/hacking/                     (AS BUILT - see §14; the strip and the ACE
                                     actions this originally listed are gone)
    tablet.hpp, scanner.hpp         (dialog + hand-held layer)
    fnc_tablet*.sqf                 (open/layout/refresh/tick/closed/select/action)
    fnc_scanner*.sqf                (read/toggle/layout/tick/close) + fnc_hasScanner
    fnc_scanDevices.sqf             (towers + drones + units as one list)
    fnc_towersInRange.sqf
    fnc_hackComplete.sqf            (what a finished hack cashes in)
    fnc_productLocalPicture.sqf     (2a)
    fnc_productSigintHint.sqf       (2b)
    fnc_productZoneReveal.sqf       (2c)
    fnc_renderProduct.sqf           (client render, side filter)
    fnc_serverPick.sqf              (snapshot + broadcast)
    fnc_counterDetect.sqf           (§4)
    fnc_remoteHackFail.sqf          (§6 failure package)
    fnc_moduleHacking / moduleRemoteHack / hackSetting
    CfgWeapons.hpp                  (Intrusion Tablet + Signal Scanner items)
    data/                           (vendored bezel, models, icons - see its README)
addons/intel_hunt/                  (new addon, §7)
stringtable.xml edits throughout; tools/gen_docs.py re-run last.
```

Build order suggestion: rename commit → §3 registry+API → §9 helper →
§2/§5 (tower flow + GUI) → 2a/2b/2c/2e products → §4 → §6 remote hack →
§7 intel hunt → §8 chatter.

---

## 11. Acceptance checklist (dedicated server, 2 clients hack side, 1 enemy)

- [ ] No ALiVE loaded: every feature works; zero RPT errors; no
      `requiredAddons` on ALiVE anywhere new.
- [ ] ALiVE loaded: 1a includes virtualized profiles; synced Intel Hunt
      targets never virtualize; nothing else changes.
- [ ] ew-zones absent: hacking loads, 1c/temp-jam/counter-detection
      silently absent, other products fine.
- [ ] Old mission with `ghost_alive_drones` in addons[] and a placed
      `ghost_moduleAliveDrones` loads and runs.
- [ ] Tablet opens only with the Intrusion Tablet item AND the ISR flag; the
      refusal names which half is missing.
- [ ] Cards list towers, drones and enemy soldiers together, nearest first, each
      against its own range; a card beyond its range shows red.
- [ ] Intel buttons show only products this mission can produce; a drone
      collapses them to DOWN THE DRONE.
- [ ] Hack runs only while the tablet is open: closing pauses and keeps
      progress, reopening resumes, ABORT discards, walking out of range pauses
      without closing. `hack_cooldown` gates re-hacking a tower.
- [ ] Scanner: UAV lamp green/amber/red at 2 km and 1 km, JAM lamp agrees with
      the radios, MESH green with a friendly inside 200 m, NET shows a real
      channel and frequency.
- [ ] 1c: successive picks reveal different zones; markers decay but
      zones stay spent; exhaustion graduates to overview; destroyed
      emitter leaves overview; temp zone appears in overview only.
- [ ] Enemy client never sees hack-side markers.
- [ ] Remote hack: works to `max_range`, fails ~`fail_chance`%, failure
      alerts within `alert_radius` and sometimes spawns a jam zone whose
      jamming behaves identically to module zones (incl. exempt radios).
- [ ] Intel Hunt: corpse search → counter → ISR-only processing →
      off-center circles shrink per tier, always cover target, repeat
      last radius; target death resets tier and advances; completion
      message.
- [ ] `gen_docs.py` re-run; docs committed.

---

## 12. Decision table (defaults implemented; flag deviations)

| # | Decision | Default |
|---|----------|---------|
| D1 | ~~Menu timing~~ | **Reversed.** Intel is picked on the tablet BEFORE the hack, not offered after it |
| D2 | Re-hackability | `hack_cooldown` attr, 600 s; `-1` = one-shot |
| D3 | SIGINT clustering | 500 m grid bin → densest → centroid circle + padding |
| D4 | 1c graduation | **Per type**; overview renders that type only |
| D5 | ~~Abandon timeout~~ | **Obsolete.** Closing the tablet pauses; ABORT discards. No timer |
| D6 | Combat interrupts | Attr, default **off** |
| D7 | Fail roll timing | At **completion** |
| D8 | Remote-hack targets | Man-class units only, as a device card on the tablet |
| D9 | Line of sight | **Not** required |
| D10 | Target leaves range | Pause-and-persist |
| D11 | Failure rolls | Independent (alert always; jam chance separate) |
| D12 | Drones on remote-hack fail | **No** — drone response is §4 emitter-hack only |
| D13 | Remote-hack cooldown | None in v1 |
| D14 | Intel drop source | Corpse-search ACE interact, `drop_chance` roll |
| D15 | Post-last-radius | Repeat last radius |
| D16 | Multi-target order | Sequential, nearest-first from module |
| D17 | Tier reset on target death | Yes, any cause; advance to next target |
| D18 | AI chatter scope | ew-zones detection feed only, off by default |
| D19 | Shared renderer | One helper in ghost_common for all circle intel |
| D35 | Detect zone shape | **One synthetic circle covering the whole net** (centroid + max spread + detector_range), not one per emitter |
| D36 | Recon drones in that circle | **Excluded** — moving sources cannot be snapshotted; fixed infrastructure only |

---

## 13. Discovery notes (repo reality vs this doc)

Recorded during planning; these override the assumptions above.

| # | Doc said | Repo actually |
|---|---|---|
| N1 | ALiVE coupling is the admin debug reveal (`ALIVE_fnc_debugVirtualisedProfilesClient`) | It is `ALIVE_fnc_markUnits`, called from `hacking/XEH_postInit.sqf` behind the `QGVAR(reveal)` event, with `fnc_reveal.sqf` as the trigger. Both go per §0. |
| N2 | EW has jam zones and detection zones to register | Asymmetric. Jammers are objects in `ghost_electronic_war_zones_jammers` as `[obj, rEff, rFall]`. Detection is a single global `detector_range` (default 2000) with **no discrete zone objects**. Resolved by D35/D36: one synthetic `"detect"` entry covering the net. |
| N3 | (unstated) | `addons/suppress/overlay.hpp` is the existing RscTitles/`cutRsc` precedent in the repo. §5 follows it instead of adding a second HUD idiom. |
| N4 | 9 functions in `hacking` | Confirmed: canHack, downDrone, hackTower, markNearestTarget, moduleController, nearestDrone, nearestTower, reveal, watchTargets. |

---

## 14. Post-build changes (what shipped differs from the above)

Recorded after implementation. Where this table and an earlier section disagree,
this table is right.

| Change | Was | Now | Why |
|---|---|---|---|
| Hack interface | `RscTitles` strip + three ACE actions | One tablet dialog | Choosing a target and choosing intel are screen jobs |
| Intel choice | Offered after the hack (D1) | Picked before it starts | Decide what you are going in for |
| Pause | `abandon_timeout` reset progress (D5) | Closing the tablet pauses, ABORT discards | The tick handler dies with the display, so it needed no timer |
| Down Drone | Its own ACE action | A device kind on the tablet | One interface for everything hackable |
| Remote hack | ACE interaction on the target unit | A device card | ACE object menus need arm's reach |
| Gating | Any cTab-family item | **Intrusion Tablet item AND ISR flag** | Kit and training are separate things |
| ISR flag | A setting inside `intel_hunt` | `ghost_common_fnc_isISR` | Hacking needs the same flag; two settings for one concept would drift |
| Scanner | Not specified | New hand-held device, §5a | Warns of drones, jamming and own-net state |
| Art | None | Bezel, 2 models, 2 icons vendored from MRHMilsimTools (ADPL-SA) | See `addons/hacking/data/README.md` |

Deleted in the rework: `fnc_hackGuiOpen/Tick/Close`, `fnc_offerProducts`,
`fnc_clearProducts`, `fnc_hackTower`, `fnc_remoteHack`, `fnc_downDrone`,
`fnc_nearestRemoteTarget`, and `gui.hpp`.
