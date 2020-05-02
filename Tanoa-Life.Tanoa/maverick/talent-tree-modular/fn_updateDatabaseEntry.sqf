scriptName "fn_updateDatabaseEntry";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "fn_updateDatabaseEntry.sqf"

scopeName "main";

params [
	["_which", -1, [0]],
	["_toUpdate", [], [0, []]]
];

if (!isRemoteExecuted || {remoteExecutedOwner isEqualTo 0}) exitWith {
	diag_log "Illegal update attempt - fn_updateDatabaseEntry";
};

private _pid = allPlayers select {owner _x isEqualTo remoteExecutedOwner};

if (_pid isEqualTo []) exitWith {
	diag_log format ["Could not locate UID of ID %1 fn_updateDatabaseEntry", remoteExecutedOwner];
};

_pid = getPlayerUID (_pid # 0);

if (count _this > 2 && {(_this # 2) isEqualType ""}) exitWith {
	diag_log format ["Possible illegal attempt to update %1 by %2 - fn_updateDatabaseEntry", _this # 2, _pid];
};

if (_toUpdate isEqualTo [] || {_pid isEqualTo ""} || {_which isEqualTo -1}) exitWith {};

private _query = "";
switch (_which) do {

	case 0: {
		if (_toUpdate isEqualType []) then {breakOut "main"};
		_query = format ["UPDATE players SET exp_level = '%1' WHERE uid = '%2'", _toUpdate, _pid];
	};

	case 1: {
		if (_toUpdate isEqualType []) then {breakOut "main"};
		_query = format ["UPDATE players SET exp_total = '%1' WHERE uid = '%2'", _toUpdate, _pid];
	};

	case 2: {
		if (_toUpdate isEqualType []) then {breakOut "main"};
		_query = format ["UPDATE players SET exp_perkPoints = '%1' WHERE uid = '%2'", _toUpdate, _pid];
	};

	case 3: {
		if (_toUpdate isEqualType 0) then {breakOut "main"};
		_toUpdate call mav_ttm_fnc_tinyIntConverter;
		_query = format ["UPDATE players SET exp_perks = '%1' WHERE uid = '%2'", _toUpdate, _pid];
	};
};

if (_query isEqualTo "") exitWith {};

[_query, 1] call EXTD3_fnc_async;