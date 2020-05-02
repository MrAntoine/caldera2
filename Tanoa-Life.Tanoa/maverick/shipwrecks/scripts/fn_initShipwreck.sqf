/*
	Author: Maverick Applications
	Desc: Altis Life Shipwreck
*/

//Do not touch below
if (!isServer) exitWith {};

[] spawn {
	sleep 360;

	private _positions = getArray(missionConfigFile >> "Maverick_Shipwrecks" >> "Positions");
	private _ship = objNull;
	//private _ship2 = objNull;
	private _lastCreateTime = time - 360;
	private _radius = getNumber(missionConfigFile >> "Maverick_Shipwrecks" >> "Radius");

	private _createNewWreck = {
		private _position = selectRandom _positions;

/*
		private _marker = createMarker [ "shipwreck", _position ];
		_marker setMarkerColor "default";
		_marker setMarkerType "plp_mark_asc_wreckheli";
		_marker setMarkerText "Carcasse";
*/
		/*private _markerZone = createMarker [ "shipwreckzone", _position ];
		_markerZone setMarkerColor "ColorGreen";
		_markerZone setMarkerType "Empty";
		_markerZone setMarkerShape "ELLIPSE";
		_markerZone setMarkerSize [ _radius, _radius ];*/

		_ship = createVehicle ["Land_HistoricalPlaneWreck_02_rear_F", _position, [], _radius, "None"];
		_ship allowDamage false;
		_ship setDamage 0;
		_ship enableSimulationGlobal false;
		_ship setVariable [ "wrecktime", time ];

		private _loot = [];

		{
			for "_i" from 1 to (_x select 1) do
			{
				_loot pushBack ( _x select 0 );
			};
		} forEach selectRandom(getArray(missionConfigFile >> "Maverick_Shipwrecks" >> "ShipLoot"));

		_loot = ( _loot call BIS_fnc_arrayShuffle );

		_ship setVariable [ "wreckloot", _loot, true ];

		//_ship2 = createVehicle [ "Land_HistoricalPlaneWreck_02_rear_F", ( getPos _ship ), [], 50, "None" ];
		//_ship2 allowDamage false;
		//_ship2 setDamage 0;
		//_ship2 enableSimulationGlobal false;
		//_ship2 setVariable [ "wrecktime", time ];

		/*getText(missionConfigFile >> "Maverick_Shipwrecks" >> "SpawnMSG") remoteExecCall ["hint",[civilian,west]];
		["alarm"] remoteExecCall ["playSound",[civilian,west]];*/



/*		["Hep, j'ai entendu dire que ce genre d'info pourrait t'interesser.<br/>Une <t color='#00FF80'>carcasse</t> vient d'être repéré, je t'ai mis sur la piste, regarde ton gps et fouille les alentours ! Et de rien l'ami !",
		"Joe la poucave",
		true
		] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", civilian];
*/



// Checker si il a la licence chasseur de trésors.

		[format["Hep, j'ai entendu dire que ce genre d'info pourrait t'interesser.<br/>Une épave vient d'être repérée. Aux dernières nouvelles elle serait en <t color='#00FF80'>%1</t> , regarde ton gps et fouille les alentours ! Et de rien l'ami !", (mapGridPosition _position)], "Joe la poucave", true] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", civilian];

//

	};

	private _deleteOldWreck = {
		if (!isNull _ship) then {
			["La carcasse vient d'être fouillé ! Je me remets à la recherche d'une nouvelle épave de ce genre !",
			"Joe la poucave",
			true
			] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", civilian];
			//getText(missionConfigFile >> "Maverick_Shipwrecks" >> "DeleteMSG") remoteExecCall ["hint",[civilian,west]];
			sleep 5;
			deleteVehicle _ship;
			//deleteVehicle _ship2;
			deleteMarker "shipwreck";
			deleteMarker "shipwreckzone";
		};
		_ship = objNull;
		//_ship2 = objNull;
		_lastCreateTime = time;
	};

	for "_i" from 0 to 1 step 0 do {
		if (isNull _ship) then {
			if ((time - _lastCreateTime) >= (getNumber(missionConfigFile >> "Maverick_Shipwrecks" >> "ShipwreckInterval"))) then {
				call _deleteOldWreck;
				call _createNewWreck;
				_lastCreateTime = time + (getNumber(missionConfigFile >> "Maverick_Shipwrecks" >> "ShipwreckInterval"));
			};
		} else {
			if ((_ship getVariable ["wreckloot", []]) isEqualTo []) then {
				call _deleteOldWreck;
			};
		};

		sleep 45;
	};
};