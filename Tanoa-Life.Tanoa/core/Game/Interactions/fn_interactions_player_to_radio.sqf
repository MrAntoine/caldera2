/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

[
	[_this, 0, objNull, [objNull]] call BIS_fnc_param,
	"player_to_radio",
	[
		["sabot", "Saboter", "[g_interaction_target] spawn AlysiaClient_fnc_radio_destroy;", "!(g_interaction_target getVariable ['destroyed',false]) && ('SkylineItems_Bandage' in (magazines player))"],
		["repair", "Réparer", "[g_interaction_target] spawn AlysiaClient_fnc_radio_repair;", "(g_interaction_target getVariable ['destroyed',false])"]
	],
	"Transmetteur",
	"Alysia_Client_Texture\Data\interactions\background.jpg",
	true,
	false
] spawn AlysiaClient_fnc_interactions_create;
