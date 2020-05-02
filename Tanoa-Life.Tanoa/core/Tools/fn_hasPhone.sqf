/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_radio";

if (!(call TFAR_fnc_haveSWRadio)) exitWith {false};

_radio = (call TFAR_fnc_activeSwRadio);
if (isNil "_radio") exitWith {false};

["tf_anprc148jem", _radio] call BIS_fnc_inString;
