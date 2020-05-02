/*
	Code écrit par sc0t
*/
private "_object";
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action."] call AlysiaClient_fnc_error;
};
if (_object getVariable ["destroyed", false]) exitWith {
	["Ce transmeteur a déjà été sabotée."] call AlysiaClient_fnc_error;
};
if (!("Bank_Hacker" in (magazines player))) exitWith {
	["Vous n'avez pas d'outil de piratage sur vous."] call AlysiaClient_fnc_error;
};

player removeItem "Bank_Drill";

if (["Sabotage du transmeteur", 120, _object, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress) then
{
	[format["Piratage de transmetteur en cours en <t color='#01DF01'>%1</t>.", (mapGridPosition player)], "Alerte", false] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", civilian];
	if (_object getVariable ["destroyed", false]) exitWith {
		["Le transmeteur a déjà été saboté."] call AlysiaClient_fnc_error;
	};
	[_object, (["radio_buzz_1", "radio_buzz_2"] call BIS_fnc_selectRandom), 200] call AlysiaClient_fnc_globalSay3d;
	_object setVariable ["destroyed", true, true];
	["Vous avez saboté le transmeteur."] call AlysiaClient_fnc_info;
	_object setVariable ["tf_sendingDistanceMultiplicator", 0];
};
