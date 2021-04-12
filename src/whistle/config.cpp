class CfgPatches {
	class whistle {
        name = "sellect's Whistle";
		author = "sellect";
        version = "0.0.1";
		requiredAddons[] = {"ace_interact_menu"};
        units[] = {};
        weapons[] = {};
	};
};

class CfgSounds {
    sounds[] = {};
    class whistle1 {
        name = "";
        sound[] = {"\whistle\sounds\whistle.ogg", 10, 1, 300};
        titles[] = {};
    };
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class whistle {
                    displayName = "Whistle";
                    statement = "terminate whistle_script; whistle_script = [] execVM '\whistle\scripts\whistle.sqf'";
                    icon = "\whistle\images\icon.paa";
                };
            };
        };
    };
};