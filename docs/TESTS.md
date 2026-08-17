# Test plan — docs/new.md §9, steps 1-6

**Only slice zero has ever run.** Everything else below is unexecuted code.
Work down in order: each test assumes the ones above it passed, because a
failure high up makes everything under it meaningless.

Every check has a **fail meaning** — what it tells me if it does not do that.
Paste the RPT lines for anything that fails; the log line is worth more than
a description.

---

## Mission setup

| Place | Why |
|---|---|
| ALiVE Required + Virtual AI System | everything |
| **Military AI Commander** — conventional (occupation *or* invasion) | steps 1-5 |
| **Military AI Commander** — asymmetric | leaders, safe houses, QRF's mortar branch |
| **Military Placement** synced to each commander, with a TAOR marker | every TAOR read |
| ALiVE **artillery** module for a conventional side, with a battery in range | fire requests |
| A `ghost_prison` marker where you will hold prisoners | leader capture |
| An arsenal, or Zeus | to take an **Intel Drop Case** and a hacking tablet |

Terrain: one ALiVE has indexed. On an unindexed map the cluster globals do
not exist and coastal / caches / safe houses will say so and place nothing —
that is correct behaviour, not a bug, but it makes those tests untestable.

---

## 0. Boot

1. Load the mission. Read the RPT top to bottom once.

| Check | Pass | Fail means |
|---|---|---|
| No `Script ... not found` warnings for any ghost addon | ☐ | a CfgEventHandlers references a file that does not exist |
| No `Undefined variable` / `Error Params` from a `z\ghost\` file | ☐ | a real bug — paste it |
| `[GHOST] (adapter_alive) INFO: ALiVE up after Ns - N commander(s)` | ☐ | the adapter never became ready; nothing below will work |

---

## 1. Slice zero — re-run it

The adapter changed since it last passed, so it is worth 60 seconds.

    #ghostreads
    #ghostsquad
    #ghostfire
    #ghostcapture

| Check | Pass | Fail means |
|---|---|---|
| Every commander prints `logic=resolved` | ☐ | the position-match broke; every TAOR read returns empty |
| `taor=[...]` non-empty for each side | ☐ | placements are not synced, or the key read is wrong |
| `AA pool n=` matches roughly the AA ALiVE placed | ☐ | the aaProfileBehaviour join is wrong |
| The squad profiles and walks to you | ☐ | spawn→profile→move is broken; QRF and patrols both depend on it |
| `#ghostcapture`: hold 10 s → `ghost_objective_captured raised` | ☐ | capture detection is broken; QRF cannot fire |

---

## 2. Coastal

    #ghostcoastal

| Check | Pass | Fail means |
|---|---|---|
| It lists one site per side, up to the slider | ☐ | no coastline passed the water test, or no marine clusters — the RPT says which |
| Each site reports `launchers=N radars=1` once you are near it | ☐ | the position-keyed refresh is not finding its own hardware |
| Sites are on real shore, not inland ponds | ☐ | the water-ring test is too loose |
| Radar and launchers are **separated**, not in a heap | ☐ | the inland placement pass failed |
| Fly/sail a large boat past → the battery engages | ☐ | the battery behaviour is not being driven |
| Walk away 3 km, come back → it still works | ☐ | **the important one.** Profiling deleted the hardware and the refresh did not re-point at the new objects |

---

## 3. Jamming

    #ghostjam

| Check | Pass | Fail means |
|---|---|---|
| Zones listed, roughly the objective share you set | ☐ | props missing from your mod set (RPT says so), or no objectives |
| Standing near a prop degrades your radio | ☐ | the applier is not running client-side |
| **Destroy** a prop → its zone leaves the list | ☐ | the prune is not catching destruction |
| **Hack** a prop → its zone leaves the list | ☐ | the hacked-flag branch of the prune is wrong |
| Once a zone is gone it stays gone | ☐ | something re-registers it |

---

## 4. Caches and patrols

    #ghostuas

| Check | Pass | Fail means |
|---|---|---|
| `ceilings west=N east=N` matches the slider | ☐ | settings not read |
| Patrol counts non-zero after adapter-ready | ☐ | patrols would not profile — check RPT for the delete-rather-than-leave-live warning |
| A patrol drone is **not** flying when you are far away | ☐ | it did not profile, and you have live aircraft on an empty map |
| Approach an objective → a drone materialises | ☐ | ALiVE is not spawning the profile |
| Find and destroy a cache → RPT logs `ceiling N for Ns`, and `#ghostuas` shows the outage | ☐ | the Killed handler or the outage map is wrong |
| While the outage runs, fewer drones come back | ☐ | `ceilingFor` is not being consulted where drones are made |

---

## 5. The hack console

Take a hacking tablet. Hack a comms tower.

| Check | Pass | Fail means |
|---|---|---|
| Buttons appear only for pools that have something | ☐ | the published counts are stale or wrong |
| **LOCATE AA** plots icons on ALiVE's AA, exactly | ☐ | pool or renderer problem |
| **LOCATE ARTILLERY** draws an offset circle | ☐ | as above |
| Hack again → the artillery circle **tightens** | ☐ | the ladder tier is not incrementing |
| Hack a third time at the same tier → **same circle, same place** | ☐ | the cached throw is being re-rolled — players can fish for a better centre |
| **LOCATE JAMMER** plots the props | ☐ | zone registry read |
| **TRACE NETWORK** appears only with an asymmetric commander | ☐ | the live-leader count gate |

---

## 6. The intel tally

Take an **Intel Drop Case** from the arsenal.

| Check | Pass | Fail means |
|---|---|---|
| Self-interact → **Deploy Intel Drop**; the case sits flat on the ground | ☐ | the surface trace failed |
| Kill an **insurgent** (asymmetric side) → body has **Search For Intel** | ☐ | the phone rule, or the side→controltype cache |
| Kill a **conventional** soldier carrying a radio → also searchable | ☐ | the radio test |
| Kill one with no radio → usually **not** searchable | ☐ | the documents roll is not gating |
| Search → you receive **Captured Intel**; counter does **not** move | ☐ | banking on pickup, which defeats the whole mechanic |
| Interact on the deployed case → **Deposit Intel**; RPT logs `N of M` | ☐ | the deposit path |
| Hit the threshold → a yellow hint circle appears on an installation or safe house | ☐ | empty hint pool — RPT says which |
| Deposit 20 at once with a threshold of 10 → **two** hints | ☐ | the batch loop pays out once |
| **Pack Up Intel Drop** → item returns to your inventory | ☐ | correspondingItem / pack path |

---

## 7. The reaction ladder

    #ghostreact

Set **Detect Chance** to 100 % temporarily so you are not testing dice.

| Check | Pass | Fail means |
|---|---|---|
| Fail a hack once → **nothing visible happens** | ☐ | SMALL is supposed to be silent; if you were told, the flag is leaking |
| `#ghostreact` now says **FLAGGED** | ☐ | the flag was not set |
| Fail again while flagged → shells, a drone, and enemies turn toward you | ☐ | MAJOR did not fire |
| The shells came from ALiVE's battery when one is in range | ☐ | the request path — check for `ARTY_REQUEST` in the RPT |
| With **no** artillery module, the fallback barrage lands instead | ☐ | fallback branch |
| Wait 5 minutes without incident → `#ghostreact` says **clean** | ☐ | the flag never decays |
| Transmit on a **long-range** radio in the open → eventually flagged | ☐ | radio watch not armed |
| Transmit on a **squad** radio → never flagged | ☐ | short-range is reaching the filter |
| Transmit with an **ACRE SATCOM antenna connected** → never flagged | ☐ | the SATCOM exemption |
| Let a drone see you → same ladder | ☐ | the drone-spot event has no listener |

---

## 8. QRF

    #ghostqrf

| Check | Pass | Fail means |
|---|---|---|
| The watch list holds ALiVE objectives and any `ghost_qrf*` marker | ☐ | gather |
| Clear an objective and stand on it → after the hold time it reports taken | ☐ | capture detection |
| **No countdown or warning appears** | ☐ | something is announcing it; QRF replaced Objective Watch on purpose |
| Artillery arrives, scaled to the objective's size | ☐ | wave 1 |
| An **asymmetric** objective gets mortars *or nothing*, never a full barrage | ☐ | the controltype branch |
| A drone comes | ☐ | wave 2 / ceiling |
| Squads appear **3-6 km out** and walk in — not on top of you | ☐ | origin ring or profiling |
| Retake the same objective inside the cooldown → no second QRF | ☐ | the cooldown |

---

## 9. The leader chain

    #ghostleaders

| Check | Pass | Fail means |
|---|---|---|
| Three leaders, each in a safe house, on the asymmetric side | ☐ | no asymmetric commander, or fewer than three houses — RPT says |
| They are the asymmetric faction's own men | ☐ | faction derivation |
| **TRACE NETWORK** circles a *house*, never a man | ☐ | product |
| Trace again → tighter circle | ☐ | ladder |
| Wait for a rotation → a leader moves; a trace now points at the **new** house | ☐ | the next-house pointer is set before the move |
| Enter a watched house → mortars | ☐ | trap arming |
| Kill a leader → RPT logs the pool cut, `#ghostleaders` shows `dead` | ☐ | Killed handler |
| **ACE-restrain one and carry him to `ghost_prison`** → logged `captured`, and another leader's position is revealed exactly | ☐ | the whole capture play |
| Kill all three → "That was the last of them", and **none respawn** | ☐ | finite is broken |
| Restart the mission with ALiVE persistence on → the dead stay dead | ☐ | save/getData |

---

## 10. Tacpad app layer — nothing sticks open

The suite's full-screen apps live over the map and redraw themselves by
reopening, which is where the stuck-window bugs live. These four races are the
ones the shell now closes by itself — each one was a real "the window will not
close" report. "Immediately" means within the same second, so the reopen the
first press queued is still in flight when the close lands.

| Check | Pass | Fail means |
|---|---|---|
| Open SQUAD, press a man, then CLOSE immediately — the window stays closed | ☐ | a queued reopen outlived the close; the stale-reopen guard missed a call site |
| Open TIMER, press +1 MIN, then CLOSE immediately — the timer does not come back | ☐ | same guard, the timer's reopen path |
| Open HACK, then open SETTINGS, wait several seconds — the hack screen does not tear itself down under settings | ☐ | appCurrent ownership broke |
| Hold the cursor on an open app while it is due to redraw — a slow press still lands | ☐ | the redraw hold (appIdle) regressed |
| The floating **FORCE CLOSE** strip sits over the open app and nothing covers it | ☐ | appBar is drawn under the app group |
| Press the floating FORCE CLOSE strip — the app closes and the strip disappears | ☐ | the bar's own close path |
| Open SUPPORT with tasking held by another tag — a blank screen is not the result; the strip is there and closes out | ☐ | the gate refused before its dialog opened |
| Close the map with an app open, reopen it — no app, no strip, panels back | ☐ | appCurrent / appBar survived the map close |

---

## What "pass" means

Not "the feature is good" — only **"the code ran and did roughly what it
claims"**. Tuning comes after something has run.

The chat reports are the cheap check; the RPT is the real one. Every system
logs what it decided and why it declined, so *not configured* and *not
working* look different.
