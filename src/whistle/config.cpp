class CfgPatches {
	class Whistle {
        name = "sellect's Whistle";
		author = "sellect";
        version = "0.0.5";
		requiredAddons[] = {"ace_interact_menu"};
        units[] = {};
        weapons[] = {};
	};
};

class CfgSounds {
    sounds[] = {};
    class WhistleShort {
        name = "";
        sound[] = {"\whistle\sounds\short.ogg", 7, 1, 300};
        titles[] = {};
    };
    class WhistleLong {
        name = "";
        sound[] = {"\whistle\sounds\long.ogg", 7, 1, 300};
        titles[] = {};
    };
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class Whistle {
                    displayName = "Whistle";
                    icon = "\whistle\images\icon.paa";
                    class Short {
                        displayName = "Short";
                        statement = "terminate whistle_script; whistle_script = ['WhistleShort'] execVM '\whistle\scripts\whistle.sqf'";
                    }
                    class Long {
                        displayName = "Long";
                        statement = "terminate whistle_script; whistle_script = ['WhistleLong'] execVM '\whistle\scripts\whistle.sqf'";
                    }
                };
            };
        };
    };
};