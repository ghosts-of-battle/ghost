# BUILD_PLAN.md — Drone + EW Suite (refined, pre-build)

Consolidated build plan. Companion to `CLAUDE.md` (intent) and `drone_ew_spec.json` (values).
Status: **refined & decision-complete; not yet built.** JSON = source of truth for values, CLAUDE.md = source of truth for intent, this file = the agreed build architecture.

## Non-negotiables
- **Server stability wins every tie.** Caps + trickle-spawn + churn are the point.
- **Everything is a 3DEN module field.** No baked classnames/counts/altitudes/radios.
- **Don't reinvent engine/mods.** `BIS_fnc_randomPos`, SAD waypoints, `flyInHeight`; adapt Crows-EW (APL-SA) for jamming/tracking. DDT owns kamikaze/datalink/stealth — untouched.
- **Admit uncertainty.** Anything unconfirmed = flagged test item, never guessed code.

## Location & conventions (decided)
- Two HEMTT addons **in the ghost repo**: `addons/alive_drones`, `addons/electronic_war_zones`.
- Both cloned structurally from `addons/modules` (CfgFactionClasses category, CfgVehicles `Module_F`, CfgEden attribute controls, XEH_preInit PREP, XEH_postInitServer manager; EW also XEH_postInitClient).
- GVAR prefixes: `ghost_alive_drones_*`, `ghost_electronic_war_zones_*`.
- Dependency direction: **`electronic_war_zones` requiredAddons += `alive_drones`** (shares its ceiling + reuses its spawn fn).

## PRIOR ART (adopt) — Crows-Electronic-Warfare (APL-SA) + RadioJammerTFAR
- **Crows-EW** (github Crowdedlight) is **APL-SA — same license as ghost** → we can adapt its code with attribution + share-alike. It already ships proven, graduated TFAR **and** ACRE jamming plus TFAR transmission-tracking. Base Addon 2 on its patterns, trimmed to our BLUFOR-only + drone-dispatch design (drop its Zeus/ZEN module UI). RadioJammerTFAR (Matzenino) = reference only — no LICENSE file, don't copy verbatim.
- **ACRE scope decision:** jamming = **TFAR + ACRE** (both levers below). Tracking/detection = **TFAR only** (Crows' spectrum addon has no ACRE path; matches the user). ACRE PTT-detection is a possible later extension, out of scope now. Detect which is loaded once at init (`isClass (configFile >> "CfgPatches" >> "task_force_radio")` / `"acre_main"`), branch per player.

## TFAR API — VERIFIED (task_force_radio.pbo 620019431 + Crows handler)
- `TFAR_fnc_addEventHandler` sig: `[customID, eventID, code, unit]`; `unit = objNull` → global. Handler runs on the transmitter's OWN client (local radio state). ✅
- **DETECTION EVENT = `"OnTangent"`** (actual PTT press), NOT `"OnSpeak"` (voice-activity). Confirmed payload from `fn_fireEventHandlers`: **`[_unit, _radioClass, _radioType, _additionalChannel, _buttonDown]`** — `_radioType`: **0 = SR, 1 = LR, 2 = underwater**; `_buttonDown`: `true` on key-down/start, `false` on release.
- → **LR-only rule becomes a one-liner:** `if (_buttonDown && _radioType == 1) then {…dispatch…}`. SR (`0`) ignored = always safe. Exactly the user's "LR jammed+tracked, SR safe" — **no classname list, no variant handling, no exempt field.**
- In-handler extras if ever needed: `TFAR_fnc_activeLrRadio`, `tf_range` of its class for power-scaled response. `tf_unable_to_use_radio` is a real all-bands kill (we use graduated multipliers instead).
- **RESOLVED:** the JSON's `exempt_radio_classnames` + 4-radio table are moot (band-based). The "how does TFAR signal SR-vs-LR" test item is answered by `_radioType`.

## Jamming levers — from Crows (adapt, both bands degrade by range, not a hard kill)
- **TFAR** (client-local, per player near a jammer): full-jam inside effective radius `tf_receivingDistanceMultiplicator = 100; tf_sendingDistanceMultiplicator = 1/20;` — outside, linear falloff `rx = [20,1,distPct] call BIS_fnc_lerp; tx = 1/rx`. Skip if a satcom boost var > 1. Reset to 1 when no jammer in range.
- **ACRE** (client-local): full-jam `acre_receive_interference = 200;` inside effective radius; falloff `[110,0,distPct] call BIS_fnc_lerp;` outside; reset 0 when clear.
- **LR-only nuance / TEST ITEM:** TFAR's distance multipliers scale *all* bands by range, not band-selectively. LR-only jamming emerges *in practice* because SR's short base range survives the multiplier while LR dies — Crows relies on this. Confirm the SR-survives-LR-dies balance in-game and tune the effective radius; it is tuning, not a hard band switch.

## Shared airframe ceiling (owned by alive_drones)
- `GVAR(airframeCount)` — server-only truth.
- `[n] call FUNC(reserveAirframes)` → checked increment; returns `true` (committed) if `count+n <= ceiling`, else `false`. **Callers MUST honor false and skip the tick.**
- `[n] call FUNC(releaseAirframes)` → decrement; called from the single killed/despawn/watchdog path.
- Invariant: reserve BEFORE createVehicle; release in exactly one place per airframe.
- Per-type caps (count GROUPS) are separate counters checked alongside the ceiling.

## MP / dedicated-server locality (decided)
- **Server**: fleet mgmt, spawn, caps/ceiling, cleanup, response dispatch, holds the jammer list (broadcast to clients).
- **Client** (XEH_postInitClient, only if `player` is BLUFOR): (a) a client-local PFH runs the **jammer loop** — nearest jammer in range → apply TFAR/ACRE degrade to self, reset when clear (jamming is inherently client-local; server can't set another client's radio vars); (b) register **OnTangent** on local player → on `_buttonDown && _radioType == 1` (LR key), `remoteExecCall` server dispatch with own pos/grid.
- No persistence; module re-inits + re-trickles on restart.

## Recon-as-direction-finder — DECIDED (Option 1)
OnTangent handler always on BLUFOR player clients. An LR key-down is only actioned if an **OPFOR detector — a ground EW zone OR a recon drone — is within detection range of the transmitter**. Recon drones move detection coverage across the map. Server checks detector positions (recon + zones) when deciding whether a key event dispatches. Per-transmitter cooldown throttles waves + de-dups recon-vs-zone overlap.

---

## Addon 1 — alive_drones (build first)

Functions: `fnc_moduleInit`, `fnc_manager` (trickle PFH), `fnc_spawnDrone(type)`, `fnc_localPatrol(drone)`, `fnc_watchdog`, `fnc_lifetime`, `fnc_onKilled`, `fnc_debugMarker`, `fnc_pickMarker`, + `reserve/releaseAirframes`.

- **Attributes** (CfgEden): per-type `class_list`(csv)+`cap`(1–10, GROUPS); `group_size`+`group_chance` (anti_armor/anti_personnel only); `taor_marker`(csv), `altitude_min/max`(m AGL), `side`(enum), `global_airframe_ceiling`, `spawn_interval`(s), `drone_lifetime`(min, 0=off), `debug`(bool).
- **Spawn**: selectRandom class → createVehicle+createVehicleCrew at BIS_fnc_randomPos in a weighted-random TAOR marker → flyInHeight(min..max; rotor low, fixed high) → set side → killed EH → reserve airframe(s).
- **Anchor-loiter**: one anchor per drone via BIS_fnc_randomPos, SAD waypoints within 300–800m of ITS anchor (fixes km-scale transit).
- **Manager (trickle)**: PFH on spawn_interval; per type, if groups<cap AND reserveAirframes(n) → spawn one; backfill on later ticks; never bulk.
- **Grouping**: only anti_armor/anti_personnel roll group_chance→group_size airframes; other four single (cap==airframes).
- **Watchdog**: grounded/motionless > X s → despawn+release+backfill.
- **Lifetime**: flat + jitter, NO reset; expiry → break patrol → nearest map edge → despawn. Mid-fight: finish, then leave.
- **Killed EH**: decrement counters, remove debug marker, fire user's existing wreck cleanup.
- **Debug**: side-colored marker per drone; removed in killed EH; zero cost off.

## Addon 2 — electronic_war_zones (requires alive_drones)

Functions: `fnc_moduleInit`, `fnc_spawnJammer`, `fnc_jammerLoopLocal` (client PFH; nearest-jammer degrade), `fnc_applyInterferenceTFAR`/`fnc_applyInterferenceACRE` (client; adapted from Crows, APL-SA), `fnc_addTangentHandler` (client), `fnc_onTangent` (client; LR-gate + remoteExec), `fnc_dispatchResponse` (server; reuses alive_drones spawn + shared ceiling), `fnc_cooldown`.

- **Attributes**: `taor_marker`, jammer radius range [100,2000] (effective + falloff), response package per-role `count`+`class_list`(csv) (default 2× anti_personnel + 1× anti_vehicle), per-transmitter cooldown seconds. Requires TFAR **or** ACRE (init-time detect; apply whichever the player runs). No exempt-classname field — band-based via `_radioType`.
- **Jammer zone**: random 100–2000m; broadcast to clients. Client PFH finds nearest in-range jammer → graduated degrade of self's radio (TFAR `tf_receiving/sendingDistanceMultiplicator`, ACRE `acre_receive_interference`), reset when clear. LR-only emerges via SR's short base range surviving the multiplier (test item above).
- **Detector**: **OnTangent** on BLUFOR player clients → `if (_buttonDown && _radioType == 1)` (LR key) → `remoteExecCall` server dispatch; SR (`0`) ignored = always safe. Server gates on a detector (zone or recon) within range + cooldown. (TFAR-only — ACRE tracking out of scope.)
- **Dispatch**: server spawns response package 2000m out + 1000m up, vectors to transmitter grid, via alive_drones spawn fn + shared ceiling.
- **Attribution**: adapted interference/jammer functions credit Crowdedlight / Crows-Electronic-Warfare (APL-SA) in headers.

---

## Build sequence & milestones
1. **Shared-ceiling API** (foundation). ✅ BUILT — `ghost_alive_drones_fnc_reserveAirframes` (derived-count gate; registry `GVAR(fleet)` is the single source of truth; reaper is the sole release path).
2. **alive_drones** ✅ BUILT (0/0, `ghost_alive_drones.pbo`) — controller module + trickle manager + reaper (watchdog/lifetime/cleanup) + createDrone/spawnPatrol/localPatrol/returnToEdge + debug markers. **Pending: in-game test** on one TAOR: spread, caps hold, watchdog/lifetime churn, debug markers, side-forcing on UAVs, DDT adoption. *Milestone: soak a long session, confirm no slot leak.*
3. **electronic_war_zones** ✅ BUILT (0/0, `ghost_electronic_war_zones.pbo`) — module + spawnJammers (destructible emitters, jam+detect) + pruneJammers broadcaster + client jammerLoop (TFAR+ACRE graduated interference) + onTangent LR-tracker → CBA serverEvent → onDetection (side/cooldown/detector gate) → dispatchResponse (reuses alive_drones createDrone + reserveAirframes + registerGroup) + hasDetector (emitter or recon-drone in range). **Pending: in-game test** — 2 players, key up SR vs LR, confirm squad-net survives + LR jammed/hunted only when a detector is in range; emitter-kill silences a zone; ACRE numbers read as jammed. *Milestone as before.*
4. **Dedicated-server integration**: startup with ALiVE (no trickle spike during ALiVE init), long soak.

## Open test items (do NOT silently resolve)
- **[TUNING] SR-survives / LR-dies balance.** TFAR distance multipliers hit all bands by range; LR-only-jamming is emergent (Crows relies on it). Verify in-game + tune effective radius so squad SR stays usable while LR is killed.
- DDT Infoshare adoption of script-spawned UAVs — verify empirically; build assuming NO.
- ACRE jamming numbers (`acre_receive_interference` 200 full / 110→0 falloff) are Crows' values — confirm they read as "jammed" on our ACRE build.
- Recon-drone as OnTangent detector: confirm a client-local handler can attribute a key event to a recon bird's coverage (server-side range gate against broadcast recon positions — no per-drone handler needed).

## RESOLVED (was open)
- ~~SR-vs-LR detection mechanism~~ → TFAR `"OnTangent"` `_radioType` (0 SR / 1 LR).
- ~~4 TFAR radio classnames / exempt list~~ → moot; band-based, no classnames.
- ~~RadioJammerTFAR jam lever~~ → superseded by Crows graduated TFAR **+ ACRE** levers (APL-SA, adaptable).
- ~~ACRE jamming feasibility~~ → in scope, `acre_receive_interference` (Crows path).
