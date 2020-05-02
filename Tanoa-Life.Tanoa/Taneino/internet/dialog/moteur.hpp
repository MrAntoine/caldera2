
class taneino_moteur {
    idd = 770;
    name = "taneino_moteur";
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground {

        class MainBackground: Life_RscPicture {
            text = "\Taneino_Internet\data\Internet.paa";
            idc = -1;
            x = 0.185 * safezoneW + safezoneX;
            y = -0.00399999 * safezoneH + safezoneY;
            w = 0.63 * safezoneW;
            h = 1.008 * safezoneH;
        };
    };


    class controls {

        class ButtonClose: Life_RscButtonInvisible {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.19323 * safezoneW + safezoneX;
            y = 0.190593 * safezoneH + safezoneY;
            w = 0.013125 * safezoneW;
            h = 0.028 * safezoneH;
        };

        class LogoHDImg: Life_RscPicture {
            idc = -1;
            text = "textures\Logo.paa";
            x = 0.78448 * safezoneW + safezoneX;
            y = 0.190037 * safezoneH + safezoneY;
            w = 0.016153 * safezoneW;
            h = 0.028 * safezoneH;
        };

        class LogoHD: Life_RscButtonInvisible {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.78448 * safezoneW + safezoneX;
            y = 0.190037 * safezoneH + safezoneY;
            w = 0.016153 * safezoneW;
            h = 0.028 * safezoneH;
        };

        class Actualiser: Life_RscButtonInvisible {
            idc = -1;
            onButtonClick = "[] spawn taneino_fnc_recherche;";
            x = 0.230208 * safezoneW + safezoneX;
            y = 0.222222 * safezoneH + safezoneY;
            w = 0.013125 * safezoneW;
            h = 0.028 * safezoneH;
        };




        class OngletName: Life_RscText {
            idc = -1;
            onButtonClick = "Moteur de recherche";
            colorText[] = {0,0,0,1};
            colorBackground[] = {0,0,0,0};
           size= 0.025;
            x = 0.241146 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.0984375 * safezoneW;
            h = 0.014 * safezoneH;
        };

        class Url: Life_RscText {
            idc = -1;
            text="www.google.com";
            shadow = 0;
            size= 0.05;
            colorText[] = {0,0,0,1};
            colorBackground[] = {0,0,0,0};
            x = 0.267396 * safezoneW + safezoneX;
            y = 0.230185 * safezoneH + safezoneY;
            w = 0.282187 * safezoneW;
            h = 0.014 * safezoneH;
        };


        class LogoP: Life_RscPicture {
            idc = -1;
            text = "textures\Logo.paa";
            x = 0.40125 * safezoneW + safezoneX;
            y = 0.304 * safezoneH + safezoneY;
            w = 0.196875 * safezoneW;
            h = 0.34125 * safezoneH;
        };

       /* class TexteP: Life_RscText {
            idc = -1;
            text = "Pour tes meilleures recherches";
            colorText[] = {0,0,0,1};
            colorBackground[] = {0,0,0,0};
            x = 0.395 * safezoneW + safezoneX;
            y = 0.5 * safezoneH + safezoneY;
            w = 0.170625 * safezoneW;
            h = 0.042 * safezoneH;
        };*/



        class SearchBar: Life_RscEdit {
            idc = 771;
            text="www.taneino.fr";
            x = 0.3425 * safezoneW + safezoneX;
            y = 0.640 * safezoneH + safezoneY;
            w = 0.275625 * safezoneW;
            h = 0.042 * safezoneH;
        };


        class ResearchImg: Life_RscPicture {
            idc = -1;
            text = "Taneino_Internet\data\Search.paa";
            x = 0.618125 * safezoneW + safezoneX;
            y = 0.640 * safezoneH + safezoneY;
            w = 0.0242307 * safezoneW;
            h = 0.042 * safezoneH;
        };

        class Research: Life_RscButtonInvisible {
            idc = -1;
            onButtonClick = "[] spawn taneino_fnc_recherche;";
            x = 0.452375 * safezoneW + safezoneX;
            y = 0.640 * safezoneH + safezoneY;
            w = 0.0242308 * safezoneW;
            h = 0.0421 * safezoneH;
        };

};
};
