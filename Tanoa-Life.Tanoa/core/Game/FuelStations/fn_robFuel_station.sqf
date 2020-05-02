//private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
//_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (community.bistudio.com/wiki/addAction). Give it a try and post below
_action = [_this,2] call BIS_fnc_param;//Action name


if(side _robber != civilian) exitWith { ["Tu ne peux pas voler cette station !"] call AlysiaClient_fnc_error; };
if(_robber distance _shop > 5) exitWith { ["Tu dois te rapprocher pour pouvoir braquer !"] call AlysiaClient_fnc_error; };
if !(_kassa) then { _kassa = 1000; };
if (_rip) exitWith { ["Braquage en cours !"] call AlysiaClient_fnc_error; };
if (vehicle player != _robber) exitWith { ["Sors de ton véhicule !"] call AlysiaClient_fnc_error;};
if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { ["Tu crois m'impressionner ?"] call AlysiaClient_fnc_error; };
if (_kassa == 0) exitWith { ["Il n'y à plus rien dans les caisses !"] call AlysiaClient_fnc_error; };


_rip = true;
_kassa = 10000 + round(random 10000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);

if(_chance >= 1) then {
	//[1,format["Gasstation: %1 is being robbed!", _shop]] remoteExec ["life_fnc_broadcast",west];
	[format["Un braquage de station service est en cours <t color='#01DF01'>%1</t>.", _shop], "Patrick le SDF", false] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", civilian];
};


_civils = (civilian countSide playableUnits);
if(_civils < 1) exitWith{
	[_vault,-1] remoteExec ["disableSerialization;",2]; hintSilent "Il n'y a pas asser de citoyens.. Il n'y a pas asser de fonds !";
};




disableSerialization;
5 cutRsc ["RscTitleProgress","PLAIN"];
_ui = uiNameSpace getVariable ["RscTitleProgress"];
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Braquage en cours, restes à proximité (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;
if(_rip) then
{
while{true} do
{
uiSleep 0.85;
_cP = _cP + 0.01;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["Braquage en cours, restes à proximité (%1%2)...",round(_cP * 100),"%"];
_Pos = position player; // by ehno: get player pos
_marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
"Marker200" setMarkerColor "ColorRed";
"Marker200" setMarkerText "Braquage en cours";
"Marker200" setMarkerType "mil_warning";
if(_cP >= 1) exitWith {};
if(_robber distance _shop > 10.5) exitWith { };
if!(alive _robber) exitWith {};
};
if!(alive _robber) exitWith { _rip = false; };

if(_robber distance _shop > 10.5) exitWith {

 	deleteMarker "Marker200";
 	_shop switchMove "";
    ["Tu n'est pas resté à proximité de la caisse. Elle a été verrouillée."] call AlysiaClient_fnc_error;
    5 cutText ["","PLAIN"];
    _rip = false;
};
5 cutText ["","PLAIN"];

[format["Tu as volé <t color='#8cff9b'>%1</t>BTC dans les caisses de la station.", [_kassa] call AlysiaClient_fnc_numberText]] call AlysiaClient_fnc_info;

deleteMarker "Marker200"; // by ehno delete maker
g_cash = g_cash + _kassa;


_rip = false;
//life_use_atm = false;


/*
 if (g_interaction_target getVariable ["inUse", false]) exitWith {
	["Le DAB est en cours de réapprovisionnement, veuillez patienter"] call AlysiaClient_fnc_error;
};

[true, _amount, "Dépot DAB"] call AlysiaClient_fnc_handleATM;

*/


uiSleep (30 + random(180));
//life_use_atm = true;
if!(alive _robber) exitWith {};
};
uiSleep 300;

_action = _shop addAction["Braquer la station",AlysiaClient_fnc_robFuel_station];
_shop switchMove "";