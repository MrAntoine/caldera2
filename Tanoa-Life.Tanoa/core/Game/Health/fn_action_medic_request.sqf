/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

if (player getVariable ["medic_request", false]) exitWith {};

if (player getVariable ["is_coma", false]) then
{
	ctrlShow[356, false];
	ctrlShow[357, false];
	player setVariable ["medic_request", true, true];
	player setVariable ["medic_request_time", time + (10 * 60), false];
	[format["Un signal de détresse est envoyé, venez en aide à cette personne en <t color='#01DF01'>%1</t>.", (mapGridPosition player)], "Signal de détresse", false] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", civilian];

private _position = (getPos player);
private _time = (10 * 60);

	private _markermort;
	//deleteMarker _markermort;
	createMarker [ "mort", _position ];
		_markermort setMarkerColor "red";
		//_markermort setMarkerType "plp_icon_pharmacy";
		_markermort setMarkerType "Warning";
		_markermort setMarkerText "Signal de détresse";

		sleep _time;
		deleteMarker _markermort;


};
