class ALYSIA_FARMING_PLANT_OBJETCS
{
	/*
	class X
	{
		seed                 : seed item className
		receive              : receive when harvest {{"item_1",amount_item_1,is_random(0:no/1:yes)}}
		Ex:
		receive[]={{"wood",5,0},{"cocainep",2,1}};
		Player will receive 5 x wood and have a chance to receive some cocainep (2 max)

		receive[]={{"wood",3,0}};
		Player will receive 3 x wood

		distance             : minimum distance between plants (in meters)
		upLevel              : number the plant will grow (in meters)
		groundLevel          : number the plant will go down on creation (in meters)
		growingTime          : time to grow (in seconds)
		extraGrow            : maximum grow extra time (random,in seconds)
	};
	*/

	//Plante de Aubepine
	class Oleander_White
	{
		seed="aubepine_seed";
		receive[]={{"aubepine",3,1}};
		distance=2;
		growingTime=120;
		groundLevel=1.5;
		upLevel=1.5;
		extraGrow=50;
	};

	//Houblon
	class Alysia_Plants_Assets_Houblon_01_F
	{
		receive[]={{"houblon",6,1}};
		seed="houblon_seed";
		distance=3;
		growingTime=120;
		groundLevel=0.9;
		upLevel=0.9;
		extraGrow=50;
	};

	//Plante de cannabis
	class Alysia_Plants_Assets_Cannabis_01_F
	{
		receive[]={{"cannabis",2,1}};
		seed="cannabis_seed";
		distance=1.5;
		growingTime=360;
		groundLevel=2.3;
		upLevel=2.3;
		extraGrow=100;
	};

	//Champignon
	class Alysia_Plants_Assets_Champignon_01_F
	{
		receive[]={{"mushroom",2,1}};
		seed="mushroom_seed";
		distance=1;
		growingTime=360;
		groundLevel=0.35;
		upLevel=0.35;
		extraGrow=100;
		disableForMill=1;
	};

	//Plante de tabac
	class Alysia_Plants_Assets_Tabac_01_F
	{
		receive[]={{"tabac",2,1}};
		seed="tabac_seed";
		distance=4;
		growingTime=180;
		groundLevel=0.5;
		upLevel=0.5;
		extraGrow=100;
	};

	class Oleander2
	{
		receive[]={{"heroin",2,1}};
		seed="heroin_seed";
		distance=3;
		growingTime=360;
		groundLevel=1.5;
		upLevel=1.5;
		extraGrow=100;
		disableForMill=1;
	};
	class Reeds
	{
		receive[]={{"meth",2,1}};
		seed="meth_seed";
		distance=3;
		growingTime=420;
		groundLevel=0;
		upLevel=0;
		extraGrow=120;
		disableForMill=1;
	};
	class Ficus_1
	{
		receive[]={{"cocaine",2,1}};
		seed="cocaine_seed";
		distance=4;
		growingTime=360;
		groundLevel=6.1;
		upLevel=2.5;
		extraGrow=100;
		disableForMill=1;
	};



	//Plante de coton
	class Alysia_Plants_Assets_Coton_01_F
	{
		receive[]={{"cotton",3,1}};
		seed="cotton_seed";
		distance=2;
		growingTime=120;
		groundLevel=0.9;
		upLevel=0.9;
		extraGrow=50;
	};

	//valériane
	class Oleander2
	{
		receive[]={{"valeriane",3,1}};
		seed="valeriane_seed";
		distance=2;
		growingTime=120;
		groundLevel=1.5;
		upLevel=1.5;
		extraGrow=50;
	};

	//Ortie
	class Plant_Green_Shrub
	{
		receive[]={{"ortie",3,1}};
		seed="ortie_seed";
		distance=2;
		growingTime=120;
		groundLevel=0.8;
		upLevel=0.8;
		extraGrow=50;
	};

	//Orge
	class Flower_Medium_White2
	{
		receive[]={{"reinedespres",3,1}};
		seed="reinedespres_seed";
		distance=2;
		growingTime=120;
		groundLevel=0.4;
		upLevel=0.4;
		extraGrow=50;
	};
};

class ALYSIA_FARMING_PLANT_MARKERS
{
	class aubepine_field
	{
		plant="Oleander_White";
		area=40;
	};
	class coton_field
	{
		plant="Alysia_Plants_Assets_Coton_01_F";
		area=40;
	};
	class valeriane_field
	{
		plant="Oleander2";
		area=40;
	};
	class ortie_field
	{
		plant="Plant_Green_Shrub";
		area=15;
	};
	class reinedespres_field
	{
		plant="Flower_Medium_White2";
		area=30;
	};

	class corn_field_marker_1
	{
		plant="Alysia_Plants_Assets_Mais_01_F";
		area=40;
	};
	class tabac_field_marker_1: corn_field_marker_1
	{
		plant="Alysia_Plants_Assets_Tabac_01_F";
	};


	class heroin_field_marker_1: corn_field_marker_1
	{
		plant="Oleander2";
	};
	class cannabis_field_marker_1: corn_field_marker_1
	{
		plant="Alysia_Plants_Assets_Cannabis_01_F";
	};
	class meth_field_marker_1: corn_field_marker_1
	{
		plant="Reeds";
	};
	class cocaine_field_marker_1: corn_field_marker_1
	{
		plant="Ficus_1";
	};
	class mushroom_field_marker_1: corn_field_marker_1
	{
		plant="Alysia_Plants_Assets_Champignon_01_F";
	};

};
