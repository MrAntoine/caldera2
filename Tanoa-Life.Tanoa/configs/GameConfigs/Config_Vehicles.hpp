class ALYSIA_VEHICLES_INFO
{
	/* MASTER VEHICLES CONFIG */
	insurance_percentage=0.5;
	garage_percentage=0.03;
	steal_percentage=0.4;
	sell_percentage=0.4;
	transfert_percentage=0.1;
	// based on vehicle's buyPrice
};

class ALYSIA_VEHICLES
{
	/*
	class master_vehicleClassname
	{
		buy price 				-NUMBER-	(vehicle shop buy price)
    Ex: buyPrice=1910000;
    ----------------------------
		virtual inventory	    -NUMBER-	(virtual inventory space)
    Ex: inventory=45;
    ----------------------------
		side 					-TXT- (allow vehicles defined as WEST,EAST,GUER to be opened by faction member without having keys)
    possible: [WEST,EAST,GUER,CIV]
    Ex: side="";
    ----------------------------
		insurance 				-NUMBER-	(can be insured)
    possible [0(no),1(yes]
    Ex: insurance=1;
	----------------------------
		license						-TXT-			(license name/empty if no need: player needs to have license x to buy vehicle. Eg: CONFIG_licenses)
    Ex: licenses[]={"truck"};
    ----------------------------
		rank 							-NUMBER-	(use in WEST,EAST,GUER factions: player needs to have alteast rank x to buy vehicle. Must be 0 for civilian. Eg: CONFIG_factions)
    Ex: rank=4;
    ----------------------------
		colors 						-ARRAT-		(vehicle's color classnames)
    Ex: colors[]={"className_color1","className_color2",...};
    ----------------------------
		realname 					-TXT-			(vehicle name in shop)
    Ex: realname="Camion Ben";
    ----------------------------
	};

	OPTIONAL:         (multiple colors for the same model)
	class master_vehicleClassname_color1: master_vehicleClassname {};
	class master_vehicleClassname_color2: master_vehicleClassname {};
	class master_vehicleClassname_color3: master_vehicleClassname {};
	...
	**				CIVILIAN VEHICLES
	*/

	 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////               Citadines                 ///////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



	class RDS_Gaz24_Civ_03
	{
		realname="Gaz 24";
		buyPrice=2500;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=40;
		colors[]=
		{
			"RDS_Gaz24_Civ_02",
			"RDS_Gaz24_Civ_01"
		};
	};
	class RDS_Gaz24_Civ_02: RDS_Gaz24_Civ_03 {};
	class RDS_Gaz24_Civ_01: RDS_Gaz24_Civ_03 {};


	class RDS_Golf4_Civ_01
	{
		realname="Golf 4";
		buyPrice=5700;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]= {};
	};

	class RDS_S1203_Civ_01
	{
		realname="Skoda 1203";
		buyPrice=12500;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]= {};
	};

	class d3s_gls63_17
	{
		realname="GLS 63";
		buyPrice=120000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]= {};
	};

	class d3s_raptor_17
	{
		realname="F150";
		buyPrice=123000;
		inventory=120;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]= {};
	};

	class d3s_raptor_SCR_17
	{
		realname="F150 scorpio";
		buyPrice=170000;
		inventory=150;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]= {};
	};

	class AlessioMustang
	{
		realname="Mustang";
		buyPrice=150000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]= {};
	};


	class RDS_Lada_Civ_03
	{
		realname="Vaz 2103";
		buyPrice=9500;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"RDS_Lada_Civ_02",
			"RDS_Lada_Civ_01"
		};
	};
	class RDS_Lada_Civ_01: RDS_Lada_Civ_03 {};
	class RDS_Lada_Civ_02: RDS_Lada_Civ_03 {};


	class d3s_srthellcat_15
	{
		realname="Dodge Charger";
		buyPrice=180000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"d3s_srthellcat_15_HELL"
		};
	};
	class d3s_srthellcat_15_HELL: d3s_srthellcat_15 {};








	class d3s_f13_13_base
	{
		realname="BMW M6";
		buyPrice=66750;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"d3s_f13_13",
			"d3s_f13_13_CE",
			"d3s_f13_13_EX"
		};
	};
	class d3s_f13_13: d3s_f13_13_base {};
	class d3s_f13_13_CE: d3s_f13_13_base {};
	class d3s_f13_13_EX: d3s_f13_13_base {};






	class d3s_f80_14_base
	{
		realname="BMW M3";
		buyPrice=52500;
		inventory=60;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"d3s_f80_14_GTS",
			"d3s_f80_14"
		};
	};
	class d3s_f80_14_GTS: d3s_f80_14_base {};
	class d3s_f80_14: d3s_f80_14_base {};





	class d3s_fiesta_16_base
	{
		realname="Ford Fiesta";
		buyPrice=26300;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"d3s_fiesta_16",
			"d3s_fiesta_16_EX",
			"d3s_fiesta_16_H",
			"d3s_fiesta_16_230"
		};
	};
	class d3s_fiesta_16: d3s_fiesta_16_base {};
	class d3s_fiesta_16_EX: d3s_fiesta_16_base {};
	class d3s_fiesta_16_H: d3s_fiesta_16_base {};
	class d3s_fiesta_16_230: d3s_fiesta_16_base {};






	class d3s_focus_17_base
	{
		realname="Ford Focus RS";
		buyPrice=38780;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"d3s_focus_17",
			"d3s_focus_17_LB",
			"d3s_focus_17_PP",
			"d3s_focus_17_RS"
		};
	};
	class d3s_focus_17: d3s_focus_17_base {};
	class d3s_focus_17_LB: d3s_focus_17_base {};
	class d3s_focus_17_PP: d3s_focus_17_base {};
	class d3s_focus_17_RS: d3s_focus_17_base {};




	class d3s_ghibli_14_base
	{
		realname="Maserati Ghibli";
		buyPrice=243320;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"d3s_ghibli_14",
			"d3s_ghibli_14_d",
			"d3s_ghibli_14_30",
			"d3s_ghibli_14_s",
			"d3s_ghibli_14_q4",
			"d3s_ghibli_14_sq4",
			"d3s_ghibli_esteso_14",
			"d3s_ghibli_14_nerissimo",
			"d3s_ghibli_14_EX"
		};
	};
	class d3s_ghibli_14: d3s_ghibli_14_base {};
	class d3s_ghibli_14_d: d3s_ghibli_14_base {};
	class d3s_ghibli_14_30: d3s_ghibli_14_base {};
	class d3s_ghibli_14_s: d3s_ghibli_14_base {};
	class d3s_ghibli_14_q4: d3s_ghibli_14_base {};
	class d3s_ghibli_14_sq4: d3s_ghibli_14_base {};
	class d3s_ghibli_esteso_14: d3s_ghibli_14_base {};
	class d3s_ghibli_14_nerissimo: d3s_ghibli_14_base {};
	class d3s_ghibli_14_EX: d3s_ghibli_14_base {};






	class d3s_megane_06
	{
		realname="Renault Megane II";
		buyPrice=23500;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"d3s_megane_06_SE",
			"d3s_megane_06_XSE"
		};
	};
	class d3s_megane_06_SE: d3s_megane_06 {};
	class d3s_megane_06_XSE: d3s_megane_06 {};





		class d3s_taurus_10
	{
		realname="Ford Taurus EcoBoost";
		buyPrice=46500;
		inventory=70;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"d3s_taurus_eco_10"
		};
	};
	class d3s_taurus_eco_10: d3s_taurus_10 {};
























	class d3s_e38_98
	{
		realname="BMW 730i";
		buyPrice=13500;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"d3s_e38_98_2",
			"d3s_e38_98_3",
			"d3s_e38_98_4",
			"d3s_e38_98_5"
		};
	};
	class d3s_e38_98_2: d3s_e38_98 {};
	class d3s_e38_98_3: d3s_e38_98 {};
	class d3s_e38_98_4: d3s_e38_98 {};
	class d3s_e38_98_5: d3s_e38_98 {};






	class d3s_giulietta_16
	{
		realname="Alfa Romeo Giuletta";
		buyPrice=159500;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=53;
		colors[]=
		{
		  "d3s_giulietta_16_1",
		  "d3s_giulietta_16_2",
		  "d3s_giulietta_16_3",
		  "d3s_giulietta_16_4"
		};
	};
	class d3s_giulietta_16_1: d3s_giulietta_16 {};
	class d3s_giulietta_16_2: d3s_giulietta_16 {};
	class d3s_giulietta_16_3: d3s_giulietta_16 {};
	class d3s_giulietta_16_4: d3s_giulietta_16 {};


/*
	class d3s_uaz_469P_EXP2
	{
		realname="UAZ 469";
		buyPrice=17200;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=53;
		colors[]=
		{
		  "d3s_uaz_469P_EXP3",
		  "d3s_uaz_469P_EXP4",
		  "d3s_uaz_469P_EXP5",
		  "d3s_uaz_469P_EXP6"
		};
	};
	class d3s_uaz_469P_EXP3: d3s_uaz_469P_EXP2 {};
	class d3s_uaz_469P_EXP4: d3s_uaz_469P_EXP2 {};
	class d3s_uaz_469P_EXP5: d3s_uaz_469P_EXP2 {};
	class d3s_uaz_469P_EXP6: d3s_uaz_469P_EXP2 {};

	class d3s_uaz_469P_1: d3s_uaz_469P_EXP2 {};
	class d3s_uaz_469P_2: d3s_uaz_469P_EXP2 {};
	class d3s_uaz_469P_3: d3s_uaz_469P_EXP2 {};
	class d3s_uaz_469P_4: d3s_uaz_469P_EXP2 {};
	class d3s_uaz_469P_5: d3s_uaz_469P_EXP2 {};
	class d3s_uaz_469P_6: d3s_uaz_469P_EXP2 {};
	class d3s_uaz_469P_7: d3s_uaz_469P_EXP2 {};
	class d3s_uaz_469P_8: d3s_uaz_469P_EXP2 {};

*/


	class d3s_vesta_15
	{
		realname="Lada Vesta";
		buyPrice=18900;
		inventory=75;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=75;
		colors[]=
		{
			"d3s_vesta_15_2",
			"d3s_vesta_15_3",
			"d3s_vesta_15_4",
			"d3s_vesta_15_5"
		};
	};
	class d3s_vesta_15_2: d3s_vesta_15 {};
	class d3s_vesta_15_3: d3s_vesta_15 {};
	class d3s_vesta_15_4: d3s_vesta_15 {};
	class d3s_vesta_15_5: d3s_vesta_15 {};

	class d3s_avalon_18
	{
		realname="Toyota Avalon";
		buyPrice=46500;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=35;
		colors[]=
		{
			"d3s_avalon_18_2",
			"d3s_avalon_18_3",
			"d3s_avalon_18_4",
			"d3s_avalon_18_5"
		};
	};
	class d3s_avalon_18_2: d3s_avalon_18 {};
	class d3s_avalon_18_3: d3s_avalon_18 {};
	class d3s_avalon_18_4: d3s_avalon_18 {};
	class d3s_avalon_18_5: d3s_avalon_18 {};

	class d3s_clubman_11
	{
		realname="Mini Cooper";
		buyPrice=78500;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=45;
		colors[]=
		{
			"d3s_clubman_11_2",
			"d3s_clubman_11_3",
			"d3s_clubman_11_4",
			"d3s_clubman_11_5"
		};
	};
	class d3s_clubman_11_2: d3s_clubman_11 {};
	class d3s_clubman_11_3: d3s_clubman_11 {};
	class d3s_clubman_11_4: d3s_clubman_11 {};
	class d3s_clubman_11_5: d3s_clubman_11 {};

	class d3s_is_16
	{
		realname="Lexus IS350";
		buyPrice=62900;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateur"};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
		{
			"d3s_is_16_2",
			"d3s_is_16_3",
			"d3s_is_16_4",
			"d3s_is_16_5"
		};
	};
	class d3s_is_16_2: d3s_is_16 {};
	class d3s_is_16_3: d3s_is_16 {};
	class d3s_is_16_4: d3s_is_16 {};
	class d3s_is_16_5: d3s_is_16 {};


	class d3s_f87_18_m
	{
		realname="BMW M2";
		buyPrice=153000;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=45;
		colors[]=
		{
			"d3s_f87_18_m_2",
			"d3s_f87_18_m_3",
			"d3s_f87_18_m_4",
			"d3s_f87_18_m_5"
		};
	};
	class d3s_f87_18_m_2: d3s_f87_18_m {};
	class d3s_f87_18_m_3: d3s_f87_18_m {};
	class d3s_f87_18_m_4: d3s_f87_18_m {};
	class d3s_f87_18_m_5: d3s_f87_18_m {};


	class d3s_giulia_quad_16
	{
		realname="Alfa Romeo Giulia";
		buyPrice=182000;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=70;
		colors[]=
		{
			"d3s_giulia_quad_16_1",
			"d3s_giulia_quad_16_2",
			"d3s_giulia_quad_16_3",
			"d3s_giulia_quad_16_4"
		};
	};
	class d3s_giulia_quad_16_1: d3s_giulia_quad_16 {};
	class d3s_giulia_quad_16_2: d3s_giulia_quad_16 {};
	class d3s_giulia_quad_16_3: d3s_giulia_quad_16 {};
	class d3s_giulia_quad_16_4: d3s_giulia_quad_16 {};

	class d3s_f90_18
	{
		realname="BMW M5";
		buyPrice=175000;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=66;
		colors[]=
		{
			"d3s_f90_18_2",
			"d3s_f90_18_3",
			"d3s_f90_18_4",
			"d3s_f90_18_5"
		};
	};
	class d3s_f90_18_2: d3s_f90_18 {};
	class d3s_f90_18_3: d3s_f90_18 {};
	class d3s_f90_18_4: d3s_f90_18 {};
	class d3s_f90_18_5: d3s_f90_18 {};

	class d3s_wrx_17
	{
		realname="Subaru WRX";
		buyPrice=192000;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateur"};
		fuel="Diesel";
		fuelCapacity=70;
		colors[]=
		{
			"d3s_wrx_17_2",
			"d3s_wrx_17_3",
			"d3s_wrx_17_4",
			"d3s_wrx_17_5"
		};
	};
	class d3s_wrx_17_2: d3s_wrx_17 {};
	class d3s_wrx_17_3: d3s_wrx_17 {};
	class d3s_wrx_17_4: d3s_wrx_17 {};
	class d3s_wrx_17_5: d3s_wrx_17 {};

	class d3s_C43_16
	{
		realname="Mercedes AMG C43";
		buyPrice=210000;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_C43_16_2",
			"d3s_C43_16_3",
			"d3s_C43_16_4",
			"d3s_C43_16_5"
		};
	};
	class d3s_C43_16_2: d3s_C43_16 {};
	class d3s_C43_16_3: d3s_C43_16 {};
	class d3s_C43_16_4: d3s_C43_16 {};
	class d3s_C43_16_5: d3s_C43_16 {};

	class d3s_C180_14
	{
		realname="Mercedes Benz C180";
		buyPrice=260000;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_C180_14_2",
			"d3s_C180_14_3",
			"d3s_C180_14_4",
			"d3s_C180_14_5"
		};
	};
	class d3s_C180_14_2: d3s_C180_14 {};
	class d3s_C180_14_3: d3s_C180_14 {};
	class d3s_C180_14_4: d3s_C180_14 {};
	class d3s_C180_14_5: d3s_C180_14 {};

	class d3s_skyline_02
	{
		realname="Nissan Skyline";
		buyPrice=295000;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_skyline_02_2",
			"d3s_skyline_02_3",
			"d3s_skyline_02_4",
			"d3s_skyline_02_5"
		};
	};
	class d3s_skyline_02_2: d3s_skyline_02 {};
	class d3s_skyline_02_3: d3s_skyline_02 {};
	class d3s_skyline_02_4: d3s_skyline_02 {};
	class d3s_skyline_02_5: d3s_skyline_02 {};

	class d3s_C63S_14_SE
	{
		realname="Mercedes AMG C63S";
		buyPrice=312000;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_C63S_14_SE_2",
			"d3s_C63S_14_SE_3",
			"d3s_C63S_14_SE_4",
			"d3s_C63S_14_SE_5"
		};
	};
	class d3s_C63S_14_SE_2: d3s_C63S_14_SE {};
	class d3s_C63S_14_SE_3: d3s_C63S_14_SE {};
	class d3s_C63S_14_SE_4: d3s_C63S_14_SE {};
	class d3s_C63S_14_SE_5: d3s_C63S_14_SE {};


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////               4x4 / SUV                 ///////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class d3s_trailcat_17_sahara
	{
		realname="Jeep TrailCat";
		buyPrice=102500;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateur"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_trailcat_17_sahara_2",
			"d3s_trailcat_17_sahara_3",
			"d3s_trailcat_17_sahara_4",
			"d3s_trailcat_17_sahara_5"
		};
	};
	class d3s_trailcat_17_sahara_2: d3s_trailcat_17_sahara {};
	class d3s_trailcat_17_sahara_3: d3s_trailcat_17_sahara {};
	class d3s_trailcat_17_sahara_4: d3s_trailcat_17_sahara {};
	class d3s_trailcat_17_sahara_5: d3s_trailcat_17_sahara {};

	class d3s_evoque_sd4_16
	{
		realname="Range Rover Evoque";
		buyPrice=304200;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_evoque_sd4_16_1",
			"d3s_evoque_sd4_16_2",
			"d3s_evoque_sd4_16_3",
			"d3s_evoque_sd4_16_4"
		};
	};
	class d3s_evoque_sd4_16_1: d3s_evoque_sd4_16 {};
	class d3s_evoque_sd4_16_2: d3s_evoque_sd4_16 {};
	class d3s_evoque_sd4_16_3: d3s_evoque_sd4_16 {};
	class d3s_evoque_sd4_16_4: d3s_evoque_sd4_16 {};

	class d3s_levante_17
	{
		realname="Maserati Levante";
		buyPrice=415200;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_levante_17_1",
			"d3s_levante_17_2",
			"d3s_levante_17_3",
			"d3s_levante_17_4"
		};
	};
	class d3s_levante_17_1: d3s_levante_17 {};
	class d3s_levante_17_2: d3s_levante_17 {};
	class d3s_levante_17_3: d3s_levante_17 {};
	class d3s_levante_17_4: d3s_levante_17 {};

	class d3s_g500_18
	{
		realname="Mercedes Benz G500";
		buyPrice=315800;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateur"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_g500_18_1",
			"d3s_g500_18_2",
			"d3s_g500_18_3",
			"d3s_g500_18_4",
			"d3s_g500_18_5"
		};
	};
	class d3s_g500_18_1: d3s_g500_18 {};
	class d3s_g500_18_2: d3s_g500_18 {};
	class d3s_g500_18_3: d3s_g500_18 {};
	class d3s_g500_18_4: d3s_g500_18 {};
	class d3s_g500_18_5: d3s_g500_18 {};

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////               Utilitaires               ///////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class d3s_savana_VAN
	{
		realname="GMC Savana Marchandise";
		buyPrice=36500;
		inventory=150;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_savana_VAN_1",
			"d3s_savana_VAN_2",
			"d3s_savana_VAN_3",
			"d3s_savana_VAN_4",
			"d3s_savana_VAN_5"
		};
	};
	class d3s_savana_VAN_1: d3s_savana_VAN {};
	class d3s_savana_VAN_2: d3s_savana_VAN {};
	class d3s_savana_VAN_3: d3s_savana_VAN {};
	class d3s_savana_VAN_4: d3s_savana_VAN {};
	class d3s_savana_VAN_5: d3s_savana_VAN {};

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////               Sport                     ///////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////               Camions                   ///////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class d3s_uaz_469P
	{
		realname="YA3";
		buyPrice=30000;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]= {};
	};

	class d3s_next
	{
		realname="Camion URAL Minier";
		buyPrice=547500;
		inventory=300;
		side="CIV";
		insurance=1;
		licenses[]={"importateurpoidslourds"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_next_1",
			"d3s_next_2",
			"d3s_next_3",
			"d3s_next_4",
			"d3s_next_5"
		};
	};
	class d3s_next_1: d3s_next {};
	class d3s_next_2: d3s_next {};
	class d3s_next_3: d3s_next {};
	class d3s_next_4: d3s_next {};
	class d3s_next_5: d3s_next {};

	class d3s_next_tent
	{
		realname="Camion URAL Agricole";
		buyPrice=547500;
		inventory=300;
		side="CIV";
		insurance=1;
		licenses[]={"importateurpoidslourds"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_next_tent_2",
			"d3s_next_tent_3",
			"d3s_next_tent_4",
			"d3s_next_tent_5",
			"d3s_next_tent_6"
		};
	};
	class d3s_next_tent_2: d3s_next_tent {};
	class d3s_next_tent_3: d3s_next_tent {};
	class d3s_next_tent_4: d3s_next_tent {};
	class d3s_next_tent_5: d3s_next_tent {};
	class d3s_next_tent_6: d3s_next_tent {};

	class d3s_next_bocha
	{
		realname="Camion URAL Citerne";
		buyPrice=234800;
		inventory=300;
		side="CIV";
		insurance=1;
		licenses[]={"importateurpoidslourds"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_next_bocha_1",
			"d3s_next_bocha_2",
			"d3s_next_bocha_3",
			"d3s_next_bocha_4",
			"d3s_next_bocha_5"
		};
	};
	class d3s_next_bocha_1: d3s_next_bocha {};
	class d3s_next_bocha_2: d3s_next_bocha {};
	class d3s_next_bocha_3: d3s_next_bocha {};
	class d3s_next_bocha_4: d3s_next_bocha {};
	class d3s_next_bocha_5: d3s_next_bocha {};

	class RDS_Zetor6945_Base
	{
		realname="Tracteur";
		buyPrice=84500;
		inventory=155;
		side="CIV";
		insurance=1;
		licenses[]={"importateurpoidslourds"};
		fuel="Diesel";
		fuelCapacity=67;
		tractor=1;
	};



	class d3s_kamaz
	{
		realname="КамАЗ-4350";
		buyPrice=547500;
		inventory=300;
		side="CIV";
		insurance=1;
		licenses[]={"importateurpoidslourds"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_kamaz_4350_tent2"

		};
	};



	class d3s_kamaz_2
	{
		realname="КамАЗ-5350";
		buyPrice=547500;
		inventory=300;
		side="CIV";
		insurance=1;
		licenses[]={"importateurpoidslourds"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_kamaz_5350_tent"

		};
	};




	class d3s_maz_base
	{
		realname="МАЗ-6317";
		buyPrice=547500;
		inventory=300;
		side="CIV";
		insurance=1;
		licenses[]={"importateurpoidslourds"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"d3s_maz_6317_cistern"

		};
	};








	class d3s_scania_16
	{
		realname="Scania S 520 Highline'16";
		buyPrice=547500;
		inventory=300;
		side="CIV";
		insurance=1;
		licenses[]={"importateurpoidslourds"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]= {};
	};






	class AlessioBarrack
	{
		realname="ZIL 131";
		buyPrice=550000;
		inventory=300;
		side="CIV";
		insurance=1;
		licenses[]={"importateurpoidslourds"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]= {};
	};







	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////               Luxe / Spéciaux        //////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class d3s_fpace_17_r
	{
		realname="Jaguar F-Pace Médecin";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"medecin_specialise"};
		fuel="Diesel";
		fuelCapacity=67;
	};

		class d3s_charger_15_EMS
	{
		realname="Dodge Charger EMS'15";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"medecin_specialise"};
		fuel="Diesel";
		fuelCapacity=67;
	};

		class d3s_explorer_UNM_13
	{
		realname="Ford Explorer'13 EMS";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"agent_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};

		class d3s_raptor_EMS_17
	{
		realname="Ford EMS Responder Pickup'17";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"medecin_specialise"};
		fuel="Diesel";
		fuelCapacity=67;
	};


		class d3s_tahoe_EMS
	{
		realname="Chevrolet Tahoe '08 EMS";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"medecin_specialise"};
		fuel="Diesel";
		fuelCapacity=67;
	};

			class d3s_uaz_3162_EMS
	{
		realname="УАЗ 3162";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"medecin_specialise"};
		fuel="Diesel";
		fuelCapacity=67;
	};



	class d3s_taurus_UNM_10
	{
		realname="Ford Taurus Unmarked'10";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"medecin_specialise"};
		fuel="Diesel";
		fuelCapacity=67;
	};


		class d3s_tiger_233034
	{
		realname="СПМ-1 ГАЗ-233034";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"chef_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};


		class d3s_srthellcat_15_UNM
	{
		realname="Dodge Charger SRT Unmarked'15";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"chef_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};


		class d3s_malibu_18_UNM
	{
		realname="Chevrolet Malibu Police Unmarked'18";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"agent_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};


		class d3s_gls63amg_17_FSB
	{
		realname="Mercedes-AMG GLS63 4MATIC'17 FSB";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"chef_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};





		class AlessioRS4
	{
		realname="Audi Rs4 B8 blanche";
		buyPrice=204000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};







		class AlessioRS4Mat
	{
		realname="Audi Rs4 blanc Mat";
		buyPrice=214000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};


		class AlessioRS5
	{
		realname="Audi RS5 Blanc";
		buyPrice=234000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};



		class AlessioRS5Mat
	{
		realname="Audi RS5 Blanc MAT";
		buyPrice=244000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};



		class AlessioRS5GoFastMat
	{
		realname="Audi RS5 Noir MAT";
		buyPrice=390000;
		inventory=150;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};




		class AlessioBM4
	{
		realname="BMW M4 Blanc";
		buyPrice=120000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};



		class AlessioBM4M
	{
		realname="BMW M4 Blanc MAT";
		buyPrice=140000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};




		class AlessioMGA
	{
		realname="MG MGA58 Balanc";
		buyPrice=200000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};




		class AlessioMGA_Mat
	{
		realname="MG MGA58 Balanc MAT";
		buyPrice=210000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};



		class AlessioIXMR
	{
		realname="Mitsubishi Lancer Evolution Blanc";
		buyPrice=160000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};





		class AlessioIXMRMat
	{
		realname="Mitsubishi Lancer Evolution Blanc MAT";
		buyPrice=170000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};



		class AlessioTouareg
	{
		realname="VW Touareg Blanc";
		buyPrice=170000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};




		class AlessioTouaregM
	{
		realname="VW Touareg Blanc MAT";
		buyPrice=180000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"importateurluxe"};
		fuel="Diesel";
		fuelCapacity=67;
	};

		class d3s_escalade_16_unm
	{
		realname="Cadillac Escalade ESV '16";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"stagiaire_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};


			class d3s_ctsv_16_unm
	{
		realname="Cadillac CTS-V Unmarked'16";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"stagiaire_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};



		class d3s_ctsv_16_police
	{
		realname="Cadillac CTS-V Police'16";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"stagiaire_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};



	class d3s_camry_18_COP
	{
		realname="Toyota Camry Police'18";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"chef_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};


	class d3s_camry_18_UNM
	{
		realname="Toyota Camry Police Unmarked'18";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"chef_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};
	
	
	
	
		class d3s_f86_15_UNM
	{
		realname="BMW X6 M Police Unmarked(F86)'15";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"agent_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};


		class d3s_tahoe_UNM 
	{
		realname="Chevrolet Tahoe Police Unmarked'08";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"stagiaire_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};



		class d3s_escalade_16_unm   
	{
		realname="Cadillac Escamade ESV'16";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"stagiaire_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};



		class d3s_raport_UNM_17   
	{
		realname="Fort Raptor Police Unmarked'17";
		buyPrice=50000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"agent_securite"};
		fuel="Diesel";
		fuelCapacity=67;
	};






	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////               MOTO                  //////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	class V12_KTM
	{
		realname="KTM";
		buyPrice=5000;
		inventory=5;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=10;
		colors[]= {};
	};

	class V12_CRF450SGEND
	{
		realname="CRF 450";
		buyPrice=10000;
		inventory=5;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Diesel";
		fuelCapacity=10;
		colors[]= {};
	};


	class V12_APRILIAMXV450
	{
		realname="Aprilla MXV 450";
		buyPrice=15000;
		Inventory=10;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Fioul";
		fuelCapacity=10;
		colors[]=
		{
			"V12_APRILIAMXV4502",
			"V12_APRILIAMXV4503",
			"V12_APRILIAMXV4504"
		};
	};
  	class V12_APRILIAMXV4502: V12_APRILIAMXV450 {};
  	class V12_APRILIAMXV4503: V12_APRILIAMXV450 {};
  	class V12_APRILIAMXV4504: V12_APRILIAMXV450 {};


	class V12_YFZ450_BLEU
	{
		realname="Yamaha YFZ";
		buyPrice=30000;
		Inventory=10;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Fioul";
		fuelCapacity=10;
		colors[]=
		{
			"V12_YFZ450_GRIS",
			"V12_YFZ450_NOIR"
		};
	};
  	class V12_YFZ450_GRIS: V12_YFZ450_BLEU {};
  	class V12_YFZ450_NOIR: V12_YFZ450_BLEU {};



	class V12_DIAVEL_BR
	{
		realname="Ducati diavel";
		buyPrice=55000;
		Inventory=10;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Fioul";
		fuelCapacity=10;
		colors[]=
		{
			"V12_DIAVEL_NR"
		};
	};
  	class V12_DIAVEL_NR: V12_DIAVEL_BR {};



	class V12_KAWASAKIH2_2017_BC
	{
		realname="Kawasaki H2 2017";
		buyPrice=60000;
		Inventory=10;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Fioul";
		fuelCapacity=10;
		colors[]=
		{
			"V12_KAWASAKIH2_2017_BrosserG",
			"V12_KAWASAKIH2_2017_BrosserD",
			"V12_KAWASAKIH2_2017_MAT",
			"V12_KAWASAKIH2_2017_noir",
			"V12_KAWASAKIH2_2017_OR",
			"V12_KAWASAKIH2_2017_Rouge",
			"V12_KAWASAKIH2_2017_VO"
		};
	};
  	class V12_KAWASAKIH2_2017_BrosserG: V12_KAWASAKIH2_2017_BC {};
  	class V12_KAWASAKIH2_2017_BrosserD: V12_KAWASAKIH2_2017_BC {};
  	class V12_KAWASAKIH2_2017_MAT: V12_KAWASAKIH2_2017_BC {};
	class V12_KAWASAKIH2_2017_noir: V12_KAWASAKIH2_2017_BC {};
  	class V12_KAWASAKIH2_2017_OR: V12_KAWASAKIH2_2017_BC {};
  	class V12_KAWASAKIH2_2017_Rouge: V12_KAWASAKIH2_2017_BC {};
	class V12_KAWASAKIH2_2017_VO: V12_KAWASAKIH2_2017_BC {};




	class V12_S1000RR2018_Origine
	{
		realname="BMW s1000RR";
		buyPrice=60000;
		Inventory=10;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Fioul";
		fuelCapacity=10;
		colors[]=
		{
			"V12_S1000RR2018_VO",
			"V12_S1000RR2018_Rouge",
			"V12_S1000RR2018_OR",
			"V12_S1000RR2018_MAT",
			"V12_S1000RR2018_noir",
			"V12_S1000RR2018_BrosserD",
			"V12_S1000RR2018_BrosserG",
			"V12_S1000RR2018_BC"
		};
	};
  	class V12_S1000RR2018_VO: V12_S1000RR2018_Origine {};
  	class V12_S1000RR2018_Rouge: V12_S1000RR2018_Origine {};
  	class V12_S1000RR2018_OR: V12_S1000RR2018_Origine {};
	class V12_S1000RR2018_MAT: V12_S1000RR2018_Origine {};
  	class V12_S1000RR2018_noir: V12_S1000RR2018_Origine {};
  	class V12_S1000RR2018_BrosserD: V12_S1000RR2018_Origine {};
	class V12_S1000RR2018_BrosserG: V12_S1000RR2018_Origine {};
  	class V12_S1000RR2018_BC: V12_S1000RR2018_Origine {};





  	class V12_APRILIARSV4_BC
	{
		realname="Aprilla RS";
		buyPrice=70000;
		Inventory=10;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Fioul";
		fuelCapacity=10;
		colors[]=
		{
			"V12_APRILIARSV4_BrosserG",
			"V12_APRILIARSV4_BrosserD",
			"V12_APRILIARSV4_OR",
			"V12_APRILIARSV4_noir",
			"V12_APRILIARSV4_MAT",
			"V12_APRILIARSV4_Rouge",
			"V12_APRILIARSV4_VO",
			"V12_APRILIARSV4_carbone"
		};
	};
  	class V12_APRILIARSV4_BrosserG: V12_APRILIARSV4_BC {};
  	class V12_APRILIARSV4_BrosserD: V12_APRILIARSV4_BC {};
  	class V12_APRILIARSV4_OR: V12_APRILIARSV4_BC {};
  	class V12_APRILIARSV4_MAT: V12_APRILIARSV4_BC {};
  	class V12_APRILIARSV4_noir: V12_APRILIARSV4_BC {};
  	class V12_APRILIARSV4_VO: V12_APRILIARSV4_BC {};
  	class V12_APRILIARSV4_Rouge: V12_APRILIARSV4_BC {};
  	class V12_APRILIARSV4_carbone: V12_APRILIARSV4_BC {};



	class V12_S1000RRSTREET_BC
	{
		realname="BMW s1000RR";
		buyPrice=70000;
		Inventory=10;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Fioul";
		fuelCapacity=10;
		colors[]=
		{
			"V12_S1000RRSTREET_BrosserG",
			"V12_S1000RRSTREET_BrosserD",
			"V12_S1000RRSTREET_MAT",
			"V12_S1000RRSTREET_noir",
			"V12_S1000RRSTREET_OR",
			"V12_S1000RRSTREET_Rouge",
			"V12_S1000RRSTREET_VO"
		};
	};
  	class V12_S1000RRSTREET_BrosserG: V12_S1000RRSTREET_BC {};
  	class V12_S1000RRSTREET_BrosserD: V12_S1000RRSTREET_BC {};
	class V12_S1000RRSTREET_MAT: V12_S1000RRSTREET_BC {};
  	class V12_S1000RRSTREET_noir: V12_S1000RRSTREET_BC {};
  	class V12_S1000RRSTREET_OR: V12_S1000RRSTREET_BC {};
	class V12_S1000RRSTREET_Rouge: V12_S1000RRSTREET_BC {};
  	class V12_S1000RRSTREET_VO: V12_S1000RRSTREET_BC {};




		class V12_HARLEYBOBBER_BC
	{
		realname="Harley Davidson custom";
		buyPrice=80000;
		Inventory=10;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="Fioul";
		fuelCapacity=10;
		colors[]=
		{
			"V12_HARLEYBOBBER_BrosserG",
			"V12_HARLEYBOBBER_BrosserD",
			"V12_HARLEYBOBBER_MAT",
			"V12_HARLEYBOBBER_noir",
			"V12_HARLEYBOBBER_OR",
			"V12_HARLEYBOBBER_Rouge",
			"V12_HARLEYBOBBER_VO"
		};
	};
  	class V12_HARLEYBOBBER_BC: V12_HARLEYBOBBER_BC {};
  	class V12_HARLEYBOBBER_BrosserG: V12_HARLEYBOBBER_BC {};
	class V12_HARLEYBOBBER_BrosserD: V12_HARLEYBOBBER_BC {};
  	class V12_HARLEYBOBBER_MAT: V12_HARLEYBOBBER_BC {};
  	class V12_HARLEYBOBBER_noir: V12_HARLEYBOBBER_BC {};
	class V12_HARLEYBOBBER_Rouge: V12_HARLEYBOBBER_BC {};
  	class V12_HARLEYBOBBER_VO : V12_HARLEYBOBBER_BC {};




	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////               Avion                  //////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	class EC635_ADAC
	{
		realname="Hélicoptère SAMU";
		buyPrice=350000;
		inventory=100;
		side="CIV";
		insurance=1;
		licenses[]={"importateuraerien","medecin_specialise"};
		fuel="Fioul";
		fuelCapacity=80;
		colors[]= {};
	};

	class EC635_Unarmed
	{
		realname="Hélicoptère Sécu";
		buyPrice=150000;
		inventory=100;
		side="CIV";
		insurance=1;
		licenses[]={"importateuraerien","chef_securite"};
		fuel="Fioul";
		fuelCapacity=80;
		colors[]= {};
	};

	class C_Plane_Civil_01_F
	{
		realname="Cesar BTT";
		buyPrice=350000;
		inventory=100;
		side="CIV";
		insurance=1;
		licenses[]={"importateuraerien"};
		fuel="Fioul";
		fuelCapacity=80;
		colors[]= {};
	};

	class d3s_AS_365
	{
		realname="Eurocopter";
		buyPrice=3650000;
		Inventory=55;
		side="CIV";
		insurance=1;
		licenses[]={"importateuraerien"};
		fuel="Fioul";
		fuelCapacity=1600;
		colors[]=
		{
			"d3s_AS_365_1",
			"d3s_AS_365_2",
			"d3s_AS_365_3",
			"d3s_AS_365_4"
		};
	};
  	class d3s_AS_365_1: d3s_AS_365 {};
  	class d3s_AS_365_2: d3s_AS_365 {};
  	class d3s_AS_365_3: d3s_AS_365 {};
  	class d3s_AS_365_4: d3s_AS_365 {};



  	class C_Heli_light_01_luxe_F
	{
		realname="MH - 900 Luxe";
		buyPrice=950000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"importateuraerien","importateurluxe"};
		fuel="Fioul";
		fuelCapacity=80;
		colors[]= {};
	};


  	class C_Heli_Light_01_civil_F
	{
		realname="MH - 900";
		buyPrice=3650000;
		Inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"importateuraerien"};
		fuel="Fioul";
		fuelCapacity=1600;
		colors[]=
		{
			"C_Heli_light_01_blue_F",
			"C_Heli_light_01_red_F",
			"C_Heli_light_01_ion_F",
			"C_Heli_light_01_digital_F",
			"C_Heli_light_01_elliptical_F",
			"C_Heli_light_01_furious_F",
			"C_Heli_light_01_graywatcher_F",
			"C_Heli_light_01_jeans_F",
			"C_Heli_light_01_blueLine_F"
		};
	};
  	//class d3s_AS_365_1: C_Heli_Light_01_civil_F {};
  	//class d3s_AS_365_2: C_Heli_Light_01_civil_F {};
  	//class d3s_AS_365_3: C_Heli_Light_01_civil_F {};
  	//class d3s_AS_365_4: C_Heli_Light_01_civil_F {};

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////               Maritime               //////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  	class hlf_yellow_submarine
	{
		realname="SDV Jaune";
		buyPrice=98500;
		Inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"importateurmaritime"};
		fuel="Fioul";
		fuelCapacity=230;
		colors[]= {};
	};

  	class D41_Trawler
	{
		realname="Trawler de pêche";
		buyPrice=657800;
		Inventory=300;
		side="CIV";
		insurance=1;
		licenses[]={"importateurmaritime"};
		fuel="Fioul";
		fuelCapacity=600;
		colors[]=
		{};
	};
  	class ffaa_ar_lcm
	{
		realname="Barge";
		buyPrice=565800;
		Inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"importateurmaritime"};
		fuel="Fioul";
		fuelCapacity=600;
		colors[]=
		{
			"ffaa_ar_lcm"
		};
	};
  	class Burnes_mk10
	{
		realname="MK10";
		buyPrice=565800;
		Inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"importateurmaritime"};
		fuel="Fioul";
		fuelCapacity=600;
		colors[]=
		{
			"Burnes_mk10_1"
		};
	};
	class Burnes_mk10_1: Burnes_mk10 {};

  	class B_Boat_Transport_01_F: Burnes_mk10
	{
		realname="Zodiac";
		buyPrice=4780;
		inventory=10;
		fuelCapacity=83;
		licenses[]={"importateurmaritime"};
		fuel="Fioul";
		colors[]=
		{
			"O_Boat_Transport_01_F",
			"O_Lifeboat",
			"C_Rubberboat",
			"I_Boat_Transport_01_F"
		};
	};
  	class O_Boat_Transport_01_F: B_Boat_Transport_01_F {};
  	class O_Lifeboat: B_Boat_Transport_01_F {};
  	class C_Rubberboat: B_Boat_Transport_01_F {};
  	class I_Boat_Transport_01_F: B_Boat_Transport_01_F {};

  	class C_Boat_Civil_01_F: B_Boat_Transport_01_F
	{
		realname="Bateau à moteur";
		buyPrice=69500;
		inventory=10;
		fuelCapacity=160;
		colors[]={};
	};

};
