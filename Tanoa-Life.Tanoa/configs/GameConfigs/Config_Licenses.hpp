class ALYSIA_LICENSES
{
	/*class rebelle_1
	{
		name="Licence rebelle";
		class factions
		{
			class CIV
			{
				price=500000;
				search_shown[]={};
				lostOnDeath=1;
			};
		};
	};*/

	class permisconduire
	{
		name="Permis B";
		class factions
		{
			class CIV
			{
				price=5000;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};

	class permismoto
	{
		name="Permis A2";
		class factions
		{
			class CIV
			{
				price=8000;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};

	class permiscamion
	{
		name="Permis PL";
		class factions
		{
			class CIV
			{
				price=10000;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};

	class permismarin
	{
		name="Permis Marin";
		class factions
		{
			class CIV
			{
				price=34500;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};

	class licenceaerienne
	{
		name="Licence Aérienne";
		class factions
		{
			class CIV
			{
				price=100000;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};

	class portarme
	{
		name="Permis port d'armes";
		class factions
		{
			class CIV
			{
				price=250000;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};

	class chasse
	{
		name="Permis de chasse";
		class factions
		{
			class CIV
			{
				price=52000;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};



	///////////////////////Cuisine/////////////////////////

	class apprenti_cuisinier
	{
		name="Assistant Cuisine";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class sous_chef
	{
		name="Sous-Chef";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class chef
	{
		name="Chef";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class chef_specialise
	{
		name="Chef Spécialisé";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};

	///////////////////////Armurier/////////////////////////

	class armurier_legere
	{
		name="Armurier d'armes légères";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class armurier_auto
	{
		name="Armurier d'armes automatiques";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class armurier_lourdes
	{
		name="Armurier d'armes lourdes";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class armurier_accessoire
	{
		name="Armurier d'accessoires";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};

	///////////////////////Bricoleur/////////////////////////

	class bricoleur_amateur
	{
		name="Bricoleur Amateur";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class bricoleur_avance
	{
		name="Bricoleur Avancé";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class ingenieur
	{
		name="Ingénieur";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class ingenieur_specialise
	{
		name="Ingénieur Spécialisé";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};

	///////////////////////Maçon/////////////////////////

	class macon_amateur
	{
		name="Maçon Amateur";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class macon_avance
	{
		name="Maçon Avancé";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class architecte
	{
		name="Architecte";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};
	class architecte_specialise
	{
		name="Architecte Spécialisé";
		class factions
		{
			class CIV
			{
				pad_store=1;
			};
		};
	};

	///////////////////////Infirmier/////////////////////////

	class infirmier_stagiaire
	{
		name="Formation premiers secours";
		class factions
		{
			class CIV
			{
				pad_store=1;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};
	class infirmier
	{
		name="Infirmier";
		class factions
		{
			class CIV
			{
				pad_store=1;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};
	class medecin
	{
		name="Médecin";
		class factions
		{
			class CIV
			{
				pad_store=1;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};
	class medecin_specialise
	{
		name="Médecin Spécialisé";
		class factions
		{
			class CIV
			{
				pad_store=1;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};



	class assr_medical
	{
		name="Assurance médicale";
		class factions
		{
			class CIV
			{
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
			class EAST: CIV {};
			class GUER: CIV {};
			class WEST: CIV {};
		};
	};
	class medical
	{
		name="Certificat médical";
		class factions
		{
			class CIV
			{
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
			class EAST: CIV {};
			class GUER: CIV {};
			class WEST: CIV {};
		};
	};

	/////////////////////// Sécurité /////////////////////////

	class stagiaire_securite
	{
		name="Stagiaire en Sécurité";
		class factions
		{
			class CIV
			{
				pad_store=1;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};
	class agent_securite
	{
		name="Agent de Sécurité";
		class factions
		{
			class CIV
			{
				pad_store=1;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};
	class chef_securite
	{
		name="Chef en Sécurité";
		class factions
		{
			class CIV
			{
				pad_store=1;
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};



	///////////////////////Importateur/////////////////////////

	class importateur
	{
		name="Importation de véhicule";
		class factions
		{
			class CIV
			{
				price=900;
				pad_store=1;
			};
		};
	};
	class importateurpoidslourds
	{
		name="Importation de poids lourds";
		class factions
		{
			class CIV
			{
				price=25000;
				pad_store=1;
			};
		};
	};
		class importateurluxe
	{
		name="Droit d'importation de luxe";
		class factions
		{
			class CIV
			{
				price=45000;
				pad_store=1;
			};
		};
	};
	class importateuraerien
	{
		name="Droit d'importation aérien";
		class factions
		{
			class CIV
			{
				price=90000;
				pad_store=1;
			};
		};
	};
	class importateurmaritime
	{
		name="Droit d'importation maritime";
		class factions
		{
			class CIV
			{
				price=90000;
				pad_store=1;
			};
		};
	};



	/*class company_farming
	{
		name="Agriculteur";
		class factions
		{
			class CIV
			{
				price=9000;
				condition="!(isNull g_company) && {(((g_company getVariable ['company_info',['','','']]) select 2) isEqualTo 'farming')}";
				search_shown[]={"WEST","EAST","GUER","CIV"};
			};
		};
	};*/
};
