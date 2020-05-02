scriptName "functions_perk_medicale_1";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "functions_perk_medicale_1.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_medicale_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "perk_medicale_3"] call mav_ttm_fnc_hasPerk;
_ownsDependency3 = [life_currentExpPerks, "perk_medicale_4"] call mav_ttm_fnc_hasPerk;


if (!_ownsDependency1 && !_ownsDependency2 && !_ownsDependency3) then {
	license_infirmier_stagiaire = true;
};