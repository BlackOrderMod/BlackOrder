class CfgSettings {
    class CBA {
        class Versioning {
            class BlackOrder {
                class dependencies {
                    //ACE will hard exit if this is missing
                    CBA[] = {"cba_main", REQUIRED_CBA_VERSION, "(true)"};

                    //Warnings for missing ACE compat pbos
                    BlackOrder_ace_compat[] = {"BlackOrder_ace_compat", {VERSION_AR}, "isClass (configFile >> 'CfgPatches' >> 'ace_main')"};
                };
            };
        };
    };
};
