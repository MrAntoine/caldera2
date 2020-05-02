


// JE PENSE QU'IL FAUT L4ACTIVER

/*
diag_log "<INIT> Initialisation des variables joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initialisation des variables", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_variables;
	diag_log "<INIT> Variables initialisées";
*/


//////
/*SPAWN DU JOUEUR*/
/////

/*
diag_log format ["<MON SUPER TEST> ma g_session , %1", g_session_query];


	diag_log "<INIT> Ajouts des évènements joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Ajouts des évènements", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_eventHandlers;
	[] call AlysiaClient_fnc_init_keys;
	diag_log "<INIT> Evènements ajoutés";

	diag_log "<INIT> Création des objets et marqueurs locals au joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Création des objets et marqueurs locals", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_buildings;
	diag_log "<INIT> Objets et marqueurs locals crées";

	diag_log "<INIT> Récupération des données de personnage...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Récupération des données de personnage", "BLACK FADED", 999999, true];
	[player, profileNamespace getVariable "temp_inventory"] remoteExec ["AlysiaServer_fnc_query_select_connect", 2];
	waitUntil {!(isNil "g_session_query")};
	diag_log "<INIT> Données de personnage récupéré";


diag_log format ["<MON SUPER TEST 2> ma g_session , %1", g_session_query];


	diag_log "<INIT> Chargement des données personnage...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Chargement des données de personnage", "BLACK FADED", 999999, true];
	g_session_query call AlysiaClient_fnc_init_data;
	diag_log "<INIT> Données de personnage chargées";


	diag_log format ["<MON SUPER TEST 3> ma g_session , %1", g_session_query];

	diag_log "<INIT> Initialisation des environnements de jeu...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initialisation des environnements de jeu", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_loops;
	diag_log "<INIT> Environements initialisés";

	diag_log "<INIT> Ajouts des actions au joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Ajouts des actions joueur", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_actions;
	diag_log "<INIT> Actions ajoutées";

	diag_log "<INIT> Initialisation de la position du joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initilisation de la dernière position connue", "BLACK FADED", 999999, true];
	[(g_session_query select 12), (g_session_query select 13), (g_session_query select 14)] call AlysiaClient_fnc_init_position;
	diag_log "<INIT> Joueur déplacé dans l'univers de jeu";

	diag_log "<INIT> Initialisation de l'interface joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initilisation de l'interface de jeu", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_hud;
	diag_log "<INIT> Interface joueur initialisée";

	player setVariable ["tf_globalVolume", 1];
	player setVariable ["realname", profileName, true];
	missionNamespace setVariable ["g_connected", true];

	("initLayer" call BIS_fnc_rscLayer) cutText ["", "BLACK IN", 6, false];
	6 fadeSound 1;

	[
		[
			["Île de Tanoa", "<t align = 'center' size = '1'>%1</t><br/>"], ["", ""],
			[([] call AlysiaClient_fnc_strDate), "<t align = 'center' size = '0.7'>%1</t><br/>"], ["", ""],
			[([] call AlysiaClient_fnc_strTime), "<t align = 'center' size = '0.7'>%1</t>"], ["", ""], ["", ""]
		]
	] spawn BIS_fnc_typeText;
*/






if (hasInterface) then
{

	player allowDamage false;

_staff = !(("(getText(_x >> 'uid') isEqualTo (getPlayerUID player)) && (getNumber(_x >> 'skip_checks') isEqualTo 1)" configClasses (missionConfigFile >> "ALYSIA_STAFF" >> "members")) isEqualTo []);

//disableUserInput true;
// on désactive le chat
showChat false;

if (_staff) then
{
	showChat true;
};

/*
	diag_log "<INIT> Récupération des données de personnage...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Récupération des données de personnage", "BLACK FADED", 999999, true];
	[player, profileNamespace getVariable "temp_inventory"] remoteExec ["AlysiaServer_fnc_query_select_connect", 2];
	waitUntil {!(isNil "g_session_query")};
	diag_log "<INIT> Données de personnage récupéré";

	diag_log "<INIT> Chargement des données personnage...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Chargement des données de personnage", "BLACK FADED", 999999, true];
	g_session_query call AlysiaClient_fnc_init_data;
	diag_log "<INIT> Données de personnage chargées";

	diag_log "<INIT> Initialisation des environnements de jeu...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initialisation des environnements de jeu", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_loops;
	diag_log "<INIT> Environements initialisés";

	diag_log "<INIT> Ajouts des actions au joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Ajouts des actions joueur", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_actions;
	diag_log "<INIT> Actions ajoutées";


	diag_log "<INIT> Initialisation de l'interface joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initilisation de l'interface de jeu", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_hud;
	diag_log "<INIT> Interface joueur initialisée";

	diag_log "<INIT> Initialisation de la position du joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initilisation de la dernière position connue", "BLACK FADED", 999999, true];
	[(g_session_query select 12), (g_session_query select 13), (g_session_query select 14)] call AlysiaClient_fnc_init_position;
	diag_log "<INIT> Joueur déplacé dans l'univers de jeu";

	*/

	diag_log "<INIT> Initialisation des variables joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initialisation des variables", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_variables;
	diag_log "<INIT> Variables initialisées";

	diag_log "<INIT> Ajouts des évènements joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Ajouts des évènements", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_eventHandlers;
	[] call AlysiaClient_fnc_init_keys;
	diag_log "<INIT> Evènements ajoutés";

	diag_log "<INIT> Création des objets et marqueurs locals au joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Création des objets et marqueurs locals", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_buildings;
	diag_log "<INIT> Objets et marqueurs locals crées";




	diag_log "<INIT> Récupération des données de personnage...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Récupération des données de personnage", "BLACK FADED", 999999, true];
	[player, profileNamespace getVariable "temp_inventory"] remoteExec ["AlysiaServer_fnc_query_select_connect", 2];
	waitUntil {!(isNil "g_session_query")};
	diag_log "<INIT> Données de personnage récupéré";

	diag_log "<INIT> Chargement des données personnage...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Chargement des données de personnage", "BLACK FADED", 999999, true];
	g_session_query call AlysiaClient_fnc_init_data;
	diag_log "<INIT> Données de personnage chargées";

	diag_log "<INIT> Initialisation des environnements de jeu...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initialisation des environnements de jeu", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_loops;
	diag_log "<INIT> Environements initialisés";

	diag_log "<INIT> Ajouts des actions au joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Ajouts des actions joueur", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_actions;
	diag_log "<INIT> Actions ajoutées";


	diag_log "<INIT> Initialisation de l'interface joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initilisation de l'interface de jeu", "BLACK FADED", 999999, true];
	[] call AlysiaClient_fnc_init_hud;
	diag_log "<INIT> Interface joueur initialisée";


	//player allowDamage false;
	//[player, true] remoteExecCall ["hideObjectGlobal", 2];


	diag_log "<INIT> Initialisation de la position du joueur...";
	("initLayer" call BIS_fnc_rscLayer) cutText ["Initilisation de la dernière position connue", "BLACK FADED", 999999, true];
	[(g_session_query select 12), (g_session_query select 13), (g_session_query select 14)] call AlysiaClient_fnc_init_position;
	diag_log "<INIT> Joueur déplacé dans l'univers de jeu";


	player setVariable ["tf_globalVolume", 1];
	player setVariable ["realname", profileName, true];
	missionNamespace setVariable ["g_connected", true];


	10 fadeMusic 0;
	disableUserInput false;

	//(findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1 in (actionKeys 'ingamePause')) then { false }"];
	//(findDisplay 46) displayRemoveEventHandler ["KeyDown", "if ((_this select 1 in (actionKeys 'ingamePause')) then { true }"];
	//(findDisplay 46) displayRemoveEventHandler ["KeyDown", "if ((_this select 1 in [1])) then { true }"];
	//(findDisplay 46) displayAddEventHandler ["keyDown",1];


	closeDialog 0;
	("initLayer" call BIS_fnc_rscLayer) cutText ["", "BLACK IN", 8, false];


	player allowDamage true;
	[player, false] remoteExecCall ["hideObjectGlobal", 2];




	6 fadeSound 1;

	sleep 2;

	[
		[
			["Île de Tanoa", "<t align = 'center' size = '1'>%1</t><br/>"], ["", ""],
			[([] call AlysiaClient_fnc_strDate), "<t align = 'center' size = '0.7'>%1</t><br/>"], ["", ""],
			[([] call AlysiaClient_fnc_strTime), "<t align = 'center' size = '0.7'>%1</t>"], ["", ""], ["", ""]
		]
	] spawn BIS_fnc_typeText;

	sleep 10;
	playMusic "";
	1 fadeMusic 1;

};