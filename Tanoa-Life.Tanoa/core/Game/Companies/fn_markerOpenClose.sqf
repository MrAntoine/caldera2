/*
    File: fn_markerOpenClose.sqf
    ====================
    Author: Joaquine
    ====================
    Description :
	this addAction ["Ouvrir / Fermer ", life_fnc_markerOpenClose, "Nom de l'entreprise", 0, false, false, "", 'licence_civ_....'];
*/
private _target = [_this,0,objNull,[objNull]] call BIS_fnc_param;
private _name = [_this,3,"",[""]] call BIS_fnc_param;
	if (isNil {_target getVariable "markers"}) then {
		_target setVariable ["markers", false,true];
	};
	if ((_target getVariable "markers") isEqualTo false) exitWith {
		hint "Vous venez d'ouvrir votre entreprise";
			_marker = createMarker [format ["%1_marker",_name],position _target];
            _marker setMarkerColor "ColorGreen";
            _marker setMarkerType "Mil_dot";
            _marker setMarkerText format ["%1 : OUVERT", _name];
		sleep 2;
		_target setVariable ["markers", true,true];
	};
	if ((_target getVariable "markers") isEqualTo true) exitWith {
		hint "Vous venez de fermer votre entreprise";
		 deleteMarker format ["%1_marker",_name];
		sleep 2;
		_target setVariable ["markers", false,true];
	};