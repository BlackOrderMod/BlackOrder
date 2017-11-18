
class CfgVehicles {
    class FlagCarrier;
    class FlagChecked_F;
    class Banner_01_base_F;
    
    class blackorder_flag_F : FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(flag_Display);
        author = ECSTRING(common,BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QPATHTOF(data\flag_blackorder_co.paa));
        };
    };
    class blackorder_flagsmall_F : FlagChecked_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(flagsmall_Display);
        author = CSTRING(BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QPATHTOF(data\flag_blackordersmall_co.paa));
        };
    };
    class blackorder_banner_F : Banner_01_base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(banner_Display);
        author = CSTRING(BlackOrderTeam);
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\flag_blackorder_co.paa)
        };
    };
};