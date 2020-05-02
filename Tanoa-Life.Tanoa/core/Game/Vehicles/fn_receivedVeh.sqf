

params [
	["_ownerLast",objNull,[objNull]],
	["_vehicle",objNull,[objNull]],
	["_value",0,[0]]
];

diag_log format ["_vehicle %1", _vehicle];

// Recupere le nom du véhicule
_vehName = getText(configFile >> "ALYSIA_VEHICLES" >> (typeof _vehicle) >> "realname");


// Demande si oui ou non il veux acheter
_action = [
        format ["%1 veux vous vendre son %2 pour %3$",name _ownerLast,_vehName,[_value] call AlysiaClient_fnc_numberText],
         	"Achat de véhicule",
         	"Accepter",
         	"Refuser"
] call BIS_fnc_guiMessage;





//Si oui
	//Check si assez de sous sur lui
	if (g_cash < _value) exitWith {
			[format["<t color='#f44141'>Vous n'avez pas assez de cash </br> Il faux %1$</t>",_value]] call AlysiaClient_fnc_error;
	};



if (_action) then {

	//Envoie info au vendeur
	[player,_vehicle,_value] remoteExecCall ["AlysiaClient_fnc_returnVente",_ownerLast];

	//Déduction cash + save
	g_cash = g_cash - _value;
	[0] call AlysiaDB_fnc_query_update_partial;


	//Ajout des clefs au porte clefs

	if (!(_vehicle in g_vehicles)) then {

		g_vehicles pushBack _vehicle;
		_dbInfo = _vehicle getVariable "info";
		_plate = (_dbInfo select 2);


		//Always handle key management by the server
		[getPlayerUID player,playerSide,_vehicle,1] remoteExecCall ["AlysiaServer_fnc_keyManagement",2];


		//Envoie pour preparez la requete pour changer owner du véhicule en DB
		[_plate,(getPlayerUID player)] remoteExecCall ["AlysiaServer_fnc_changeVehKey",2];

		hint parseText format ["<t color='42f456'>Vous voila propriétaire d'un : %1</t>", _vehName];

	};

} else {
	// Si non :
	hint format ["Vous n'avez pas acheté le: %1 de : %2", _vehName, name _ownerLast];
};

