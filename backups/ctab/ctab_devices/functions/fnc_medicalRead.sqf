#include "script_component.hpp"
/*
 * Author: YonV
 * Reads one unit's ACE medical state into the shape both medical screens
 * render from: a severity-ranked list of statuses, plus the vitals.
 *
 * ACE ONLY. Every value is a plain getVariable against ACE's own medical
 * variables (the names are ACE's, taken from its script_macros_medical.hpp),
 * so this is a soft dependency in the truest sense - with no ACE medical
 * loaded every unit simply reads as unhurt rather than erroring. KAT's
 * airway/pneumothorax/SpO2 states are deliberately not read yet; the icons
 * are already imported for when they are.
 *
 * STATUSES COME BACK WORST-FIRST. The dashboard tile shows as many as it has
 * room for and the app shows them all, so neither has to know the ordering.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * 0: Statuses, worst first <ARRAY of STRING> - keys into MED_ICONS
 * 1: Vitals <ARRAY> - [heartRate, bpLow, bpHigh, bloodPct, painPct, spo2]
 * 2: Wound counts <ARRAY> - [openWounds, bandaged, tourniquets, fractures]
 *
 * Example:
 * [_unit] call ghost_ctab_devices_fnc_medicalRead
 */

params ["_unit"];

private _statuses = [];

// --- the states that decide the icon ---------------------------------------
private _dead = !alive _unit || {_unit getVariable ["ace_isDead", false]};
private _arrest = _unit getVariable ["ace_medical_inCardiacArrest", false];
private _uncon = _unit getVariable ["ACE_isUnconscious", false];

// ACE keeps a running total of bleeding across all wounds and reads THAT to
// decide blood loss - taken straight from its own getBloodLoss - so this does
// not depend on the shape of the openWounds entries, which is ACE's business
// and has changed between versions.
private _open = _unit getVariable ["ace_medical_openWounds", []];
private _bleeding = (_unit getVariable ["ace_medical_woundBleeding", 0]) > 0;
private _bandaged = count (_unit getVariable ["ace_medical_bandagedWounds", []]);

// six body parts each, non-zero where applied / broken
private _tqs = (_unit getVariable ["ace_medical_tourniquets", [0,0,0,0,0,0]]) select {_x > 0};
private _fx = (_unit getVariable ["ace_medical_fractures", [0,0,0,0,0,0]]) select {_x > 0};

private _hr = _unit getVariable ["ace_medical_heartRate", 80];
private _blood = _unit getVariable ["ace_medical_bloodVolume", 6];
// ACE only simulates oxygen when the mission turns it on; 97 is its baseline
// and it leaves the variable at that when the feature is off, so an unheld
// value simply reads as normal rather than as a casualty.
private _spo2 = _unit getVariable ["ace_medical_spo2", 97];
private _pain = 0 max ((_unit getVariable ["ace_medical_pain", 0]) -
    (_unit getVariable ["ace_medical_painSuppress", 0])) min 1;

// blood pressure: ACE's own function when it is loaded, so the numbers match
// the ones a medic sees on the patient
private _bp = [0, 0];
if (!isNil "ace_medical_status_fnc_getBloodPressure") then {
    _bp = [_unit] call ace_medical_status_fnc_getBloodPressure;
};
_bp params [["_bpLow", 0], ["_bpHigh", 0]];

// --- worst first ------------------------------------------------------------
if (_dead) then {
    _statuses pushBack "dead";
} else {
    if (_arrest) then {_statuses pushBack "arrest"};
    if (_uncon) then {_statuses pushBack "uncon"};
    if (_bleeding) then {_statuses pushBack "bleeding"};
    if (_fx isNotEqualTo []) then {_statuses pushBack "fracture"};
    // A tourniquet is treatment rather than injury, but one left on is its own
    // problem, so it ranks under the bleeding it stopped.
    if (_tqs isNotEqualTo []) then {_statuses pushBack "tourniquet"};
    // The bands the reference card carries, so a tile flagging somebody and
    // the notes page explaining why can never disagree: systolic under 100 is
    // low, and a heart rate outside 46-119 is out of range either way.
    if (_bpHigh > 0 && {_bpHigh < 100}) then {_statuses pushBack "bp"};
    if (_hr < 46 || {_hr > 119}) then {_statuses pushBack "hr"};
    // Only when the mission actually simulates oxygen - ACE's own switch, so
    // this needs no setting of its own and cannot disagree with the server.
    // 90 is the clinical line for hypoxia, not an ACE constant: ACE bands SpO2
    // nowhere, it only simulates the number (baseline 97).
    if ((missionNamespace getVariable ["ace_medical_vitals_simulateSpO2", false])
        && {_spo2 < 90}) then {_statuses pushBack "spo2"};
    if (_statuses isEqualTo [] && {_bandaged > 0}) then {_statuses pushBack "bandaged"};
};

[
    _statuses,
    [_hr, _bpLow, _bpHigh, (_blood / 6) * 100, _pain * 100, _spo2],
    [count _open, _bandaged, count _tqs, count _fx]
]
