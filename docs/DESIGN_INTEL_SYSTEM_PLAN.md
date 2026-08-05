# Ghost Intel System Rework — build plan

**Scope: Parts 1 and 3.** `DESIGN_INTEL_SYSTEM.md` (Part 1) and `_PART3.md`
(WMP-derived) are in this plan. **Part 2 (Objective Watch) is parked** — its
spec is current and settled (incl. D37, the barrage being its own feature
rather than an ambient-arty mode), and it slots back in cleanly later because
its only dependency on this work is the notification system, which already
exists. Nothing below blocks on it and it blocks on nothing below.

Those specs stay authoritative on *what*; this doc is *what order, and what has
to be settled first*. Re-run `tools/gen_docs.py` at the end of every phase.

---

## 0. Blockers found while planning

### 0.1 Decision numbers collide — fix before anyone cites one

Part 1 originally ended at D19. Two decisions were later appended to Part 1 as
**D20/D21** (detect-net shape, recon drones excluded) — but Part 2 already
claims **D20–D26** and Part 3 **D27–D34**. Renumber the Part 1 additions to
**D35/D36** and leave Parts 2/3 alone; they are the older claim on those
numbers.

### 0.2 Already built, specs not updated

- **Notifications.** Both Part 2 §3.2 and Part 3 §2 say `[DISCOVER]` the
  notification function and "reuse, do not build a new one". It exists now:
  `ghost_notify` —
  `EFUNC(notify,notify)` local, `EFUNC(notify,broadcast)` global or
  side-scoped, stacking, queueing, per-client settings. Part 3 §2's RDF readout
  targets it (as will Part 2's countdown when that lands). Nothing new to build.
- Thirteen existing call sites across `patrol_base`, `hacking`, `respawn`,
  `chat`, `dtvd` already route through it, so the visual language is set.

### 0.3 `[DISCOVER]` items resolved by reading the repo

| Spec | Question | Answer |
|---|---|---|
| P1 §2 | Where is the hack-success reveal | `hacking/fnc_reveal.sqf` + the `QGVAR(reveal)` handler in `hacking/XEH_postInit.sqf`. It calls `ALIVE_fnc_markUnits`, **not** the debug-profiles path the spec assumed. |
| P1 §3 | EW zone shapes | Asymmetric — see P1 §3 as rewritten (D35/D36). |
| P2 §1 | How single-module addons are laid out | `ambient_arty` is the model: `config.cpp` + `CfgFactionClasses.hpp` + `CfgVehicles.hpp` + `functions/fnc_moduleController.sqf` + `initSettings.inc.sqf`. Mirror it. |
| P2 §1 | `taor_marker` handling | Attribute is a comma-separated **marker-name string**, split with `splitString ", "` in the controller. Not a synced object. |
| P2 §3.3 (for later) | ambient_arty's fire path | `fnc_fireMission.sqf`, signature `[_tgt, _rounds, _spread, _shell]`, default shell `Sh_155mm_AMOS`, one `CBA_fnc_waitAndExecute` per round at `ROUND_GAP`. **It already takes pure params and never touches the module timer** — the P2 D26 extraction will be a file move, not a refactor. Not needed until Part 2. |
| P3 §1 | Is ghost's ACRE handling cruder than WMP's | **No.** `fnc_jammerLoop` already reads the live channel's real transmit power via `acre_api_fnc_getPresetChannelField` and compares against `GVAR(acrePowerMin)`. Keep ghost's ACRE path; feed that same power figure into burn-through instead of replacing it. |
| P3 §4 | What does hacking's drone-down do | `deleteVehicle` on the drone **and its crew**, via a server event. It deletes; UAV jamming freezes. The D31 seam is real and the two should not be merged casually. (Now a tablet device card, not an ACE action.) |
| P1 §1 | Is any `ghost_alive_drones_fnc_*` public API | Nothing in-repo advertises one. Rename internals freely; keep only the CfgPatches + module-class stubs. |

### 0.4 Sequencing traps

- **Do not build the P1 §3 registry, then extend it in P3 §1.** Design the
  registry schema once, with P3's per-zone fields (`jam_los`, cone bearing/arc,
  duty cycle, curve, `jam_uavs`, burn-through ref) present from the start, even
  if nothing reads them until Phase 2. Otherwise every consumer written in
  between gets rewritten.
- **One HUD idiom, not two.** P1 §5 (hack strip) and P3 §3 (jam meter) are both
  `RscTitles` overlays with a drag-to-place mode. Build the hack strip first,
  then lift its layer/positioning/profile-storage into a shared helper before
  writing the jam meter.
- **`jamFactor` is upstream of almost everything in P3.** §2 RDF, §3 HUD and §4
  UAV jamming all consume it, as do the existing TFAR/ACRE appliers.

---

## 1. Phases

Each phase is independently shippable and leaves the mod working.

| # | Phase | Specs | Depends on |
|---|-------|-------|-----------|
| 0 | Housekeeping | P1 §1 renames, D-number fix, `fnc_renderIntelCircle` (P1 §9), debug harness (§2) | — |
| 1 | EW foundation | P1 §3 registry + API (built to the full P3 schema), P3 §1 `fnc_jamFactor`, route existing appliers through it | 0 |
| 2 | Player feedback | P1 §5 hack strip, shared HUD helper, P3 §3 jam meter | 1 |
| 3 | Hack flow | P1 §2 choice menu + 2a/2b/2c/2e products, P1 §4 counter-detection | 1, 2 |
| 4 | Remote hack | P1 §6 | 3 |
| 5 | EW fieldcraft | P3 §2 RDF scanner, P3 §4 UAV jamming | 1 |
| 6 | Intel Hunt | P1 §7 | 0 (circle helper) |
| 7 | AI chatter | P1 §8 | 1 |
| 8 | Objective Watch | all of Part 2 (player captures only, D25) | 0 |
| — | Deferred | P3 §5 minigame, P3 §6 trackers | — |

**Status: phases 0–8 built, Parts 1, 2 and 3 complete, plus a post-build
hacking-interface rework** (2026-08-01). See Part 1 §14 for what the rework
changed — the tablet replaced the terminal strip and the ACE actions, and intel
is now chosen before the hack rather than after. All eight are in `.hemttout/build`,
checked clean, docs regenerated. None of it has been played yet — the acceptance
checklists in Parts 1 and 3 are the next step, not more code.

Deviations from the specs, all flagged where they were made:

| Spec | Said | Built | Why |
|---|---|---|---|
| P1 §6 | Remote hack starts from an ACE interaction *on the enemy unit* | Self-interaction picking the nearest eligible enemy | ACE object menus need arm's reach; the whole feature is 800 m |
| P1 §6 | Module carries `intel_lifetime/alpha/fade` | Hacking Settings module owns them | One set of intel styling, one place `renderProduct` reads |
| P1 §2 | Choice menu sits on the hacked object | Tower hacks yes; remote hacks ride the hacker as self-actions | Same reachability problem |
| P3 §1 | `[DISCOVER]` whether WMP's ACRE hook beats ghost's | Kept ghost's | It already reads real per-channel power; WMP's is not better |
| P2 §1 | ALiVE TACOM bridge for AI captures | Not built (D25 reversed) | The ask was a reaction to *players* taking an objective; the CBA event means it can be added later without touching detection |
| P2 §4 | `barrage_rounds` 24 | 24 over a 60 s window | Confirmed after asking; `barrage_window` is new so the shoot is sustained rather than an instant dump |
| P1 §5 | Terminal strip HUD + ACE actions | One tablet dialog | Requested rework; see Part 1 §14 |
| P1 D1 | Intel chosen after the hack | Chosen before it | Requested rework |
| P1 §5 | Hacking gated on any cTab-family item | Intrusion Tablet item **and** ISR flag | Requested; kit and training separated |
| P2 §1 | ALiVE TACOM bridge not built (D25) | **Built after all** — polled, not a listener | Requested; poll cannot break when ALiVE changes listener internals |
| P2 §1 | One objective per module | Marker-prefix discovery, ALiVE objectives, or the module's own position | Requested: a way to track objectives without ALiVE |

Phases 5 and 6 are parallelisable once 0 and 1 are in.

**Regression guard for Phase 1:** P3's model toggles all default to current
behaviour, so an existing EW mission must jam *identically* before and after the
calculator lands. Bank that test before touching `fnc_jammerLoop`.

---

## 2. Debug and admin test harness (cross-cutting, build in Phase 0)

Every phase above needs to be testable without staging a full op. Two layers.

### 2.1 Per-module `debug` attribute

Already the convention in `ambient_arty` / `ambient_drones` / `ambient_kamikaze`
(a `debug` Combo attribute driving a 60 s heartbeat to system chat). **Every new
module in Parts 1–3 carries the same attribute and the same heartbeat contract:**
one line per interval naming the module, its armed/idle state, what it can see,
and time to its next action. Debug output goes to system chat, never through
`ghost_notify` — the stack is for players.

### 2.2 Admin chat commands

The pieces already exist and are not yet joined up:

- `ghost_common_isAdmin` is set per player in `common/XEH_postInit.sqf` from
  `admin/adminWhitelist.hpp` (logged-in admin or whitelisted UID).
- `chat/fnc_handleChatMessage.sqf` already intercepts **every** chat message
  with `[_channel, _from, _text, _sender]` and can swallow it by returning true.

So: a command parser in `ghost_common`, dispatched from the existing chat
handler. Messages beginning `#ghost ` from a player with `isAdmin` are consumed
(never broadcast, never seen by other players) and routed to a registered
handler; anything else falls through untouched. Non-admins typing `#ghost` get
nothing — no error, no acknowledgement that the surface exists.

Registration is open so each addon owns its own commands:

```sqf
// ghost_common_fnc_addDebugCommand
// ["ew.zones", "list live EW zones", {params ["_args"]; ...}] call ghost_common_fnc_addDebugCommand
```

Commands run **on the server** by default (`_target` param for client-side
ones), reply to the calling admin via system chat, and `diag_log` the
invocation. `#ghost help` lists everything registered.

Minimum command set per phase — each phase is not done until its commands work:

| Phase | Commands |
|---|---|
| 1 | `ew.zones` dump registry; `ew.temp <r> <dur>` spawn temp zone at me; `ew.factor` print `jamFactor` at my position for my radio |
| 2 | `hack.tablet` open the tablet; `hack.devices` list what it can see; `hack.scan` one scanner sweep; `ew.hud` force the jam meter |
| 3 | `hack.product <name>` render one product directly; `hack.spent [clear]` the spent EW zone set |
| 4 | `hack.fail` force the remote-hack failure package |
| 5 | `ew.rdf` run a scan; `ew.uav` toggle UAV jamming on the nearest zone |
| 6 | `intel.count <n>` set the hunt counter; `intel.hint` force the next hint |
| 7 | `ew.chatter` force an AI transmission near me |
| (P2) | `obj.capture`, `obj.barrage` — when Objective Watch lands |

Plus always-available: `#ghost markers` clear every intel marker locally,
`#ghost state` dump which intel modules are placed and armed.

### 2.3 Why not the debug console

`debug_console` is a Zeus/diag surface gated on `enableDebugConsole`. Chat
commands work from any client, on a dedicated server, mid-mission, without
opening a UI — which is what testing a 3-minute artillery countdown or a
signal-lost pause actually needs.

---

## 3. Suggested commit sequence

1. `docs: renumber Part 1 D20/D21 → D35/D36`
2. `common: debug command registry + chat dispatch` (§2.2)
3. `drones/aircraft: rename from alive_*` (P1 §1, incl. compat stubs)
4. `common: renderIntelCircle helper`
5. `ewz: zone registry + public API (full schema)`
6. `ewz: jamFactor calculator; route appliers through it`
7. `hacking: terminal-strip GUI + shared HUD helper`
8. `ewz: jamming HUD`
9. `hacking: intel products` (choice menu later replaced by the tablet)
10. `hacking: counter-detection on emitter hacks`
11. `hacking: remote unit hack`
12. `ewz: RDF scanner` · `ewz: UAV jamming`
13. `intel_hunt: new addon`
14. `ewz: AI chatter`
15. `docs: regenerate`

Part 2 (`objective_watch` + the `fireMission` extraction) resumes after this.
