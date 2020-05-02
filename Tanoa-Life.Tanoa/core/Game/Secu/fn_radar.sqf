

if (!(['agent_securite','chef_securite','stagiaire_securite'] call AlysiaClient_fnc_hasLicense)) exitWith {};


private ["_speed","_vehicle"];
_vehicle = cursorObject;
_speed = round speed _vehicle;

if ((_vehicle isKindOf "Car") && (currentWeapon player) isEqualTo "Rangefinder") then {
    switch (true) do {
        case (_speed > 33 && _speed <= 90): {
            hint parseText format ["<t color='#ffffff'><t size='2'><t align='center'>Radar: <br/><t color='#33CC33'><t align='center'><t size='1'> Vitesse du véhicule %1 km/h" ,round  _speed];
        };

        case (_speed > 90): {
            hint parseText format ["<t color='#ffffff'><t size='2'><t align='center'>Radar: <br/><t color='#FF0000'><t align='center'><t size='1'> Vitesse du véhicule %1 km/h",round  _speed];
        };
    };
};