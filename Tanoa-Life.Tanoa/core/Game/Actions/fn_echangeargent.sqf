/*
	Code écrit par sc0t
*/
private["_xp_item", "_item_amount"];

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action."] call AlysiaClient_fnc_error;
};

_xp_item = "anarkhium";
_item_amount = 3;

if (([_xp_item] call AlysiaClient_fnc_itemCount) < _item_amount) then
{
	[
		format
		[
			"Vous avez besoin de %1x <t color='#FF4000'>%2</t> pour effectuer cela.",
			_item_amount,
			[_xp_item] call AlysiaClient_fnc_itemGetName
		]
	] call AlysiaClient_fnc_error;

} else {

["Apprentissage en cours ! Yeah !", 30, "", "", "Acts_Dance_01"] call AlysiaClient_fnc_showProgress;

	if ([false, _xp_item, _item_amount] call AlysiaClient_fnc_handleInv) then
	{
		[
			format
			[
				"Vous avez utilisé %1x <t color='#FF4000'>%2</t> et vous avez appris énormément apparemment !",
				_item_amount,
				[_xp_item] call AlysiaClient_fnc_itemGetName
			]
		] call AlysiaClient_fnc_info;
		["trocEXP"] spawn mav_ttm_fnc_addExp;
	};
};