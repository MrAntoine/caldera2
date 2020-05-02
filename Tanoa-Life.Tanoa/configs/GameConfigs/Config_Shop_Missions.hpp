class ALYSIA_MISSIONS
{


	///////////EXEMPLE////////////

	/////////////////// CLASS A AJOUTER DANS LE CONFIG SERVER DU LIFE SERVER/////////////////////////////

	/*class reb_1
	{
		name="Convoi médical";
		sides[]={"CIV"};
		condition="(true)";
		price=0;
		vehicle="C_IDAP_Truck_02_F";
		count_per_reboot=4;
		max_delivery_time=30;
		min_delivery_time=10;
		loop_count_random=-1;
		loop_count_min=32;
		class stock
		{
			weapons[]=
			{
				"arifle_ARX_blk_F",
				"Alysia_MG42"
			};
			magazines[]=
			{
				"30Rnd_65x39_caseless_green_mag_Tracer",
				"Alysia_MG42_magazine"
			};
			items[]=
			{
				"bipod_01_F_blk",
				"DemoCharge_Remote_Mag",
				"SmokeShellWhite",
				"Rangefinder",
				"O_NVGoggles_urb_F",
				"O_NVGoggles_ghex_F",
				"O_NVGoggles_hex_F",
				"optic_DMS",
				"optic_ACO_grn_smg",
				"optic_Hamr",
				"optic_MRCO",
				"Mask_M40",
				"NVGoggles"
			};
		};
		class prevent
		{
			needed_markers[]={"blackMarket_marker_2"};
		};
	};*/

	///////////EXEMPLE////////////


	class alimentaire_1
    {
		name="Convoi alimentaire (viande)";
		sides[]={"CIV"};
		condition="(true)";
		price=5000;
		vehicle="d3s_savana_VAN";
		count_per_reboot=4;
		max_delivery_time=30;
		min_delivery_time=10;
		loop_count_random=-1;
		loop_count_min=32;
		class stock
		{
			virtuals[]=
            {
                "pork",
                "Beef",
                "egg"
            };
		};
		class prevent
		{
			needed_markers[]={"blackMarket_marker_2"};
		};
	};
	class alimentaire_2
    {
		name="Convoi alimentaire (condiments)";
		sides[]={"CIV"};
		condition="(true)";
		price=5000;
		vehicle="d3s_savana_VAN";
		count_per_reboot=4;
		max_delivery_time=30;
		min_delivery_time=10;
		loop_count_random=-1;
		loop_count_min=32;
		class stock
		{
			virtuals[]=
            {
                "butter",
                "sugar",
                "salt"
            };
		};
		class prevent
		{
			needed_markers[]={"blackMarket_marker_2"};
		};
	};
	class alimentaire_3
    {
		name="Convoi alimentaire (fruits)";
		sides[]={"CIV"};
		condition="(true)";
		price=5000;
		vehicle="d3s_savana_VAN";
		count_per_reboot=4;
		max_delivery_time=30;
		min_delivery_time=10;
		loop_count_random=-1;
		loop_count_min=32;
		class stock
		{
			virtuals[]=
            {
                "red_grape_juicep"
            };
		};
		class prevent
		{
			needed_markers[]={"blackMarket_marker_2"};
		};
	};
};
