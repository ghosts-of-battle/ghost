#include "script_component.hpp"
/*
 * Author: YonV
 * The MEDICAL app's reference card, held open only while the NOTES key is
 * down. Content follows Task Force Aloha's "ACE Medical" glance guide, which
 * is the sheet the user works from - the bandage table, the vitals bands, the
 * cardiac-arrest triggers and the stabilisation requirements are theirs.
 *
 * Two columns, as the sheet has: one page of structured text this dense is
 * unreadable, and the device screens are wider than they are tall.
 *
 * Cross-checked against ACE's own config where the two could be compared: the
 * bandage ordering matches its Bandaging effectiveness values (Elastic highest
 * on every wound type), and the drug durations match maxDose / timeInSystem.
 * The vitals bands are the sheet's, which are the state thresholds rather than
 * the wording thresholds ACE's check-pulse action uses - those are not the
 * same numbers, and the sheet's are the ones that matter to a medic.
 *
 * Arguments:
 * 0: Column - 0 left, 1 right <NUMBER>
 *
 * Return Value:
 * Structured text <TEXT>
 *
 * Example:
 * [0] call ghost_ctab_devices_fnc_medicalNotes
 */

params [["_col", 0, [0]]];

#define N_HEAD "#39B24A"
#define N_KEY  "#7A8C7E"
#define N_VAL  "#E5E5E5"
#define N_WARN "#E9A63C"
#define N_BAD  "#D04539"

private _font = S7_FONTS select ((profileNamespace getVariable [QGVAR(font), S7_FONT_DEFAULT]) min (count S7_FONTS - 1));

private _fnc_head = {
    format ["<t font='%1' size='1.0' color='%2'>%3</t><br/>", _font, N_HEAD, _this]
};
private _fnc_row = {
    params ["_k", "_v", ["_c", N_VAL]];
    format ["<t font='%1' size='0.8' color='%2'>%3 </t><t font='%1' size='0.8' color='%4'>%5</t><br/>",
        _font, N_KEY, _k, _c, _v]
};
private _fnc_note = {
    format ["<t font='%1' size='0.8' color='%2'>&#183; %3</t><br/>", _font, N_VAL, _this]
};

private _out = "";

if (_col == 0) then {
    // --- the bandage table -------------------------------------------------
    // ELASTIC carries the best efficiency on every wound on the sheet, so the
    // per-wound rows only need to say what it costs and what reopens least.
    _out = _out + ("BANDAGES - ELASTIC is best on every wound" call _fnc_head);
    _out = _out + (["ABRASION", "Field/Packing/Elastic good. Least reopen: Field or QuikClot"] call _fnc_row);
    _out = _out + (["AVULSION", "Elastic only. Least reopen: QuikClot. Packing + QuikClot poor"] call _fnc_row);
    _out = _out + (["CONTUSION", "anything works. Least reopen: all four"] call _fnc_row);
    _out = _out + (["CRUSH", "Elastic. Least reopen: Field. QuikClot poor"] call _fnc_row);
    _out = _out + (["CUT", "Field or Elastic. Least reopen: Field"] call _fnc_row);
    _out = _out + (["LACERATION", "Elastic. Least reopen: Field. Field + QuikClot poor"] call _fnc_row);
    _out = _out + (["VELOCITY", "Elastic. Least reopen: QuikClot. Most reopen badly"] call _fnc_row);
    _out = _out + (["PUNCTURE", "Elastic. Least reopen: Field or QuikClot"] call _fnc_row);
    _out = _out + "<br/>";

    _out = _out + ("HEART RATE" call _fnc_head);
    _out = _out + (["HIGH", "120 and above", N_WARN] call _fnc_row);
    _out = _out + (["NORMAL", "46 - 119"] call _fnc_row);
    _out = _out + (["LOW", "45 and below", N_WARN] call _fnc_row);
    _out = _out + "<br/>";

    _out = _out + ("BLOOD PRESSURE" call _fnc_head);
    _out = _out + (["HIGH", "160/160 and above", N_WARN] call _fnc_row);
    _out = _out + (["NORMAL", "100/160"] call _fnc_row);
    _out = _out + (["LOW", "20/100", N_WARN] call _fnc_row);
    _out = _out + (["SUB-OPTIMAL", "0/20", N_BAD] call _fnc_row);
} else {
    // --- arrest, drugs, stabilisation --------------------------------------
    _out = _out + ("CARDIAC ARREST HAPPENS WHEN" call _fnc_head);
    _out = _out + (["", "HR 200+ or HR 20-", N_BAD] call _fnc_row);
    _out = _out + (["", "HR 150+ and BP /145+", N_BAD] call _fnc_row);
    _out = _out + (["", "HR 190+ and BP 40-/", N_BAD] call _fnc_row);
    _out = _out + (["", "BP /260+", N_BAD] call _fnc_row);
    _out = _out + "<br/>";

    _out = _out + ("HOW TO TREAT IT" call _fnc_head);
    _out = _out + (["1", "Tourniquet injured limbs"] call _fnc_row);
    _out = _out + (["2", "Bandage head and torso injuries"] call _fnc_row);
    _out = _out + (["3", "Administer fluids as needed"] call _fnc_row);
    _out = _out + (["4", "Two rounds of CPR"] call _fnc_row);
    _out = _out + (["5", "Check pulse"] call _fnc_row);
    _out = _out + (["6", "Repeat 4 and 5 until a pulse is found"] call _fnc_row);
    _out = _out + "<br/>";

    _out = _out + ("AUTO INJECTORS" call _fnc_head);
    _out = _out + (["MORPHINE", "suppresses pain, lowers BP and HR, 30 min"] call _fnc_row);
    _out = _out + (["EPINEPHRINE", "raises HR, wakes a STABLE casualty, 2 min"] call _fnc_row);
    _out = _out + (["ATROPINE/ADENOSINE", "lowers HR, 2 min"] call _fnc_row);
    _out = _out + "<br/>";

    _out = _out + ("STABLE REQUIRES" call _fnc_head);
    _out = _out + (["", "every wound bandaged"] call _fnc_row);
    _out = _out + (["", "HR above 40"] call _fnc_row);
    _out = _out + (["", "BP above 50/60"] call _fnc_row);
    _out = _out + (["", "class 1 or 2 blood loss"] call _fnc_row);
    _out = _out + (["WAKING", "25% every 15 s once stable, 7.5 s on epinephrine", N_WARN] call _fnc_row);
    _out = _out + "<br/>";

    _out = _out + ("USEFUL" call _fnc_head);
    _out = _out + ("Morphine lowers HR/BP and can keep them under" call _fnc_note);
    _out = _out + ("No more than one morphine every 10 min" call _fnc_note);
    _out = _out + ("Saline, plasma and blood raise BP equally" call _fnc_note);
    _out = _out + ("Default blood volume is 6 litres" call _fnc_note);
    _out = _out + ("Take tourniquets off within 5 min - they cause pain" call _fnc_note);
    _out = _out + ("Surgical kit closes wounds for good, no reopening" call _fnc_note);
    _out = _out + ("PAK is a full heal and resets status" call _fnc_note);
    _out = _out + "<br/>";

    // --- what THIS server is actually running -----------------------------
    // Read live rather than printed from the sheet: these are all CBA
    // settings, a mission can move any of them, and a reference card that
    // disagrees with the server is worse than none.
    private _fnc_pct = {format ["%1%2", round (_this * 100), "%"]};
    private _wake = missionNamespace getVariable ["ace_medical_spontaneousWakeUpChance", 0];
    private _wakeBoost = missionNamespace getVariable ["ace_medical_spontaneousWakeUpEpinephrineBoost", 1];
    private _interval = missionNamespace getVariable ["ace_medical_const_wakeUpCheckInterval", 15];
    private _arrest = missionNamespace getVariable ["ace_medical_statemachine_cardiacArrestTime", 300];

    _out = _out + ("THIS SERVER" call _fnc_head);
    _out = _out + (["WAKE UP", format ["%1 every %2 s once stable", _wake call _fnc_pct, round _interval]] call _fnc_row);
    if (_wakeBoost > 1) then {
        _out = _out + (["ON EPINEPHRINE", format ["checked up to %1x as often - every %2 s",
            round _wakeBoost, ((_interval / _wakeBoost) toFixed 1)]] call _fnc_row);
    };
    _out = _out + (["ARREST LASTS", format ["%1 min%2", round (_arrest / 60),
        ["", " - no bleeding out in arrest"] select (!(missionNamespace getVariable ["ace_medical_statemachine_cardiacArrestBleedoutEnabled", true]))]] call _fnc_row);
    _out = _out + (["CPR", format ["%1 to %2 per attempt",
        (missionNamespace getVariable ["ace_medical_treatment_cprSuccessChanceMin", 0]) call _fnc_pct,
        (missionNamespace getVariable ["ace_medical_treatment_cprSuccessChanceMax", 0]) call _fnc_pct]] call _fnc_row);
    _out = _out + (["BLEEDING", format ["%1 of normal rate",
        (missionNamespace getVariable ["ace_medical_bleedingCoefficient", 1]) call _fnc_pct]] call _fnc_row);
    _out = _out + (["BANDAGES", format ["%1 effectiveness",
        (missionNamespace getVariable ["ace_medical_treatment_bandageEffectiveness", 1]) call _fnc_pct]] call _fnc_row);
    _out = _out + (["FRACTURES", format ["%1 chance",
        (missionNamespace getVariable ["ace_medical_fractureChance", 0]) call _fnc_pct]] call _fnc_row);
    _out = _out + (["PAIN KNOCKOUT", format ["above %1 pain, %2 chance",
        (missionNamespace getVariable ["ace_medical_painUnconsciousThreshold", 0]) toFixed 2,
        (missionNamespace getVariable ["ace_medical_painUnconsciousChance", 0]) call _fnc_pct]] call _fnc_row);
    if (missionNamespace getVariable ["ace_medical_vitals_simulateSpO2", false]) then {
        _out = _out + (["SPO2", "simulated - 97 is normal, under 90 is trouble"] call _fnc_row);
    };
};

parseText _out
