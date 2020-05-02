class ALYSIA_ITEMS
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                     EXEMPLE
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // class exemple - DO NOT EDIT ! EXEMPLE -
    // {
    //     name="Exemple";- Displayname -
    //     weight=1;- Must be > 0 -
    //     illegal=1;- Is item illegal ? 0=no | 1=yes IMPORTANT: Illegal items give illegal money when sold -
    //     image="Alysia_Client\Textures\Items_virtual\exemple.paa";- image path. Leave empty for no picture -
    //     store[]={};- Leave empty for default item storage behavior. If defined (classnames array such as chest) will be the only storage possible for item -
    //     class remove - Add possibility to remove object from inventory -
    //     {
    //         disableSuitcase=1;-Disable suitcase creation? 0=no | 1=yes -
    //         all=1;- Remove 1 item = 0 | Remove all item stack = 1  -
    //     };
    //     price_buy=40;- Item buy price (override if class market is define) -
    //     price_sell=10;- Item sell price (override if class market is define) -
    //     class market -Add item to market-
    //     {
    //         max=400;- Item market max sell price (max must be > min) -
    //         min=120;- Item market min sell price (min must be < max) -
    //     };
    //     class food - Add possibility to consumme item. WARNING: Class FOOD and USE cannot be defined at the same time -
    //     {
    //         hunger=5;- Hunger operation (can be negative) -
    //         thirst=-5;- Thirst operation (can be negative) -
    //         sound="eat_biscuit";- Consumme sound. Leave empty for no sound -
    //         alcool=0.15;- Alcool percentage -
    //         unlimitedRun=10;- Time in secondes player will have unlimited run if item is consumed -
    //     };
    //     class use - Add possibility to use item. WARNING: Class FOOD and USE cannot be defined at the same time -
    //     {
    //         action="hint 'hi there !';";-Script execution -
    //     };
    //     buy_license_CIV="drive";- License require to buy item 'exemple' as CIVILIAN (civ) -
    //     sell_license_CIV="drive";- License require to sell item 'exemple' as CIVILIAN (civ) -
    //     buy_rank_CIV=1;- Rank require to buy item 'exemple' as CIVILIAN (civ) -
    //     sell_rank_CIV=1;- Rank require to sell item 'exemple' as CIVILIAN (civ) -
    //     buy_license_EAST="boat";- License require to buy item 'exemple' as EAST (opfor) -
    //     sell_license_EAST="boat";- License require to sell item 'exemple' as EAST (opfor) -
    //     buy_rank_EAST=2;- Rank require to buy item 'exemple' as EAST (opfor) -
    //     sell_rank_EAST=2;- Rank require to sell item 'exemple' as EAST (opfor) -
    //     buy_license_WEST="drive";- License require to buy item 'exemple' as WEST (blufor) -
    //     sell_license_WEST="drive";- License require to sell item 'exemple' as WEST (blufor) -
    //     buy_rank_WEST=3;- Rank require to buy item 'exemple' as WEST (blufor) -
    //     sell_rank_WEST=3;- Rank require to sell item 'exemple' as WEST (blufor) -
    //     buy_license_GUER="drive";- License require to buy item 'exemple' as GUER (independent) -
    //     sell_license_GUER="drive";- License require to sell item 'exemple' as GUER (independent) -
    //     buy_rank_GUER=4;- Rank require to buy item 'exemple' as GUER (independent) -
    //     sell_rank_GUER=4;- Rank require to sell item 'exemple' as GUER (independent) -
    // };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Ressources minieres brut      ///////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class wood
    {
        name="Buche de bois";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\tas_bois.paa";
        class remove {};
    };
    class plomb
    {
        name="Minerai de plomb";
        weight=6;
        image="Alysia_Client\Textures\Items_virtual\minerai_plomb.paa";
        class remove {};
    };
    class aluminium
    {
        name="Minerai d'aluminium";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\minerai_aluminium.paa";
        class remove {};
    };
    class granulat
    {
        name="Granulat";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\granulat.paa";
        class remove {};
    };
    class iron
    {
        name="Minerai de fer";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\minerai_fer.paa";
        class remove {};
    };
    class charcoal
    {
        name="Charbon";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\charbon.paa";
        class remove {};
    };
    class sand
    {
        name="Sable";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\sable.paa";
        class remove {};
    };
    class circuitimprime
    {
        name="Circuit imprimé";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\circuitimprime.paa";
        class remove {};
    };
    class detritus
    {
        name="Détritus";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\poubelle.paa";
        class remove {};
    };
    class oilu
    {
        name="Baril de pétrole";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\petrole.paa";
        store[]=
        {
            "d3s_next_bocha",
            "d3s_next_bocha_1",
            "d3s_next_bocha_2",
            "d3s_next_bocha_3",
            "d3s_next_bocha_4",
            "d3s_next_bocha_5",
            "Coffre",
            "Skyline_Alysia_Boite_01_F",
            "Skyline_Coffre_Small",
            "Skyline_Coffre_Medium",
            "Skyline_Coffre_Large",
            "Skyline_Coffre_Extra",
            "Skyline_Coffre_Mega"
        };
        class remove {};
    };
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Ressources minieres traite    ///////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class woodp
    {
        name="Planche";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\planche.paa";
        class market
        {
            max=155;
            min=80;
        };
        class remove {};
    };
    class ironp
    {
        name="Lingot de fer";
        weight=7;
        image="Alysia_Client\Textures\Items_virtual\lingot_fer.paa";
        class market
        {
            max=750;
            min=400;
        };
        class remove {};
    };
    class plombp
    {
        name="Lingot de plomb";
        weight=11;
        image="Alysia_Client\Textures\Items_virtual\lingot_plomb.paa";
        class market
        {
            max=650;
            min=350;
        };
        class remove {};
    };
    class aluminiump
    {
        name="Lingot d'aluminium";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\lingot_aluminium.paa";
        class market
        {
            max=400;
            min=200;
        };
        class remove {};
    };
    class conserve
    {
        name="Conserve vide";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\conserve.paa";
        class remove {};
    };
    class steelp
    {
        name="Barre Acier";
        weight=9;
        image="Alysia_Client\Textures\Items_virtual\steel.paa";
        class remove {};
    };
    class glass
    {
        name="Verre";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\verre.paa";
        class market
        {
            max=400;
            min=250;
        };
        class remove {};
    };
    class seringue
    {
        name="Seringue";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\seringue_vide.paa";
        class remove {};
    };
    class bouteillevide
    {
        name="Bouteille vide";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\bouteillevide.paa";
        class remove {};
    };
    class fioul: oilu
    {
        name="Fioul";
        weight=2;
        price_buy=0;
        buy_license_CIV="";
        image="Alysia_Client\Textures\Items_virtual\fioul.paa";
        class market
        {
            max=500;
            min=200;
        };
         store[]=
        {
            "d3s_next_bocha",
            "d3s_next_bocha_1",
            "d3s_next_bocha_2",
            "d3s_next_bocha_3",
            "d3s_next_bocha_4",
            "d3s_next_bocha_5",
            "Coffre",
            "Skyline_Alysia_Boite_01_F",
            "Skyline_Coffre_Small",
            "Skyline_Coffre_Medium",
            "Skyline_Coffre_Large",
            "Skyline_Coffre_Extra",
            "Skyline_Coffre_Mega"
        };
        class remove {};
    };
    class gazole: oilu
    {
        name="Gazole";
        weight=2;
        price_buy=0;
        image="Alysia_Client\Textures\Items_virtual\gazole.paa";
        class market
        {
            max=430;
            min=200;
        };
         store[]=
        {
            "d3s_next_bocha",
            "d3s_next_bocha_1",
            "d3s_next_bocha_2",
            "d3s_next_bocha_3",
            "d3s_next_bocha_4",
            "d3s_next_bocha_5",
            "Coffre",
            "Skyline_Alysia_Boite_01_F",
            "Skyline_Coffre_Small",
            "Skyline_Coffre_Medium",
            "Skyline_Coffre_Large",
            "Skyline_Coffre_Extra",
            "Skyline_Coffre_Mega"
        };
        class remove {};
    };
    class plastique
    {
        name="Plastique";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\plastique.paa";
        class remove {};
    };


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Ressources agricoles      ///////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class cotton_seed
    {
        name="Graine (coton)";
        weight=1;
        price_buy=15;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class cotton
    {
        name="Coton";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\coton.paa";
        class remove {};
    };
    class cottonp
    {
        name="Coton traité";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\boule_coton.paa";
        class market
        {
            max=700;
            min=530;
        };
        class remove {};
    };
    class tissue
    {
        name="Tissue";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\tissue.paa";
        class remove {};
    };
    class aubepine_seed
    {
        name="Graine (Aubépine)";
        weight=1;
        price_buy=15;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class aubepine
    {
        name="Aubépine";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\aubepine.paa";
        class remove {};
    };
    class aubepinep
    {
        name="Poudre d'Aubépine";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\poudre.paa";
        class market
        {
            max=730;
            min=550;
        };
        class remove {};
    };
    class valeriane_seed
    {
        name="Graine (Valériane)";
        weight=1;
        price_buy=15;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class valeriane
    {
        name="Valériane";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\valeriane.paa";
        class remove {};
    };
    class valerianep
    {
        name="Poudre de Valériane";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\poudre.paa";
        class market
        {
            max=650;
            min=350;
        };
        class remove {};
    };
    class ortie_seed
    {
        name="Graine (Ortie)";
        weight=1;
        price_buy=15;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class ortie
    {
        name="Ortie";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\ortie.paa";
        class remove {};
    };
    class ortiep
    {
        name="Poudre d'Ortie";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\poudre.paa";
        class market
        {
            max=760;
            min=550;
        };
        class remove {};
    };
    class reinedespres_seed
    {
        name="Graine (Reine des prés)";
        weight=1;
        price_buy=15;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class reinedespres
    {
        name="Reine des prés";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\reinedespres.paa";
        class remove {};
    };
    class reinedespresp
    {
        name="Poudre de Reine des prés";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\poudre.paa";
        class market
        {
            max=720;
            min=500;
        };
        class remove {};
    };
    class turtle
    {
        name="Viande de tortue";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\tortue.paa";
        class remove {};
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Ressources pharmacie     ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /*class medoc_rhume
    {
        name="Antirhume";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\medoc_rhume.paa";
        price_buy=200;
        class food
        {
            sound="painkiller_01";
        };
        class remove {};
    };
    class medoc_toux_1
    {
        name="Bouteille de Sirop de Tussidax";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\medoc_toux_1.paa";
        price_buy=520;
        class food
        {
            thirst=10;
            sound="drink_water";
        };
        class remove {};
    };
    class medoc_toux_2
    {
        name="Comprimé de Padéryx";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\medoc_toux_2.paa";
        price_buy=200;
        class food
        {
            sound="painkiller_01";
        };
        class remove {};
    };
    class medoc_depression
    {
        name="Antidépresseurs";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\medoc_toux_2.paa";
        price_buy=180;
        class food
        {
            sound="painkiller_01";
        };
        class remove {};
    };*/

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Ressources rares         ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class anarkhium
    {
        name="Fragment d'Anarkhium";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\uranium.paa";
        class remove {};
    };
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Objets utilisables       ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class scalpel
    {
        name="Scalpel chirurgical";
        weight=1;
        price_buy=9500;
        image="Alysia_Client\Textures\Items_virtual\scalpel.paa";
        class remove {};
    };
    class handcuffs
    {
        name="Menottes";
        weight=1;
        price_buy=120;
        image="Alysia_Client\Textures\Items_virtual\menottes.paa";
        class remove {};
    };
    class handcuffkeys
    {
        name="Clés de menottes";
        weight=1;
        price_buy=12;
        image="Alysia_Client\Textures\Items_virtual\clee_menottes.paa";
        class remove {};
    };
    class fishingpoles
    {
        name="Filet de pêche";
        weight=1;
        price_buy=100;
        image="Alysia_Client\Textures\Items_virtual\filet_peche.paa";
        class remove {};
    };
    class sifflet
    {
        name="Sifflet";
        weight=1;
        price_buy=3;
        image="Alysia_Client\Textures\Items_virtual\sifflet.paa";
        class remove {};
    };
    class money_transfer
    {
        name="Valise de billets de banque";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\money_transfer.paa";
        store[]=
        {
            "Skyline_Brinks_01_F",
            "Skyline_Coffre_Small",
            "Skyline_Coffre_Medium",
            "Skyline_Coffre_Large",
            "Skyline_Coffre_Extra",
            "Skyline_Coffre_Mega"
        };
        class remove {};
    };
     class serrureabime
    {
        name="Serrure abîmé";
        weight=2;
        price_buy=1750;
        image="Alysia_Client\Textures\Items_virtual\serrure.paa";
        buy_license_CIV="company_construction";
        class use
        {
            action="[] spawn AlysiaClient_fnc_item_serrure;";
        };
        class remove {};
    };
    class serrure
    {
        name="Serrure neuve";
        weight=2;
        price_buy=1750;
        image="Alysia_Client\Textures\Items_virtual\serrure.paa";
        buy_license_CIV="company_construction";
        class use
        {
            action="[] spawn AlysiaClient_fnc_item_serrure;";
        };
        class remove {};
    };
    class firework
    {
        name="Fusée d'artifice";
        weight=2;
        image="";
        price_buy=8000;
        class remove {};
        class use
        {
            action="[] call AlysiaClient_fnc_item_firework;";
        };
    };
    class lab_heal
    {
        name="Table d'opération";
        weight=10;
        price_buy=15400;
        image="Alysia_Client\Textures\Items_virtual\lab_heal.paa";
        class use
        {
            action="['lab_heal'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_alimentaire
    {
        name="Laboratoire de cuisine";
        weight=10;
        price_buy=196800;
        image="Alysia_Client\Textures\Items_virtual\lab_cigare.paa";
        class use
        {
            action="['lab_alimentaire'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        buy_license_CIV="chef_specialise";
        class remove {};
    };
    class lab_clothing
    {
        name="Laboratoire tenues";
        weight=10;
        price_buy=103850;
        image="Alysia_Client\Textures\Items_virtual\lab_cigare.paa";
        class use
        {
            action="['lab_clothing'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_medical
    {
        name="Laboratoire médical";
        weight=10;
        price_buy=103850;
        image="Alysia_Client\Textures\Items_virtual\lab_cigare.paa";
        class use
        {
            action="['lab_medical'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        buy_license_CIV="medecin_specialise";
        class remove {};
    };
    class lab_avance
    {
        name="Laboratoire d'ingénieur";
        weight=10;
        price_buy=103850;
        image="Alysia_Client\Textures\Items_virtual\lab_cigare.paa";
        class use
        {
            action="['lab_avance'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        buy_license_CIV="ingenieur_specialise";
        class remove {};
    };
    class lab_macon
    {
        name="Laboratoire d'architecte";
        weight=10;
        price_buy=103850;
        image="Alysia_Client\Textures\Items_virtual\lab_cigare.paa";
        class use
        {
            action="['lab_macon'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        buy_license_CIV="architecte_specialise";
        class remove {};
    };
    class nitro
    {
        name="Nitro";
        weight=4;
        price_buy=5750;
        image="Alysia_Client\Textures\Items_virtual\nitroboost.paa";
        class use
        {
            action="[cursorObject] spawn AlysiaClient_fnc_item_nitro;";
        };
        class remove {};
    };
    class barriere
    {
        name="Barrière (fixe)";
        weight=6;
        price_buy=120;
        image="Alysia_Client\Textures\Items_virtual\barriere.paa";
        buy_license_CIV="company_garagist";
        class use
        {
            action="['barriere'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class cone
    {
        name="Cône";
        weight=2;
        price_buy=50;
        buy_license_CIV="company_garagist";
        image="Alysia_Client\Textures\Items_virtual\cone.paa";
        class use
        {
            action="['cone'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class bargate
    {
        name="Barrière (porte)";
        weight=11;
        price_buy=550;
        image="Alysia_Client\Textures\Items_virtual\bargate.paa";
        class use
        {
            action="['bargate'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class table_wood
    {
        name="Table en bois";
        weight=9;
        image="Alysia_Client\Textures\Items_virtual\table_wood.paa";
        class use
        {
            action="['table_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class bonbonne_explo
    {
        name="Bonbonne explosive";
        weight=9;
        image="Alysia_Client\Textures\Items_virtual\bonbonne.paa";
        class use
        {
            action="['bonbonne_explo'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class chair_wood
    {
        name="Chaise en bois";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\chair_wood.paa";
        class use
        {
            action="['chair_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class light_double
    {
        name="Projecteur double";
        weight=3;
        image="";
        class use
        {
            action="['light_double'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class bagfence_01
    {
        name="Mur de sacs de sable";
        weight=4;
        image="";
        class use
        {
            action="['bagfence_01'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class bagfence_02: bagfence_01
    {
        name="Mur de sacs de sable courbé";
        image="";
        class use
        {
            action="['bagfence_02'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class spikeStrip
    {
        name="Herse";
        weight=5;
        price_buy=130;
        image="Alysia_Client\Textures\Items_virtual\herse.paa";
        class use
        {
            action="['spikeStrip'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class hedgehog
    {
        name="Hérisson Tchèque";
        weight=6;
        class use
        {
            action="['hedgehog'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class watchtower_wood
    {
        name="Tour de guet en bois";
        weight=20;
        class use
        {
            action="['watchtower_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };

    class portail_electrique
    {
        name="Portail electrique";
        weight=15;
        class use
        {
            action="['portail_electrique'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };

    class watchpost_tall
    {
        name="Poste de garde (grand)";
        weight=30;
        class use
        {
            action="['watchpost_tall'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class watchpost_small
    {
        name="Poste de garde (petit)";
        weight=22;
        class use
        {
            action="['watchpost_small'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };
    class camoNet
    {
        name="Filet de camouflage";
        weight=10;
        class use
        {
            action="['camoNet'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
        class remove {};
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Nourriture de base       ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class wheat_cake
    {
        name="Ration alimentaire";
        weight=2;
        price_buy=23;
        image="Alysia_Client\Textures\Items_virtual\prison_food.paa";
        class remove {};
        class food
        {
            hunger=5;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class eau50
    {
        name="Bouteille d'eau de 50cl";
        weight=1;
        price_buy=19;
        image="Alysia_Client\Textures\Items_virtual\eau50.paa";
        class food
        {
            thirst=10;
            sound="drink_water";
        };
        class remove {};
    };
    class goat
    {
        name="Chèvre cru";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\gigot_chevre.paa";
        class remove {};
    };
    class gigotchevre
    {
        name="Gigot de chèvre cuit";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\chevre_cuit.paa";
        class remove {};
        class food
        {
            hunger=25;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class conservechevre
    {
        name="Conserve de chèvre";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\chevre_conserve.paa";
        class remove {};
        class food
        {
            hunger=50;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class platchevre
    {
        name="Plat préparé de chèvre";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\platprepare.paa";
        class remove {};
        class food
        {
            hunger=50;
            souffle=1;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class sheep
    {
        name="Mouton cru";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\gigot_mouton.paa";
        class remove {};
    };
    class gigotmouton
    {
        name="Gigot de mouton cuit";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\mouton_cuit.paa";
        class remove {};
        class food
        {
            hunger=25;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class conservemouton
    {
        name="Conserve de mouton";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\mouton_conserve.paa";
        class remove {};
        class food
        {
            hunger=50;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class platmouton
    {
        name="Plat préparé de mouton";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\platprepare.paa";
        class remove {};
        class food
        {
            hunger=50;
            thirst=0;
            unlimitedRun=180;
            sound="eat_biscuit";
        };
    };
    class raisin
    {
        name="Raisin";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\raisin_black.paa";
        class remove {};
        class food
        {
            hunger=5;
            thirst=10;
            sound="eat_biscuit";
        };
    };
    class bouteilleraisin
    {
        name="Bouteille de jus de raisin";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\jus_raisin.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=50;
            sound="eat_biscuit";
        };
    };




    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////           Fabrication Arme         ////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class shoulderp
    {
        name="Crosse";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\crosse.paa";
        class remove {};
    };
    class intermediary_shoulderp
    {
        name="Crosse intermediaire";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\crosse.paa";
        class remove {};
    };
    class military_shoulderp
    {
        name="Crosse Millitaire";
        weight=5;
        image="Alysia_Client\Textures\Items_virtual\crosse.paa";
        class remove {};
    };
    class barrelp
    {
        name="Canon";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\canon.paa";
        class remove {};
    };
    class intermediary_barrelp
    {
        name="Canon Intermediaire";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\canon.paa";
        class remove {};
    };
    class military_barrelp
    {
        name="Canon Millitaire";
        weight=5;
        image="Alysia_Client\Textures\Items_virtual\canon.paa";
        class remove {};
    };
    class receiverp
    {
        name="Culasse";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\culasse.paa";
        class remove {};
    };
    class intermediary_receiverp
    {
        name="Culasse Intermediaire";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\culasse.paa";
        class remove {};
    };
    class military_receiverp
    {
        name="Culasse Millitaire";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\culasse.paa";
        class remove {};
    };
    class gripp
    {
        name="Poignée";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\poignee.paa";
        class remove {};
    };
    class intermediary_gripp
    {
        name="Poignée Intermediaire";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\poignee.paa";
        class remove {};
    };
    class military_gripp
    {
        name="Poignée Millitaire";
        weight=5;
        image="Alysia_Client\Textures\Items_virtual\poignee.paa";
        class remove {};
    };
    class slapperp
    {
        name="Percuteur";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\percuteur.paa";
        class remove {};
    };
    class intermediary_slapperp
    {
        name="Percuteur Intermediaire";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\percuteur.paa";
        class remove {};
    };
    class military_slapperp
    {
        name="Percuteur Millitaire";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\percuteur.paa";
        class remove {};
    };
    class framep
    {
        name="Armature";
        weight=3;
        image="Alysia_Client\Textures\Items_virtual\armature.paa";
        class remove {};
    };
    class intermediary_framep
    {
        name="Armature Intermediaire";
        weight=4;
        image="Alysia_Client\Textures\Items_virtual\armature.paa";
        class remove {};
    };
    class military_framep
    {
        name="Armature Millitaire";
        weight=5;
        image="Alysia_Client\Textures\Items_virtual\armature.paa";
        class remove {};
    };
    class cylinderp
    {
        name="Barillet";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\barillet.paa";
        class remove {};
    };
    class triggerp
    {
        name="Détente";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\detente.paa";
        class remove {};
    };
    class magazinep
    {
        name="Chargeur vide";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\chargeur.paa";
        class remove {};
    };

//////////////////////////////////

      class tabac_seed
    {
        name="Graine (tabac)";
        weight=1;
        price_buy=80;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class tabac
    {
        name="Tabac";
        weight=2;
        image="Alysia_Client\Textures\Items_virtual\tabac.paa";
        class remove {};
    };
    class cigare
    {
        name="Cigare";
        weight=2;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\cigare.paa";
        class market
        {
            max=1675;
            min=573;
        };
        class remove {};
    };
    class cigarette
    {
        name="Cigarette";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\cigarette.paa";
        class market
        {
            max=647;
            min=356;
        };
        class remove {};
    };

      class cocaine_seed
    {
        name="Graine (coca)";
        weight=1;
        price_buy=324;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class cocaine
    {
        name="Feuille de coca";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\coca.paa";
        class remove {};
    };
    class cocainep
    {
        name="Cocaïne pure";
        weight=1;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\cocaine.paa";
        class food
        {
            sound="snif";
        };
        class remove {};
    };
    class cocainepc
    {
        name="Cocaïne coupée";
        weight=1;
        illegal=1;
        lockShop=1;
        image="Alysia_Client\Textures\Items_virtual\cocaine_coupe.paa";
        class market
        {
            max=5327;
            min=465;
        };
        class food
        {
            sound="snif";
        };
        class remove {};
    };

    class heroin_seed
    {
        name="Graine (pavot)";
        weight=1;
        price_buy=410;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class heroin
    {
        name="Fleur de pavot";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\pavot.paa";
        class remove {};
    };
    class heroinp
    {
        name="Heroïne pure";
        weight=2;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\heroine.paa";
        class remove {};
    };
    class heroinps
    {
        name="Seringue d'héroïne pure";
        weight=1;
        illegal=1;
        lockShop=1;
        image="Alysia_Client\Textures\Items_virtual\seringue_heroine.paa";
        class market
        {
            max=5902;
            min=596;
        };
        class remove {};
        class food
        {
            sound="heroin";
        };
    };

    class meth_seed
    {
        name="Graine (Ephedra)";
        weight=1;
        price_buy=660;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class meth
    {
        name="Feuille d'ephedra";
        weight=4;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\ephedra.paa";
        class remove {};
    };
    class methp
    {
        name="Cristal de Méthamphétamine";
        weight=1;
        illegal=1;
        lockShop=1;
        image="Alysia_Client\Textures\Items_virtual\methamphetamine.paa";
        class market
        {
            max=13650;
            min=4095;
        };
        class food
        {
            sound="eat_biscuit";
        };
        class remove {};
    };

    class cannabis_seed
    {
        name="Graine (cannabis)";
        weight=1;
        price_buy=141;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class cannabis
    {
        name="Plant de cannabis";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\canabis.paa";
        class remove {};
    };
    class marijuana
    {
        name="Marijuana";
        weight=1;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\marijuana.paa";
        lockShop=1;
        class market
        {
            max=940;
            min=251;
        };
        class food
        {
            sound="briquet";
        };
        class remove {};
    };
    class mushroom_seed
    {
        name="Spore (champignon)";
        weight=1;
        price_buy=141;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\master_seed.paa";
        class remove {};
    };
    class mushroom
    {
        name="Pied de Champignon hallucinogène";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\mushroom.paa";
        class food
        {
            sound="eat_biscuit";
        };
        class remove {};
    };
    class bocal
    {
        name="Bocal";
        weight=2;
        price_buy=352;
        image="Alysia_Client\Textures\Items_virtual\bocal_mushroom.paa";
        class remove {};
    };

    class mushroom_dry
    {
        name="Champignon hallucinogène séché";
        weight=1;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\mushroom_dry.paa";
        class remove {};
    };
    class mushroom_bocal
    {
        name="Bocal de champignon séché";
        weight=3;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\bocal_mushroom.paa";
        lockShop=1;
        class market
        {
            max=2770;
            min=500;
        };
        class remove {};
    };

     class crabe
    {
        name="Crabe";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\crabe.paa";
        class market
        {
            max=225;
            min=78;
        };
        class food
        {
            hunger=20;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class crevette
    {
        name="Crevette";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\crevette.paa";
        class market
        {
            max=319;
            min=89;
        };
        class food
        {
            hunger=20;
            sound="eat_biscuit";
        };
        class remove {};
    };
    class star
    {
        name="Etoile de mer";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\star.paa";
        class market
        {
            max=450;
            min=132;
        };
        class remove {};
    };
    class oursin
    {
        name="Oursin";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\oursin.paa";
        class market
        {
            max=798;
            min=201;
        };
        class food
        {
            hunger=20;
            sound="eat_biscuit";
        };
        class remove {};
    };

    class alcool_test
    {
        name="Alcootest";
        price_buy=15;
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\alcool_test.paa";
        class remove {};
    };

    class destroy_archeo
    {
        name="Kit (Archélogie)";
        weight=6;
        price_buy = 30000;
        image="Alysia_Client\Textures\Items_virtual\boite1.paa";
        class remove {};
    };
    class destroy_stand: destroy_archeo
    {
        name="Kit (Infrastructure)";
        image="Alysia_Client\Textures\Items_virtual\boite3.paa";
        class remove {};
    };
    class destroy_field: destroy_archeo
    {
        name="Kit (Champs)";
        image="Alysia_Client\Textures\Items_virtual\boite4.paa";
        class remove {};
    };
    class destroy_labo: destroy_archeo
    {
        name="Kit (Laboratoire)";
        image="Alysia_Client\Textures\Items_virtual\boite2.paa";
        class remove {};
    };

    class lab_marijuana
    {
        name="Laboratoire de marijuana";
        price_buy=68000;
        weight=40;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\drogue.paa";
       // buy_license_CIV="rebelle_1";
        class use
        {
            action="['lab_marijuana'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_mushroom
    {
        name="Laboratoire de champignon";
        price_buy=158000;
        weight=40;
        illegal=1;
        image="Alysia_Client\Textures\Items_virtual\drogue.paa";
       // buy_license_CIV="rebelle_1";
        class use
        {
            action="['lab_mushroom'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_meth: lab_marijuana
    {
        name="Laboratoire de methamphetamine";
        price_buy=209500;
        image="Alysia_Client\Textures\Items_virtual\drogue.paa";
        class use
        {
            action="['lab_meth'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_cocaine: lab_marijuana
    {
        name="Laboratoire de cocaïne";
        price_buy=165000;
        image="Alysia_Client\Textures\Items_virtual\drogue.paa";
        class use
        {
            action="['lab_cocaine'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_heroin: lab_marijuana
    {
        name="Laboratoire d'héroïne";
        price_buy=194000;
        image="Alysia_Client\Textures\Items_virtual\drogue.paa";
        class use
        {
            action="['lab_heroin'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };
    class lab_cigare: lab_marijuana
    {
        name="Usine à cigares";
        price_buy=98750;
        image="Alysia_Client\Textures\Items_virtual\lab_cigare.paa";
        class use
        {
            action="['lab_cigare'] spawn AlysiaClient_fnc_labo_deploy;";
        };
        class remove {};
    };

    class horn_east
    {
        name="Sirène 1 (ANT)";
        weight=5;
        price_buy=1000;
        image="Alysia_Client\Textures\Items_virtual\sirene.paa";
        class remove {};
    };
    class horn_guer: horn_east
    {
        name="Sirène (SAMU)";
        class remove {};
    };
    class horn_west: horn_east
    {
        name="Sirène (GDM)";
        class remove {};
    };

    class perqui
    {
        name="Mandat de perquisition";
        weight=1;
        price_buy=5000;
        buy_license_CIV="chef_securite";
        image="Alysia_Client\Textures\Items_virtual\perqui_north.paa";
        class remove {};
    };

    class raisin_black_seed
    {
        name="Graine (raisin noir)";
        weight=1;
        price_buy=90;
        image="Alysia_Client\Textures\Items_virtual\Master_seed.paa";
        buy_license_CIV="company_farming";
        class remove {};
    };
    class raisin_red
    {
        name="Grappe de raisin noir";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\raisin_black.paa";
        class remove {};
        class food
        {
            hunger=5;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class wine_red
    {
        name="Bouteille de vin rouge";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\wine_red.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=30;
            sound="drink_wine";
            alcool=0.13;
        };
    };
    class red_grape_juice
    {
        name="Jus de raisin rouge";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\red_grape_juice.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=25;
            sound="drink_water";
        };
    };
    class assembling_wine_red
    {
        name="Assemblage du vin rouge";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\assembling.paa";
        class remove {};
    };
    class raisin_white_seed
    {
        name="Graine (raisin blanc)";
        weight=1;
        price_buy=90;
        image="Alysia_Client\Textures\Items_virtual\Master_seed.paa";
        buy_license_CIV="company_farming";
        class remove {};
    };
    class raisin_white
    {
        name="Grappe de raisin blanc";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\raisin_white.paa";
        class remove {};
        class food
        {
            hunger=5;
            thirst=0;
            sound="eat_biscuit";
        };
    };
    class wine_white
    {
        name="Bouteille de vin blanc";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\wine_white.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=30;
            sound="drink_wine";
            alcool=0.12;
        };
    };
    class white_grape_juice
    {
        name="Jus de raisin blanc";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\white_grape_juice.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=25;
            sound="drink_water";
        };
    };
    class assembling_wine_white
    {
        name="Assemblage du vin blanc";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\assembling.paa";
        class remove {};
    };
    class champagne
    {
        name="Bouteille de champagne";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\champagne.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=35;
            sound="drink_wine";
            alcool=0.1;
        };
    };
    class assembling_champagne
    {
        name="Assemblage du Champagne";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\assembling.paa";
        class remove {};
    };
    class wine_pinked
    {
        name="Bouteille de vin rosé";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\wine_pinked.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=30;
            sound="drink_wine";
            alcool=0.12;
        };
    };
    class pinked_grape_juice
    {
        name="Jus de raisin rosé";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\red_grape_juice.paa";
        class remove {};
        class food
        {
            hunger=0;
            thirst=25;
            sound="drink_water";
        };
    };
    class assembling_wine_pinked
    {
        name="Assemblage du vin rosé";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\assembling.paa";
        class remove {};
    };

    class sea_food
    {
        name="Plateau de fruit de mer";
        weight=10;
        image="";
        class food
        {
            hunger=60;
            thirst=30;
            sound="eat_biscuit";
        };
        class remove {};
    };



    class military_magazinep
    {
        name="Chargeur militaire vide";
        weight=1;
        image="Alysia_Client\Textures\Items_virtual\chargeur.paa";
        class remove {};
    };
    class bulletp
    {
        name="Balle";
        weight=0;
        image="Alysia_Client\Textures\Items_virtual\balle.paa";
        class remove {};
    };
    class military_bulletp
    {
        name="Balle Millitaire";
        weight=0;
        image="Alysia_Client\Textures\Items_virtual\balle.paa";
        class remove {};
    };
    class chevrotinep
    {
        name="Chevrotine";
        weight=0;
        image="Alysia_Client\Textures\Items_virtual\chevrotine.paa";
        class remove {};
    };
};
