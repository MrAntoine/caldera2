

giveTicketVente = {
    disableSerialization;
    private _display = findDisplay 57300;
    private _plist = _display displayCtrl 57302;
    private _vList = _display displayCtrl 57301;


    //Récupération véhicle a proxi
    if ((lbCurSel 57301) isEqualTo -1) exitWith {
        ["Vous n'avez pas sélectionné de véhicule"] call AlysiaClient_fnc_error;
    };

    _sel = lbCurSel _vList;
    _vehicle = _vList lbData _sel;
    diag_log format ["_vehicule list %1", _vehicle];
    _vehicle = g_vehicles select parseNumber(_vehicle);

    diag_log format ["_vehicule %1", _vehicle];


    //Check Unit a proxi
    if ((lbCurSel 57302) isEqualTo -1) exitWith {
        ["Vous n'avez pas sélectionné de joueur"] call AlysiaClient_fnc_error;
    };


    _sel = lbCurSel _plist;
    _unit = _plist lbData _sel;
    _unit = call compile format ["%1", _unit];
    if (isNull _unit || isNil "_unit") exitWith {};
    if (_unit == player) exitWith {};

    if (parseNumber(ctrlText 57303) < 0) exitWith {
        ["Rentrez un prix positif"] call AlysiaClient_fnc_error;
    };


    _name = name _unit;
    _dbInfo = _vehicle getVariable "info";
    _plaque = (_dbInfo select 2);

    _vehName = getText(configFile >> "ALYSIA_VEHICLES" >> (typeof _vehicle) >> "realname");

    diag_log format ["_vehName %1", _vehName];


    //Verif
    _value = parseNumber(ctrlText 57303);
    hint format ["Vous vendez votre : %1 \n A : %2 \n Pour : %3",_vehName,_name,_value];
    [player,_vehicle,_value] remoteExec ["AlysiaClient_fnc_receivedVeh",_unit];
    closeDialog 0;
};

[] spawn {
   disableSerialization;
        if (g_action_inUse) exitWith {};
        if (dialog) exitWith {};
        //if (life_is_processing) exitWith {};// faut retrouver cette var
        g_action_inUse = true;
        _vehicleList = nearestObjects [player, ["Car","air","ship"], 20];

        if (count _vehicleList < 1) exitWith {
            ["Il n'y a pas de véhicule à proximité"] call AlysiaClient_fnc_error;
            g_action_inUse = false;
        };

        if (!createDialog "taneino_venteVeh") exitWith {};
        [] spawn {waitUntil {!dialog}; g_action_inUse = false;};
        _display = findDisplay 57300;
        _plist = _display displayCtrl 57302;
        lbClear _plist;
        _near_units = [];
        {
            if (player distance _x < 20) then {_near_units pushBack _x};
        } forEach playableUnits;
        vehicleListVente = [];
        {
                    //_vehData = _x getVariable ["vehicle_info_owners",[]];
                    _vehData = _x getVariable "info";
                    if (count _vehData  > 0) then {
                        //_vehOwner = ((_vehData select 0) select 0);
                        _vehOwner = (( _vehData ) select 0);
                        if ((getPlayerUID player) == _vehOwner) exitWith {
                            vehicleListVente pushBack [_x];
                        };
                    };
        } forEach _vehicleList;

        _control = _display displayCtrl 57301;
        lbClear _control;
        {
            _className = typeOf (_x select 0);
            _vehicleInfo = [_className]call AlysiaClient_fnc_fetchVehInfo;  // ["\d3s_cars_core\data\map_car_ca.paa","Maserati Ghibli S'14","CAR",250,65,3,410,50,"Maserati Ghibli",243320,50,"CIV",1,["importateurluxe"],"Diesel",0,["d3s_ghibli_14","d3s_ghibli_14_d","d3s_ghibli_14_30","d3s_ghibli_14_s","d3s_ghibli_14_q4","d3s_ghibli_14_sq4","d3s_ghibli_esteso_14","d3s_ghibli_14_nerissimo","d3s_ghibli_14_EX"],7300,121660,97328,24332,97328,0,0]

            _control lbAdd (_vehicleInfo select 1);
            _control lbSetPicture [(lbSize _control)-1,(_vehicleInfo select 0)];
            _control lbSetData [(lbSize _control)-1,str(_x)];
            _control lbSetValue [(lbSize _control)-1,_ForEachIndex];
        } forEach vehicleListVente;

        {
            if (!isNull _x && alive _x && player distance _x < 20 && !(_x isEqualTo player)) then {
                _plist lbAdd format ["ICONNU à %1 m ", player distance _x];
                _plist lbSetData [(lbSize _plist)-1,str(_x)];
            };
        } forEach _near_units;
        _Btn_Vendre = ((findDisplay 57300) displayCtrl 57304);
        _Btn_Vendre buttonSetAction "call giveTicketVente";
        //_Btn_Vendre buttonSetAction "hint ""giveTicketVente"";";
};
