/*
	script par sc0t
*/
private["_target", "_souffle"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

_souffle=false

if (_souffle=true) exitWith {
	["Test"] call AlysiaClient_fnc_error;
};

if (isEqualTo "") exitWith {
	["pas de bouffe"] call AlysiaClient_fnc_error;
};

[5] call AlysiaClient_fnc_handleHunger;

if ([false, _item, 1] call AlysiaClient_fnc_handleInv) then {

	_souffle=true;
	["Bonus qui vous permets de mieux tenir votre souffle pendant <t color='#3ADF00'>3 minutes</t>."] call AlysiaClient_fnc_info;
	playsound "eat_biscuit";
	player setCustomAimCoef 0; ///0 pour annulé et 1+ pour augmenter

	sleep 180;
	player setCustomAimCoef 1; ///0 pour annulé et 1+ pour augmenter

};