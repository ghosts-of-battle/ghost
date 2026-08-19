# CLAUDE.md — Drone + EW Suite

Project context for Claude Code. Read this first; pull exact numbers, defaults, and TFAR classnames from `drone_ew_spec.json`.

**Author:** Ghosts of Battle (GhostFA)
**Target:** Arma 3 — ALiVE battlefield on a self-hosted Pelican dedicated server.
**Status:** fully specced, nothing built yet. Build `alive_drones` first (the EW addon depends on its recon drones and shares its airframe ceiling).

---

## What we're building and why

Two Arma 3 addons that make an ALiVE battlefield feel drone-saturated and electronically contested, without crashing a long-running dedicated server. **The overriding constraint is server stability** — every design choice below exists to keep the battlefield busy while capping the airframe load. When in doubt, favor the choice that protects the server.

Guiding rules for how you write this:
- **Everything is a 3DEN module variable.** Nothing hardcoded — classnames, counts, altitudes, ranges, radios. If you're tempted to bake a value in, make it a module field instead.
- **Don't reinvent what the engine or existing mods already do.** Lean on `BIS_fnc_randomPos`, SAD waypoints, `flyInHeight`, group-shared target knowledge, and existing TFAR-jammer prior art. Keep the custom code thin.
- **Prefer admitted uncertainty over invention.** If a TFAR/DDT behavior isn't confirmed in the spec, flag it as a test item — don't guess an API and write code around a guess.

---

## The two-layer picture (important mental model)

There are three drone layers on the battlefield; **you only build two of them:**

1. **DDT layer (do NOT build).** Drongo's Drone Tweaks already makes ground AI auto-launch recon/FPV/grenade drones on contact, and owns their *behavior* — kamikaze dive-attack, its Infoshare datalink, small-drone stealth. This runs for free underneath everything. Never re-implement kamikaze logic or a datalink; DDT owns those.
2. **`alive_drones` (BUILD).** A persistent layer of *standalone patrol UAVs* — no operator, spawned by our controller across a map area. This is self-sufficient and has **no hard dependency on DDT**. If our UAVs happen to get adopted by DDT's Infoshare, that's a bonus, not a requirement — treat it as unverified.
3. **`electronic_war_zones` (BUILD).** An OPFOR-side EW layer that jams and hunts **BLUFOR** radio traffic.

---

## Addon 1 — `alive_drones`

One controller module, placed against an ALiVE **TAOR area marker**. It spawns and manages standalone patrol UAVs.

**Six drone types**, each with a comma-separated **class list** (pick one at random per spawn) and a **cap dropdown (1–10) that counts GROUPS**: anti-air, anti-armor, anti-personnel, loiter-fixed, loiter-rotor, recon. Only **anti-armor and anti-personnel** spawn as a group (on a chance roll, with a variable group size); the other four are single, so for them cap == airframes. Exact defaults live in the JSON.

**Spreading drones across the marker — the key technique.** Don't give every waypoint a fresh random point across the whole marker; on a km-scale TAOR that leaves drones in permanent transit. Instead: roll ONE anchor per drone via `BIS_fnc_randomPos` in the marker, then generate that drone's SAD waypoints within ~300–800 m of its anchor. The fleet spreads across the zone; each drone works a local patch.

**Server-safety systems (the whole point):**
- **Per-type caps count groups; a single global airframe ceiling counts total airframes** across all types and is the hard crash guard. The EW addon's drones count against this same ceiling.
- **Trickle-spawn:** add one drone per interval up to cap and backfill slots on that interval — never spawn the whole population at once (that's the worst load spike, right as ALiVE is also initializing).
- **Stuck-drone watchdog:** if a drone is grounded/motionless for X seconds, despawn and replace it, so bugged airframes stop holding cap slots on a long session.
- **Lifetime = flat + grace, no reset.** Each drone has a fixed lifetime; on expiry it flies off the nearest map edge and despawns, freeing its slot. Do NOT reset the timer on kills/engagement — that makes effective drones immortal and kills churn. The *only* nuance: if it's mid-engagement when the clock runs out, let it finish that fight, then leave. Add small random jitter so drones don't all age out together.
- **Wreck cleanup** is already handled by the user's existing cleanup path — just fire the kill/despawn.

**Debug toggle (default off):** drop a side-colored map marker on every spawned drone so you can confirm it spawned and see where it is; remove it on death via the same killed eventhandler used for counting.

---

## Addon 2 — `electronic_war_zones`

OPFOR-side EW layer, spawned against TAOR markers. **It hunts BLUFOR only** and, because it works off TFAR's speak event, it detects **player** transmissions (AI don't key TFAR) — so it's fundamentally a *comms-discipline* mechanic: sloppy BLUFOR radio use gets punished.

**Two zone types:**
- **Jammer** — random 100–2000 m radius; sets `tf_unable_to_use_radio` on BLUFOR players inside, restores on exit/death. Reuse existing RadioJammerTFAR prior art rather than writing jamming from scratch.
- **Detector → drone response** — uses TFAR's `OnSpeak` event (via `TFAR_fnc_addEventHandler`) filtered to BLUFOR. On a non-exempt key-up, spawn a response package 2000 m out and 1000 m up and vector it to the transmitter's grid. The **package is variable** (count + class list per role; default 2 anti-personnel + 1 anti-vehicle).

**Recon feeds the response (unified find→dispatch).** The recon drones from Addon 1 carry the same OnSpeak detector, making them mobile direction-finders — a recon detection dispatches the package. A **per-transmitter cooldown** throttles repeat waves and doubles as de-duplication when a recon bird and a ground zone hear the same transmission.

**Radio exemption (LPI model) — implement carefully:** a module field holds a comma-separated list of exempt radio classnames, defaulting to `tf_rf7800str` (the RF-7800S-TR squad radio). The exemption check must happen **on the transmitter's own client inside the OnSpeak handler** (where radio state is local): read the active radio (`TFAR_fnc_activeSwRadio` / `TFAR_fnc_activeLrRadio`), and if it's in the exempt list, return *before* the client→server `remoteExec` that spawns drones. Result: the short-range squad net is safe, while the higher-power sets (PRC-152 5 km, RT-1523G 20 km, ARC-210 40 km) get you hunted — detectability scales with transmit power. Exact classnames are in the JSON.

---

## Open / to-verify (don't silently resolve these)

- Whether a script-spawned standalone UAV is actually adopted by DDT's Infoshare — verify against the DDT readme or by testing. It's a bonus bridge, not a dependency; build assuming it may not work.
- Group size and group-chance % for anti-armor/anti-personnel are left as module fields — expose them, don't pick values.
- The TAOR marker field should accept one or several markers.

---

## Where the exact values live

`drone_ew_spec.json` (same folder) is the machine-readable companion: every module variable with its type and default, the drone-type/cap table, and the full TFAR variable + classname reference. This file tells you *how to think about the build*; the JSON gives you *the exact numbers*. When they ever seem to disagree, the JSON is the source of truth for values and this file is the source of truth for intent.
