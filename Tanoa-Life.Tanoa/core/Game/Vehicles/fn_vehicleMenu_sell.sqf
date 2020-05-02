			[] spawn {
							_amount = [
							'Alysia_Client_Texture\Data\interactions\background.jpg',
							'Prix',
							'Chiffre',
							'0',
							'Valider',
							'Alysia_Client_Texture\Data\global\validate.paa',
							'Alysia_Client_Texture\Data\global\validate_select.paa',
							'0123456789',
							15,
							1
						] call AlysiaClient_fnc_edit_create;
						if (_amount != '') then
						{
							_amount = parseNumber(_amount);
						};
					};
