class ALYSIA_FUEL_STATION
{
	class Land_FuelStation_01_pump_malevil_F
	{
		save=1;
		max_distance_allowed=9;
		payDirect=1;
		class marker
		{
			ShapeLocal="ICON";
			TypeLocal="Maels_station_essence";
			ColorLocal="ColorGreen";
			SizeLocal[]={0.55, 0.55};
		};
		class stock
		{
			class Diesel {
				max=1000;
			};
		};
	};

	class Land_FuelStation_01_pump_F{
		save=1;
		max_distance_allowed=9;
		payDirect=1;
		class marker
		{
			ShapeLocal="ICON";
			TypeLocal="Maels_station_essence";
			ColorLocal="ColorGreen";
			SizeLocal[]={0.55, 0.55};
		};
		class stock
		{
			class Diesel {
				max=1000;
			};
		};
	};
	class Land_FuelStation_02_pump_F
	{
		save=1;
		max_distance_allowed=9;
		payDirect=1;
		class marker
		{
			ShapeLocal="ICON";
			TypeLocal="Maels_station_essence";
			ColorLocal="ColorGreen";
			SizeLocal[]={0.55, 0.55};
		};
		class stock
		{
			class Diesel {
				max=500;
			};
		};
	};

	class Land_fs_feed_F{
		save=1;
		max_distance_allowed=9;
		payDirect=1;
		class marker
		{
			ShapeLocal="ICON";
			TypeLocal="Maels_station_essence";
			ColorLocal="ColorGreen";
			SizeLocal[]={0.55, 0.55};
		};
		class stock
		{
			class Diesel {
				max=500;
			};
		};
	};
	class Land_FuelStation_Feed_F
	{
		save=1;
		max_distance_allowed=9;
		payDirect=1;
		class marker
		{
			ShapeLocal="ICON";
			TypeLocal="Maels_station_essence";
			ColorLocal="ColorGreen";
			SizeLocal[]={0.55, 0.55};
		};
		class stock
		{
			class Diesel {
				max=200;
			};
		};
	};
	class Land_FuelStation_03_pump_F{
		save=1;
		max_distance_allowed=70;
		payDirect=1;
		class marker
		{
			ShapeLocal="ICON";
			TypeLocal="Maels_station_essence";
			ColorLocal="ColorGreen";
			SizeLocal[]={0.55, 0.55};
		};
		class stock
		{
			class Fioul {
				max=500;
			};
		};
	};
};

class ALYSIA_FUEL
{
	class Diesel
	{
		name="Diesel";
		picture="Alysia_Client_Texture\Data\fuel\gazole.paa";
		conso=1.2;
		item_jerrycan="Alysia_jerrycan_diesel";
		item_refuel="gazole";
		liter_price=9;
		liter_price_multiplier=20;
	};
	class Fioul
	{
		name="Fioul";
		picture="Alysia_Client_Texture\Data\fuel\sp95.paa";
		conso=0.8;
		item_jerrycan="Alysia_jerrycan_sp95";
		item_refuel="fioul";
		liter_price=17;
		liter_price_multiplier=20;
	};
};
