# To fix

## FIXED 2026-08-08 - engineerRead got a display instead of a unit

    Error Params: Type Display (dialog), expected Object
    z\ghostddons\ctab_devicesunctionsnc_engineerRead.sqf, line 26
    via fnc_widgetTick L133 / L305, fnc_engineerPage L47

All three callers reached it with a BARE `call FUNC(engineerRead)` from
inside a screen tick, so it inherited `_this` - which there is the DISPLAY,
not a unit. It threw on every tick of any device page showing the DEMO card.

Fixed by removing the parameter: the function always reads the cTab player's
own circuit, which is what all three callers wanted anyway. No parameter,
nothing to get wrong.

Swept the rest of ctab_devices for the same shape (bare `call` into a
params-taking function). Only `click` matched and it is fine - it is handed a
real array from a control variable.

---

(Add new findings below.)
