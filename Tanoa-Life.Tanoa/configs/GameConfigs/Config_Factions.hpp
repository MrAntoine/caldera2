class ALYSIA_FACTIONS
{
	class CIV
	{
		/*** GLOBAL ***/
		name="Immigré";
		name_full="Immigré";
		icon="Alysia_Client_Texture\Data\faction\CIV_logo.paa";
		identity_item="sc0t_puce";

		/*class map_factions_markers
		{
			shown[]={"CIV"};
		};*/

		/*** SALARY ***/
		class salary
		{
			name="Virement";
			amount=1450;
			apply_rank=0;
			timer=15;
		};

		/*** PHONE ***/
		class phone
		{
			change_number_price=100000;
			receive_fuel_alert=0;
		};
		class send_global_message
			{
				rank=0;
			};

		/*** Licenses ***/
		//	fonctionnement du give license :
		//	class politique_pnt_member (nom de la licence pour donner nécessaire)
		//		{
		//			rank=0; (rank nécessaire)
		//			same_side_only=0; (même side obligatoire)
		//			license="politique_pnt_sec"; (La licnece donné)
		//		};


		/*** COMPANIES ***/
		class companies
		{
			search=1;
			owner=1;
			employee=1;
			class create
			{
				license="coop_agri";
			};
			class history
			{
				license="coop_agri";
				class clean
				{
					license="coop_agri";
				};
			};
		};

		/*** SPAWN/RESPAWN ***/
		class respawn
		{
			marker="respawn_civilian";
			price=1000;
			suicide=0.05;
		};

		/*** HOUSING ***/
		class housing
		{
			search=0;
			max=1;
		};

		/*** HEAL ***/
		can_use_debrif=1;

		/*** SKULL ***/
		skull_who=1;
		skull_take=1;

		/*** INTERACTIONS ***/
		interaction_seize_gear=0;

		/*** LOADOUT ***/
		class Loadout
		{
			//uniform="Skyline_Uniforme_Alysia_01_F";
			uniform="Skyline_Character_U_CivilB_05_F";
			headgear="";
			vest="";
			backpack="";
			items[]={"AnarkhiaBitcoinKey"};
		};

		/*** RANKS ***/
		class Ranks
		{
			ranks_complet[]=
			{
				"Immigré",
				"Criminel",
				"Rebelle"
			};
			ranks_short[]=
			{
				"Cit",
				"Crim",
				"Reb"
			};
		};
	};
};
