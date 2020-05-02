class ALYSIA_PROCESS
{
	// Sons disponibles : "cement_mix" | "collectoil" | "cooking" | "drug_process" | "salt_process" | "smelting"

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Ressources pharmacie     ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*class vaccin_rhume
	{
		name="Fabrication de vaccin contre le Rhume";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"seringue",1},{"millettia",2}};
		};
		class receive
		{
			items_arma[]={"Alysia_Vaccin_Rhume"};
		};
		time_per_item=4;
		time_default=3;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class vaccin_toux: vaccin_rhume
	{
		name="Fabrication de vaccin contre la Toux";
		class require
		{
			items_virtual[]={{"seringue",1},{"ginger",1},{"cacaop",2}};
		};
		class receive
		{
			items_arma[]={"Alysia_Vaccin_Toux"};
		};
	};*/
	class piqureadrenaline
	{
		name="Fabrication de piqûre d'adrénaline";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"seringue",1},{"valerianep",5},{"eau50",1}};
		};
		class receive
		{
			items_arma[]={"SkylineItems_Adrenaline"};
		};
		time_per_item=1;
		time_default=45;
		class target {};
		class factions
		{
			class CIV {licenses[]={"infirmier"};};
		};
	};
	class piqurechlore
	{
		name="Fabrication de piqûre de chlore";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"seringue",1},{"reinedespresp",5},{"eau50",1},{"anarkhium",1}};
		};
		class receive
		{
			items_arma[]={"Alysia_Chlore"};
		};
		time_per_item=1;
		time_default=45;
		class target {};
		class factions
		{
			class CIV {licenses[]={"infirmier_stagiaire"};};
		};
	};
	class piquremorphine
	{
		name="Fabrication de piqûre de morphine";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"seringue",1},{"aubepinep",5},{"eau50",1}};
		};
		class receive
		{
			items_arma[]={"SkylineItems_Morphine"};
		};
		time_per_item=1;
		time_default=45;
		class target {};
		class factions
		{
			class CIV {licenses[]={"infirmier_stagiaire"};};
		};
	};
	class scalpel
	{
		name="Fabrication de scalpel";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"steelp",5},{"anarkhium",1}};
		};
		class receive
		{
			items_virtual[]={"scalpel"};
		};
		time_per_item=1;
		time_default=45;
		class target {};
		class factions
		{
			class CIV {licenses[]={"medecin"};};
		};
	};
	class epinephrine
	{
		name="Fabrication d'épinéphrine'";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"seringue",1},{"ortie",5},{"eau50",1},{"anarkhium",1}};
		};
		class receive
		{
			items_arma[]={"SkylineItems_Eponephrine"};
		};
		time_per_item=1;
		time_default=45;
		class target {};
		class factions
		{
			class CIV {licenses[]={"infirmier"};};
		};
	};
	class defib
	{
		name="Fabrication de défibrillateur";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"steelp",4},{"plastique",3},{"circuitimprime",1},{"anarkhium",1}};
		};
		class receive
		{
			items_arma[]={"SkylineItems_Defibrilateur"};
		};
		time_per_item=1;
		time_default=45;
		class target {};
		class factions
		{
			class CIV {licenses[]={"medecin"};};
		};
	};
	class lab_heal
	{
		name="Fabrication : Table d'opération";
		class require
		{
			items_virtual[]={{"woodp",8},{"steelp",5},{"aluminiump",1},{"anarkhium",1}};
		};
		class receive
		{
			items_virtual[]={{"lab_heal",1}};
		};
		time_per_item=1;
		time_default=45;
		class target {};
		class factions
		{
			class CIV {licenses[]={"medecin"};};
		};
	};



    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Ressources minieres      ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class glass
	{
		name="Transformation du sable en verre";
		sound="salt_process";
		time_per_item=1;
		time_default=45;
		class require
		{
			items_virtual[]={{"sand",1}};
		};
		class receive
		{
			items_virtual[]={{"glass",1}};
		};
		class factions
		{
			class CIV {};
		};
	};

	class bocal
	{
		name="Transformation du verre en bocal";
		sound="salt_process";
		time_per_item=1;
		time_default=45;
		class require
		{
			items_virtual[]={{"glass",2}};
		};
		class receive
		{
			items_virtual[]={{"bocal",1}};
		};
		class factions
		{
			class CIV {};
		};
	};

	class bouteille: glass
	{
		name="Fonte du verre en Bouteille";
		sound="smelting";
		class require
		{
			items_virtual[]={{"glass",1}};
		};
		class receive
		{
			items_virtual[]={{"bouteillevide",1}};
		};
	};
	class seringue: glass
	{
		name="Fonte du verre en Seringue";
		sound="smelting";
		class require
		{
			items_virtual[]={{"glass",1}};
		};
		class receive
		{
			items_virtual[]={{"seringue",1}};
		};
		time_per_item=1;
	};
	class repair_glass: glass
	{
		name="Fabrication : Vitre";
		class require
		{
			items_virtual[]={{"glass",1}};
		};
		class receive
		{
			items_arma[]={"Alysia_repair_glass"};
		};
		time_per_item=4;
	};
	class gazole
	{
		name="Traitement : Diesel";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"oilu",1}};
		};
		class receive
		{
			items_virtual[]={{"gazole",2}};
		};
		class factions
		{
			class CIV {};
		};
		time_per_item=1;
		time_default=45;
	};
	class fioul: gazole
	{
		name="Traitement : Fioul";
		class receive
		{
			items_virtual[]={{"fioul",2}};
		};
	};
	class plastique: gazole
	{
		name="Traitement : Plastique";
		class receive
		{
			items_virtual[]={{"plastique",1}};
		};
	};
	class iron
	{
		name="Fonte du fer";
		class require
		{
			items_virtual[]={{"iron",2}};
		};
		class receive
		{
			items_virtual[]={{"ironp",1}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {};
		};
	};
	class conserve: iron
	{
		name="Fonte du fer en conserve";
		class require
		{
			items_virtual[]={{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"conserve",1}};
		};
	};
	class acier: iron
	{
		name="Transformation du Fer en Acier";
		class require
		{
			items_virtual[]={{"ironp",1},{"charcoal",1}};
		};
		class receive
		{
			items_virtual[]={{"steelp",1}};
		};
	};
	class siphon: iron
	{
		name="Fabrication : Siphon";
		class require
		{
			items_virtual[]={{"ironp",1}};
		};
		class receive
		{
			items_arma[]={"Alysia_siphon"};
		};
	};
	class wood
	{
		name="Scierie";
		sound="smelting";
		class require
		{
			items_virtual[]={{"wood",2}};
		};
		class receive
		{
			items_virtual[]={{"woodp",1}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {};
		};
	};
		class plomb
	{
		name="Fonte du plomb";
		sound="smelting";
		class require
		{
			items_virtual[]={{"plomb",2}};
		};
		class receive
		{
			items_virtual[]={{"plombp",1}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {};
		};
	};
		class aluminium
	{
		name="Fonte de l'aluminium";
		sound="smelting";
		class require
		{
			items_virtual[]={{"aluminium",2}};
		};
		class receive
		{
			items_virtual[]={{"aluminiump",1}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {};
		};
	};
	class circuitimprime
	{
		name="Récupération de circuit imprimé";
		sound="smelting";
		class require
		{
			items_arma[]={{"ItemGPS",1}};
		};
		class receive
		{
			items_virtual[]={{"circuitimprime",1}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {};
		};
	};


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Ressources agricoles     ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		class cotton
		{
			name="Traitement du cotton";
			sound="smelting";
			class require
			{
				items_virtual[]={{"cotton",1}};
			};
			class receive
			{
				items_virtual[]={{"cottonp",1}};
			};
			time_per_item=1;
			time_default=45;
			class factions
			{
				class CIV {};
			};
		};
		class tissue: cotton
		{
			name="Traitement du cotton en tissue";
			class require
			{
				items_virtual[]={{"cottonp",3}};
			};
			class receive
			{
				items_virtual[]={{"tissue",1}};
			};
		};
		class aubepinep
		{
			name="Concassage en poudre de l'aubépine";
			sound="smelting";
			class require
			{
				items_virtual[]={{"aubepine",3}};
			};
			class receive
			{
				items_virtual[]={{"aubepinep",1}};
			};
			time_per_item=1;
			time_default=45;
			class factions
			{
				class CIV {};
			};
		};
		class ortiep
		{
			name="Concassage en poudre de l'ortie";
			sound="smelting";
			class require
			{
				items_virtual[]={{"ortie",3}};
			};
			class receive
			{
				items_virtual[]={{"ortiep",1}};
			};
			time_per_item=1;
			time_default=45;
			class factions
			{
				class CIV {};
			};
		};
		class valerianep
		{
			name="Concassage en poudre de valeriane";
			sound="smelting";
			class require
			{
				items_virtual[]={{"valeriane",3}};
			};
			class receive
			{
				items_virtual[]={{"valerianep",1}};
			};
			time_per_item=1;
			time_default=45;
			class factions
			{
				class CIV {};
			};
		};
		class reinedespresp
		{
			name="Concassage en poudre de la reine des prés";
			sound="smelting";
			class require
			{
				items_virtual[]={{"reinedespres",3}};
			};
			class receive
			{
				items_virtual[]={{"reinedespresp",1}};
			};
			time_per_item=1;
			time_default=45;
			class factions
			{
				class CIV {};
			};
		};

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Objets utilisables avancées /////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class light_double: iron
	{
		name="Fabrication : Projecteur double";
		class require
		{
			items_virtual[]={{"ironp",7}};
		};
		class receive
		{
			items_virtual[]={{"light_double",1}};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_amateur"};};
		};
		time_per_item=1;
			time_default=45;
	};
	class bag_01
	{
		name="Fabrication : Mur de sacs de sable";
		class require
		{
			items_virtual[]={{"sand",7}};
		};
		class receive
		{
			items_virtual[]={{"bagfence_01",1}};
		};
		time_per_item=1;
		time_default=45;
		class target {};
		class factions
		{
			class CIV {licenses[]={"macon_avance"};};
		};
	};
	class bag_02: bag_01
	{
		name="Fabrication : Mur de sacs de sable courbé";
		class receive
		{
			items_virtual[]={{"bagfence_02",1}};
		};
		class factions
		{
			class CIV {licenses[]={"macon_avance"};};
		};
	};
	class hedgehog: bag_01
	{
		name="Fabrication : Hérisson Tchèque";
		class require
		{
			items_virtual[]={{"steelp",4}};
		};
		class receive
		{
			items_virtual[]={{"hedgehog",1}};
		};
		class factions
		{
			class CIV {licenses[]={"architecte"};};
		};
	};
	class watchtower_wood: bag_01
	{
		name="Fabrication : Tour de guet en bois";
		class require
		{
			items_virtual[]={{"woodp",15}};
		};
		class receive
		{
			items_virtual[]={{"watchtower_wood",1}};
		};
		class factions
		{
			class CIV {licenses[]={"architecte"};};
		};
	};

	class portail_electrique: bag_01
	{
		name="Fabrication : Portail électrique";
		class require
		{
			items_virtual[]={{"woodp",50},{"ironp",5},{"granulat",80}};
		};
		class receive
		{
			items_virtual[]={{"portail_electrique",1}};
		};
		class factions
		{
			class CIV {licenses[]={"architecte"};};
		};
	};

	class watchpost_tall: bag_01
	{
		name="Fabrication : Poste de garde (grand)";
		sound="smelting";
		class require
		{
			items_virtual[]={{"ironp",25}};
		};
		class receive
		{
			items_virtual[]={{"watchpost_tall",1}};
		};
		class factions
		{
			class CIV {licenses[]={"architecte"};};
		};
	};
	class watchpost_small: bag_01
	{
		name="Fabrication : Poste de garde (petit)";
		sound="smelting";
		class require
		{
			items_virtual[]={{"ironp",10}};
		};
		class receive
		{
			items_virtual[]={{"watchpost_small",1}};
		};
		class factions
		{
			class CIV {licenses[]={"macon_avance"};};
		};
	};
	class chair_wood: bag_01
	{
		name="Fabrication : Chaise en bois";
		class require
		{
			items_virtual[]={{"woodp",4}};
		};
		class receive
		{
			items_virtual[]={{"chair_wood",1}};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_amateur"};};
		};

	};
	class table_wood: bag_01
	{
		name="Fabrication : Table en bois";
		class require
		{
			items_virtual[]={{"woodp",8}};
		};
		class receive
		{
			items_virtual[]={{"table_wood",1}};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_amateur"};};
		};

	};
	class serrureabime: bag_01
	{
		name="Fabrication : serrure abîmé";
		class require
		{
			items_virtual[]={{"steelp",4}};
		};
		class receive
		{
			items_virtual[]={{"serrureabime",1}};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_amateur"};};
		};

	};
	class filet: bag_01
	{
		name="Fabrication : Filet de pêche";
		class require
		{
			items_virtual[]={{"tissue",10}};
		};
		class receive
		{
			items_virtual[]={{"fishingpoles",1}};
		};
		class factions
		{
			class CIV {licenses[]={"archeologie"};};
		};

	};
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Objets utilisables avancées /////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class menotte: bag_01
	{
		name="Fabrication : Menottes";
		class require
		{
			items_virtual[]={{"steelp",4}};
		};
		class receive
		{
			items_virtual[]={{"handcuffs",1}};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_avance"};};
		};

	};
	class clefmenotte: bag_01
	{
		name="Fabrication : Clefs de menottes";
		class require
		{
			items_virtual[]={{"steelp",2}};
		};
		class receive
		{
			items_virtual[]={{"handcuffkeys",1}};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_avance"};};
		};

	};
	class serrure: bag_01
	{
		name="Fabrication : Serrure neuve";
		class require
		{
			items_virtual[]={{"steelp",6}};
		};
		class receive
		{
			items_virtual[]={{"serrure",1}};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_avance"};};
		};

	};
	class foreuse: bag_01
	{
		name="Fabrication : Foreuse";
		class require
		{
			items_virtual[]={{"steelp",4},{"plastique",3},{"circuitimprime",1}};
		};
		class receive
		{
			items_arma[]={"Bank_Drill"};
		};
		class factions
		{
			class CIV {licenses[]={"ingenieur"};};
		};

	};
	class couteau: bag_01
	{
		name="Fabrication : Couteau";
		class require
		{
			items_virtual[]={{"steelp",3},{"plastique",1},{"aluminiump",1}};
		};
		class receive
		{
			items_arma[]={"SkylineItems_Couteau"};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_amateur"};};
		};
		time_per_item=25;
		time_default=1;
	};
	class lockpick: bag_01
	{
		name="Fabrication : kit de crochettage";
		class require
		{
			items_virtual[]={{"ironp",2}};
		};
		class receive
		{
			items_arma[]={"Alysia_Lockpick"};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_avance"};};
		};
		time_per_item=25;
		time_default=1;
	};

	class lab_clothing: bag_01
	{
		name="Fabrication : laboratoire de tenues";
		class require
		{
			items_virtual[]={{"woodp",8},{"steelp",5},{"aluminiump",1}};
		};
		class receive
		{
			items_virtual[]={{"lab_clothing",1}};
		};
		class factions
		{
			class CIV {licenses[]={"archeologie"};};
		};
		time_per_item=25;
		time_default=1;
	};

	class cigare
	{
		name="Traitement du tabac en cigare";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"tabac",1}};
		};
		class receive
		{
			items_virtual[]={{"cigare",1}};
		};
		time_per_item=3;
		time_default=2;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class cigare_clothing: cigare
	{
		name="Fabrication : cigare (vêtement)";
		class require
		{
			items_virtual[]={{"cigare",1}};
		};
		class receive
		{
			items_arma[]={"EWK_Cigar1"};
		};
	};

	class heroin
	{
		name="Traitement de l'héroine";
		sound="drug_process";
		class require
		{
			items_virtual[]={{"heroin",1}};
		};
		class receive
		{
			items_virtual[]={{"heroinp",1}};
		};
		time_per_item=4;
		time_default=15;
		class target
		{
			smoke_type="SmokeShellYellow";
		};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class seringueheroin: heroin
	{
		name="Traitement des seringues d'héroine";
		class require
		{
			items_virtual[]={{"heroinp",1},{"seringue",2}};
		};
		class receive
		{
			items_virtual[]={{"heroinps",2}};
		};
		time_per_item=2;
		class target {};
	};

	class cocaine
	{
		name="Traitement de la cocaine";
		sound="collectoil";
		class require
		{
			items_virtual[]={{"cocaine",2}};
		};
		class receive
		{
			items_virtual[]={{"cocainep",1}};
		};
		time_per_item=4;
		time_default=10;
		class target
		{
			smoke_type="SmokeShellGreen";
		};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class cocainec: cocaine
	{
		name="Coupe de la cocaine";
		sound="cooking";
		class require
		{
			items_virtual[]={{"cocainep",1},{"glass",2}};
		};
		class receive
		{
			items_virtual[]={{"cocainepc",2}};
		};
		time_per_item=2;
	};

	class meth
	{
		name="Traitement de la Méthamphétamine";
		sound="cooking";
		class require
		{
			items_virtual[]={{"meth",1},{"hsoufre",1}};
		};
		class receive
		{
			items_virtual[]={{"methp",1}};
		};
		time_per_item=4;
		time_default=15;
		class target
		{
			smoke_type="SmokeShellBlue";
		};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

	class marijuana
	{
		name="Traitement du cannabis";
		sound="smelting";
		class require
		{
			items_virtual[]={{"cannabis",1}};
		};
		class receive
		{
			items_virtual[]={{"marijuana",1}};
		};
		time_per_item=15;
		time_default=7;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};

	class mushroom
	{
		name="Séchage des champignons";
		sound="cooking";
		class require
		{
			items_virtual[]={{"mushroom",1}};
		};
		class receive
		{
			items_virtual[]={{"mushroom_dry",2}};
		};
		time_per_item=2;
		time_default=7;
		class target {};
		class factions
		{
			class CIV {};
			class WEST {};
			class EAST {};
			class GUER {};
		};
	};
	class mushroom_bocal: mushroom
	{
		name="Mise en bocal des champignons";
		sound="salt_process";
		class require
		{
			items_virtual[]={{"mushroom_dry",2},{"bocal",1}};
		};
		class receive
		{
			items_virtual[]={{"mushroom_bocal",1}};
		};
	};

	class lab_medical: bag_01
	{
		name="Fabrication : laboratoire médical";
		class require
		{
			items_virtual[]={{"woodp",8},{"steelp",5},{"aluminiump",1}};
		};
		class receive
		{
			items_virtual[]={{"lab_medical",1}};
		};
		class factions
		{
			class CIV {licenses[]={"archeologie"};};
		};
		time_per_item=25;
		time_default=1;
	};
	class lab_avance: bag_01
	{
		name="Fabrication : Laboratoire avancé";
		class require
		{
			items_virtual[]={{"woodp",8},{"steelp",5},{"aluminiump",1}};
		};
		class receive
		{
			items_virtual[]={{"lab_avance",1}};
		};
		class factions
		{
			class CIV {licenses[]={"archeologie"};};
		};
		time_per_item=25;
		time_default=1;
	};
	class toolbox: bag_01
	{
		name="Fabrication : Boîte à outils";
		class require
		{
			items_virtual[]={{"steelp",5},{"aluminiump",5}};
		};
		class receive
		{
			items_arma[]={"Alysia_repair_toolbox"};
		};
		class factions
		{
			class CIV {licenses[]={"archeologie"};};
		};
		time_per_item=25;
		time_default=1;
	};
	class hacker: bag_01
	{
		name="Fabrication : Outils de piratage";
		class require
		{
			items_virtual[]={{"steelp",5},{"aluminiump",5},{"plastique",2},{"circuitimprime",1},{"anarkhium",5}};
		};
		class receive
		{
			items_arma[]={"Bank_Hacker"};
		};
		class factions
		{
			class CIV {licenses[]={"archeologie"};};
		};
		time_per_item=25;
		time_default=1;
	};
	class bomb: bag_01
	{
		name="Fabrication : Bombe Artisanal";
		class require
		{
			items_virtual[]={{"steelp",5},{"fioul",2},{"circuitimprime",1},{"anarkhium",10}};
		};
		class receive
		{
			items_arma[]={"IEDUrbanSmall_Remote_Mag"};
		};
		class factions
		{
			class CIV {licenses[]={"ingenieur"};};
		};
		time_per_item=25;
		time_default=1;
	};
	class herse: bag_01
	{
		name="Fabrication : Herse";
		class require
		{
			items_virtual[]={{"steelp",15},{"anarkhium",5}};
		};
		class receive
		{
			items_virtual[]={{"spikeStrip",1}};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_avance"};};
		};
		time_per_item=25;
		time_default=1;
	};
	class bonbonne: bag_01
	{
		name="Fabrication : Bonbonne inflammable";
		class require
		{
			items_virtual[]={{"ironp",5},{"fioul",4},{"anarkhium",5}};
		};
		class receive
		{
			items_virtual[]={{"bonbonne_explo",1}};
		};
		class factions
		{
			class CIV {licenses[]={"archeologie"};};
		};
		time_per_item=25;
		time_default=1;
	};




    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Nourriture craft         ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class cuissechevre
	{
		name="Préparation de cuisse de chèvre";
		sound="smelting";
		class require
		{
			items_virtual[]={{"goat",1}};
		};
		class receive
		{
			items_virtual[]={{"gigotchevre",2}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {licenses[]={"apprenti_cuisinier"};};
		};
	};
	class conservechevre
	{
		name="Mise en conserve de chèvre";
		sound="smelting";
		class require
		{
			items_virtual[]={{"goat",1},{"conserve",1}};
		};
		class receive
		{
			items_virtual[]={{"conservechevre",2}};
		};
		time_per_item=1;
		time_default=45;

		class factions
		{
			class CIV {licenses[]={"sous_chef"};};
		};
	};
	class platchevre
	{
		name="Préparation du cuissot de chèvre";
		sound="smelting";
		class require
		{
			items_virtual[]={{"gigotchevre",1},{"anarkhium",1}};
		};
		class receive
		{
			items_virtual[]={{"platchevre",2}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {licenses[]={"chef"};};
		};
	};
	class cuissemouton
	{
		name="Préparation de cuisse de mouton";
		sound="smelting";
		class require
		{
			items_virtual[]={{"sheep",1}};
		};
		class receive
		{
			items_virtual[]={{"gigotmouton",2}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {licenses[]={"apprenti_cuisinier"};};
		};
	};
	class conservemouton
	{
		name="Mise en conserve du mouton";
		sound="smelting";
		class require
		{
			items_virtual[]={{"sheep",1},{"conserve",1}};
		};
		class receive
		{
			items_virtual[]={{"conservemouton",1}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {licenses[]={"sous_chef"};};
		};
	};
	class platmouton
	{
		name="Préparation du cuissot de mouton";
		sound="smelting";
		class require
		{
			items_virtual[]={{"gigotmouton",1},{"anarkhium",1}};
		};
		class receive
		{
			items_virtual[]={{"platmouton",2}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {licenses[]={"chef"};};
		};
	};
	class bouteilleraisin
	{
		name="Mise en bouteille du raisin";
		sound="smelting";
		class require
		{
			items_virtual[]={{"raisin",1},{"bouteillevide",1}};
		};
		class receive
		{
			items_virtual[]={{"bouteilleraisin",1}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {licenses[]={"apprenti_cuisinier"};};
		};
	};


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Vetements craft          ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class baillon
	{
		name= "Fabrication : Baillon";
		class require
		{
			items_virtual[]={{"tissue",3}};
		};
		class receive
		{
			items_arma[]={"mgsr_headbag"};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_avance"};};
		};
		time_per_item=1;
		time_default=45;
	};
	class cagoule
	{
		name= "Fabrication : Cagoule";
		class require
		{
			items_virtual[]={{"tissue",3}};
		};
		class receive
		{
			items_arma[]={"G_Bandanna_blk"};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_avance"};};
		};
		time_per_item=1;
		time_default=45;
	};
	class respirateur
	{
		name= "Fabrication : Respirateur plongé";
		class require
		{
			items_virtual[]={{"tissue",5},{"steelp",5},{"plastique",2}};
		};
		class receive
		{
			items_arma[]={"V_RebreatherB"};
		};
		class factions
		{
			class CIV {licenses[]={"bricoleur_avance"};};
		};
		time_per_item=1;
		time_default=45;
	};
	class vesteantirad
	{
		name= "Fabrication : Combi. Anti Radiation";
		class require
		{
			items_virtual[]={{"tissue",15},{"anarkhium",3}};
		};
		class receive
		{
			items_arma[]={"U_C_CBRN_Suit_01_White_F"};
		};
		class factions
		{
			class CIV {licenses[]={"ingenieur"};};
		};
		time_per_item=1;
		time_default=45;
	};
	class maskantirad
	{
		name= "Fabrication : Masque anti radiation";
		class require
		{
			items_virtual[]={{"tissue",5},{"anarkhium",3}};
		};
		class receive
		{
			items_arma[]={"G_RegulatorMask_F"};
		};
		class factions
		{
			class CIV {licenses[]={"ingenieur"};};
		};
		time_per_item=1;
		time_default=45;
	};
	class bouteillerad
	{
		name= "Fabrication : Bouteille Oxygène";
		class require
		{
			items_virtual[]={{"tissue",5},{"steelp",5},{"plastique",2}};
		};
		class receive
		{
			items_arma[]={"B_SCBA_01_F"};
		};
		class factions
		{
			class CIV {licenses[]={"ingenieur"};};
		};
		time_per_item=1;
		time_default=45;
	};

	class respirateurantirad
	{
		name= "Fabrication : Respirateur";
		class require
		{
			items_virtual[]={{"circuitimprime",3},{"anarkhium",5}};
		};
		class receive
		{
			items_arma[]={"B_CombinationUnitRespirator_01_F"};
		};
		class factions
		{
			class CIV {licenses[]={"ingenieur"};};
		};
		time_per_item=1;
		time_default=45;
	};
	class giletpareballe
	{
		name= "Fabrication : Pare-Balles";
		class require
		{
			items_virtual[]={{"tissue",10},{"anarkhium",5}};
		};
		class receive
		{
			items_arma[]={"TRYK_V_Bulletproof_BLK"};
		};
		class factions
		{
			class CIV {licenses[]={"ingenieur"};};
		};
		time_per_item=1;
		time_default=45;
	};


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Fabrication Arme         ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

					//////////////////////////////////////////////////////////////////////////////////////
					///////////////////////////////// ACCESOIRES /////////////////////////////////////////
					/////////////////////////////////////////////////////////////////////////////////////

	class holosight
	{
		name= "Fabrication : Viseur Holosight";
		class require
		{
			items_virtual[]={{"steelp",1}, {"glass",1},{"anarkhium",5}};
		};
		class receive
		{
			items_arma[]={"optic_Holosight_smg"};
		};
		class factions
		{
			class CIV {licenses[]={"armurier_accessoire"};};
		};
		time_per_item=1;
		time_default=45;
	};

	class optic_hamr: holosight {
		name="Fabrication : Viseur RCO";
		class receive
		{
			items_arma[]={"optic_hamr"};
		};
	};
	class optic_MRCO: holosight {
		name="Fabrication : Viseur MRCO";
		class receive
		{
			items_arma[]={"optic_MRCO"};
		};
	};
	class optic_Aco_smg: holosight {
		name="Fabrication : Viseur ACO";
		class receive
		{
			items_arma[]={"optic_Aco_smg"};
		};
	};
	class optic_DMS: holosight {
		name="Fabrication : Viseur DMS";
		class receive
		{
			items_arma[]={"optic_DMS"};
		};
	};

				//////////////////////////////////////////////////////////////////////////////////////
				///////////////////////////////// ARMES//// /////////////////////////////////////////
				/////////////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Normaux ///////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class usp40
	{
		name="Fabrication : USP40";
		class require
		{
			items_virtual[]={{"barrelp",1},{"receiverp",1},{"gripp",1},{"slapperp",1},{"framep",1},{"triggerp",1},{"anarkhium",3}};
		};
		class receive
		{
			items_arma[]={"RH_uspm"};
		};
		class factions
		{
			class CIV {licenses[]={"armurier_legere"};};

		};
		time_per_item=1;
		time_default=45;
	};

	class sw659: usp40
	{	name="Fabrication : SW659";
		class receive
		{
			items_arma[]={"RH_sw659"};
		};
	};
	class silverball: usp40
	{	name="Fabrication : Silverball";
		class receive
		{
			items_arma[]={"KA_SilverBaller_L"};
		};
	};
	class g17: usp40
	{	name="Fabrication : Glock17";
		class receive
		{
			items_arma[]={"RH_g17"};
		};
	};
	class g18: usp40
	{	name="Fabrication : Glock18";
		class receive
		{
			items_arma[]={"RH_g18"};
		};
	};
	class deserteagle: usp40
	{	name="Fabrication : Desert Eagle";
		class receive
		{
			items_arma[]={"RH_Deaglem"};
		};
	};

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Intermédiaire/////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////

	class sting
	{
		name="Fabrication : Sting";
		class require
		{
			items_virtual[]={{"intermediary_barrelp",1},{"intermediary_receiverp",1},{"intermediary_gripp",1},{"intermediary_slapperp",1},{"intermediary_framep",1},{"triggerp",1},{"anarkhium",6}};
		};
		class receive
		{
			items_arma[]={"SMG_02_F"};
		};
		class factions
		{
			class CIV {licenses[]={"armurier_auto"};};

		};
		time_per_item=1;
		time_default=45;
	};
	class trg: sting
	{	name="Fabrication : TRG";
		class receive
		{
			items_arma[]={"arifle_TRG20_F"};
		};
	};
	class ump45: sting
	{	name="Fabrication : UMP45";
		class receive
		{
			items_arma[]={"Skyline_UMP45_01_F"};
		};
	};
	class protector: sting
	{	name="Fabrication : Protector";
		class receive
		{
			items_arma[]={"SMG_05_F"};
		};
	};
	class pdw2000: sting
	{	name="Fabrication : PDW2000";
		class receive
		{
			items_arma[]={"hgun_PDW2000_F"};
		};
	};
	class vermin: sting
	{	name="Fabrication : Vermin";
		class receive
		{
			items_arma[]={"SMG_01_F"};
		};
	};

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Militaire/////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class akm
	{
		name="Fabrication : AKM";
		class require
		{
			items_virtual[]={{"military_framep",1},{"military_shoulderp",1},{"military_gripp",1},{"military_barrelp",1},{"military_slapperp",1},{"military_receiverp",1},{"triggerp",1},{"anarkhium",10}};
		};
		class receive
		{
			items_arma[]={"Skyline_AKM_01_F"};
		};
		class factions
		{
			class CIV {licenses[]={"armurier_lourdes"};};

		};
		time_per_item=1;
		time_default=45;
	};

	class car95: akm
	{	name="Fabrication : CAR95";
		class receive
		{
			items_arma[]={"arifle_CTAR_blk_F"};
		};
	};
	class katiba: akm
	{	name="Fabrication : Katiba";
		class receive
		{
			items_arma[]={"arifle_Katiba_C_F"};
		};
	};
	class mx: akm
	{	name="Fabrication : MX 6.5";
		class receive
		{
			items_arma[]={"arifle_MX_Black_F"};
		};
	};
	class spar: akm
	{	name="Fabrication : SPAR16";
		class receive
		{
			items_arma[]={"arifle_SPAR_01_blk_F"};
		};
	};
	class type115: akm
	{	name="Fabrication : Type115";
		class receive
		{
			items_arma[]={"arifle_ARX_blk_F"};
		};
	};

				/////////////////////////////////////////////////////////////////////////////////////
				///////////////////////////////// CHARGEURS /////////////////////////////////////////
				/////////////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Normaux ///////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class magazine_usp40
	{
		name="Fabrication : Chargeur USP40";
		sound="smelting";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",16}};
		};
		class receive
		{
			items_arma[]={"RH_16Rnd_40cal_usp"};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {licenses[]={"armurier_legere"};};

		};
	};
	class magazine_sw659: magazine_usp40
	{
		name="Fabrication : Chargeur SW659";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",19}};
		};
		class receive
		{
			items_arma[]={"RH_14Rnd_9x19_sw"};
		};
	};
	class magazine_silverball: magazine_usp40
	{
		name="Fabrication : Chargeur Silverball";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",8}};
		};
		class receive
		{
			items_arma[]={"KA_8Rnd_45ACP_Mag"};
		};
	};
	class magazine_glock17: magazine_usp40
	{
		name="Fabrication : Chargeur Glock17";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",19}};
		};
		class receive
		{
			items_arma[]={"RH_17Rnd_9x19_g17"};
		};
	};
	class magazine_glock18: magazine_usp40
	{
		name="Fabrication : Chargeur Glock18";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",19}};
		};
		class receive
		{
			items_arma[]={"RH_19Rnd_9x19_g18"};
		};
	};
	class magazine_deagle: magazine_usp40
	{
		name="Fabrication : Chargeur Deagle";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",7}};
		};
		class receive
		{
			items_arma[]={"RH_7Rnd_50_AE"};
		};
	};

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Intermédiaire/////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////

	class magazine_919mm
	{
		name="Fabrication : Chargeur 9.19mm";
		sound="smelting";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",30}};
		};
		class receive
		{
			items_arma[]={"30Rnd_9x21_Mag_SMG_02"};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {licenses[]={"armurier_auto"};};

		};
	};
	class magazine_556: magazine_919mm
	{
		name="Fabrication : Chargeur 5.56mm";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",30},{"anarkhium",1}};
		};
		class receive
		{
			items_arma[]={"30Rnd_556x45_Stanag"};
		};
	};
	class magazine_ump45: magazine_919mm
	{
		name="Fabrication : Chargeur UMP45";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",25}};
		};
		class receive
		{
			items_arma[]={"25Rnd_45ACP_Mag"};
		};
	};
	class magazine_pdw: magazine_919mm
	{
		name="Fabrication : Chargeur PDW2000";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",30}};
		};
		class receive
		{
			items_arma[]={"30Rnd_9x21_Mag"};
		};
	};
	class magazine_vermin: magazine_919mm
	{
		name="Fabrication : Chargeur Vermin";
		class require
		{
			items_virtual[]={{"magazinep",1},{"bulletp",30}};
		};
		class receive
		{
			items_arma[]={"30Rnd_45ACP_Mag_SMG_01"};
		};
	};


	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Militaire/////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class magazine_akm
	{
		name="Fabrication : Chargeur AKM";
		sound="smelting";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30},{"anarkhium",1}};
		};
		class receive
		{
			items_arma[]={"30Rnd_762x39_AKM"};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {licenses[]={"armurier_lourdes"};};

		};
	};
	class magazine_car95: magazine_akm
	{
		name="Fabrication : Chargeur CAR95";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30},{"anarkhium",1}};
		};
		class receive
		{
			items_arma[]={"30Rnd_580x42_Mag_F"};
		};
	};
	class magazine_65mm: magazine_akm
	{
		name="Fabrication : Chargeur 6.5mm";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30},{"anarkhium",1}};
		};
		class receive
		{
			items_arma[]={"30Rnd_65x39_caseless_green"};
		};
	};
	class magazine_mx65: magazine_akm
	{
		name="Fabrication : Chargeur MX6.5mm";
		class require
		{
			items_virtual[]={{"military_magazinep",1},{"military_bulletp",30},{"anarkhium",1}};
		};
		class receive
		{
			items_arma[]={"30Rnd_65x39_caseless_black_mag"};
		};
	};

			//////////////////////////////////////////////////////////////////////////////////////
			///////////////////////////////// COMPOSANTS ////////////////////////////////////////
			/////////////////////////////////////////////////////////////////////////////////////
    class shoulder
	{
		name="Fabrication : crosse";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"shoulderp",1}};
		};
		time_per_item=1;
		time_default=45;
		class factions
		{
			class CIV {};
		};
	};
	class intermediary_shoulder: shoulder
	{
		name="Fabrication : Crosse intermediaire";
		class require
		{
			items_virtual[]={{"steelp",1},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_shoulderp",1}};
		};
	};
	class military_shoulder: shoulder
	{
		name="Fabrication : Crosse Millitaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1},{"woodp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_shoulderp",1}};
		};
	};

	class barrel: shoulder
	{
		name="Fabrication : Canon";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"barrelp",1}};
		};
	};

	class intermediary_barrel: shoulder

	{
		name="Fabrication : Canon intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_barrelp",1}};
		};
	};
	class military_barrel: shoulder
	{
		name="Fabrication : Canon Millitaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",2}};
		};
		class receive
		{
			items_virtual[]={{"military_barrelp",1}};
		};
	};

	class receiver: shoulder
	{
		name="Fabrication : Culasse";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"receiverp",1}};
		};
	};
	class intermediary_receiver: shoulder
	{
		name="Fabrication : Culasse intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_receiverp",1}};
		};

	};

	class military_receiver: shoulder
	{
		name="Fabrication : Culasse Millitaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_receiverp",1}};
		};
	};

	class grip: shoulder
	{
		name="Fabrication : Poignée";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"gripp",1}};
		};
	};
	class intermediary_grip: shoulder
	{
		name="Fabrication : Poignée intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_gripp",1}};
		};
	};

	class military_grip: shoulder
	{
		name="Fabrication : Poignée Millitaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1},{"woodp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_gripp",1}};
		};
	};

	class slapper: shoulder
	{
		name="Fabrication : Percuteur";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"slapperp",3}};
		};
	};
	class intermediary_slapper: shoulder
	{
		name="Fabrication : Percuteur intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_slapperp",2}};
		};
	};

	class military_slapper: shoulder

	{
		name="Fabrication : Percuteur Millitaire";
		class require
		{
			items_virtual[]={{"steelp",2}};
		};
		class receive
		{
			items_virtual[]={{"military_slapperp",2}};
		};
	};

	class frame: shoulder
	{
		name="Fabrication : Armature";
		class require
		{
			items_virtual[]={{"steelp",2}};
		};
		class receive
		{
			items_virtual[]={{"framep",2}};
		};
	};
	class intermediary_frame: shoulder
	{
		name="Fabrication : Armature intermediaire";
		class require
		{
			items_virtual[]={{"steelp",2},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"intermediary_framep",1}};
		};
	};

	class military_frame: shoulder
	{
		name="Fabrication : Armature Millitaire";
		class require
		{
			items_virtual[]={{"steelp",3},{"ironp",2}};
		};
		class receive
		{
			items_virtual[]={{"military_framep",1}};
		};
	};

	class magazine: shoulder
	{
		name="Fabrication : Chargeur";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"magazinep",8}};
		};
	};
	class military_magazine: shoulder
	{
		name="Fabrication : Chargeur Millitaire";
		class require
		{
			items_virtual[]={{"steelp",1},{"ironp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_magazinep",3}};
		};
	};

	class bullet: shoulder
	{
		name="Fabrication : Balles";
		class require
		{
			items_virtual[]={{"plombp",1}};
		};
		class receive
		{
			items_virtual[]={{"bulletp",15}};
		};
		time_per_item=2;
	};
	class military_bullet: shoulder
	{
		name="Fabrication : Balles Millitaire";
		class require
		{
			items_virtual[]={{"plombp",1}};
		};
		class receive
		{
			items_virtual[]={{"military_bulletp",15}};
		};
	};
	class chevrotine: shoulder
	{
		name="Fabrication : chevrotine";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"chevrotinep",10}};
		};
	};

	class cylinder: shoulder
	{
		name="Fabrication : Barillet";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"cylinderp",3}};
		};
	};

	class trigger: shoulder
	{
		name="Fabrication : Détente";
		class require
		{
			items_virtual[]={{"steelp",1}};
		};
		class receive
		{
			items_virtual[]={{"triggerp",4}};
		};
	};
};
