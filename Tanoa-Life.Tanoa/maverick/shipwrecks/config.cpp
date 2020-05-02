/*
    Author: Maverick Applications
    Desc: Altis Life Shipwreck
*/

//Customize your settings to fit your server setup!
class Maverick_Shipwrecks {

    //How often (in seconds) should a shipwreck spawn, if no wreck is on the map?
    ShipwreckInterval = 1800; //1800 = 30min

    //Define the possible locations for your shipwrecks.
    //getPosATL format -> Get the position via: diag_log(getPosATL player) -> replace the [] with {}
    Positions[] = {
        {7351.637,7614.516,0},
        {6846.375,10262,0},
        {10353.336,9201.18,0},
        {7567.875,12408.439,0},
        {11528.678,8402.753,0},
        {12271.287,4321.757,0},
        {5622.789,13358.865,0},
        {4145.913,10666.017,0},
        {9250.786,14204.753,0},
        {12605.818,13657.771,0},
        {14241.323,6686.698,0},
        {7993.515,5414.238,0},
        {4676.571,6062.032,0},
        {1427.061,9253.623,0}
    };

    //Define the radius, in which the wreck randomly spawns around the given center position
    Radius = 350;

    //Define the possible sets of virtual items the user can loot from the wreck.
    ShipLoot[] = {
        //{ { "itemname1", amount }, { "itemname2", amount }, { "itemname3", amount } }
        {{ "woodp", 5 }, { "goat", 2 }, { "anarkhium", 1 }},
        {{ "steelp", 5 }, { "circuitimprime", 2 }, { "anarkhium", 1 }},
        {{ "ironp", 5 }, { "sheep", 2 }, { "anarkhium", 1 }},
        {{ "glass", 5 }, { "anarkhium", 1 }} ,
        {{ "plombp", 5 }, { "circuitimprime", 2 }, { "anarkhium", 1 }},
        {{ "aubepinep", 5 }, { "anarkhium", 1 }},
        {{ "aluminiump", 5 }, { "anarkhium", 1 }},
        {{ "ortiep", 5 }, { "plastique", 2 }, { "anarkhium", 1 }}
    };



    //What shall be displayed as text to gather the items from the ship? (The text of the addAction ingame)
    ShipLootText = "Récupère la marchandise";

    //The message when the user has got all the loot successfully.
    ShipLootSuccess = "Bien joué, tu viens de récuperer le contenu du butin !";

    //The message in case something fails, or the user can not carry all the items.
    ShipLootFail = "Tu n'as pas assez de place pour le butin !";

    //Define the message, that should appear when a shipwreck spawns (broadcasted to all clients).
    //SpawnMSG = "Un navire coulé a été localisé !";

    //Define the message, that should appear when a shipwreck disappears after a user looted it (broadcasted to all clients).
    //DeleteMSG = "Le navire a été pillé avec succès et a disparu !";
};