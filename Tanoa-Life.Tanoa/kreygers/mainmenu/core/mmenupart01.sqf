/*
	჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻
	჻჻
	჻჻  ELYVION | HOLDING - (Previously Kreygers | Group)
	჻჻
	჻჻  Description : Main Menu execution file when Enter is pressed. C'est le menu avec les erreurs
	჻჻
	჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻
*/


/*----- ON TRAITE LES DIFFERENTES ERREURS -----*/

private _errmsg = 0;

_staff = !(("(getText(_x >> 'uid') isEqualTo (getPlayerUID player)) && (getNumber(_x >> 'skip_checks') isEqualTo 1)" configClasses (missionConfigFile >> "ALYSIA_STAFF" >> "members")) isEqualTo []);

//(findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1 in (actionKeys 'ingamePause')) then { true }"];
//(findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1 == 1)) then { true }"];
(findDisplay 5152100) displayAddEventHandler ["KeyDown", "if ((_this select 1 in [1,14,28,156,57])) then { true }"];

//(findDisplay 46) displayRemoveEventHandler ["KeyDown",1];

/// Interface petite ///
	diag_log "<INIT> Vérification de la configuration joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Vérification de la configuration", "BLACK FADED", 999999, true];
	if (((getResolution) select 5) != 0.55) then
	{
		_errmsg = 1;
		/*
		[
			"Vous devez régler la taille de votre interface sur 'Petit(e)' pour pouvoir vous connecter." +
			"L'option est disponible dans Configurer->Vidéo->Affichage->Taille d'interface." +
			"Un redémarrage de votre jeu est nécessaire après modification."
		] spawn AlysiaClient_fnc_errorExit;
		*/
	};


/// MUSIQUE ///
if (musicVolume < 0.4) then
	{
		_errmsg = 2;
		/*
		[
			"Vous devez régler l'audio 'musique' à au moins 40% pour pouvoir vous connecter." +
			"Sans musique vous perdrez de l'immersion et risquez de rater les annonces de redémarrages du serveur."
		] spawn AlysiaClient_fnc_errorExit;
		*/
	};
	diag_log "<INIT> Configuration vérifiée";



/// TEAMSPEAK ///


	if (!_staff) then
	{

		diag_log "<INIT> Validation de l'extension TaskForceRadio...";
		("initLayer" call BIS_fnc_rscLayer) cutText ["Validation de l'extension TaskForceRadio", "BLACK FADED", 999999, true];
		waitUntil {!(isNil "TFAR_fnc_isTeamSpeakPluginEnabled")};
		diag_log "<INIT> Extension TaskForceRadio validée";

		diag_log "<INIT> Validation du plugin Teamspeak TaskForceRadio...";
		("initLayer" call BIS_fnc_rscLayer) cutText ["Validation du plugin Teamspeak TaskForceRadio", "BLACK FADED", 999999, true];
		waitUntil {(call TFAR_fnc_isTeamSpeakPluginEnabled)};
		diag_log "<INIT> Plugin Teamspeak TaskForceRadio validé";

		diag_log "<INIT> Validation de présence sur le Teamspeak ...";
		("initLayer" call BIS_fnc_rscLayer) cutText ["Validation de présence sur le Teamspeak", "BLACK FADED", 999999, true];
		waitUntil {(["Caldera-Life", (call TFAR_fnc_getTeamSpeakServerName)] call BIS_fnc_inString)};
		diag_log "<INIT> Présence validé";

		diag_log "<INIT> En attente de validation de votre présence dans le channel TaskForceRadio...";
		("initLayer" call BIS_fnc_rscLayer) cutText ["En attente de validation de votre présence dans le channel TaskForceRadio", "BLACK FADED", 999999, true];
		waitUntil {((call TFAR_fnc_getTeamSpeakChannelName) isEqualTo "TaskForceRadio")};
		diag_log "<INIT> Présence dans le channel TaskForceRadio validé";
	};






//EnterD_keyDownEHId = (findDisplay 46) displayRemoveEventHandler ["keyDown",28];
//(findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1 == 28)) then { false }"];

((uiNamespace getVariable "mainmenu01")displayCtrl 0003) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0003) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0004) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0004) ctrlCommit 1;

sleep 3;

playsound "Notif1";

((uiNamespace getVariable "mainmenu01")displayCtrl 0003) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 0004) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 00046) ctrlShow true;
((uiNamespace getVariable "mainmenu01")displayCtrl 00047) ctrlShow true;
((uiNamespace getVariable "mainmenu01")displayCtrl 0005) ctrlShow true;
((uiNamespace getVariable "mainmenu01")displayCtrl 0006) ctrlShow true;
((uiNamespace getVariable "mainmenu01")displayCtrl 0007) ctrlShow true;

((uiNamespace getVariable "mainmenu01")displayCtrl 0012) ctrlShow true;


if(_errmsg == 1) then {
	((uiNamespace getVariable "mainmenu01")displayCtrl 0008) ctrlShow true;
	((uiNamespace getVariable "mainmenu01")displayCtrl 0011) ctrlShow true;
	((uiNamespace getVariable "mainmenu01")displayCtrl 001101) ctrlShow true;
	((uiNamespace getVariable "mainmenu01")displayCtrl 001102) ctrlShow true;
	((uiNamespace getVariable "mainmenu01")displayCtrl 001103) ctrlShow true;
};


//_errmsg = 1;

// On set le message d'erreur //
private _text = "<t color='#535353' size='1' shadow='0' align='center' font='PuristaMedium'>POUR <t font='PuristaBold'>UNE MEILLEURE EXPÉRIENCE DE JEU<t font='PuristaMedium'>, NOUS VOUS CONSEILLONS DE METTRE VOTRE VOLUME DE MUSIQUE A <t font='PuristaBold'>'40 %'<t font='PuristaMedium'>. LE GAMEPLAY PROPOSÉ EST BASÉ SUR UNE <t font='PuristaBold'>'EXPERIENCE'<t font='PuristaMedium'> SONORE.</t>";


switch (_errmsg) do
{
	case 1:
	{
		_text = "<t color='#535353' size='1' shadow='0' align='center' font='PuristaMedium'>POUR <t font='PuristaBold'>UNE MEILLEUR EXPÉRIENCE DE JEU<t font='PuristaMedium'>, NOUS VOUS CONSEILLONS DE METTRE VOTRE INTERFACE MENU EN <t font='PuristaBold'>'PETIT(E)'<t font='PuristaMedium'>. TOUS NOS MENUS ONT ÉTÉ CRÉES EN SE BASANT SUR CE MODÈLE ET TOUTES AUTRES TAILLES PEUVENT <t font='PuristaBold'>'CASSER'<t font='PuristaMedium'> LE MENU VISUELLEMENT.</t>";
	};

	case 2:
	{
		_text = "<t color='#535353' size='1' shadow='0' align='center' font='PuristaMedium'>POUR <t font='PuristaBold'>UNE MEILLEURE EXPÉRIENCE DE JEU<t font='PuristaMedium'>, <t font='PuristaBold'>'EXPERIENCE'<t font='PuristaMedium'> SONORE.</t>";
	};

	default
	{
		_text = "<t color='#535353' size='1' shadow='0' align='center' font='PuristaMedium'>POUR <t font='PuristaBold'>UNE MEILLEURE EXPÉRIENCE DE JEU<t font='PuristaMedium'>, NOUS VOUS CONSEILLONS DE METTRE VOTRE VOLUME DE MUSIQUE A <t font='PuristaBold'>'40 %'<t font='PuristaMedium'>. LE GAMEPLAY PROPOSÉ EST BASÉ SUR UNE <t font='PuristaBold'>'EXPERIENCE'<t font='PuristaMedium'> SONORE.</t>";
	};
};




//((uiNamespace getVariable "mainmenu01")displayCtrl 0007) ctrlShow true;

	//((uiNamespace getVariable "mainmenu01")displayCtrl 0007) ctrlSetText _text;

	((uiNamespace getVariable "mainmenu01")displayCtrl 0007) ctrlSetStructuredText parseText _text;

////



((uiNamespace getVariable "mainmenu01")displayCtrl 00046) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 00046) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 00047) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 00047) ctrlCommit 1;

((uiNamespace getVariable "mainmenu01")displayCtrl 00046) ctrlSetPosition [0.529 * safezoneW + safezoneX, 0.33 * safezoneH + safezoneY, 0.075 * safezoneW, 0.0025 * safezoneH];
((uiNamespace getVariable "mainmenu01")displayCtrl 00046) ctrlCommit 0.5;
((uiNamespace getVariable "mainmenu01")displayCtrl 00047) ctrlSetPosition [0.40 * safezoneW + safezoneX, 0.33 * safezoneH + safezoneY, 0.075 * safezoneW, 0.0025 * safezoneH];
((uiNamespace getVariable "mainmenu01")displayCtrl 00047) ctrlCommit 0.5;

((uiNamespace getVariable "mainmenu01")displayCtrl 0005) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0005) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0006) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0006) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0007) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0007) ctrlCommit 1;


((uiNamespace getVariable "mainmenu01")displayCtrl 0012) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0012) ctrlCommit 1;



if(_errmsg == 1) then {
	((uiNamespace getVariable "mainmenu01")displayCtrl 0008) ctrlSetFade 0;
	((uiNamespace getVariable "mainmenu01")displayCtrl 0008) ctrlCommit 1;
	((uiNamespace getVariable "mainmenu01")displayCtrl 0011) ctrlSetFade 0;
	((uiNamespace getVariable "mainmenu01")displayCtrl 0011) ctrlCommit 1;
	((uiNamespace getVariable "mainmenu01")displayCtrl 001101) ctrlSetFade 0;
	((uiNamespace getVariable "mainmenu01")displayCtrl 001101) ctrlCommit 1;
	((uiNamespace getVariable "mainmenu01")displayCtrl 001102) ctrlSetFade 0;
	((uiNamespace getVariable "mainmenu01")displayCtrl 001102) ctrlCommit 1;
	((uiNamespace getVariable "mainmenu01")displayCtrl 001103) ctrlSetFade 0;
	((uiNamespace getVariable "mainmenu01")displayCtrl 001103) ctrlCommit 1;
};


private _compris = (uiNamespace getVariable "mainmenu01") displayCtrl 0013;
//_compris ctrlEnable false;


private _action = "playsound ""Click1""; [] execVM ""kreygers\mainmenu\core\executionmainmenu.sqf"";";

//_errmsg = 1;
if(_errmsg != 0) then {
	_action = "playsound ""Click1""; [] execVM ""kreygers\mainmenu\core\mmenupart01.sqf"";";
};


//private _ac = _compris buttonSetAction (parseText _action);

//private _ac = _compris ctrlSetEventHandler ["ButtonClick",_action];

//buttonSetAction [0013, _action ];

buttonSetAction [0013, format["%1", _action]];

//diag_log format buttonSetAction [0013, (parseText _action) ];
//diag_log "action bouton";


// Affichage du bouton suivant

sleep 1.5;

((uiNamespace getVariable "mainmenu01")displayCtrl 0009) ctrlShow true;
((uiNamespace getVariable "mainmenu01")displayCtrl 0010) ctrlShow true;
((uiNamespace getVariable "mainmenu01")displayCtrl 0013) ctrlShow true;

sleep 2;

((uiNamespace getVariable "mainmenu01")displayCtrl 0009) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0009) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0010) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0010) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0013) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0013) ctrlCommit 1;