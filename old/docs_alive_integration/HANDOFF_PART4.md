# Handoff — DESIGN_INTEL_SYSTEM Part 4 build

**For the planning agent.** Written 2026-08-07 at the end of the build session
that executed §11.1 end to end, then the follow-up that actioned the design
session's notes.

Read **[DESIGN_INTEL_SYSTEM_PART4.md](DESIGN_INTEL_SYSTEM_PART4.md)** first — it
is the design, and it now carries the corrections this build forced (§1.1, §4,
§11.4 pre-work findings, §11.5 build log, D55–D62) plus the design session's own
`ghost_fires_requested` contract row. `work.md` is a pointer to it.

---

## 1. Status

| | |
|---|---|
| Build order §11.1 | **All nine steps executed** |
| Pre-work §11.2 | **Done**, five findings, two changed the plan |
| Smoke-test mission §11.3 | **Not done** — the one remaining item |
| Verification in game | **None.** Not one line of this has executed |
| `python tools/check_all.py` | Clean, including after every intermediate step |
| Totals | 102 addons, 9 optionals, 174 settings, 5 Eden modules, 598 functions |

**The single most important fact for planning: none of this has run.** ~600
functions and five new addons were written, checked and never executed. Treat
every behavioural claim below as "implemented as designed", not "observed".

---

## 2. What was built

### New addons

| Addon | What it is |
|---|---|
| `ghost_adapter_alive` | The only code that knows ALiVE exists. Capability gate, §3.2 event contract, §3.3 data reads, persistence. |
| `ghost_insurgency` | The people layer, split out of the old bridge. Cells, leaders, chart, biometrics, succession, regeneration, terror. |
| `ghost_traffic` | Civilian truck routes, contraband, search consequences. |
| `ghost_deception` | Poisoned intel and trapped buildings. |
| `ghost_enemy_force` | The escalation-ladder commander. |
| `ghost_iads` | Air defence as a node network; also hosts `Ghost - Emplacement`. |
| ~~`ghost_friendly_ops`~~ | **DELETED (D63, 2026-08-07).** It duplicated ALiVE's Player Combat Support (`sup_combatsupport` — the NEO radio — plus `sup_player_resupply`), which the user's missions already place. Its Support:* attributes were stripped from Core. Player combat support is ALiVE's; any ghost support UI must be a front end on `ALIVE_fnc_radioAction`/`NEO_radioLogic` via the adapter, never a second engine. |

`addons/alive` was **deleted** — split into the adapter and the insurgency layer.

### Architectural invariant now enforced

§3 required one addon to know ALiVE exists. It is checkable, and it holds:

```
grep -rn "ALiVE_fnc_|ALIVE_fnc_|OPCOM_instances|ALIVE_eventLog|ALIVE_profile|
          ALIVE_clusters|ALIVE_sys_data|ALiVE_SYS_" addons/ | grep -v adapter_alive
→ NONE
```

Eight feature addons were reaching into ALiVE directly and were rerouted through
the contract. **This grep is worth keeping as a regression test.**

---

## 3. Deviations from the design, all D-numbered

The planner should treat these as amendments already made, not proposals.

| D | Change | Why |
|---|---|---|
| §1.1 | Pin a `v3.x` tag, **not** the `Release` branch | `Release` last moved 2021-05-07 and is ALiVE **1.14.2**. Pinning it contradicts "builds ON ALiVE 3" in the same sentence. |
| D55→**D58** | Module classes: 3 → 4 → **5** | Three could not hold Drone Ops / Force Director / wave spawner. Four then collapsed the per-side systems onto one module — a regression. Final: Core / Enemy / Site / Emplacement / Force. |
| D56 | Ambient strikes **kept** as a Force type | Supersedes §1.3's retirement. The delivery arsenal still serves Objective Watch and traps as intended. |
| D57 | Clean break, **no compat shims** | Supersedes §4.4. Established that no `mission.sqm` depends on the old classes. |
| D59 | One Enemy per hostile side; its Side + Core's Player Side derive all five subsystem side fields | Those four systems asked for a side five times between them. |
| D60 | EW net and insurgency stay **single-instance** | Counter-battery and objective watch genuinely run per module; EW and insurgency keep global side state. |
| D63 | `ghost_friendly_ops` **deleted** | It remade ALiVE's Player Combat Support. The rule, now standing rule 1 in the user's words: **if ALiVE does it, we enhance it, we never rebuild it.** Same rule closed D61 (IEDs). |
| D62 | Counter-battery **split by construction** | ALiVE's `mil_artillery` CB watcher exits on guns without a `profileID` — blind to players, owns AI guns. Ghost's radar now gates on a player in the crew (`counter_battery/fnc_onFired`): it covers exactly the half ALiVE cannot see, and one AI volley no longer buys two replies. Decided from source; smoke-test step 5 now verifies the split instead of producing the observation. |

---

## 4. Pre-work findings that constrain future work

Full detail in the design's §11.4. The two that matter most for planning:

**Cluster hostility is NOT in ALiVE's save.** It is a runtime key on the cluster
hash; clusters rebuild from a static index each start; `amb_civ_population` has
no Save/Load pair. The adapter snapshots it — the one ALiVE-owned value ghost
persists, exactly as §3.4 anticipated. **If a future ALiVE ships its own, delete
`fnc_snapshotHostility` and the setting.**

**Terror-attack delivery is richer than assumed.** `amb_civ_command` already
ships `cc_suicide`, `cc_suicideTarget`, `cc_rogue`, `cc_rogueTarget`,
`cc_sabotage`, `cc_getWeapons` with per-posture probabilities. Ghost issues
these rather than spawning, which satisfies standing rule 3 for free. Any future
"enemy does X to the population" feature should look here first.

**The PDO queue is master-only**, and `reorderObjective` is a clean capability
flag for it. Ghost's 10-param `addObjective` is valid on both branches, so the
gate only decides whether cues can jump the queue.

---

## 5. Known limitations — deliberate, not oversights

1. **EW and insurgency are singletons.** With two Enemy modules the second
   reports `single system, owned by the EAST module`. Making them per-side means
   moving `GVAR(huntedSide)`/`GVAR(droneSide)` and the whole network/cells store
   off globals. **This is the largest outstanding refactor.**
2. ~~`ied`~~ — **D61 CLOSED.** IED caches belong to ALiVE's IED system; ghost does
   not remake existing ALiVE systems. The adapter no longer reads the type and
   the trace pool no longer ranks it.
3. **§7.4 dismantle is spec-only**, waiting on the upstream
   `assymetric-installations-dismantling` branch. Both it and
   `roadblock-dismantling` are live upstream.
4. **Phase 5** (ghost drones servicing ATO requests) not started, by design.
5. **The device shows contacts and the link chart** but there is no unified
   two-picture UI beyond that.

---

## 6. Bugs found and fixed during the build

Worth knowing because several were pre-existing and one class of them will recur.

**Pre-existing, found by the tech-debt audit:**
- EW prune deleted every *abstract* zone on its first tick (`objNull isKindOf
  "Object"` is false) — killed base-defense's EW bubble and hack-failure zones.
- Hunter-follower PFH leaked forever; every dead wave left a permanent 15 s
  `allPlayers inAreaArray`.
- `jamFactor` used 3-D distance, making the `jamUavs` flag unreachable for
  anything with altitude.
- Anti-ship ran `nearestObjects` with an **empty type filter** at 12 km per tick.
- `back_to_game` never called `deletePlayerData`, so reconnect data accumulated
  and a second reconnect restored the *first* disconnect's position.

**Introduced and caught during this build:**
- Double-cueing: the old bridge and the new adapter both listened on the contact
  bus — every contact would have produced two objectives.
- `enemy_force/fnc_commit` called the old 4-arg `cueObjective`; would have passed
  the string `"director"` as a confidence value.
- A brand-new cell waited the full **leaderless gap (30 min)** for its *first*
  leader; the gap is meant to apply only after one is killed.
- `str independent` returns `"GUER"`, which is not valid SQF — the EW net would
  have compiled its hunted side to nil and hunted nobody, silently.
- 17 Core attributes lost their system prefix because the merge's regex only
  matched comma-free `AEDIT` defaults.

**Recurring class to watch:** config macros break on **commas and quotes inside
arguments**. It bit `groupConfig` (a CfgGroups path), three attribute defaults,
and `INFO_1` with an inline `getVariable`. Any new macro-heavy config should be
checked for it.

---

## 7. Documentation state

| File | State |
|---|---|
| `docs/DESIGN_INTEL_SYSTEM_PART4.md` | Design + corrections + §11.4 pre-work + §11.5 build log + D55–D62. **Authoritative.** |
| `work.md` | Pointer to the above. Two divergent copies of a design is the failure the docs setup exists to prevent. |
| `docs/SMOKE_TEST.md` | **New.** The acceptance walk-through. Run this next. |
| Parts 1–3, PLAN, TODO | **Superseded banners added.** Not silently fixed. |
| `docs/SETUP.md` | **New.** Mission-maker guide for the five-module layout. |
| `docs/SETUP_HACKING.md` | Rewritten — it described three modules that no longer exist. |
| `docs/ADDONS/SETTINGS/MODULES.md` | Regenerated. |
| 111 × `addons/*/README.md` | **New.** Hand-written intro above a marker, generated facts below. |

New tooling: `tools/gen_addon_readmes.py`, `tools/check_readmes.py` (wired into
`check_all.py`, fails on drift).

**Other `docs/DESIGN_INTEL_SYSTEM*.md` and `TODO.md` predate this session and
have not been audited.** They likely contain stale module references.

---

## 8. Design-session notes actioned (2026-08-07, later)

| Note | Outcome |
|---|---|
| 1 · smoke test + per-module debug | `docs/SMOKE_TEST.md` written. Per-module debug verified already flowing (CB and objective watch read it off their own logic); both now stamp the owning Enemy's side into their log lines, so two enemies hunting the same side are distinguishable |
| 2 · adapter grep permanent | `tools/check_invariants.py`, wired into `check_all.py`. **Fails the build**, does not warn |
| 3 · protect D59 | Same tool enforces it. Found and removed a **dead `capture_side` attribute** on Enemy that `fnc_moduleEnemy` was overwriting anyway. Three legitimate non-allegiance side fields allowlisted with reasons |
| 4 · `ied` | **D61 closed by the user: ALiVE's, not ours.** Removed from `ASYM_INSTALLATION_TYPES` and from the trace pool's reveal priority |
| 5 · `ghost_fires_requested` | The contract row was in the design agent's copy only. **Merged.** Exercised in smoke-test step 6 |
| 6 · counter-battery ownership | Recorded as **D62, open**, with smoke-test step 5 written to produce the observation it needs |
| 7 · MACC seeding | In the smoke test's build section |
| 8 · stale design docs | Superseded banners on Parts 1-3, PLAN and TODO. Not silently fixed |
| 9 · pre-work mandatory | Now **standing rule 9** in the design; rule 10 restates the module-count rule |

**Two copies of the design had diverged** — `work.md` (my corrections) and
`docs/DESIGN_INTEL_SYSTEM_PART4.md` (pristine, filed by the design session,
plus the new `ghost_fires_requested` row). Merged into the `docs/` copy, which
now lives beside its siblings and is authoritative. `work.md` is a pointer.

---

## 9. Recommended next steps

1. **Build the §11.3 smoke-test mission.** It is the acceptance test for
   everything above and the config-rule proof. Nothing else should be planned
   until something has run.
2. **Then verify in this order** — riskiest first: the Force dispatcher (four
   controllers behind one dropdown), Core + Enemy startup and the side
   derivation, then the cell/deception layers, which have no prior art in the
   mod at all.
3. ~~Decide the `ied` question~~ — closed (D61). ~~Counter-battery ownership~~ —
   closed from source (D62). Player combat support — closed (D63, deleted).
4. **Only then** consider making EW and the insurgency per-side.

One process note: this session repeatedly found that a design clause was wrong
only when the code met it. The pre-work pass in §11.2 was worth several times its
cost and should be a standing requirement for any part that integrates upstream.
