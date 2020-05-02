scriptName "fn_initGUI";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "fn_initGUI.sqf"

if (isServer && !hasInterface) exitWith {};

0 spawn compileFinal preprocessFileLineNumbers "maverick\talent-tree-modular\gui\_init.sqf";