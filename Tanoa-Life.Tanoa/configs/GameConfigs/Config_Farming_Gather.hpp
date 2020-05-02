class ALYSIA_FARMING_OBJECT
{
	class CargoNet_01_barrels_F
	{
		receive[]={{"oilu",2,1}};
		sound="oil";
		Actions = "CargoNet_01_barrels_F";
	};
};

class ALYSIA_FARMING_GATHER
{
	// sounds=oil / mining / shovel / gather1 / gather2

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
///////////////Ressources minières///////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

	//Bois//
	class wood_field
	{
		receive[]={{"wood",2,1}};
		extra[]={};
		tool="Skyline_Hache_01";
		sound="axe";
		area=40;
		Actions = "wood_field";
	};
	class raisin_field
	{
		receive[]={{"raisin",2,1}};
		extra[]={};
		sound="gather1";
		area=30;
		Actions = "raisin_field";
	};

	//Petrole//
	class oil_mine
	{
		receive[]={{"oilu",2,1}};
		extra[]={};
		sound="oil";
		area=40;
		Actions = "petrol_field";
	};
	//Charbon//
	class charbon_mine
	{
		receive[]={{"charcoal",2,1}};
		extra[]={{"anarkhium",2}};
		tool="Skyline_Pioche_01";
		sound="mining";
		area=15;
		Actions = "charbon_mine";
	};
	//Plomb//
	class plomb_mine
	{
		receive[]={{"plomb",2,1}};
		extra[]={{"anarkhium",2}};
		tool="Skyline_Pioche_01";
		sound="mining";
		area=40;
		Actions = "plomb_mine";
	};
	//Alu//
	class aluminium_mine
	{
		receive[]={{"aluminium",2,1}};
		extra[]={{"anarkhium",2}};
		tool="Skyline_Pioche_01";
		sound="mining";
		area=40;
		Actions = "aluminium_mine";
	};
	//granulat//
	class granulat_mine
	{
		receive[]={{"granulat",2,1}};
		extra[]={{"anarkhium",2}};
		tool="Skyline_Pelle_01";
		sound="mining";
		area=40;
		Actions = "granulat_mine";
	};
	//Sable//
	class sand_mine
	{
		receive[]={{"sand",2,1}};
		extra[]={};
		tool="Skyline_Pelle_01";
		sound="mining";
		area=15;
		Actions = "sand_mine";
	};
	//Fer//
	class iron_mine
	{
		receive[]={{"iron",2,1}};
		extra[]={{"anarkhium",2}};
		tool="Skyline_Pioche_01";
		sound="mining";
		area=15;
		Actions = "iron_mine";
	};
	//Decharge//
	class detritus_mine
	{
		receive[]={{"detritus",1,1}};
		extra[]={{"anarkhium",2},{"plastique",5},{"bouteillevide",5},{"seringue",5},{"conserve",5},{"circuitimprime",5},{"serrureabime",5}};
		sound="gather1";
		area=15;
		Actions = "detritus_mine";
	};

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
///////////////Ressources Agricole///////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

	//Aubépine//
	/*class aubepine_field
	{
		receive[]={{"aubepine",2,1}};
		extra[]={{"anarkhium",1}};
		sound="gather1";
		area=50;
	};
	//valeriane//
	class valeriane_field
	{
		receive[]={{"valériane",2,1}};
		extra[]={{"anarkhium",1}};
		sound="gather1";
		area=40;
	};
	//ortie//
	/*class ortie_field
	{
		receive[]={{"ortie",2,1}};
		extra[]={{"anarkhium",1}};
		sound="gather1";
		area=40;
	};
	//reinedespres//
	class reinedespres_field
	{
		receive[]={{"reinedespres",2,1}};
		extra[]={{"anarkhium",1}};
		sound="gather1";
		area=30;
	};

	/*class shell_field_marker_1
	{
		receive[]={};
		extra[]={{"crevette",20},{"star",15},{"oursin",5},{"crabe",30}};
		extra_all=1;
		water=1;
		water_depth=2.5;
		area=40;
	};*/
};
