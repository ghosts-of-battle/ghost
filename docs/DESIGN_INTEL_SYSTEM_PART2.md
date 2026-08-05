# Ghost Intel System Rework — Part 2: Objective Watch

Companion to `DESIGN_INTEL_SYSTEM.md` (Part 1). Same repo, same rules:
architecture rule A (ghost-native, framework-agnostic, ALiVE only ever an
`isNil`-guarded optional bridge), settings policy (all tuning as module
attributes, no new CBA settings), marker/notification conventions, and the
requirement to re-run `tools/gen_docs.py` after all changes. Open decisions
continue Part 1's table as D20+ (§6) — implement defaults, flag deviations.

Scope of this doc: **item 10 — Objective Watch**, a capture-detection
module with two payoffs: a 3/2/1 countdown via the ghost notification
system, and a heavy counter-barrage on the objective through the existing
ambient_arty fire path.

New addon suggested: `objective_watch` (or fold into an existing systems
addon if repo conventions prefer — **[DISCOVER]** how single-module addons
like `ambient_arty` are structured and mirror that).

---

## 1. Capture detection

Eden module `ghost_moduleObjectiveWatch`, one per objective. Position =
the objective. Optionally synchronize an **area marker** (or set a marker
name attribute — match how other ghost modules take markers,
**[DISCOVER]** `taor_marker` handling in ambient_arty/drones) to define
the objective's footprint.

An objective is **captured** when, continuously for `hold_time` seconds:

- at least `min_players` players of `capture_side` are inside
  `capture_radius` of the module, AND
- zero enemy units are inside `capture_radius`.

Enemy presence uses the Part 1 dual scan (§2a of Part 1): entity scan
always (`allUnits`/`allGroups` filtered by side + distance); if ALiVE is
loaded, also count **virtualized** enemy profiles in radius via
`ALIVE_fnc_getNearProfiles` — a despawned garrison still contests the
objective until players get close enough to spawn and destroy it.

Server-side check loop: slow CBA PFH (tick ~5 s) per module instance; a
hold streak resets whenever either condition breaks. On capture: fire the
internal event (§2), start cooldown, keep watching — the objective can be
recaptured (by either side if `capture_side` is "ANY", see attributes).

**AI captures are out of scope for v1 (D25).** ALiVE raises a real event for
them (`TACOM_ORDER_COMPLETE` on `ALIVE_eventLog`) and a bridge could be listened
in later, but the feature as asked for is a reaction to *players* taking an
objective. Because §2 raises a plain CBA event, adding an AI bridge afterwards
means writing one function that fires the same event - no change to detection or
to the payoff.

Note what this does NOT remove: the dual entity/profile scan stays. A virtualized
ALiVE garrison inside the radius still **contests** the objective and blocks the
capture; it simply cannot capture one itself.

## 2. Internal capture event

On capture, raise a CBA event (server): `"ghost_objective_captured"` with
`[_module, _capturingSide, _objectivePos, _radius]`. The countdown/barrage
payoff (§3) subscribes to it; future payoffs (tasks, intel grants, front
line logic) hook the same event without touching detection code. Also
`diag_log` one line per capture per the repo's log convention.

## 3. Payoff: countdown + counter-barrage

On `ghost_objective_captured`, if `barrage_enable` and the module's
cooldown has expired and `random 100 < barrage_chance`:

1. Roll impact time once: `_t0 = time + barrage_delay + (barrage_jitter -
   random (2 * barrage_jitter))` — i.e. 180 s ± 30 s with defaults.
2. **Countdown, capturing side only** (D22): ghost notification system
   (**[DISCOVER]** the notification function in media/common — reuse, do
   not build a new one) at fixed marks regardless of jitter:
   - immediately: "ENEMY ARTILLERY INBOUND — 3 MINUTES"
   - at +60 s: "2 MINUTES"
   - at +120 s: "1 MINUTE"
   The warnings are honest about the nominal time; the actual impact
   floats inside the jitter window by design.
3. At `_t0`: fire a **saturation barrage on the objective footprint**.

   This is deliberately *not* the ambient artillery feature (D37). Ambient
   arty is a slow atmospheric drip — a few rounds, on a random building, in
   its own TAOR, on its own timer. The objective barrage is the opposite: a
   heavy concentrated shoot on one known point, triggered by a player action,
   and it must work on a mission with **no `ambient_arty` module placed at
   all**.

   The two share exactly one thing: the low-level round-spawning helper,
   extracted to `ghost_common_fnc_fireBarrage
   [_pos, _rounds, _dispersion, _shell, _window]` (P1 §9's shared-plumbing
   rule). After the extraction `ambient_arty` and `objective_watch` are peers
   that both call it; neither requires the other's module, TAOR marker, timer
   or target selection. Nothing about ambient arty's `taor_marker` or
   `min_dist`/`max_dist` applies here — the target is the objective, full stop.

   Rounds land spread across `barrage_window` seconds (the helper derives the
   per-round gap from `rounds` and `window` rather than a fixed constant), so
   the shoot is sustained rather than an instant dump. Virtual origin, no
   physical battery; `barrage_side` used for kill attribution where the engine
   allows.

4. Dispersion radius, first match wins:
   1. synced/named area marker → marker size (major axis);
   2. ALiVE loaded **and** an ALiVE objective lies within
      `capture_radius` → that objective's stored size (`isNil`-guarded);
   3. `barrage_dispersion` attribute if > 0;
   4. default **150 m**.
5. Start `barrage_cooldown`. Recaptures during cooldown still fire the
   §2 event (other payoffs may care) but skip the barrage.

The barrage targets the objective **area**, not tracked players — rounds
land per dispersion regardless of who is standing there. That is the
mechanic: take it, hear the warning, displace.

## 4. Module attributes

| Attribute            | Type   | Default | Meaning |
|----------------------|--------|---------|---------|
| `capture_side`       | STRING | "WEST"  | Side whose presence captures; "ANY" = both sides can flip it (D23) |
| `capture_radius`     | NUMBER | 200     | Detection radius (m); marker size overrides if synced/named |
| `min_players`        | NUMBER | 1       | Players required inside |
| `hold_time`          | NUMBER | 60      | Continuous seconds both conditions must hold |
| `marker`             | STRING | ""      | Optional area-marker name defining footprint |
| `barrage_enable`     | BOOL   | true    | Payoff master switch |
| `barrage_chance`     | NUMBER | 100     | % roll per capture (D21) |
| `barrage_delay`      | NUMBER | 180     | Nominal seconds to impact |
| `barrage_jitter`     | NUMBER | 30      | ± seconds on actual impact |
| `barrage_rounds`     | NUMBER | 24      | Round count - a heavy fire mission on the objective (D37) |
| `barrage_window`     | NUMBER | 60      | Seconds the rounds are spread across |
| `barrage_shell`      | STRING | (155mm HE class — **[DISCOVER]** ambient_arty's default) | Shell class |
| `barrage_dispersion` | NUMBER | 0       | 0 = auto cascade (§3.4); >0 = fixed radius |
| `barrage_side`       | STRING | "EAST"  | Notional firing side |
| `barrage_cooldown`   | NUMBER | 900     | Seconds before this objective can be shelled again (D24) |
| `debug`              | BOOL   | false   | Log capture-condition state; debug marker on the footprint |

## 5. Files summary

```
addons/objective_watch/
    config.cpp                       (module class ghost_moduleObjectiveWatch,
                                      category with other ghost modules)
    fnc_moduleInit.sqf               (attribute read, PFH registration)
    fnc_checkCapture.sqf             (dual-scan condition, hold streak, event)
    fnc_barrage.sqf                  (countdown scheduling + fire call)
addons/common/fnc_fireBarrage.sqf    (if extracted per §3.3)
addons/ambient_arty/...              (edit only if extracting the fire path)
stringtable.xml                      (countdown notification texts)
```

Re-run `tools/gen_docs.py`; MODULES.md gains the new module + attributes.

## 6. Decision table (continues Part 1)

| # | Decision | Default |
|---|----------|---------|
| D20 | Capture definition | Presence + zero enemies, held `hold_time`, dual entity/profile scan |
| D21 | Barrage frequency | Every capture, `barrage_chance` 100, gated by cooldown |
| D22 | Countdown audience | Capturing side only |
| D23 | Recapture direction | `capture_side` attr; "ANY" supported but default one-side |
| D24 | Barrage cooldown | 900 s per objective |
| D25 | AI-capture bridge | **Not in v1.** Player captures only. The `ghost_objective_captured` event means it can be added later without touching detection |
| D26 | Fire path | Extract ambient_arty's round-spawner to ghost_common; no new artillery system |
| D37 | Barrage vs ambient arty | **Separate feature.** Shares only the extracted spawner. Heavy (24 rnd over 60 s default) on the objective footprint, works with no ambient_arty module placed, ignores its TAOR/timer entirely |

## 7. Acceptance checklist

- [ ] No ALiVE: players holding the radius with no enemies for
      `hold_time` → capture event, countdown notifications at 0/60/120 s
      to capturing side only, rounds land `barrage_delay`±`barrage_jitter`
      later, dispersed per the cascade; enemy side sees no notifications.
- [ ] Enemy unit wandering in mid-hold resets the streak.
- [ ] ALiVE loaded, garrison virtualized beyond spawn range but inside
      `capture_radius` → objective NOT capturable until the garrison is
      spawned and destroyed.
- [ ] Synced area marker → dispersion visibly matches marker size.
- [ ] Immediate recapture inside `barrage_cooldown` → event fires, no
      second barrage; after cooldown → barrage fires again.
- [ ] Mission with **no `ambient_arty` module placed**: capture still
      produces the full barrage on the objective.
- [ ] Barrage is visibly heavy and sustained - `barrage_rounds` land
      spread over `barrage_window`, concentrated on the footprint, not
      scattered across an ambient TAOR.
- [ ] `gen_docs.py` re-run; docs committed.
