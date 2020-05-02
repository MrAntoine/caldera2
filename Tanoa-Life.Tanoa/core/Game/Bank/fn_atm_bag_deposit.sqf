/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_target", "_obj", "_max", "_amount"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

if (_target getVariable ["inUse", false]) exitWith {
	["Quelqu'un est en train d'utiliser le Serveur de Bitcoin."] call AlysiaClient_fnc_error;
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action."] call AlysiaClient_fnc_error;
};

_obj = player getVariable ["wallet_obj", objNull];
if (isNull(_obj)) exitWith {
	["Vous n'avez pas de valise de CryptoMonnaie."] call AlysiaClient_fnc_error;
};

_max = getNumber(missionConfigFile >> "ALYSIA_ATM" >> typeOf(_target) >> "money_stock");
_amount = _target getVariable ["money", _max];
if (_amount < _max) then
{
	_target setVariable ["inUse", true, false];
	g_action_inUse = true;
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	uiSleep(random(2) + 0.50);
	playSound "buy";
	detach _obj;
	deleteVehicle _obj;
	['Vous venez de remplir le serveur de Bitcoin de 50.000BTC ! Et pour votre geste citoyen, vous gagnez 20.000BTC '] call AlysiaClient_fnc_info;
	[true, 20000] call AlysiaClient_fnc_handleCash;
	[_target, true, 50000] call AlysiaClient_fnc_atmMoneyHandle;
	g_action_inUse = false;
	_target setVariable ["inUse", false, false];
} else {
	["Le distribteur est déjà plein."] call AlysiaClient_fnc_error;
};
