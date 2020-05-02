/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

///////////////////////////////// -- Branche Alimentaire --\\///////////////////////////////

class perk_alimentaire_1 {
	displayName = "Assistant cuisine";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 1;//lvl requis
	requiredPerk = "";//competence besoin
	subtitle = "Nv 1 requis et 5 pts";//sous-titre
	description = "Vous permets de cuisiner certaines recettes de bases";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_alimentaire_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};
class perk_alimentaire_2 {
	displayName = "Sous-Chef";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 10;//lvl requis
	requiredPerk = "perk_alimentaire_1";//competence besoin
	subtitle = "Nv 10 requis et 5 pts";//sous-titre
	description = "Vous permets de cuisiner certaines recettes plus poussées";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_alimentaire_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};
class perk_alimentaire_3 {
	displayName = "Chef";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 15;//lvl requis
	requiredPerk = "perk_alimentaire_2";//competence besoin
	subtitle = "Nv 15 requis et 5 pts";//sous-titre
	description = "Vous permets de cuisiner chez vous !";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_alimentaire_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};
class perk_alimentaire_4 {
	displayName = "Chef spécialisé";
	requiredPerkPoints = 40;//point compétence requis
	requiredLevel = 20;//lvl requis
	requiredPerk = "perk_alimentaire_3";//competence besoin
	subtitle = "Nv 20 requis et 40 pts";//sous-titre
	description = "Vous permets de cuisiner des recettes avancées avec des boosts divers";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_alimentaire_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

///////////////////////////////// -- Branche Armurier --\\///////////////////////////////

class perk_armurier_1 {
	displayName = "Armurier arme légère";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 1;//lvl requis
	requiredPerk = "";//competence besoin
	subtitle = "Nv 1 requis et 5 pts";//sous-titre
	description = "Vous permets de fabriquer des chargeurs et des armes légères.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_armurier_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};
class perk_armurier_2 {
	displayName = "Armurier arme auto.";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 10;//lvl requis
	requiredPerk = "perk_armurier_1";//competence besoin
	subtitle = "Nv 10 requis et 5 pts";//sous-titre
	description = "Vous permets de fabriquer des armes automatiques.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_armurier_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};
class perk_armurier_3 {
	displayName = "Armurier arme lourde";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 15;//lvl requis
	requiredPerk = "perk_armurier_2";//competence besoin
	subtitle = "Nv 15 requis et 5 pts";//sous-titre
	description = "Vous permets de fabriquer des armes lourdes";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_armurier_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};
class perk_armurier_4 {
	displayName = "Armurier spécialisé";
	requiredPerkPoints = 40;//point compétence requis
	requiredLevel = 20;//lvl requis
	requiredPerk = "perk_armurier_3";//competence besoin
	subtitle = "Nv 20 requis et 40 pts";//sous-titre
	description = "Vous permets de fabriquer des accessoires";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_armurier_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};


///////////////////////////////// -- Branche Fabricant --\\///////////////////////////////

class perk_fabricant_1 {
	displayName = "Bricoleur amateur";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 1;//lvl requis
	requiredPerk = "";//competence besoin
	subtitle = "Nv 1 requis et 5 pts";//sous-titre
	description = "Vous permets d'acceder à la table de bricolage amateur.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_fabricant_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_fabricant_2 {
	displayName = "Bricoleur avancé";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 10;//lvl requis
	requiredPerk = "perk_fabricant_1";//competence besoin
	subtitle = "Nv 10 requis et 5 pts";//sous-titre
	description = "Vous permets d'acceder à la table de bricolage avancé.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_fabricant_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_fabricant_3 {
	displayName = "Ingénieur";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 15;//lvl requis
	requiredPerk = "perk_fabricant_2";//competence besoin
	subtitle = "Nv 15 requis et 5 pts";//sous-titre
	description = "Vous permets d'acceder à la table d'ingénieur.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_fabricant_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_fabricant_4 {
	displayName = "Ingénieur spécialisé";
	requiredPerkPoints = 40;//point compétence requis
	requiredLevel = 20;//lvl requis
	requiredPerk = "perk_fabricant_3";//competence besoin
	subtitle = "Nv 20 requis et 40 pts";//sous-titre
	description = "Vous permets d'acceder au laboratoire d'ingénieur avancé.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_fabricant_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};


///////////////////////////////// -- Branche Constructeur --\\///////////////////////////////

class perk_constructeur_1 {
	displayName = "Maçon amateur";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 1;//lvl requis
	requiredPerk = "";//competence besoin
	subtitle = "Nv 1 requis et 5 pts";//sous-titre
	description = "Vous donne accès à la construction de bâtiments.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_constructeur_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_constructeur_2 {
	displayName = "Maçon avancé";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 10;//lvl requis
	requiredPerk = "perk_constructeur_1";//competence besoin
	subtitle = "Nv 10 requis et 5 pts";//sous-titre
	description = "Vous permets de construire des objets et bâtiment basiques.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_constructeur_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_constructeur_3 {
	displayName = "Architecte";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 15;//lvl requis
	requiredPerk = "perk_constructeur_2";//competence besoin
	subtitle = "Nv 15 requis et 5 pts";//sous-titre
	description = "Vous permets de construire des objets et bâtiment plus avancées.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_constructeur_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_constructeur_4 {
	displayName = "Architecte spécialisé";
	requiredPerkPoints = 40;//point compétence requis
	requiredLevel = 20;//lvl requis
	requiredPerk = "perk_constructeur_3";//competence besoin
	subtitle = "Nv 20 requis et 40 pts";//sous-titre
	description = "Vous permets de construire des maisons plus luxueuses";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_constructeur_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

///////////////////////////////// -- Branche Médicale --\\///////////////////////////////

class perk_medicale_1 {
	displayName = "Infirmier stagiaire";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 1;//lvl requis
	requiredPerk = "";//competence besoin
	subtitle = "Nv 1 requis et 5 pts";//sous-titre
	description = "Vous donne accès à la fabrication des seringues de chlore et morphine.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_medicale_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_medicale_2 {
	displayName = "Infirmier";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 10;//lvl requis
	requiredPerk = "perk_medicale_1";//competence besoin
	subtitle = "Nv 10 requis et 5 pts";//sous-titre
	description = "Vous donne accès à la fabrication de la seringue d'adrénaline et du défibrillateur.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_medicale_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_medicale_3 {
	displayName = "Médecin";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 15;//lvl requis
	requiredPerk = "perk_medicale_2";//competence besoin
	subtitle = "Nv 15 requis et 5 pts";//sous-titre
	description = "Vous donne accès à la fabrication du scalpel et de la table d'opération.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_medicale_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_medicale_4 {
	displayName = "Médecin spécialisé";
	requiredPerkPoints = 40;//point compétence requis
	requiredLevel = 20;//lvl requis
	requiredPerk = "perk_medicale_3";//competence besoin
	subtitle = "Nv 20 requis et 40 pts";//sous-titre
	description = "Vous donne accès à un véhicule de transport médicalisé et au laboratoire médical.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_medicale_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

///////////////////////////////// -- Branche Logistique --\\///////////////////////////////

class perk_logistique_1 {
	displayName = "Importateur";
	requiredPerkPoints = 1;//point compétence requis
	requiredLevel = 3;//lvl requis
	requiredPerk = "";//competence besoin
	subtitle = "Nv 3 et 1 pts";//sous-titre
	description = "Vous permets d'importer des véhicules différents.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_logistique_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_logistique_2 {
	displayName = "Importateur poids lourds";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 7;//lvl requis
	requiredPerk = "perk_logistique_1";//competence besoin
	subtitle = "Nv 7 et 5 pts";//sous-titre
	description = "Vous permets d'importer des poids lourds.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_logistique_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_logistique_3 {
	displayName = "Importateur maritime";
	requiredPerkPoints = 9;//point compétence requis
	requiredLevel = 11;//lvl requis
	requiredPerk = "perk_logistique_2";//competence besoin
	subtitle = "Nv 11 et 9 pts";//sous-titre
	description = "Vous permets d'importer des véhicules maritimes.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_logistique_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_logistique_4 {
	displayName = "Importateur luxe";
	requiredPerkPoints = 14;//point compétence requis
	requiredLevel = 15;//lvl requis
	requiredPerk = "perk_logistique_3";//competence besoin
	subtitle = "Nv 15 et 14 pts";//sous-titre
	description = "Vous permets d'importer des véhicules de luxe.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_logistique_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_logistique_5 {
	displayName = "Importateur aérien";
	requiredPerkPoints = 20;//point compétence requis
	requiredLevel = 20;//lvl requis
	requiredPerk = "perk_logistique_4";//competence besoin
	subtitle = "Nv 20 et 20 pts";//sous-titre
	description = "Vous permets d'importer des véhicules aériens.";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_logistique_5.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};


// -- EXEMPLE --\\


/*class perk_farm_1 {
	displayName = "Acheteur de graines";
	requiredPerkPoints = 1;//point compétence requis
	requiredLevel = 5;//lvl requis
	requiredPerk = "";//competence besoin
	subtitle = "Niveau 5 requis et 1 point de compétence";//sous-titre
	description = "Vous permets d'acheter des <br/><br/><t color='#10FF45'>graines</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_farm_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_farm_2 {
	displayName = "Accès à la mine de minerai, sable et bois";
	requiredPerkPoints = 2;//point compétence requis
	requiredLevel = 10;//lvl requis
	requiredPerk = "perk_farm_1";//competence besoin
	subtitle = "Niveau 10 requis et 2 points de compétences";//sous-titre
	description = "Vous donne accès aux ressources suivantes :<br/><br/><t color='#10FF45'>Minerai, sable et bois.</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_farm_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_farm_3 {
	displayName = "Traitement et récolte amélioré";
	requiredPerkPoints = 5;//point compétence requis
	requiredLevel = 17;//lvl requis
	requiredPerk = "perk_farm_2";//competence besoin
	subtitle = "Niveau 17 requis et 5 points de compétences";//sous-titre
	description = "Vous apprends à récolter et traiter plus vite et vous donne accès aux ressources suivantes :<br/><br/><t color='#10FF45'>Pétrole, graine de cannabis, artefact.</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_farm_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_farm_4 {
	displayName = "Accès au traitement de Fondeur";
	requiredPerkPoints = 10;//point compétence requis
	requiredLevel = 30;//lvl requis
	requiredPerk = "perk_farm_3";//competence besoin
	subtitle = "Niveau 30 requis et 10 points de compétences";//sous-titre
	description = "Vous donne accès au traitements suivants :<br/><br/><t color='#10FF45'>Chrome, nickel et plomb</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_farm_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_farm_5 {
	displayName = "Accès à l'illégal";
	requiredPerkPoints = 20;//point compétence requis
	requiredLevel = 45;//lvl requis
	requiredPerk = "perk_farm_4";//competence besoin
	subtitle = "Niveau 45 requis et 20 points de compétences";//sous-titre
	description = "Vous donne accès à l'élément suivant :<br/><br/><t color='#10FF45'>L'illégal</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_perk_farm_5.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};*/