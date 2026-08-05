# Ghost Intel System Rework — Part 3: WMP-derived enhancements

Companion to `DESIGN_INTEL_SYSTEM.md` (Part 1) and
`DESIGN_INTEL_SYSTEM_PART2.md`. Same repo, same architecture rules,
settings policy, and gen_docs.py requirement. Decisions continue as D27+.

Source material: **WaldosMissionPack** (github.com/AdamWaldie/WaldosMissionPack),
**MIT licensed** — unlike ALiVE (GPL) and Crows EW (APL-SA), WMP code MAY be
adapted directly into ghost, with attribution.

**Licensing rules for this part:**
- Retain WMP's MIT copyright/permission notice for adapted code: add an
  entry to ghost's credits/license docs ("portions adapted from
  WaldosMissionPack by Adam Waldie, MIT") and keep per-file `Author:`
  attribution in headers of substantially-adapted functions.
- WMP bundles third-party ports that keep their own terms (e.g. the
  minigame table engine ported from "Party Games Scripted"). Before
  adapting ANY file, check its header for non-Waldo authorship; skip or
  clear anything not plainly MIT. The files named below were verified to
  carry Waldo authorship headers.
- WMP is a *mission-side* framework: `missionNamespace` globals configured
  from init.sqf, functions as `Waldo_fnc_*`. Porting into ghost means:
  ghost namespacing, CBA/XEH addon init, module attributes instead of
  init.sqf globals, and stripping the mission-framework assumptions
  (respawn handling, description.ext hooks). Expect adaptation, not
  copy-paste.

Reference clone paths (WMP repo): `MissionScripts/MissionInit/Jamming/*`,
`MissionScripts/MissionInit/ElectronicWarfare/*`,
`MissionScripts/InteractionsMinigames/*`.

---

## 1. Jamming model upgrade for electronic_war_zones (item 11)

Adapt WMP's `jammingFactor.sqf` — a single shared calculator returning
0..1 jamming strength at a position, applied per jammer: active +
duty-cycle window, affected-sides filter, ACRE frequency-band filter,
directional cone (bearing + arc), **terrain line-of-sight occlusion**,
**radio-power burn-through** (stronger radios shrink the field), and
linear or inverse-square falloff.

Ghost's current model (binary/graduated radius + exempt-radio list) is
replaced by routing every consumer — the TFAR/ACRE jam appliers, the §3
HUD, the §2 RDF scanner, GM overlay if adopted — through one
`ghost_ewz_fnc_jamFactor` so all systems agree on where each jammer
reaches (WMP's key architectural insight; mirrors Part 1 §9).

- Ghost's existing per-radio semantics are preserved on top: the
  exempt-list (RF-7800S etc.) short-circuits before the calculator; the
  "detectability scales with transmit power" model now becomes literal
  via burn-through (feed each radio's power in mW).
- The calculator consumes the Part 1 §3 zone registry — extend registry
  entries with the new per-zone fields.
- New EW-zones module attributes (all optional, defaults = current
  behavior so existing missions are unchanged):

| Attribute            | Type   | Default  | Meaning |
|----------------------|--------|----------|---------|
| `jam_los`            | BOOL   | false    | Terrain blocks jamming (D27: default OFF to preserve current behavior; recommend missions turn it on) |
| `jam_burnthrough`    | BOOL   | false    | Radio power resists jamming |
| `jam_burnthrough_ref`| NUMBER | 500      | Reference radio power, mW |
| `jam_curve`          | STRING | "LINEAR" | "LINEAR" or "INVSQ" falloff |
| `jam_duty_cycle`     | NUMBER | 100      | % of time jammers are active (pulsing) |
| `jam_cone_enable`    | BOOL   | false    | Per-zone random directional cone (bearing+arc rolled at spawn) |

- Temp zones from `spawnTempZone` (Part 1 §3) inherit the module's model
  settings automatically.
- **[DISCOVER]** WMP's ACRE2 custom signal function vs ghost's current
  ACRE handling (`acre_power_threshold` attribute) — reconcile into one
  ACRE path; prefer WMP's per-signal hook if ghost's is cruder.

## 2. Handheld RDF scanner (item 12)

Adapt `jammerScan.sqf`: an ACE self-interaction ("Scan for Radio
Jammers") that sweeps the zone registry for active emitters within scan
range and reports the nearest — compass bearing, coarse range estimate,
signal strength. Take bearings from two spots and triangulate.

This is the **fieldcraft counterpart to 1c**: the hack menu buys a zone
circle instantly; the RDF lets an EW team hunt the same emitters manually
with no hack at all. Both read the same registry, so they never disagree.

- Gate the interaction on carrying a scanner item — reuse the hacking
  required-items CBA pattern with its own item list (CBA setting
  `RDF Items`, default the cTab/Android list — mission makers can narrow
  it to a dedicated device). (D28)
- Scan range: EW-zones module attribute `rdf_scan_range` (default 3000).
- Detection includes temp zones and detectors as well as jammers (D29 —
  the registry `_type` is reported in the readout).
- Output via the ghost notification/hint system, not WMP's UI cards.

## 3. Jamming HUD (item 13)

Adapt `jammingHud.sqf`'s concept: a graduated on-screen jamming meter on
each client, driven by `ghost_ewz_fnc_jamFactor` at the player's position
with their active radio — so being jammed is unmistakable and never reads
as a TFAR/ACRE bug. Ghost currently jams silently; this is the missing
player feedback for the whole EW layer.

- Show only when factor > 0; intensity follows the 0..1 factor.
- Style it ghost-native (it shares the RscTitles layer and shared HUD
  positioner used by the signal scanner, rather than WMP's meter). Keep it
  deliberately loud per WMP's rationale.
- CBA client setting to disable locally (accessibility), default on. This
  is a player-side global per the settings policy, so CBA is correct
  here. (D30)

## 4. UAV/drone jamming (item 14)

Adapt the `jammingUavServer/Client` pair: jammers flagged `jam_uavs`
(new per-zone registry field + module attribute, default false) freeze
autonomous drones inside their field and disconnect players controlling a
drone whose datalink crosses the field (with feed-degrade as they near
the jammer).

- Server side: periodic sweep of drones vs UAV-flagged zones via
  `jamFactor` UAV mode; freeze = disable AI move/target while inside,
  restore on exit (WMP prior art handles this — adapt, verify against
  ghost-spawned patrol drones from the drones addon).
- Interaction with ghost's own drone layer is the point: OPFOR EW zones
  can now down BLUFOR quadcopters, and (if a mission gives BLUFOR
  jammers) vice versa — a counter-UAS layer the drone addon currently
  has no answer to.
- Exempt ghost's EW *response* drones from friendly zones (side filter
  already covers this — verify).
- Ties to downing a drone from the hacking tablet: that path **deletes** the
  airframe and its crew, where UAV jamming **freezes** it. The seam is real and
  the two are deliberately not merged (D31). Note the interface moved - downing a
  drone is now a device card on the tablet, not its own ACE action.

## 5. OPTIONAL / phase 2 — minigame hack mode (item 15)

WMP's InteractionsMinigames suite (Core engine + Challenges:
keypad, circuit, command-input, wire-cut, sequence, lockpick, radio-tune,
minesweeper, pressure, repair) provides server-owned, difficulty-profiled
interactive procedures with `IDLE/RUNNING/SUCCESS/FAILURE` state and CBA
event callbacks — effectively a ready-made *skill-based* hacking layer.

Proposal: the hacking tablet (Part 1 §5) gains a module attribute `hack_mode`:
- `"timer"` (default, D32) — Part 1 behavior exactly.
- `"minigame"` — on pressing START, run an adapted challenge (keypad or
  command-input theme for towers/terminals) inside the tablet screen; SUCCESS
  completes the hack,
  FAILURE = failed hack (for item 9 remote hacks, FAILURE triggers the
  fail package instead of the % roll — skill replaces dice, D33).

This is a substantial port (the Core engine is many files) — scope it as
its own later phase, do not block Parts 1/2 work on it. Verify per-file
authorship before adapting (the party-games *table* engine is a
third-party port and is NOT needed; the Equipment/Challenges procedures
carry Waldo headers).

## 6. OPTIONAL candidate — planted signal trackers (item 16)

WMP's C-Track style trackers (`trackerAttach/Render`): plant a physical
tracker on a unit/vehicle via ACE, and a chosen side follows it live on
the map. Flagging the tension explicitly: this is **live tracking**, which
the design deliberately rejected when cutting the drone downlink (old
1d). The difference: a tracker must be physically planted at arm's reach
— the intel is bought with a real infiltration, not a menu pick.

Decision D34: **defer** — not in scope for Parts 1–3 implementation;
revisit after the snapshot economy has been played. If adopted later, it
slots in as a standalone equipment feature, not a hack-menu product.

## 7. NOT adopted (reviewed, skipped)

- WMP notification cards / 3D world markers — ghost has its own
  notification system and the map-marker intel philosophy; no need.
- EMP module — Zeus tool territory; out of scope for the intel system.
- Loadout/logistics/economy/AAR/convoy/paradrop — unrelated to this
  stack.

## 8. Files summary

```
addons/electronic_war_zones/
    fnc_jamFactor.sqf            (new — adapted jammingFactor, MIT attribution header)
    fnc_rdfScan.sqf              (new — adapted jammerScan)
    fnc_jamHud.sqf               (new — HUD, ghost-native visuals)
    fnc_uavJamServer.sqf         (new — adapted)
    fnc_uavJamClient.sqf         (new — adapted)
    <jam appliers>               (edit — route TFAR/ACRE paths through jamFactor)
    <registry / module attrs>    (edit — per-zone model fields + new attributes)
docs/ ghost credits/license file (edit — WMP MIT attribution)
(phase 2: addons/hacking minigame mode + adapted challenge engine)
```

Build order: §1 calculator first (everything else consumes it) → §3 HUD →
§2 RDF → §4 UAV jamming. §5/§6 deferred.

## 9. Decision table (continues Parts 1–2)

| # | Decision | Default |
|---|----------|---------|
| D27 | New jam-model toggles | All default to current behavior (off/LINEAR/100%) — opt-in per mission |
| D28 | RDF gating | ACE self-interact + CBA `RDF Items` list, default = hacking items |
| D29 | RDF detects | All registry types incl. temp zones; type named in readout |
| D30 | Jam HUD | On by default; CBA client toggle (player-side global) |
| D31 | Drone-down seam | Unchanged: tablet drone hack deletes, UAV jamming freezes. Documented for later unification |
| D32 | hack_mode | "timer" default; "minigame" is phase 2 |
| D33 | Minigame + remote hack | Challenge result replaces the fail % roll |
| D34 | C-Track trackers | Deferred |

## 10. Acceptance checklist (for §1–§4 scope)

- [ ] All model toggles off → jamming behaves exactly as before the port
      (regression guard on an existing EW mission).
- [ ] `jam_los` on → a hill between player and jammer restores comms;
      cresting it cuts them.
- [ ] `jam_burnthrough` on → RT-1523G/manpack holds a link deeper into a
      field than an exempt-listed check would predict; exempt radios
      still wholly unaffected.
- [ ] HUD meter rises smoothly approaching a jammer, disappears when
      clear, matches the moment radios actually degrade.
- [ ] RDF scan from two positions gives bearings that intersect at the
      emitter; temp zones are detectable while alive.
- [ ] UAV-flagged zone freezes an autonomous ghost patrol drone inside
      it and releases it on exit; player-controlled drone loses control
      crossing the field; EW response drones of the owning side immune.
- [ ] MIT attribution present in credits and adapted-file headers.
- [ ] gen_docs.py re-run; docs committed.
