/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_maxHouse", "_price", "_action", "_item", "_actual"];

if (isNull g_interaction_target) exitWith {};

if (!((g_interaction_target getVariable["house_owner", []]) isEqualTo [])) exitWith {
	["Ce bâtiment est déjà squatté"] call AlysiaClient_fnc_error;
};

if (!isNil {(g_interaction_target getVariable "house_sold")}) exitWith {
	["Ce bâtiment a récemment été squatté et ne peut pas être squatté de suite"] call AlysiaClient_fnc_error;
};

/*_item = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "identity_item");
if ((_item != "") && !(_item in (magazines player))) exitWith
{
	[format[
		"Vous n'avez pas l'objet nécessaire pour prouver votre identité (%1).",
		(([_item] call AlysiaClient_fnc_fetchCfgDetails) select 1)
	]] call AlysiaClient_fnc_error;
};*/

_maxHouse = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "housing" >> "max");
_actual = 0;
{
	if (((_x getVariable ["house_owner", ["", ""]]) select 0) isEqualTo (getPlayerUID player)) then {_actual = _actual + 1};
} forEach g_houses;
if (_actual >= _maxHouse) exitWith {[format["Vous squattez %1 bâtiments. Vous êtes autorisé à en squatter %2.", _actual, _maxHouse]] call AlysiaClient_fnc_error};



_price = getNumber(missionConfigFile >> "ALYSIA_HOUSES" >> (typeOf g_interaction_target) >> "price");
if (g_atm < _price) exitWith {};

_action =
[
	format["Vous êtes sur le point de squatter un bâtiment"],
	//format["Vous êtes sur le point de squatter un bâtiment pour <t color='#8cff9b'>%1</t>BTC", [_price] call AlysiaClient_fnc_numberText],
	"Squat de maison",
	"Squatter",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	closeDialog 0;

	uiSleep(random(1) + 0.1);

	if ((time - g_action_delay) < 2) exitWith {
		["Veuillez ralentir dans vos actions."] call AlysiaClient_fnc_error;
	};
	g_action_delay = time;
	if (!([false, "serrureabime", 1] call AlysiaClient_fnc_handleInv)) exitWith {
	["Vous devez posséder une serrure abîmé pour pouvoir refermer votre squatte !"] call AlysiaClient_fnc_error;
	};

	[g_interaction_target, player] remoteExec ["AlysiaServer_fnc_house_add", 2];
};
