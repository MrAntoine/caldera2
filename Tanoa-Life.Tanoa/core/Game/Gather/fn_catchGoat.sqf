///////////////////
//Script par sc0t//
///////////////////

private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (alive _target) exitWith {
	["La chèvre doit être mort pour pouvoir être ramassée."] call AlysiaClient_fnc_error;
};

if (["Dépeçage de l'animal", 15, _target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress) then
{
	if (([true, "goat", 1] call AlysiaClient_fnc_handleInv)) then {
	deleteVehicle _target;
	["chasseEXP"] spawn mav_ttm_fnc_addExp; ////////////////////Ajout XP/////////////////////
	} else {
	["Vous n'avez pas assez de place."] call AlysiaClient_fnc_error;
	};
};