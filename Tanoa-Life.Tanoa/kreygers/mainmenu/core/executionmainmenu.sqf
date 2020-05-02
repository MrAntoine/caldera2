/*
	჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻
	჻჻
	჻჻  ELYVION | HOLDING - (Previously Kreygers | Group)
	჻჻
	჻჻  Description : Main Menu execution file
	჻჻
	჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻
*/



//(findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1 in (actionKeys 'ingamePause')) then { true }"];
//(findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1 in [1])) then { true }"];

//(findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1 == 1)) then { true }"];
(findDisplay 5152100) displayAddEventHandler ["KeyDown", "if ((_this select 1 in [1,14,28,156,57])) then { true }"];

if (hasInterface) then
{





/*
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
*/














((uiNamespace getVariable "mainmenu01")displayCtrl 00046) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 00046) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 00047) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 00047) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0005) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0005) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0006) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0006) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0007) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0007) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0008) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0008) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0009) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0009) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0010) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0010) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0011) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0011) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0012) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0012) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0013) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0013) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 001101) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 001101) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 001102) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 001102) ctrlCommit 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 001103) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 001103) ctrlCommit 1;

((uiNamespace getVariable "mainmenu01")displayCtrl 0019) ctrlSetFade 1;
((uiNamespace getVariable "mainmenu01")displayCtrl 0019) ctrlCommit 2;

sleep 2;

((uiNamespace getVariable "mainmenu01")displayCtrl 00046) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 00047) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 0005) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 0006) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 0007) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 0008) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 0009) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 0010) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 0011) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 0012) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 0013) ctrlShow false;

((uiNamespace getVariable "mainmenu01")displayCtrl 0019) ctrlShow false;

((uiNamespace getVariable "mainmenu01")displayCtrl 001101) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 001102) ctrlShow false;
((uiNamespace getVariable "mainmenu01")displayCtrl 001103) ctrlShow false;


sleep 2;

((uiNamespace getVariable "mainmenu01")displayCtrl 0004) ctrlShow true;
((uiNamespace getVariable "mainmenu01")displayCtrl 0004) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0004) ctrlCommit 2;



((uiNamespace getVariable "mainmenu01")displayCtrl 0016) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0016) ctrlCommit 2;
((uiNamespace getVariable "mainmenu01")displayCtrl 0017) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0017) ctrlCommit 2;
((uiNamespace getVariable "mainmenu01")displayCtrl 0018) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0018) ctrlCommit 2;

((uiNamespace getVariable "mainmenu01")displayCtrl 0020) ctrlSetFade 0;
((uiNamespace getVariable "mainmenu01")displayCtrl 0020) ctrlCommit 2;




 sleep 1;

((uiNamespace getVariable "mainmenu01")displayCtrl 0016) ctrlShow true;
((uiNamespace getVariable "mainmenu01")displayCtrl 0017) ctrlShow true;
((uiNamespace getVariable "mainmenu01")displayCtrl 0018) ctrlShow true;

((uiNamespace getVariable "mainmenu01")displayCtrl 0020) ctrlShow true;


};
//[] execVM "PlayerInit.sqf";