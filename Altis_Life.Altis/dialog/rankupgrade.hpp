class Police_Rank_Upgrade {
    idd = 9000;
    name= "police_rank_upgrade";
    movingEnable = 1;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_rankUpgradeInit;";

    class controlsBackground {
    	class Background: Life_RscText
		{
			idc = -1;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.242 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class UpgradeTitle: Life_RscStructuredText
		{
			idc = -1;
			text = "Police Upgrade System"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
    };

    class controls {
    	class pList: Life_RscListBox
		{
			idc = 9001;
			sizeEx = 0.030;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.198 * safezoneH;
		};
		class rankOne: Life_RscButtonMenu
		{
			idc = -1;
			text = "Rank 1"; //--- ToDo: Localize;
			onButtonClick = "[1] spawn life_fnc_rankUpgradeConfirm;";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class rankTwo: Life_RscButtonMenu
		{
			idc = -1;
			text = "Rank 2"; //--- ToDo: Localize;
			onButtonClick = "[2] spawn life_fnc_rankUpgradeConfirm;";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class rankThree: Life_RscButtonMenu
		{
			idc = -1;
			text = "Rank 3"; //--- ToDo: Localize;
			onButtonClick = "[3] spawn life_fnc_rankUpgradeConfirm;";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class rankFour: Life_RscButtonMenu
		{
			idc = -1;
			text = "Rank 4"; //--- ToDo: Localize;
			onButtonClick = "[4] spawn life_fnc_rankUpgradeConfirm;";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class rankFive: Life_RscButtonMenu
		{
			idc = -1;
			text = "Rank 5"; //--- ToDo: Localize;
			onButtonClick = "[5] spawn life_fnc_rankUpgradeConfirm;";
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class rankSix: Life_RscButtonMenu
		{
			idc = -1;
			text = "Rank 6"; //--- ToDo: Localize;
			onButtonClick = "[6] spawn life_fnc_rankUpgradeConfirm;";
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class rankSeven: Life_RscButtonMenu
		{
			idc = -1;
			text = "Rank 7"; //--- ToDo: Localize;
			onButtonClick = "[7] spawn life_fnc_rankUpgradeConfirm;";
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class closeDialog: Life_RscButtonMenu
		{
			idc = -1;
			onButtonClick = "closeDialog 0;";
			text = "Exit"; //--- ToDo: Localize;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
    };
};
