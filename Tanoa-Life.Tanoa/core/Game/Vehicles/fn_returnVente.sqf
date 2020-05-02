

params [
	["_unit",objNull,[objNull]],
	["_vehicle",objNull,[objNull]],
	["_value",0,[0]]
];
private _uidAcheteur = (getPlayerUID _unit);
private _nameAcheteur = name _unit;

g_cash = g_cash + _value;

[0] call AlysiaDB_fnc_query_update_partial;


g_vehicles = g_vehicles - [_vehicle];


_vehicle setVariable ["vehicle_info_owners",[[_uidAcheteur,_nameAcheteur]],true];


private _dbInfo = _vehicle getVariable "info";  //_dbInfo = data
private _plate 	= (_dbInfo select 2);

_vehicle setVariable ["info",[_uidAcheteur,_plate],true];


private _vehName = getText(configFile >> "ALYSIA_VEHICLES" >> (typeof _vehicle) >> "realname");

hint parseText format  ["<t color='#42f456'>Vous venez de vendre votre : </br>%1</t></br><t color='#f48941'>A: %2 </t></br><t color='#f44141'>Pour %3</t>",_VehName,_nameAcheteur,_value];

