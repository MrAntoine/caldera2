/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

class Maverick_TalentTreeModular {
	tag = "mav_ttm";

	class master {
		file = "maverick\talent-tree-modular";
		class initGUI { preInit = 1; };
		class init { preInit = 1; };
		class setPerks {};
		class generateBasePerks {};
		class hasPerk {};
		class addExp {};

		// -- Database related
		class tinyIntConverter {};
		class boolScalar {};
		class clientSendUpdateToServer {};
		class clientReceiveData {};
	};
};