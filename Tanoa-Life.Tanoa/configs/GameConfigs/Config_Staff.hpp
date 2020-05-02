#define ADMIN {"76561198126541038","76561197989150242"}
#define ADMIN_AND_MODO {"76561198126541038","76561197989150242","76561198166616772","76561198194171709"}

class ALYSIA_STAFF
{
	class ranks
	{
		class admin {
			name="Administrateur";
		};
		class modo {
			name="Modérateur";
		};
		class support {
			name="Support";
		};
	};

	class members
	{

		// - Admin
		class admin
		{
			rank="admin";
			teamspeak=1;
			slot=1;
			skip_checks=1;
		};

		class Antonio: admin
		{
			uid="76561198126541038";
		};

		class Vlad: admin
		{
			uid="76561197989150242";
		};

		// - Modo
		class modo
		{
			rank="modo";
			teamspeak=1;
			slot=1;
			skip_checks=1;
		};

		class Lucas: admin
		{
			uid="76561198166616772";
		};

		class Julian: admin
		{
			uid="76561198194171709";
		};

		// - Support
		class support
		{
			rank="support";
			teamspeak=1;
			slot=0;
			skip_checks=0;
		};


		/*class Mickael: support
		{
			uid="76561198344023324";
		};*/
	};

	class commands
	{
		class buttons
		{
			class god_on
			{
				name="Dieu ON";
				statement="[] spawn AlysiaClient_fnc_APP_staff_god;";
				condition="!g_staff_on";
				allow[]=ADMIN_AND_MODO;
			};
			class repair
			{
				name="Réparer véhicule";
				statement="(cursorObject) setdamage 0;";
				condition="((cursorObject isKindOf 'Car') || (cursorObject isKindOf 'Ship') || (cursorObject isKindOf 'Air') || (cursorObject isKindOf 'Tank'))";
				allow[]=ADMIN_AND_MODO;
			};

			class god_off: god_on
			{
				name="Dieu OFF";
				statement="g_staff_on=false;";
				condition="g_staff_on";
			};
			class spec_on
			{
                name="Spec ON";
                statement="[player] spawn AlysiaClient_fnc_APP_staff_spec_on;";
                condition="!g_staff_spec";
                allow[]=ADMIN_AND_MODO;
            };
            class spec_off: spec_on
			{
                name="Spec OFF";
                statement="[player] spawn AlysiaClient_fnc_APP_staff_spec_off;";
                condition="g_staff_spec";
            };
            class maisondestruction
			{
				name="Détruire maison";
				statement="[cursorObject] spawn AlysiaClient_fnc_company_destroy;";
				condition="!(cursorObject getVariable ['construction',false])";
				allow[]=ADMIN_AND_MODO;
			};
			class vehicle_getKey
			{
				name="Clef Vehicle";
				statement="g_vehicles pushBack (vehicle player);";
				condition="(((vehicle player) isKindOf 'Car') || ((vehicle player) isKindOf 'Ship') || ((vehicle player) isKindOf 'Air') || ((vehicle player) isKindOf 'Tank'))";
				allow[]=ADMIN_AND_MODO;
			};

			class target_getKey
			{
				name="Clef Cible";
				statement="g_vehicles pushBack cursorObject;";
				condition="(!(isNull cursorObject) && ((cursorObject isKindOf 'Car') || (cursorObject isKindOf 'Ship') || (cursorObject isKindOf 'Air') || (cursorObject isKindOf 'Tank')))";
				allow[]=ADMIN_AND_MODO;
			};
			class target_delete: vehicle_getKey
			{
				name="Supp Cible";
				statement="deleteVehicle cursorObject;";
				condition="!(isNull cursorObject)";
				verify=1;
			};
			class target_trunkInUse: vehicle_getKey
			{
				name="Fix coffre";
				statement="cursorObject setVariable ['trunk_in_use_ID','',true];";
				condition="!(isNull cursorObject) && ((cursorObject getVariable ['trunk_in_use_ID','']) != '')";
			};
			class target_onMe: vehicle_getKey
			{
				name="TP cible";
				statement="cursorObject setPosATL (getPosATL player);";
				condition="!(isNull cursorObject) && ((cursorObject isKindOf 'Car') || (cursorObject isKindOf 'Ship') || (cursorObject isKindOf 'Air') || (cursorObject isKindOf 'Tank'))";
				verify=1;
			};
			class target_build_company: vehicle_getKey
			{
				name="Construire";
				statement="[cursorObject] remoteExecCall ['AlysiaServer_fnc_company_build', 2];";
				condition="(cursorObject getVariable ['construction',false]) && !(isNil {(cursorObject getVariable 'company_info')})";
				verify=1;
			};
			class target_build_labo: vehicle_getKey
			{
				name="Construire";
				statement="[cursorObject] remoteExecCall ['AlysiaServer_fnc_laboratory_build', 2];";
				condition="(cursorObject getVariable ['construction',false]) && !(isNil {(cursorObject getVariable 'laboratory_info')})";
				verify=1;
			};

			class reboot
			{
				name="Reboot";
				statement="[] remoteExec ['AlysiaServer_fnc_serverSave',2];";
				condition="isNil 'gServer_soonReboot'";
				allow[]=ADMIN;
				verify=1;
			};

			/*class remove_desaeses
			{
				name="Supp maladie";
				statement="g_deseases=[];g_medecine=[];['Merci de deco reco'] call AlysiaClient_fnc_info;";
				condition="count(g_deseases) > 0";
				allow[]=ADMIN_AND_MODO;
			};*/

			class arsenal
			{
				name="Arsenal";
				statement="[Open,true] spawn BIS_fnc_arsenal;";
				condition="(true)";
				allow[]=ADMIN;
			};

			class seize
			{
				name="Saisir";
				statement="[] call AlysiaClient_fnc_seizeObjects;";
				condition="(count(nearestObjects [player, ['WeaponHolder','GroundWeaponHolder','WeaponHolderSimulated','Skyline_Alysia_Boite_01_F'], 3]) > 0)";
				allow[]=ADMIN_AND_MODO;
				verify=1;
			};
			class item
			{
				name="Rbt. Item";
				statement=" \
					[] spawn \
					{ \
						_objet = [ \
							'Alysia_Client_Texture\Data\interactions\background.jpg', \
							'Item', \
							'Nom', \
							'', \
							'Valider', \
							'Alysia_Client_Texture\Data\global\validate.paa', \
							'Alysia_Client_Texture\Data\global\validate_select.paa', \
							'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_() -', \
							20, \
							1 \
						] call AlysiaClient_fnc_edit_create; \
						_amount = [ \
							'Alysia_Client_Texture\Data\interactions\background.jpg', \
							'Nombre', \
							'Chiffre', \
							'0', \
							'Valider', \
							'Alysia_Client_Texture\Data\global\validate.paa', \
							'Alysia_Client_Texture\Data\global\validate_select.paa', \
							'0123456789', \
							2, \
							1 \
						] call AlysiaClient_fnc_edit_create; \
						if (_amount != '') then \
						{ \
							_amount = parseNumber(_amount); \
							_target = call compile (lbData[9000,lbCurSel 9000]); \
							[format['Vous pouvez échanger les item à rembourser au joueur: <t color=''#8cff9b''>%1</t>', _objet]] call AlysiaClient_fnc_info; \
							[true,_objet,_amount] call AlysiaClient_fnc_handleInv; \
							[player, _amount, _objet] remoteExecCall ['AlysiaServer_fnc_logRefundItem', 2]; \
						}; \
					}; \
				";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};
		};

		class target
		{
			class tpto
			{
				name="TP à";
				statement="(vehicle player) setPosATL (getPosATL (call compile (lbData[9000,lbCurSel 9000])));";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};
			class tphere: tpto
			{
				name="TP ici";
				statement="(vehicle (call compile (lbData[9000,lbCurSel 9000]))) setPosATL (getPosATL player);";
				verify=1;
			};
			class getInVeh: tpto
			{
				name="Entrer dans véhicule";
				statement="player moveInCargo (vehicle (call compile (lbData[9000,lbCurSel 9000])))";
				condition="g_staff_god && !((vehicle (call compile (lbData[9000,lbCurSel 9000]))) isKindOf 'Man')";
			};

			class data
			{
				name="Informations";
				statement="[player] remoteExecCall ['AlysiaClient_fnc_APP_staff_players_getData',(lbData[9000,lbCurSel 9000])];";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};

			class heal: tpto
			{
				name="Soin";
				statement="[3999] remoteExecCall ['AlysiaClient_fnc_handleBlood',(call compile (lbData[9000,lbCurSel 9000]))]; (call compile (lbData[9000,lbCurSel 9000])) setVariable ['is_bleeding', false, true];";
			};
			class res: tpto
			{
				name="Rez";
				statement="((call compile (lbData[9000,lbCurSel 9000])) setVariable ['is_bleeding',false,true]);((call compile (lbData[9000,lbCurSel 9000])) setVariable ['is_coma',false,true]);";
				condition="(call compile (lbData[9000,lbCurSel 9000])) getVariable ['is_coma',false]";
			};

			class tp_civ
			{
				name="Tp spawn CIVIL";
				statement="(call compile (lbData[9000,lbCurSel 9000])) setPos (getMarkerPos 'respawn_civilian')";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};

			class remboursement
			{
				name="Remboursement";
				statement=" \
					[] spawn \
					{ \
						_amount = [ \
							'Alysia_Client_Texture\Data\interactions\background.jpg', \
							'Informations', \
							'Valeur', \
							'0', \
							'Valider', \
							'Alysia_Client_Texture\Data\global\validate.paa', \
							'Alysia_Client_Texture\Data\global\validate_select.paa', \
							'0123456789', \
							7, \
							1 \
						] call AlysiaClient_fnc_edit_create; \
						if (_amount != '') then \
						{ \
							_amount = parseNumber(_amount); \
							_target = call compile (lbData[9000,lbCurSel 9000]); \
							[format['Vous avez envoyé <t color=''#8cff9b''>%1</t>BTC à <t color=''#FF8000''>%2</t>', [_amount] call AlysiaClient_fnc_numberText, _target getVariable 'realname']] call AlysiaClient_fnc_info; \
							[format['Vous avez reçu <t color=''#8cff9b''>%1</t>BTC sur votre compte en banque de la part du staff <t color=''#0080FF''>Caldera-Life</t>.', [_amount] call AlysiaClient_fnc_numberText]] remoteExecCall ['AlysiaClient_fnc_info', _target]; \
							[true, _amount] remoteExecCall ['AlysiaClient_fnc_handleATM', _target]; \
							[player, _target, _amount] remoteExecCall ['AlysiaServer_fnc_logRefund', 2]; \
						}; \
					}; \
				";
				condition="(true)";
				allow[]=ADMIN_AND_MODO;
			};
		};
	};
};

#undef ADMIN_AND_MODO
#undef ADMIN
