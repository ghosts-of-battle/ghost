/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\ghostb_common\functions\diagnostics\fn_isDebug.sqf
 *	by Ojemineh
 *
 *	check if debug is enabled
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	<BOOLEAN>
 *
 *	Example:
 *	[] call ghostb_common_fnc_isDebug;
 *
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["ghostb_debug_enabled", false]);

_return;
