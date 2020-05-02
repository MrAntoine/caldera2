class RscDisplayhelpMenu: RscDisplayDefaultInteraction {
    idd = 60700;
    name= "RscDisplayhelpMenu";

    class controlsBackground: DEFAULT_controlsBackground {
		class RscTitleBackground: RscText
		{
			idc = -1;
			text = "Aide des ressources Caldera-Life"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.27516 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class MainBackground: RscText
		{
			idc = -1;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.2976 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.407 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class mText: RscText
		{
			idc = -1;
			text = "Comment pouvons-nous vous aider?"; //--- ToDo: Localize;
			x = 0.300969 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		class mText2: RscText
		{
			idc = -1;
			text = "Informations"; //--- ToDo: Localize;
			x = 0.502062 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
    };

    class controls: DEFAULT_controls {
        class itemList: RscListBox
		{
			idc = 67001;
			onLBSelChanged = "_this call AlysiaClient_fnc_menuLBChanged";
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.3328 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.363 * safezoneH;
			sizeEx = 2.5 * 0.02;
		};
		/*class TitleWiki: RscTitle
		{
			idc = 67003;
			text = "Aide des ressources Anarkhia"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.2756 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * GUI_GRID_H;
		};*/
		class ButtonClose: RscButtonMenu
		{
			onButtonClick = "closeDialog 0;";
			idc = 60702;
			text = "Fermer"; //--- ToDo: Localize;
			x = 0.636641 * safezoneW + safezoneX;
			y = 0.7046 * safezoneH + safezoneY;
			w = 0.0644531 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class ItemName: RscText
		{
			idc = 60704;
			text = "";
			x = 0.497937 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 2.7 * 0.02;
		};
		class Description: RscStructuredText
		{
			idc = 60708;
			text = "Description:"; //--- ToDo: Localize;
			x = 0.497937 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.06159 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class DescriptionText: RscStructuredText
		{
			idc = 60709;
			text = "";
			x = 0.497937 * safezoneW + safezoneX;
			y = 0.4164 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.2772 * safezoneH;
		};
    };
};