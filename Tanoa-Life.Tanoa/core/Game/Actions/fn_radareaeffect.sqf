// sc0t//

    if (g_blood < 2001) then {
    g_deseases=["toux"];['Vous vous sentez malade, sûrement dû aux radiations...Sortez vite !'] call AlysiaClient_fnc_info;
	};

	if (g_blood < 100) then {
   	[] spawn AlysiaClient_fnc_handleComa;
	};
