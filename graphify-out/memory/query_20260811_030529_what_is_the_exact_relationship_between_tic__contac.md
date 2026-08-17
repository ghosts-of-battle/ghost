---
type: "query"
date: "2026-08-11T03:05:29.081819+00:00"
question: "What is the exact relationship between TIC (contact report as alarm) and ghost_remotesensors?"
contributor: "graphify"
outcome: "useful"
source_nodes: ["TIC (contact report as alarm, template flag)", "ghost_remotesensors (placeable remote sensors)", "ghost_messaging_fnc_srvTic"]
---

# Q: What is the exact relationship between TIC (contact report as alarm) and ghost_remotesensors?

## Answer

No relationship exists in code. The only link is a single AMBIGUOUS conceptually_related_to edge; ghost_remotesensors has degree 2 and BOTH edges are AMBIGUOUS. The extraction agent inferred a sensor-to-alarm pipeline from the README phrase 'report what passes them' plus TIC's description as an alarm that reaches unaddressed people, but correctly refused to assert it. Verified: grep for tic|messaging|report across all sqf/hpp/cpp in addons/remotesensors returns nothing. ghost_remotesensors is a 7-file stub with no functions/ directory - XEH_preInit.sqf is the bare CBA skeleton, config.cpp ships empty units[] and weapons[], and the sole surface is one CBA checkbox ghost_remotesensors_enabled that gates nothing. Its README describes behaviour the code does not have. By contrast TIC is fully implemented via ghost_messaging_fnc_srvTic, referenced by templates.inc.sqf, rides ghost_common side-filtered alert bus, and has 4 CBA settings. Diagnostic value: an all-AMBIGUOUS low-degree node signature detects addons whose README oversells an empty PBO.

## Outcome

- Signal: useful

## Source Nodes

- TIC (contact report as alarm, template flag)
- ghost_remotesensors (placeable remote sensors)
- ghost_messaging_fnc_srvTic