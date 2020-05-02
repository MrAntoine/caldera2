/*
file: fn_recherche.sqf
Author:  Taneino
Description:
*/

private _n1 = ctrlText 771; // on addresse le nombre à un rsc_edit
private _n2 = ctrlText 772;


switch (_n1) do {

    case "www.bourse.fr": { [] spawn life_fnc_openMarketView; };
    case "www.monentrerpise.com": { [] call max_entreprise_fnc_openMenu; };
    case "www.immobilier.fr": { hint "string3 or string4" };
    case (getText (missionConfigFile >> "Taneino_Darkweb" >> "url" )): { [] call taneino_fnc_marcheDisp; };
    default { hint "Erreur 404" };
};