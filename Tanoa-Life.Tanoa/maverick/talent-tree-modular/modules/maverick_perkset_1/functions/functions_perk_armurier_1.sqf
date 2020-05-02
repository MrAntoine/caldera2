scriptName "functions_perk_armurier_1";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "functions_perk_armurier_1.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_armurier_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "perk_armurier_3"] call mav_ttm_fnc_hasPerk;
_ownsDependency3 = [life_currentExpPerks, "perk_armurier_4"] call mav_ttm_fnc_hasPerk;


if (!_ownsDependency1 && !_ownsDependency2 && !_ownsDependency3) then {
	license_armurier_legere = true;
};
