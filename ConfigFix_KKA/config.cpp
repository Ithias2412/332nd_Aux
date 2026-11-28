class CfgPatches {
    class aux332_configfix_kka {
        name = "332nd Config Fix (ACE Extension Animations)";
        author = "Frankenburg";
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.14;
        requiredAddons[] = {"KKA3_ACE_Extension_Anim_dire"};
        skipWhenMissingDependencies = 1;
    };
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class CutSceneAnimationBase;
        class relax_44: CutSceneAnimationBase { actions = "NoActions"; };
        class relax_45: CutSceneAnimationBase { actions = "NoActions"; };
        class attention1: CutSceneAnimationBase { actions = "NoActions"; };
        class attention2: CutSceneAnimationBase { actions = "NoActions"; };
        class attention3: CutSceneAnimationBase { actions = "NoActions"; };
        class relax_tes: CutSceneAnimationBase { actions = "NoActions"; };
        class relax_21: CutSceneAnimationBase { actions = "NoActions"; };
        class relax_24: CutSceneAnimationBase { actions = "NoActions"; };
        class relax_3: CutSceneAnimationBase { actions = "NoActions"; };
        class relax_32: CutSceneAnimationBase { actions = "NoActions"; };
        class relax_8: CutSceneAnimationBase { actions = "NoActions"; };
        class relax_7: CutSceneAnimationBase { actions = "NoActions"; };
        class rattention2: CutSceneAnimationBase { actions = "NoActions"; };
    };
};
