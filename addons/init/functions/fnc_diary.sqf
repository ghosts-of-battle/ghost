#include "script_component.hpp"
/*
 * Author: CPL.Brostrom.A
 * This function add diary records.
 *
 * THE WAIT FOR `player` AND `profileName` IS THE CALLER'S. This used to open
 * with two waitUntils, and FUNC(playerpost) `call`s it from XEH postInit -
 * which is UNSCHEDULED. waitUntil cannot suspend there, so it threw
 * "Suspending not allowed in this context", the statement was abandoned, and
 * the function carried on regardless. Every RPT on record proves the damage
 * on the line straight after the error:
 *
 *     Applying Diary Records to <NULL-object>
 *
 * The records were being written to nothing, every session, since forever.
 * FUNC(playerpost) now does the waiting where CBA can do it without
 * suspending; see the note there.
 *
 * Example:
 * call ymf_fnc_init_diary
 *
 * Public: No
 */

// Belt and braces: a future caller from an unscheduled context fails soft
// rather than repeating the <NULL-object> bug in silence.
if (isNull player) exitWith {};
if (!isNil{player getVariable QEGVAR(player,documents)}) exitWith {SHOW_WARNING_1("initDiary","Diary Records already applied for %1.",player)};

INFO_1("initDiary","Applying Diary Records to %1...",player);

// Add New Topic (Checklists)
// if !(player diarySubjectExists "trainobj") then {
//     player createDiarySubject ["trainobj","Objectives"];
//     // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
//     call EFUNC(documents,Doc_mission_Info);
// };

// if !(player diarySubjectExists "trainmap") then {
//     player createDiarySubject ["trainmap","Training Map"];
//     // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
//     call EFUNC(documents,Doc_mission_map);
// };


player setVariable [QEGVAR(player,documents), true];
