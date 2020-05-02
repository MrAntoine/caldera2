scriptName "functions_perk_fabricant_2";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "functions_perk_fabricant_2.sqf"

_ownsDependency2 = [life_currentExpPerks, "perk_fabricant_3"] call mav_ttm_fnc_hasPerk;
_ownsDependency3 = [life_currentExpPerks, "perk_fabricant_4"] call mav_ttm_fnc_hasPerk;


if (!_ownsDependency2 && !_ownsDependency3) then {
	license_bricoleur_avance = true;
};