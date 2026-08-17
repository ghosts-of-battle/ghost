# Smoke test

**§11.3 of the Part 4 design, and the acceptance test for everything that build
produced.** Nothing else should be planned until this has run.

One module = one system, each in its own addon. A Type dropdown hiding
several systems is the mistake this layout replaced.

Roughly twenty minutes to build, twenty to walk.

---

## Why a checklist and not a `.sqm`

A `mission.sqm` written blind is one syntax error away from not opening at all,
and module attributes are stored in a shape that has to be right first time. A
mission you build in Eden in ten minutes cannot fail that way, and you will know
what is in it.

If you would rather have the `.sqm`, say so — but build this one first, because
the point is to get code running today.

---

## Build it

Terrain: anything ALiVE has indexed. **Tanoa** matches the dev mission already
in use.

### 1. ALiVE

| Place | Set |
|---|---|
| ALiVE Required | — |
| ALiVE Virtual AI System | — |
| ALiVE Data | Only if testing persistence |
| Military AI Commander | Conventional. Faction: an OPFOR one |
| Military AI Commander | **Asymmetric.** Faction: an Independent one |
| Military Placement (Mil. Obj.) | One per commander |
| Civilian Placement + Civilian Population | Needed for traffic, cells and terror |

Pin a **`v3.x` tag** of ALiVE.OS. Not the `Release` branch — it is 1.14 from
2021.

### 2. Ghost — the two mandatory modules

| Place | Set |
|---|---|
| **Ghost - Core** | Player Side = **BLUFOR**. Debug Log = **On** |
| **Ghost - Enemy** | Side = **OPFOR**. Debug Log = **On** |
| **Ghost - Enemy** | Side = **Independent**. Debug Log = **On** |

**Two Enemy modules is the point** — one hostile side each.

Synchronise to Core:

- both ALiVE commander modules

Player combat support is **ALiVE's** — if you want it in the walk, place
ALiVE's Player Combat Support module and sync aircraft to that, as in any
ALiVE mission. Ghost has no support system of its own.

### 3. The rest, one of each

| Place | Set |
|---|---|
| **Ghost - Force** | Type = *Enemy Force Director*. Faction: OPFOR |
| **Ghost - Force** | Type = *Drones: patrol a TAOR*. TAOR = a marker you drew |
| **Ghost - Air Defence Site** | Sync a radar + 2 launchers |
| **Ghost - Civilian Route** ×2 | **Synced to each other** |

### 4. Enemy air (note 7)

Phase 5 is deferred, so ghost does not fly for ALiVE. Seed MACC directly:
on the **Military Air Component Commander**, use its own `placeDrones`,
`droneTypes` and `useUAVs` attributes. Drone-only air components are valid
upstream. Drones fly **Recce** (commander-sync-gated) and never CAP.

---

## Walk it

### Step 1 — startup report (before you move)

Open the RPT. You are looking for one block per module.

```
[ghost] Ghost - Core online - 6 of 6 subsystem(s) live
[ghost]    hacking              ON
[ghost]    intel pool           ON
[ghost]    intel hunt           ON
[ghost]    civilian traffic     ON
[ghost]    threat board         ON   players are WEST
[ghost]    ALiVE scoping        ON   2 commander(s) synced

[ghost] Ghost - Enemy (EAST) online - 4 of 4 subsystem(s) live
[ghost]    counter-battery      ON   hunting WEST
[ghost]    EW net               ON   hunting WEST
[ghost]    objective watch      ON   answers WEST captures
[ghost]    insurgency           ON   traces for WEST

[ghost] Ghost - Enemy (GUER) online - 2 of 4 subsystem(s) live
[ghost]    counter-battery      ON   hunting WEST
[ghost]    EW net               OFF  single system, owned by the EAST module
[ghost]    objective watch      ON   answers WEST captures
[ghost]    insurgency           OFF  single system, owned by the EAST module
```

| Check | Pass |
|---|---|
| Three blocks appear | ☐ |
| Both Enemy modules hunt **WEST** — side derivation works | ☐ |
| The second Enemy reports the two singletons as **owned**, not silently dead | ☐ |
| `[ghost_counter_battery] (EAST)` and `(GUER)` lines are distinguishable | ☐ |
| No `NO Ghost - Enemy module placed` warning | ☐ |
| Adapter logs its ALiVE capabilities once | ☐ |

**This step alone validates the riskiest change in the build.** If the side
derivation is wrong, everything downstream is wrong.

### Step 2 — Force dispatcher

Four controllers now sit behind one dropdown; this is the second-riskiest thing.

| Check | Pass |
|---|---|
| The *patrol* Force spawns drones over its TAOR | ☐ |
| The *director* Force logs a tick with temperature and power | ☐ |
| Neither warns about a missing addon | ☐ |

Then transmit on a long-range radio inside the EW net for ~30 s:

| Check | Pass |
|---|---|
| A contact appears on the threat board | ☐ |
| It reaches the device contact list with an error and an age | ☐ |
| The director escalates a rung (RECON first) | ☐ |
| The adapter cues an OPCOM objective and profiles re-task | ☐ |

### Step 3 — Air Defence Site

| Check | Pass |
|---|---|
| The site adopts the synced radar and launchers — nothing spawns beside them | ☐ |
| Roles you did not sync are filled in (a command post appears) | ☐ |
| Killing the search radar drops readiness and announces it | ☐ |

### Step 4 — cells, traffic, deception

These have no prior art in the mod. Expect problems here first.

| Check | Pass |
|---|---|
| Cells form where the population is hostile | ☐ |
| Each cell gets a leader **promptly** — not after the 30 min gap | ☐ |
| Trucks run between settlements | ☐ |
| Searching a truck gives a result and a hostility tick | ☐ |
| Killing a leader cuts the ledger and a successor rises after the gap | ☐ |

### Step 5 — counter-battery split (D62, decided from source)

The split is by construction: ALiVE's `mil_artillery` CB only tracks profiled
AI guns (its watcher exits on anything without a `profileID`); ghost's radar
only tracks **player-crewed** guns (`fnc_onFired` gate). Verify both halves:

| Check | Pass |
|---|---|
| Fire repeatedly from a **player-crewed** gun → ghost's reply lands where you WERE | ☐ |
| An **AI** battery firing draws no ghost reply (RPT shows no ghost track for it) | ☐ |
| With `mil_artillery` CB on, one AI volley never buys **two** replies | ☐ |

### Step 6 — ARTY_REQUEST (note 5)

Turn on `Request Air on Tight Fixes` and get a tight fix, or trigger a fires
request.

| Check | Pass |
|---|---|
| The request resolves a fix to a **profile ID** — no profile means no request | ☐ |
| It cannot target a player | ☐ |
| Side scope is respected | ☐ |
| Queue cap 12, silent drop beyond | ☐ |
| The min-contacts gate holds | ☐ |

Confirm this matches the `ghost_fires_requested` row in the Part 4 contract
table. If the code and the row disagree, **the row is right** — it was verified
against source.

---

## What "pass" means

Not "the feature is good". Only **"the code executed and did roughly what it
claims"**. Tuning comes after something has run.

Log anything that fails with the module, the RPT line and what you expected.
The startup report is the first place to look every time — *not configured* and
*not working* look completely different there, which is what it is for.
