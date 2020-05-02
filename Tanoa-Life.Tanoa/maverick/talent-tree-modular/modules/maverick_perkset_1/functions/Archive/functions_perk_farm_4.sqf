scriptName "functions_perk_farm_1";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "functions_perk_farm_1.sqf"

_ownsDependency4 = [life_currentExpPerks, "perk_perk_farm_5"] call mav_ttm_fnc_hasPerk;


if (!_ownsDependency4) then {
	license_comp_fondeur = true;
};