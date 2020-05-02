/*
	Tanoa-Life RPG
	Code written by sc0t
*/

private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if ((speed _target) > 0) exitWith {
	["Vous ne pouvez pas rafistoler un véhicule qui se déplace."] call AlysiaClient_fnc_error;
};
if (isEngineOn _target) exitWith {
	["Vous ne pouvez pas rafistoler un véhicule ayant le moteur allumé."] call AlysiaClient_fnc_error;
};

if (!(["Rafistolage en cours", 120, _target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};

player removeMagazine "Alysia_repair_toolbox";

_target setdamage 0.5;