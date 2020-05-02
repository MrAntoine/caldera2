
class Taneino_venteVeh {
    idd = 57300;
    name= "taneino_venteVeh";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "";

    class controlsBackground {
    	class background: Life_RscText
		{
			idc = -1;
			x = 0.298972 * safezoneW + safezoneX;
			y = 0.268919 * safezoneH + safezoneY;
			w = 0.391747 * safezoneW;
			h = 0.198069 * safezoneH;
			colorBackground[] = {0.176,0.176,0.161,0.8};
		};
	class backgroundVentreHeader: Life_RscText
		{
			idc = -1;
			text = "Vente de véhicule entre particulier"; //--- ToDo: Localize;
			x = 0.298972 * safezoneW + safezoneX;
			y = 0.257916 * safezoneH + safezoneY;
			w = 0.391747 * safezoneW;
			h = 0.0330114 * safezoneH;
			colorBackground[] = {0.655,0.839,0.922,1};
		};
    };
    class controls {
		class listeVehTitle: Life_RscText
			{
				idc = -1;
				text = "Véhicule "; //--- ToDo: Localize;
				x = 0.309281 * safezoneW + safezoneX;
				y = 0.312935 * safezoneH + safezoneY;
				w = 0.164946 * safezoneW;
				h = 0.0330114 * safezoneH;
			};
		class listeVehBox: Life_RscCombo
			{
				idc = 57301;
				x = 0.309281 * safezoneW + safezoneX;
				y = 0.345947 * safezoneH + safezoneY;
				w = 0.170101 * safezoneW;
				h = 0.0220076 * safezoneH;
			};
		class listeUnitTitle: Life_RscText
			{
				idc = -1;
				text = "Personne "; //--- ToDo: Localize;
				x = 0.309281 * safezoneW + safezoneX;
				y = 0.367954 * safezoneH + safezoneY;
				w = 0.170101 * safezoneW;
				h = 0.0330114 * safezoneH;
			};
		class listeUnitBox: Life_RscCombo
			{
				idc = 57302;
				x = 0.309281 * safezoneW + safezoneX;
				y = 0.400966 * safezoneH + safezoneY;
				w = 0.170101 * safezoneW;
				h = 0.0220076 * safezoneH;
			};
		class vendreButton: Life_RscButtonMenu
			{
				idc = 57304;
				text = "Vendre"; //--- ToDo: Localize;
				x = 0.515464 * safezoneW + safezoneX;
				y = 0.400966 * safezoneH + safezoneY;
				w = 0.072164 * safezoneW;
				h = 0.0220076 * safezoneH;
				colorBackground[] = {-1,0.4,-1,0.8};
			};
		class cancelButton: Life_RscButtonMenu
			{
				idc = -1;
				text = "Fermer"; //--- ToDo: Localize;
				onButtonClick = "closeDialog 0;";
				x = 0.608246 * safezoneW + safezoneX;
				y = 0.400966 * safezoneH + safezoneY;
				w = 0.072164 * safezoneW;
				h = 0.0220076 * safezoneH;
				colorBackground[] = {1,0,0,1};
			};
		class amountVenteHeader: Life_RscText
			{
				idc = -1;
				text = "Prix du véhicule :"; //--- ToDo: Localize;
				x = 0.541237 * safezoneW + safezoneX;
				y = 0.334943 * safezoneH + safezoneY;
				w = 0.170101 * safezoneW;
				h = 0.0220076 * safezoneH;
			};
		class amountVente: Life_RscEdit
			{
				idc = 57303;
				text = "";
				x = 0.525773 * safezoneW + safezoneX;
				y = 0.367954 * safezoneH + safezoneY;
				w = 0.139173 * safezoneW;
				h = 0.0220076 * safezoneH;
			};
    };
};


