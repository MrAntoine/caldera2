
params [
	["_plate","",[""]],
	["_uidAcheteur","",[""]]

];


/*
_query = format ["UPDATE vehicles SET pid='%2' WHERE plate='%1'", _plate,_uidAcheteur];
[_query,1] call ExtDB3_fnc_async;
*/

[ format ["UPDATE vehicles SET pid='%2' WHERE plate='%1'", _plate,_uidAcheteur], 1] call ExtDB3_fnc_async;