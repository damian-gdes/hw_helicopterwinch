class CfgVehicles {
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription;
	};
	
	class HW_HelicopterWinch: Module_F
	{
		scope = 2;
		displayName = $STR_HW_AddonName;
		icon = "\hw_helicopterwinch\data\winch.paa";
		category = "HW_HelicopterWinch";
		function = "HW_fnc_helicopterWinch";
		functionPriority = 1;
		isGlobal = 1;
		isPersistent = 1;
		isTriggerActivated = 1;
		isDisposable = 0;

		class Arguments : ArgumentsBaseUnits {
			class Units : Units {};
			
			
			/*
			class winchPointType {
                displayName = $STR_HW_SetTypeTitle;
                description = $STR_HW_SetTypeDesc;
                typeName = "STRING";
                class values {
                    class winchTypeArray {
                        name = $STR_HW_TypeArray;
                        value = "TypeXYZ";
                        default = 1;
                    };
                    class winchTypeMempoint {
                        name = $STR_HW_TypeMempoint;
                        value = "TypeMempoint";
                    };
                };
            };
			*/
			
			
            class offsetX {
                displayName = $STR_HW_OffsetXtitle;
                description = $STR_HW_OffsetXdesc;
                typeName = "NUMBER";
            };
			
            class offsetY {
                displayName = $STR_HW_OffsetYtitle;
                description = $STR_HW_OffsetYdesc;
                typeName = "NUMBER";
            };
			
            class offsetZ {
                displayName = $STR_HW_OffsetZtitle;
                description = $STR_HW_OffsetZdesc;
                typeName = "NUMBER";
            };
            
			
			/*
			class memoryPoint {
                displayName = $STR_HW_MemoryPointTitle;
                description = $STR_HW_MemoryPointDesc;
                typeName = "STRING";
            };
			
			*/

        };
		
		class ModuleDescription: ModuleDescription {
            sync[] = {"LocationArea_F"};

            class LocationArea_F {
                position = 0;
                optional = 0;
                duplicate = 1;
				description[] = { // Multi-line descriptions are supported
					"First line",
					"Second line"
				};
                synced[] = {"Anything"};
            };
        };
	};
}