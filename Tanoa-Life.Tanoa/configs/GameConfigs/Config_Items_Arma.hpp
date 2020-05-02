class ALYSIA_ITEMS_ARMA
{
	/*==================
	**      HOW TO
	**==================*/
	class item_className
	{
		name="Tazer";//(optional) ingame item display name incase displayname if CfgArma is not correct
		buy_price=2000;//item buy price
		buy_condition_CIV=0;//(optional) rank needed to buy <only for civilian>
		buy_condition_GUER=0;//(optional) rank needed to buy <only for independent>
		buy_condition_EAST=0;//(optional) rank needed to buy <only for opfort>
		buy_condition_WEST=0;//(optional) rank needed to buy <only for bluefor>
		buy_license_CIV[]={};//(optional) license needed to buy <only for civilian>
		buy_license_GUER[]={};//(optional) license needed to buy <only for independent>
		buy_license_EAST[]={};//(optional) license needed to buy <only for opfort>
		buy_license_WEST[]={};//(optional) license needed to buy <only for bluefor>
	};
	/*==================*/
	////////////////////////////////////////////  NOT USED ATM   ///////////////////////////////////////////////////
	class Skyline_Uniforme_Prisonnier_01_F {};
	class Skyline_Uniforme_Prisonnier_02_F {};
	class Mask_M40
	{
		protect_contamination_air=1;
	};
	class Mask_M40_OD
	{
		protect_contamination_air=1;
	};
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////  CIVIL   //////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// PARACHUTE //////////////////////////////////////////
	class B_Parachute
	{
		buy_price=950;
	};

	class NVGoggles
	{
		buy_price=1050;
	};
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// ARMES///////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Normaux ///////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class RH_uspm{
			name="USP40";
			knockOut=1;
		};
	class RH_sw659{
			name="SW659";
			knockOut=1;
		};
	class KA_SilverBaller_L{
			name="Silverball";
			knockOut=1;
		};
	class RH_g17{
			name="Glock17";
			knockOut=1;
		};
	class RH_g18{
			name="Glock18";
			knockOut=1;
		};
	class RH_Deaglem{
			name="Desert Eagle";
			knockOut=1;
		};

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Intermédiaire/////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////

	class SMG_02_F{
			name="Sting";
			knockOut=1;
		};
	class arifle_TRG20_F{
			name="TRG";
			knockOut=1;
		};
	class Skyline_UMP45_01_F{
			name="UMP45";
			knockOut=1;
		};
	class SMG_05_F{
			name="Protector";
		};
	class hgun_PDW2000_F{
			name="PDW2000";
			knockOut=1;
		};
	class SMG_01_F {
			name="Vermin SMG";
			knockOut=1;
		};

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Militaire/////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class Skyline_AKM_01_F {
			name="AKM 7.62";
			knockOut=1;
		};
	class arifle_CTAR_blk_F {
			name="CAR95";
			knockOut=1;
		};
	class arifle_Katiba_C_F {
			name="Katiba";
			knockOut=1;
		};
	class arifle_MX_Black_F {
			name="MX 6.5mm";
			knockOut=1;
		};
	class arifle_SPAR_01_blk_F {
			name="SPAR16";
			knockOut=1;
		};
	class arifle_ARX_blk_F {
			name="Type 115";
			knockOut=1;
		};

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// CHARGEURS //////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Normaux ///////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class RH_16Rnd_40cal_usp {
			name="Chargeur USP40";
		};
	class RH_14Rnd_9x19_sw {
			name="Chargeur SW659";
		};
	class KA_8Rnd_45ACP_Mag {
			name="Chargeur Silverball";
		};
	class RH_17Rnd_9x19_g17 {
			name="Chargeur Glock17";
		};
	class RH_19Rnd_9x19_g18 {
			name="Chargeur Glock18";
		};
	class RH_7Rnd_50_AE {
			name="Chargeur Deagle";
		};

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Intermédiaire/////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////

	class 30Rnd_9x21_Mag_SMG_02 {
		name="Chargeur de 9.19mm";
		};
	class 30Rnd_556x45_Stanag {
			name="Chargeur 5.56mm";
		};
	class 25Rnd_45ACP_Mag	{
			name="Chargeur UMP45";
		};
	class 30Rnd_9x21_Mag {
			name="Chargeur PDW2000";
		};
	class 30Rnd_45ACP_Mag_SMG_01 {
			name="Chargeur Vermin";
		};

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Militaire/////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class 30Rnd_762x39_AKM {
		name="Chargeur AKM";
	};
	class 30Rnd_580x42_Mag_F {
		name="Chargeur CAR95";
	};
	class 30Rnd_65x39_caseless_green {
		name="Chargeur 6.5mm";
	};
	class 30Rnd_65x39_caseless_black_mag {
		name="Chargeur MX6.5";
	};

	//////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// ACCESOIRES /////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class optic_hamr {
		name="Viseur RCO";
	};
	class optic_MRCO {
		name="Viseur MRCO";
	};
	class optic_Holosight_smg {
		name="Viseur Holosight";
	};
	class optic_Aco_smg {
		name="Viseur ACO";
	};
	class optic_DMS {
		name="Viseur DMS";
	};

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// OBJET UTILISABLES//////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class Alysia_siphon
	{
		buy_price=275;
	};

	class Rangefinder
	{
		buy_price=500;
	};

	class AnarkhiaBitcoinKey
	{
		buy_price=275;
	};

	class Bank_Drill {};

	class EWK_Cig1
	{
		buy_price=110;
	};
	class EWK_Cig2: EWK_Cig1 {};
	class EWK_Cigar1: EWK_Cig1 {};
	class EWK_Cig3: EWK_Cig1 {};
	class EWK_Cig4: EWK_Cig1 {};
	class EWK_Cig6: EWK_Cig1 {};

	class SkylineItems_Couteau
	{
		buy_price=1500;
	};
	class Alysia_jerrycan_empty
	{
		buy_price=120;
	};
	class Alysia_repair_toolbox
	{
		buy_price=5400;
	};
	class Alysia_repair_tireLever
	{
		buy_price=225;
	};
	class Alysia_repair_tire
	{
		buy_price=100;
	};
	class Alysia_Lockpick
	{
		buy_price=600;
	};
	class RH_mak
	{
		buy_price=12000;
	};
	class sc0t_puce
	{
		buy_price=75;
	};
    class Lyeed_Phone
    {
    	buy_price=450;
    };
    class tf_anprc148jem
    {
    	buy_price=450;
    };
	class SkylineItems_Bandage
	{
		buy_price=15;
	};
	class Skyline_Alysia_Parapluie_01_F
	{
		buy_price=160;
		protect_rain=1;
	};
	class Skyline_Merlin_01
	{
		buy_price=75;
	};
	class Skyline_Pelle_01
	{
		buy_price=75;
	};
	class Skyline_Pioche_01
	{
		buy_price=75;
	};
	class Skyline_Hache_01
	{
		buy_price=75;
	};
	class Skyline_tl122_blanche
	{
		buy_price=85;
	};
	class Chemlight_blue
	{
		buy_price=15;
	};
	class Chemlight_green: Chemlight_blue {};
	class Chemlight_red: Chemlight_blue {};
	class Chemlight_yellow: Chemlight_blue {};

	class Binocular
	{
		buy_price=50;
	};
	class ItemCompass
	{
		buy_price=12;
	};
	class ItemGPS
	{
		buy_price=250;
	};
	class ItemMap
	{
		buy_price=15;
	};
	class ItemWatch
	{
		buy_price=7;
	};
	class SkylineItems_Defibrilateur
	{
		buy_price=1500;
	};
	class SkylineItems_Adrenaline
	{
		buy_price=3500;
	};
	class SkylineItems_Morphine
	{
		buy_price=3100;
	};
	class SkylineItems_Eponephrine
	{
		buy_price=3100;
	};
	class Bank_DefuseKit
	{
		buy_price=1500;
	};
	class Alysia_Chlore
	{
		buy_price=3500;
	};
	class bombIEDUrbanSmall_Remote_Mag
	{
		buy_price=3100;
	};
	class Bank_Hacker {};

	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// TENUES ////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Tenues Homme //////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////


	class U_C_CBRN_Suit_01_White_F {};

	class U_O_Wetsuit
	{
		buy_price=8250;
	};

	class sc0t_tenue1_C {};

	class Skyline_Uniforme_Alysia_01_F {};

	class Skyline_Character_U_CivilC_01_F
	{
		buy_price=450;
	};
	class Skyline_Character_U_CivilC_02_F : Skyline_Character_U_CivilC_01_F{};
	class Skyline_Character_U_CivilC_03_F : Skyline_Character_U_CivilC_01_F{};
	class Skyline_Character_U_CivilC_04_F : Skyline_Character_U_CivilC_01_F{};
	class Skyline_Character_U_CivilC_05_F : Skyline_Character_U_CivilC_01_F{};
	class Skyline_Character_U_CivilC_06_F : Skyline_Character_U_CivilC_01_F{};
	class Skyline_Character_U_CivilC_07_F : Skyline_Character_U_CivilC_01_F{};


	class rds_uniform_citizen1
	{
		buy_price=80;
	};
	class rds_uniform_citizen2: rds_uniform_citizen1 {};
	class rds_uniform_citizen3: rds_uniform_citizen1 {};
	class rds_uniform_citizen4: rds_uniform_citizen1 {};

	class Skyline_Character_U_CivilB_01_F
	{
		buy_price=684;
	};
	class Skyline_Character_U_CivilB_02_F : Skyline_Character_U_CivilB_01_F{};
	class Skyline_Character_U_CivilB_03_F : Skyline_Character_U_CivilB_01_F{};
	class Skyline_Character_U_CivilB_04_F : Skyline_Character_U_CivilB_01_F{};
	class Skyline_Character_U_CivilB_05_F : Skyline_Character_U_CivilB_01_F{};
	class Skyline_Character_U_CivilB_06_F : Skyline_Character_U_CivilB_01_F{};
	class Skyline_Character_U_CivilB_07_F : Skyline_Character_U_CivilB_01_F{};
	class Skyline_Character_U_CivilB_08_F : Skyline_Character_U_CivilB_01_F{};

	class U_C_ConstructionCoverall_Blue_F
	{
		buy_price=95;
	};
	class U_C_ConstructionCoverall_Black_F: U_C_ConstructionCoverall_Blue_F{};
	class U_C_ConstructionCoverall_Red_F: U_C_ConstructionCoverall_Blue_F{};

	class EF_M_jkt2
	{
		buy_price=1875;
	};
	class EF_M_jkt2_2: EF_M_jkt2 {};
	class EF_M_jkt1: EF_M_jkt2 {};
	class EF_M_jkt2_3: EF_M_jkt2 {};
	class EF_M_jkt2_32: EF_M_jkt2 {};
	class EF_M_jkt1_3: EF_M_jkt2 {};
	class EF_M_jkt2_4: EF_M_jkt2 {};
	class EF_M_jkt4: EF_M_jkt2 {};
	class EF_M_jkt3: EF_M_jkt2 {};
	class EF_M_jkt42: EF_M_jkt2 {};
	class EF_M_jkt32: EF_M_jkt2 {};

	class EF_HM_LPBPS
	{
		buy_price=245;
	};
	class EF_HM_LPBP: EF_HM_LPBPS {};
	class EF_HM_LPBR: EF_HM_LPBPS {};
	class EF_HM_LPBW: EF_HM_LPBPS {};
	class EF_HM_LPB: EF_HM_LPBPS {};
	class EF_HM_LPBL: EF_HM_LPBPS {};
	class EF_HM_LPBPS2: EF_HM_LPBPS {};
	class EF_HM_LPBP2: EF_HM_LPBPS {};
	class EF_HM_LPBR2: EF_HM_LPBPS {};
	class EF_HM_LPBW2: EF_HM_LPBPS {};
	class EF_HM_LPB2: EF_HM_LPBPS {};
	class EF_HM_LPBL2: EF_HM_LPBPS {};

	class EF_MX1
	{
		buy_price=985;
	};

	class U_C_man_sport_3_F
	{
		buy_price=60;
	};
	class U_C_man_sport_2_F: U_C_man_sport_3_F {};
	class U_C_man_sport_1_F: U_C_man_sport_3_F {};
	class U_C_Poloshirt_blue: U_C_man_sport_3_F {};
	class U_C_Poloshirt_burgundy: U_C_man_sport_3_F {};
	class U_C_Poloshirt_redwhite: U_C_man_sport_3_F {};
	class U_C_Poloshirt_salmon: U_C_man_sport_3_F {};
	class U_C_Poloshirt_stripped: U_C_man_sport_3_F {};
	class U_C_Poloshirt_tricolour: U_C_man_sport_3_F {};
	class U_C_Poor_1: U_C_man_sport_3_F {};



	class Skyline_Character_U_CivilA_01_F
	{
		buy_price=1045;
	};
	class Skyline_Character_U_CivilA_02_F : Skyline_Character_U_CivilA_01_F{};
	class Skyline_Character_U_CivilA_03_F : Skyline_Character_U_CivilA_01_F{};
	class Skyline_Character_U_CivilA_04_F : Skyline_Character_U_CivilA_01_F{};
	class Skyline_Character_U_CivilA_05_F : Skyline_Character_U_CivilA_01_F{};
	class Skyline_Character_U_CivilA_06_F : Skyline_Character_U_CivilA_01_F{};
	class Skyline_Character_U_CivilA_07_F : Skyline_Character_U_CivilA_01_F{};
	class Skyline_Character_U_CivilA_08_F : Skyline_Character_U_CivilA_01_F{};
	class Skyline_Character_U_CivilA_09_F : Skyline_Character_U_CivilA_01_F{};
	class Skyline_Character_U_CivilA_10_F : Skyline_Character_U_CivilA_01_F{};

	class rds_uniform_Profiteer1
	{
		buy_price=205;
	};
	class rds_uniform_Profiteer2: rds_uniform_Profiteer1 {};
	class rds_uniform_Profiteer3: rds_uniform_Profiteer1 {};
	class rds_uniform_Profiteer4: rds_uniform_Profiteer1 {};

		class EF_suit_1
    {
        buy_price=300;
    };


			class EF_Maels_suit_10
    {
        buy_price=500;
    };


		class EF_MKJKT
	{
		buy_price=555;
	};
	class EF_MKJKT2: EF_MKJKT {};


		class EF_suit_2
	{
		buy_price=675;
	};
	class EF_suit_3: EF_suit_2 {};
	class EF_suit_6: EF_suit_2 {};


		class EF_Maels_suit_7
	{
		buy_price=1500;
	};
	class EF_Maels_suit_8: EF_Maels_suit_7 {};
	class EF_Maels_suit_9: EF_Maels_suit_7 {};







	class Skyline_Character_U_CivilE_01_F
	{
		buy_price=110;
	};
	class Skyline_Character_U_CivilE_02_F : Skyline_Character_U_CivilE_01_F{};
	class Skyline_Character_U_CivilE_03_F : Skyline_Character_U_CivilE_01_F{};
	class Skyline_Character_U_CivilE_04_F : Skyline_Character_U_CivilE_01_F{};
	class Skyline_Character_U_CivilE_05_F : Skyline_Character_U_CivilE_01_F{};
	class Skyline_Character_U_CivilE_06_F : Skyline_Character_U_CivilE_01_F{};
	class Skyline_Character_U_CivilE_07_F : Skyline_Character_U_CivilE_01_F{};

	class rds_uniform_Worker1
	{
		buy_price=153;
	};
	class rds_uniform_Worker2: rds_uniform_Worker1 {};
	class rds_uniform_Worker3: rds_uniform_Worker1 {};
	class rds_uniform_Worker4: rds_uniform_Worker1 {};
	class rds_uniform_Villager1: rds_uniform_Worker1 {};
	class rds_uniform_Villager2: rds_uniform_Worker1 {};
	class rds_uniform_Villager3: rds_uniform_Worker1 {};
	class rds_uniform_Villager4: rds_uniform_Worker1 {};
	class rds_uniform_Woodlander1: rds_uniform_Worker1 {};
	class rds_uniform_Woodlander2: rds_uniform_Worker1 {};
	class rds_uniform_Woodlander3: rds_uniform_Worker1 {};
	class rds_uniform_Woodlander4: rds_uniform_Worker1 {};

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Tenues SECU //////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////



	class Skyline_Uniforme_Securite_01_F
	{
		buy_price=95;
	};
	class Skyline_Uniforme_Securite_02_F: Skyline_Uniforme_Securite_01_F{};
	class Skyline_Uniforme_Securite_03_F: Skyline_Uniforme_Securite_01_F{};




	class TRYK_V_Bulletproof_BLK
	{
		buy_price=7800;
	};


	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Tenues Femme //////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class EF_FEM_2U
	{
		buy_price=250;
	};
	class EF_FEM_3_2: EF_FEM_2U {};
	class EF_FEM_3_3LPBPS: EF_FEM_2U {};
	class EF_FEM_3_3LPBP: EF_FEM_2U {};
	class EF_FEM_3_3LPBR: EF_FEM_2U {};
	class EF_FEM_3_3LPBW: EF_FEM_2U {};
	class EF_FEM_3_3LPB: EF_FEM_2U {};
	class EF_FEM_3_3LPBL: EF_FEM_2U {};
	class EF_FEM_3_3LPBPS2: EF_FEM_2U {};
	class EF_FEM_3_3LPBP2: EF_FEM_2U {};
	class EF_FEM_3_3LPBR2: EF_FEM_2U {};
	class EF_FEM_3_3LPBW2: EF_FEM_2U {};
	class EF_FEM_3_3LPB2: EF_FEM_2U {};
	class EF_FEM_3_3LPBL2: EF_FEM_2U {};
	class EF_FEM_3: EF_FEM_2U {};
	class EF_FEM_4: EF_FEM_2U {};
	class EF_FEM_4_2LPBPS: EF_FEM_2U {};
	class EF_FEM_4_2LPBP: EF_FEM_2U {};
	class EF_FEM_4_2LPBR: EF_FEM_2U {};
	class EF_FEM_4_2LPBW: EF_FEM_2U {};
	class EF_FEM_4_2LPB: EF_FEM_2U {};
	class EF_FEM_4_2LPBL: EF_FEM_2U {};
	class EF_FEM_4_2LPBPS2: EF_FEM_2U {};
	class EF_FEM_4_2LPBP2: EF_FEM_2U {};
	class EF_FEM_4_2LPBR2: EF_FEM_2U {};
	class EF_FEM_4_2LPBW2: EF_FEM_2U {};
	class EF_FEM_4_2LPB2: EF_FEM_2U {};
	class EF_FEM_4_2LPBL2: EF_FEM_2U {};
	class EF_FEM_5: EF_FEM_2U {};
	class EF_FEM_6: EF_FEM_2U {};
	class EF_FEM_3_42: EF_FEM_2U {};
	class EF_FEM_2BK: EF_FEM_2U {};

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Lunette Homme /////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class G_Shades_Black
	{
		buy_price=15;
	};
	class G_Shades_Blue: G_Shades_Black {};
	class G_Shades_Green: G_Shades_Black {};
	class G_Shades_Red: G_Shades_Black {};
	class G_Spectacles: G_Shades_Black {};
	class G_Spectacles_Tinted: G_Shades_Black {};
	class G_Sport_Blackred: G_Shades_Black {};
	class G_Sport_BlackWhite: G_Shades_Black {};
	class G_Sport_Blackyellow: G_Shades_Black {};
	class G_Sport_Checkered: G_Shades_Black {};
	class G_Sport_Greenblack: G_Shades_Black {};
	class G_Sport_Red: G_Shades_Black {};
	class G_Squares: G_Shades_Black {};
	class G_Squares_Tinted: G_Shades_Black {};
	class G_Lowprofile: G_Shades_Black {};
	class G_Lady_Blue: G_Shades_Black {};

	class G_Aviator
	{
		buy_price=980;
	};

	class Bear_RoundGlasses
	{
		buy_price=450;
	};
	class Bear_RoundGlasses_blk: Bear_RoundGlasses {};
	class G_Diving: Bear_RoundGlasses {};

	class Bear_RoundGlasses_gold
	{
		buy_price=1350;
	};

	class shemagh_neckD
	{
		buy_price=480;
	};
	class shemagh_neckOD: shemagh_neckD {};
	class TRYK_Shemagh_mesh: shemagh_neckD {};
	class TRYK_Shemagh_G: shemagh_neckD {};
	class TRYK_Shemagh: shemagh_neckD {};
	class TRYK_Shemagh_WH: shemagh_neckD {};
	class TRYK_Shemagh_shade_MH: shemagh_neckD {};
	class TRYK_Shemagh_shade_G: shemagh_neckD {};
	class TRYK_Shemagh_shade: shemagh_neckD {};
	class TRYK_Shemagh_shade_WH: shemagh_neckD {};
	class mgsr_eyepatch_gogg: shemagh_neckD {};
	class shemagh_faceOD: shemagh_neckD {};
	class shemagh_faceD: shemagh_neckD {};

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Lunette Femme /////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////


	class EF_FG21
	{
		buy_price=400;
	};
	class EF_FG1: EF_FG21 {};
	class EF_ACC1: EF_FG21 {};
	class EF_ACC2: EF_FG21 {};
	class EF_ACC3: EF_FG21 {};
	class EF_AC1: EF_FG21 {};
	class EF_AC2: EF_FG21 {};
	class EF_AC3: EF_FG21 {};
	class EF_PG1: EF_FG21 {};
	class EF_PG2: EF_FG21 {};

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Chapeaux Homme ////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class H_Bandanna_blu
	{
		buy_price=65;
	};
	class H_Bandanna_cbr: H_Bandanna_blu {};
	class division_woolhat_01: H_Bandanna_blu {};
	class H_Bandanna_gry: H_Bandanna_blu {};
	class H_Bandanna_khk: H_Bandanna_blu {};
	class H_Bandanna_sand: H_Bandanna_blu {};
	class H_Bandanna_sgg: H_Bandanna_blu {};
	class H_Bandanna_surfer: H_Bandanna_blu {};
	class H_Bandanna_surfer_blk: H_Bandanna_blu {};
	class H_Bandanna_surfer_grn: H_Bandanna_blu {};
	class Skyline_HeadGear_BonnetLaine_01_F: H_Bandanna_blu {};
	class Skyline_HeadGear_BonnetLaine_02_F: H_Bandanna_blu {};
	class Skyline_HeadGear_BonnetLaine_03_F: H_Bandanna_blu {};
	class Skyline_HeadGear_BonnetLaine_04_F: H_Bandanna_blu {};
	class Skyline_HeadGear_BonnetLaine_05_F: H_Bandanna_blu {};

	class H_Cap_blk
	{
		buy_price=45;
	};
	class H_Cap_blk_CMMG: H_Cap_blk {};
	class H_Cap_blk_ION: H_Cap_blk {};
	class H_Cap_blk_Raven: H_Cap_blk {};
	class H_Cap_blu: H_Cap_blk {};
	class H_Cap_brn_SPECOPS: H_Cap_blk {};
	class H_Cap_grn: H_Cap_blk {};
	class H_Cap_grn_BI: H_Cap_blk {};
	class H_Cap_khaki_specops_UK: H_Cap_blk {};
	class H_Cap_oli: H_Cap_blk {};
	class H_Cap_press: H_Cap_blk {};
	class H_Cap_red: H_Cap_blk {};
	class H_Cap_surfer: H_Cap_blk {};
	class H_Cap_tan: H_Cap_blk {};

	class H_Hat_blue
	{
		buy_price=48;
	};
	class H_Hat_brown: H_Hat_blue {};
	class H_Hat_camo: H_Hat_blue {};
	class H_Hat_checker: H_Hat_blue {};
	class H_Hat_grey: H_Hat_blue {};
	class H_Hat_tan: H_Hat_blue {};

	class H_Booniehat_khk
	{
		buy_price=64;
	};
	class H_Booniehat_oli: H_Booniehat_khk {};
	class H_Booniehat_tan: H_Booniehat_khk {};

	class H_StrawHat
	{
		buy_price=120;
	};
	class H_StrawHat_dark: H_StrawHat {};

	class H_Watchcap_blk
	{
		buy_price=130;
	};
	class H_Watchcap_camo: H_Watchcap_blk {};
	class H_Watchcap_cbr: H_Watchcap_blk {};
	class H_Watchcap_khk: H_Watchcap_blk {};
	class TRYK_H_headsetcap_blk_Glasses: H_Watchcap_blk {};
	class TRYK_H_headsetcap_Glasses: H_Watchcap_blk {};
	class TRYK_H_headsetcap_od_Glasses: H_Watchcap_blk {};
	class TRYK_R_CAP_BLK: H_Watchcap_blk {};
	class TRYK_r_cap_blk_Glasses: H_Watchcap_blk {};
	class TRYK_r_cap_od_Glasses: H_Watchcap_blk {};
	class TRYK_R_CAP_OD_US: H_Watchcap_blk {};
	class TRYK_r_cap_tan_Glasses: H_Watchcap_blk {};

	class Casque_Moto
	{
		buy_price=220;
	};
	class H_RacingHelmet_1_white_F: Casque_Moto {};
	class H_RacingHelmet_1_blue_F: Casque_Moto {};
	class H_RacingHelmet_1_yellow_F: Casque_Moto {};
	class H_RacingHelmet_1_black_F: Casque_Moto {};
	class H_RacingHelmet_1_orange_F: Casque_Moto {};
	class H_RacingHelmet_1_red_F: Casque_Moto {};
	class H_RacingHelmet_1_green_F: Casque_Moto {};
	class H_RacingHelmet_1_F: Casque_Moto {};
	class H_RacingHelmet_2_F: Casque_Moto {};
	class H_RacingHelmet_3_F: Casque_Moto {};

	class Skyline_HeadGear_Chapka_01_F
	{
		buy_price=82;
	};
	class Skyline_HeadGear_Chapka_02_F : Skyline_HeadGear_Chapka_01_F{};
	class Skyline_HeadGear_Chapka_03_F : Skyline_HeadGear_Chapka_01_F{};
	class Skyline_HeadGear_Chapka_04_F : Skyline_HeadGear_Chapka_01_F{};
	class Skyline_HeadGear_Chapka_05_F : Skyline_HeadGear_Chapka_01_F{};

	class Skyline_HeadGear_Cowboy_01_F
	{
		buy_price=85;
	};
	class Skyline_HeadGear_Cowboy_02_F : Skyline_HeadGear_Cowboy_01_F{};
	class Skyline_HeadGear_Cowboy_03_F : Skyline_HeadGear_Cowboy_01_F{};
	class Skyline_HeadGear_Cowboy_04_F : Skyline_HeadGear_Cowboy_01_F{};
	class Skyline_HeadGear_Cowboy_05_F : Skyline_HeadGear_Cowboy_01_F{};
	class Skyline_HeadGear_Cowboy_06_F : Skyline_HeadGear_Cowboy_01_F{};

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Chapeaux Femme ////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	class EF_Fcap_O
	{
		buy_price=400;
	};
	class EF_Fcap_R: EF_Fcap_O {};
	class EF_Fcap_Surf: EF_Fcap_O {};
	class EF_Fcap_TN: EF_Fcap_O {};
	class EF_FPKL_BK: EF_Fcap_O {};
	class EF_FPKL_BL: EF_Fcap_O {};
	class EF_FPKL_CY: EF_Fcap_O {};
	class EF_FPKL_RD: EF_Fcap_O {};
	class EF_FPKL_W: EF_Fcap_O {};
	class EF_FBNE_BK: EF_Fcap_O {};
	class EF_FBNE_BL: EF_Fcap_O {};
	class EF_FBNE_BR: EF_Fcap_O {};
	class EF_FBNE_R: EF_Fcap_O {};
	class EF_FBNE_V: EF_Fcap_O {};
	class EF_FBNE_W: EF_Fcap_O {};
	class EF_FHAT_BW: EF_Fcap_O {};
	class EF_FHAT_BK: EF_Fcap_O {};
	class EF_FHAT_CL: EF_Fcap_O {};
	class EF_FHAT_PI: EF_Fcap_O {};

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Sac Homme /////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class TAC_MTAP_BK
	{
		inventairevirtuel=60;
		buy_price=1050;
	};

	class B_TacticalPack_blk
	{
		inventairevirtuel=60;
		buy_price=1110;
	};

	class B_CombinationUnitRespirator_01_F
	{
		inventairevirtuel=60;
	};

	class Skyline_Backpack_Sac_a_dos_01_F
	{
		buy_price=1250;
		inventairevirtuel=30;
	};
	class Skyline_Backpack_Sac_a_dos_02_F: Skyline_Backpack_Sac_a_dos_01_F {};
	class Skyline_Backpack_Sac_a_dos_03_F: Skyline_Backpack_Sac_a_dos_01_F {};
	class Skyline_Backpack_Sac_a_dos_04_F: Skyline_Backpack_Sac_a_dos_01_F {};

	class B_Carryall_ghex_F
    {
        buy_price=1270;
        inventairevirtuel=35;
    };


	class division_megan_B
	{
		buy_price=1980;
		inventairevirtuel=40;
	};
	class division_nomad_B: division_megan_B {};
	class division_predator_B: division_megan_B {};
	class division_survival_B: division_megan_B {};


	class Skyline_Backpack_Chasse_01_F
    {
        buy_price=2500;
        inventairevirtuel=44;
    };


	class Maels_backpack_1
	{
		buy_price=3560;
		inventairevirtuel=50;
	};
	class Maels_backpack_2: Maels_backpack_1 {};
	class Maels_backpack_3: Maels_backpack_1 {};

	class B_SCBA_01_F {};



	class B_ViperHarness_khk_F
    {
        buy_price=3560;
        inventairevirtuel=50;
    };
    class B_ViperHarness_oli_F: B_ViperHarness_khk_F {};
    class B_ViperLightHarness_blk_F: B_ViperHarness_khk_F {};
	class B_ViperHarness_hex_F: B_ViperHarness_khk_F {};
    class B_ViperHarness_ghex_F: B_ViperHarness_khk_F {};

	class Skyline_Backpack_Montagne_01_F
	{
		buy_price=4320;
		inventairevirtuel=60;
	};
	class Skyline_Backpack_Montagne_02_F: Skyline_Backpack_Montagne_01_F {};
	class Skyline_Backpack_Montagne_03_F: Skyline_Backpack_Montagne_01_F {};
	class Skyline_Backpack_Montagne_04_F: Skyline_Backpack_Montagne_01_F {};

		class B_Bergen_hex_F
	{
		buy_price=7820;
		inventairevirtuel=100;
	};
	class B_Bergen_mcamo_F: B_Bergen_hex_F {};
	class B_Bergen_dgtl_F: B_Bergen_hex_F {};
	class B_Bergen_tna_F: B_Bergen_hex_F {};
	//class B_Bergen_hex_F: B_Bergen_hex_F {};

		class tf_rt1523g_big_rhs
    {
        buy_price=1270;
        inventairevirtuel=60;
    };

    class tf_rt1523g_black: tf_rt1523g_big_rhs {};

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Sac Femme /////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class EF_FBAG_BK
	{
		buy_price=450;
		inventairevirtuel=40;
	};
	class EF_FBAG_BL: EF_FBAG_BK {};
	class EF_FBAG_BW: EF_FBAG_BK {};
	class EF_FBAG_RD: EF_FBAG_BK {};
	class EF_FBAG_SG: EF_FBAG_BK {};
	class EF_FBAG_VL: EF_FBAG_BK {};
	class EF_FBAG_HB_BK: EF_FBAG_BK {};
	class EF_FBAG_HB_BL: EF_FBAG_BK {};
	class EF_FBAG_HB_RD: EF_FBAG_BK {};
	class EF_FBAG_HB_SG: EF_FBAG_BK {};
	class EF_FBAG_HB_VL: EF_FBAG_BK {};
	class EF_FBAG_SL_BK: EF_FBAG_BK {};
	class EF_FBAG_SL_BL: EF_FBAG_BK {};
	class EF_FBAG_SL_RD: EF_FBAG_BK {};
	class EF_FBAG_SL_SG: EF_FBAG_BK {};
	class EF_FBAG_SL_VL: EF_FBAG_BK {};

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Gilet Pareballe ///////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////


	class TRYK_V_Bulletproof_BLK {};

	class V_RebreatherB {};

	class V_Chestrig_rgr
	{
		buy_price=450;
		inventairevirtuel=20;
	};
	class V_Chestrig_oli: V_Chestrig_rgr {};
	class V_Chestrig_blk: V_Chestrig_rgr {};
	class V_Chestrig_khk: V_Chestrig_rgr {};

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Combi plongée /////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class combi_plonge_civ1
	{
		buy_price=200;
	};
	class combi_plonge_civ2: combi_plonge_civ1 {};
	class combi_plonge_civ3: combi_plonge_civ1 {};
	class combi_plonge_civ4: combi_plonge_civ1 {};

	class Respirateur_civ1
	{
		buy_price=850;
	};
	class Respirateur_civ2: Respirateur_civ1 {};
	class Respirateur_civ3: Respirateur_civ1 {};
	class Respirateur_civ4: Respirateur_civ1 {};

	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Masque ////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class Skyline_Glasses_Masque_Chirurgical_01_F
	{
		buy_price=20;
		protect_contamination_air=1;
	};

	class Skyline_Glasses_Masque_GP5_01_F
	{
		buy_price=85;
		protect_contamination_air=1;
	};

	class Kio_Capital_Hat
	{
		buy_price=200;
	};
	class Kio_Hat: Kio_Capital_Hat {};
	class Kio_No1_Hat: Kio_Capital_Hat {};
	class Kio_Santa_Hat: Kio_Capital_Hat {};
	class Kio_Spinning_Hat: Kio_Capital_Hat {};
	class Kio_Afro_Hat: Kio_Capital_Hat {};

	class Masque_Alien1
	{
		buy_price=500;
	};
	class Masque_Anonymous: Masque_Alien1 {};
	class Masque_archNemesis: Masque_Alien1 {};
	class Masque_Arnold: Masque_Alien1 {};
	class Masque_Aubrey: Masque_Alien1 {};
	class Masque_Bonnie: Masque_Alien1 {};
	class Masque_Bush: Masque_Alien1 {};
	class Masque_Chains: Masque_Alien1 {};
	class Masque_Chuck: Masque_Alien1 {};
	class Masque_Clinton: Masque_Alien1 {};
	class Masque_Clover: Masque_Alien1 {};
	class Masque_Dallas: Masque_Alien1 {};
	class Masque_Fish: Masque_Alien1 {};
	class Masque_forceAlpha: Masque_Alien1 {};
	class Masque_GdG: Masque_Alien1 {};
	class Masque_Gombo: Masque_Alien1 {};
	class Masque_Hockey: Masque_Alien1 {};
	class Masque_Hoxton: Masque_Alien1 {};
	class Masque_Incendiaire: Masque_Alien1 {};
	class Masque_Lincoln: Masque_Alien1 {};
	class Masque_Lion: Masque_Alien1 {};
	class Masque_Macrilleuse: Masque_Alien1 {};
	class Masque_Mark: Masque_Alien1 {};
	class Masque_Mempo: Masque_Alien1 {};
	class Masque_Metalhead: Masque_Alien1 {};
	class Masque_Momie: Masque_Alien1 {};
	class Masque_Optimiste: Masque_Alien1 {};
	class Masque_Orc: Masque_Alien1 {};
	class Masque_Religieuse: Masque_Alien1 {};
	class Masque_Santa: Masque_Alien1 {};
	class Masque_Smiley: Masque_Alien1 {};
	class Masque_Solitaire: Masque_Alien1 {};
	class Masque_speedRunner: Masque_Alien1 {};
	class Masque_Unic: Masque_Alien1 {};
	class Masque_Wolfv2: Masque_Alien1 {};
	class Skyline_Anonymous: Masque_Alien1 {};
	class Skyline_Corvo: Masque_Alien1 {};
	class Skyline_Dallas: Masque_Alien1 {};
	class Skyline_Hoxton: Masque_Alien1 {};
	class Skyline_Skyrim: Masque_Alien1 {};
	class Skyline_Wolf: Masque_Alien1 {};


	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Barbe/coiffeur ////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	class TRYK_Beard
	{
		buy_price=254;
	};
	class TRYK_Beard_BK: TRYK_Beard {};

	class TRYK_SBeard_Gr: TRYK_Beard {};
	class TRYK_SBeard_Gr2: TRYK_Beard {};
	class TRYK_SBeard_Gr3: TRYK_Beard {};
	class TRYK_SBeard_Gr4: TRYK_Beard {};
	class TRYK_SBeard_Gr5: TRYK_Beard {};
	class TRYK_SBeard_BW: TRYK_Beard {};
	class TRYK_SBeard_BW2: TRYK_Beard {};
	class TRYK_SBeard_BW3: TRYK_Beard {};
	class TRYK_SBeard_BW4: TRYK_Beard {};
	class TRYK_SBeard_BW5: TRYK_Beard {};
	class TRYK_SBeard: TRYK_Beard {};
	class TRYK_SBeard2: TRYK_Beard {};
	class TRYK_SBeard3: TRYK_Beard {};
	class TRYK_SBeard4: TRYK_Beard {};
	class TRYK_SBeard5: TRYK_Beard {};
	class TRYK_SBeard_BL: TRYK_Beard {};
	class TRYK_SBeard_BL2: TRYK_Beard {};
	class TRYK_SBeard_BL3: TRYK_Beard {};
	class TRYK_SBeard_BL4: TRYK_Beard {};
	class TRYK_SBeard_BL5: TRYK_Beard {};
	class TRYK_SBeard_BK: TRYK_Beard {};
	class TRYK_SBeard_BK2: TRYK_Beard {};
	class TRYK_SBeard_BK3: TRYK_Beard {};
	class TRYK_SBeard_BK4: TRYK_Beard {};
	class TRYK_SBeard_BK5: TRYK_Beard {};
	class TRYK_Beard_BK2: TRYK_Beard {};
	class TRYK_Beard_BK3: TRYK_Beard {};
	class TRYK_Beard_BK4: TRYK_Beard {};
	class TRYK_Beard_BW: TRYK_Beard {};
	class TRYK_Beard_BW2: TRYK_Beard {};
	class TRYK_Beard_BW3: TRYK_Beard {};
	class TRYK_Beard_BW4: TRYK_Beard {};
	class TRYK_Beard_Gr: TRYK_Beard {};
	class TRYK_Beard_Gr2: TRYK_Beard {};
	class TRYK_Beard_Gr3: TRYK_Beard {};
	class TRYK_Beard_Gr4: TRYK_Beard {};
	class TRYK_Beard2: TRYK_Beard {};
	class TRYK_Beard3: TRYK_Beard {};
	class TRYK_Beard4: TRYK_Beard {};
	class EF_Long_wig_B: TRYK_Beard {};
	class EF_Punk_wig_B: TRYK_Beard {};
	class EF_wig_SB: TRYK_Beard {};
	class EF_wig_VSB: TRYK_Beard {};
	class EF_Punk_wig_SB3: TRYK_Beard {};
	class EF_Punk_wig_SB: TRYK_Beard {};
	class EF_Long_wig_BLE: TRYK_Beard {};
	class EF_Long_wig_BL: TRYK_Beard {};
	class EF_Punk_wig_BL: TRYK_Beard {};
	class EF_wig_SBL: TRYK_Beard {};
	class EF_wig_VSBL: TRYK_Beard {};
	class EF_Punk_wig_SBL3: TRYK_Beard {};
	class EF_Punk_wig_SBL: TRYK_Beard {};
	class EF_Long_wig_BW: TRYK_Beard {};
	class EF_Punk_wig_BW: TRYK_Beard {};
	class EF_wig_SBW: TRYK_Beard {};
	class EF_wig_VSBW: TRYK_Beard {};
	class EF_Punk_wig_SBW3: TRYK_Beard {};
	class EF_Punk_wig_SBW: TRYK_Beard {};
	class EF_Long_wig_GL: TRYK_Beard {};
	class EF_Punk_wig_GL: TRYK_Beard {};
	class EF_Punk_wig_SSV3: TRYK_Beard {};
	class EF_wig_VSSV: TRYK_Beard {};
 	class TRYK_H_wig: TRYK_Beard {};
 	class EF_wig_SSV: TRYK_Beard {};
 	class EF_Punk_wig_SV: TRYK_Beard {};
 	class EF_Long_wig_SV: TRYK_Beard {};
 	class EF_Punk_wig_SGL: TRYK_Beard {};
 	class EF_Punk_wig_SGL3: TRYK_Beard {};



	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// Tenues craftables//////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////

	class mgsr_headbag {};
	class G_Bandanna_blk {};

 	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////// NON UTILISE ////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////


	class U_BG_Guerilla2_1
	{
		buy_price=95;
	};
	class U_BG_Guerilla2_2: U_BG_Guerilla2_1 {};
	class U_BG_Guerilla2_3: U_BG_Guerilla2_1 {};
	class U_BG_Guerilla3_1: U_BG_Guerilla2_1 {};
	class Skyline_Uniforme_DolceGabbana_01_F: U_BG_Guerilla2_1 {};
	class Skyline_Uniforme_Hello_Kitty_01_F: U_BG_Guerilla2_1 {};
	class Skyline_Uniforme_Bob_01_F: U_BG_Guerilla2_1 {};
	class Skyline_Uniforme_Patrick_01_F: U_BG_Guerilla2_1 {};

	class U_C_HunterBody_grn: U_BG_Guerilla2_1 {};
	class U_C_Journalist: U_BG_Guerilla2_1 {};

	class TRYK_T_OD_PAD
	{
		buy_price=120;
	};
	class TRYK_U_denim_hood_nc: TRYK_T_OD_PAD {};
	class TRYK_U_B_BLK_OD: TRYK_T_OD_PAD {};
	class TRYK_U_B_BLK_OD_Tshirt: TRYK_T_OD_PAD {};
	class TRYK_U_B_BLK_TAN_2: TRYK_T_OD_PAD {};
	class TRYK_U_B_PCUGs_OD: TRYK_T_OD_PAD {};
	class TRYK_shirts_TAN_PAD_BK: TRYK_T_OD_PAD {};
	class TRYK_shirts_BLK_PAD_BL: TRYK_T_OD_PAD {};
	class TRYK_shirts_OD_PAD_BL: TRYK_T_OD_PAD {};
	class TRYK_shirts_TAN_PAD_BL: TRYK_T_OD_PAD {};
	class TRYK_shirts_BLK_PAD_BLW: TRYK_T_OD_PAD {};
	class TRYK_shirts_OD_PAD_BLW: TRYK_T_OD_PAD {};
	class TRYK_shirts_TAN_PAD_BLW: TRYK_T_OD_PAD {};
	class TRYK_shirts_BLK_PAD_BLU3: TRYK_T_OD_PAD {};
	class TRYK_shirts_OD_PAD_BLU3: TRYK_T_OD_PAD {};
	class TRYK_shirts_TAN_PAD_BLU3: TRYK_T_OD_PAD {};
	class TRYK_shirts_BLK_PAD: TRYK_T_OD_PAD {};
	class TRYK_shirts_OD_PAD: TRYK_T_OD_PAD {};
	class TRYK_shirts_TAN_PAD: TRYK_T_OD_PAD {};
	class TRYK_shirts_BLK_PAD_RED2: TRYK_T_OD_PAD {};
	class TRYK_shirts_OD_PAD_RED2: TRYK_T_OD_PAD {};
	class TRYK_shirts_TAN_PAD_RED2: TRYK_T_OD_PAD {};
	class TRYK_shirts_BLK_PAD_YEL: TRYK_T_OD_PAD {};
	class TRYK_shirts_OD_PAD_YEL: TRYK_T_OD_PAD {};
	class TRYK_shirts_TAN_PAD_YEL: TRYK_T_OD_PAD {};

	class rds_uniform_priest
	{
		buy_price=138;
	};

	class U_I_C_Soldier_Bandit_4_F
	{
		buy_price=140;
	};
	class U_I_C_Soldier_Bandit_5_F: U_I_C_Soldier_Bandit_4_F {};
	class U_I_C_Soldier_Bandit_1_F: U_I_C_Soldier_Bandit_4_F {};
	class U_I_C_Soldier_Bandit_2_F: U_I_C_Soldier_Bandit_4_F {};
	class U_I_C_Soldier_Bandit_3_F: U_I_C_Soldier_Bandit_4_F {};
	class U_C_Man_casual_4_F: U_I_C_Soldier_Bandit_4_F {};
	class U_C_Man_casual_5_F: U_I_C_Soldier_Bandit_4_F {};
	class U_C_Man_casual_6_F: U_I_C_Soldier_Bandit_4_F {};

	class TRYK_U_pad_hood_Blod
	{
		buy_price=200;
	};
	class TRYK_U_pad_hood_Blk: TRYK_U_pad_hood_Blod {};
	class TRYK_U_pad_hood_Cl_blk: TRYK_U_pad_hood_Blod {};
	class TRYK_U_pad_hood_Cl: TRYK_U_pad_hood_Blod {};
	class U_OrestesBody: TRYK_U_pad_hood_Blod {};
	class TRYK_U_denim_hood_blk: TRYK_U_pad_hood_Blod {};
	class TRYK_U_denim_jersey_blk: TRYK_U_pad_hood_Blod {};
	class TRYK_U_denim_jersey_blu: TRYK_U_pad_hood_Blod {};
	class TRYK_U_B_wh_blk_Rollup_CombatUniform: TRYK_U_pad_hood_Blod {};
	class TRYK_U_B_wh_OD_Rollup_CombatUniform: TRYK_U_pad_hood_Blod {};
	class TRYK_U_B_wh_tan_Rollup_CombatUniform: TRYK_U_pad_hood_Blod {};
	class TRYK_U_B_RED_T_BG_BR: TRYK_U_pad_hood_Blod {};
	class TRYK_U_B_RED_T_BR: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_BLK_PAD_BK: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_BK: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_BK_Sleeve: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_BL: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_BL_Sleeve: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_BWH: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_BWH_Sleeve: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_od: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_od_Sleeve: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_R: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_R_Sleeve: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_RED2: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_RED2_Sleeve: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_WH: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_WH_Sleeve: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_WHB: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_ylb: TRYK_U_pad_hood_Blod {};
	class TRYK_shirts_DENIM_ylb_Sleeve: TRYK_U_pad_hood_Blod {};

	class TRYK_U_B_PCUGs_BLK_R
	{
		buy_price=500;
	};
	class TRYK_U_B_PCUGs_gry: TRYK_U_B_PCUGs_BLK_R {};
	class TRYK_U_B_PCUGs_gry_R: TRYK_U_B_PCUGs_BLK_R {};
	class TRYK_U_B_PCUGs_OD_R: TRYK_U_B_PCUGs_BLK_R {};
	class TRYK_shirts_OD_PAD_BK: TRYK_U_B_PCUGs_BLK_R {};
	class TRYK_U_B_PCUGs_BLK: TRYK_U_B_PCUGs_BLK_R {};
	class TRYK_T_TAN_PAD: TRYK_U_B_PCUGs_BLK_R {};
	class TRYK_U_B_Denim_T_BG_BK: TRYK_U_B_PCUGs_BLK_R {};
	class TRYK_U_B_Denim_T_BG_WH: TRYK_U_B_PCUGs_BLK_R {};
	class TRYK_U_B_Denim_T_BK: TRYK_U_B_PCUGs_BLK_R {};
	class TRYK_U_B_Denim_T_WH: TRYK_U_B_PCUGs_BLK_R {};

	class TRYK_T_BLK_PAD
	{
		buy_price=750;
	};
	class TRYK_U_B_BLK_T_BG_WH: TRYK_T_BLK_PAD {};
	class TRYK_U_B_BLK_T_BK: TRYK_T_BLK_PAD {};
	class TRYK_U_B_BLK_T_WH: TRYK_T_BLK_PAD {};
	class TRYK_U_B_ODTAN: TRYK_T_BLK_PAD {};
	class TRYK_U_B_ODTAN_Tshirt: TRYK_T_BLK_PAD {};

	class TRYK_U_B_BLK_OD_Rollup_CombatUniform
	{
		buy_price=850;
	};
	class TRYK_U_B_BLK_tan_Rollup_CombatUniform: TRYK_U_B_BLK_OD_Rollup_CombatUniform {};
	class TRYK_U_B_BLOD_T: TRYK_U_B_BLK_OD_Rollup_CombatUniform {};
	class TRYK_U_B_BLTAN_T: TRYK_U_B_BLK_OD_Rollup_CombatUniform {};
	class TRYK_U_B_C02_Tsirt: TRYK_U_B_BLK_OD_Rollup_CombatUniform {};

	class TRYK_U_B_OD_BLK
	{
		buy_price=1200;
	};
	class TRYK_U_B_OD_BLK_2: TRYK_U_B_OD_BLK {};

	class rds_uniform_Functionary1
	{
		buy_price=10000;
	};
	class Alysia_Uniform_Civ_PNT: rds_uniform_Functionary1
	{
		buy_license_CIV[]={"politique_pnt_militant"};
	};
	class rds_uniform_Functionary2: rds_uniform_Functionary1 {};
	class TRYK_SUITS_BLK_F: rds_uniform_Functionary1 {};
	class TRYK_SUITS_BR_F: rds_uniform_Functionary1 {};

	class Masque_Chirurgical
	{
		buy_price=20;
		buy_condition_GUER=1;
		protect_contamination_air=1;
	};
	class Skyline_NioshFace
	{
		name="Masque protecteur";
		protect_contamination_air=1;
		buy_condition_GUER=1;
		buy_price=20;
	};

	class combi_plonge_samu
	{
		buy_price=200;
		buy_condition_GUER=2;
		buy_license_GUER[]={"dive"};
	};
	class Respirateur_samu: combi_plonge_samu
	{
		buy_price=350;
	};

	class Skyline_Casque_Pilote_Secouriste_01_F
	{
		buy_price=46450;
		buy_condition_GUER=6;
		buy_license_GUER[]={"pilot"};
	};
	class Skyline_Uniforme_Pilote_Secouriste_01_F: Skyline_Casque_Pilote_Secouriste_01_F
	{
		buy_price=200;
	};
	class U_C_Driver_1_red: Skyline_Casque_Pilote_Secouriste_01_F
	{
		buy_price=200;
	};

	class Skyline_Uniforme_Secouriste_01_F
	{
		buy_price=80;
		buy_condition_GUER=1;
	};
	class Skyline_Uniforme_Secouriste_02_F: Skyline_Uniforme_Secouriste_01_F {};

	class rds_uniform_assistant
	{
		buy_price=120;
		buy_condition_GUER=3;
	};

	class rds_uniform_doctor
	{
		buy_price=150;
		buy_condition_GUER=4;
	};

	class Skyline_Sac_Secouriste_01_F
	{
		buy_price=800;
		buy_condition_GUER=1;
	};
	class Skyline_Sac_Secouriste_02_F: Skyline_Sac_Secouriste_01_F {};
	class Skyline_Sac_Secouriste_01_2_F: Skyline_Sac_Secouriste_01_F {};
	class TRYK_B_Medbag: Skyline_Sac_Secouriste_01_F
	{
		buy_price=1100;
	};

	class TRYK_B_Medbag_OD
	{
		buy_price=1100;
		buy_condition_EAST=1;
		buy_license_EAST[]={"east_medic"};
	};

	class hgun_FlashBall_F
	{
		buy_price=1350;
		buy_condition_EAST=1;
		disableDamage=1;
		knockOut=1;
	};
	class 1Rnd_FlashBall_Mag: hgun_FlashBall_F
	{
		buy_price=50;
	};

    class TRYK_B_Medbag_BK
    {
        buy_price=1100;
        buy_condition_EAST=1;
        buy_license_EAST[]={"east_medic"};
    };

    class TRYK_B_Kitbag_blk
    {
        buy_price=1100;
        buy_condition_EAST=1;
    };
};
