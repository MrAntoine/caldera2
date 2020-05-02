scriptName "functions_perk_farm_3";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "functions_perk_farm_3.sqf"

_ownsDependency3 = [life_currentExpPerks, "perk_perk_farm_4"] call mav_ttm_fnc_hasPerk;
_ownsDependency4 = [life_currentExpPerks, "perk_perk_farm_5"] call mav_ttm_fnc_hasPerk;


if (!_ownsDependency3 && !_ownsDependency4) then {
	license_comp_artefact = true;
	license_comp_canabis = true;
	license_comp_petrol = true;
};