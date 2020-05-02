class ALYSIA_SHOPS_VIRTUAL
{
	/* GLOBAL MARKET */

	class farmingmarket
	{
		name="Marché";
		side="CIV";
		buy[]=
		{
			"reinedespres_seed",
			"ortie_seed",
			"valeriane_seed",
			"cotton_seed",
			"tabac_seed",
			"aubepine_seed"
		};
		sell[]=
		{};
	};

	class market
	{
		name="Ration";
		buy[]=
		{
			"eau50",
			"wheat_cake"
		};
	};

	class cafet_station
	{
		name="Station Cafet";
		buy[]=
		{
			"eau50",
			"wheat_cake"
		};
	};

	class labo
	{
		name="Achat de laboratoires";
		buy[]=
		{
			"lab_medical",
			"lab_avance",
			"lab_macon",
			"lab_cigare",
			"lab_alimentaire"
		};
	};

	class labo_illegaux
	{
		name="Achat de laboratoires illégaux";
		buy[]=
		{
			"lab_marijuana",
			"lab_mushroom",
			"lab_meth",
			"lab_cocaine",
			"lab_heroin"
		};
	};

	class graines_illegales
	{
		name="Achat de graines";
		buy[]=
		{
			"cannabis_seed",
			"heroin_seed",
			"cocaine_seed",
			"meth_seed",
			"mushroom_seed"
		};
	};

	class dealer
	{
		name="Dealer";
		side="CIV";
		sell[]={"marijuana","methp","heroinps","cocainepc","mushroom_bocal"};
	};
/*
	class rebel: dealer
	{
		name="Marché rebelle";
		buy[]=
		{
			"handcuffs",
			"handcuffkeys",
			"lab_marijuana",
			"lab_mushroom",
			"lab_meth",
			"lab_cocaine",
			"lab_heroin",
			"lab_cigare",
			"lab_heal",
			"lab_gun",
			"lab_construction"
		};
	};
*/
	class black_market: dealer
	{
		name="Marché noir";
		sell[]=
		{
			//"artefact_R",
			//"artefact",
			//"objvaleur",
			//"handcuffs",
			//"handcuffkeys",
			"turtle",
			"cigare",
			"corail",
			"amethyste",
			"saphir",
			"topaze",
			"volcano"
		};
		buy[]=
		{
		//	"handcuffs",
		//	"handcuffkeys",
		//	"nitro",
			"bocal",
			"destroy_labo"
		};
	};


	/* RESSOURCES */
	class exportateur
	{
		name="Exportateur";
		side="CIV";
		sell[]={
		"woodp",
		"ironp",
		"plombp",
		"aluminiump",
		"steelp",
		"glass",
		"plastique",
		"fioul",
		"gazole",
		"cottonp",
		"tissue",
		"aubepinep",
		"valerianep",
		"ortiep",
		"reinedespresp",
		"turtle"
		};
	};

	class poisson_market
	{
		name="La Criée";
		side="CIV";
		sell[]={
		"reinedespresp",
		"turtle"
		};
	};

};
