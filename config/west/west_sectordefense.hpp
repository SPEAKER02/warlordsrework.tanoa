class SectorDefense {
	class Land_HBarrier_01_tower_green_F {
		cost = 350;
		demolishable = 1;
		killReward = 450;
		offset[] = {0, 5, 0};
		requirements[] = {};
	}; // Fast Travel build
	class Land_Razorwire_F {
        cost = 50;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 5, 0};
        requirements[] = {};
    }; // "Razor Wire Fence"

    class Land_BagFence_Round_F {
        cost = 50;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 2, 0};
        requirements[] = {};
    }; // "Semi Circle Sand bags"

    class Land_DragonsTeeth_01_4x2_new_F {
        cost = 50;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 5, 0};
        requirements[] = {};
    }; // "Tank barrier"

    class Land_HBarrier_5_F {
        cost = 50;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 3, 0};
        requirements[] = {};
    }; // "H-barrier"

    class Land_HBarrierWall6_F {
        cost = 60;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 3, 0};
        requirements[] = {};
    }; // "H-barrier wall"

    class Land_HBarrierTower_F {
        cost = 70;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 7, 0};
        requirements[] = {};
    }; // "Guard Tower (H-barrier)"

    class CamoNet_BLUFOR_big_F {
        cost = 100;
        demolishable = 1;
        garbageCollect = 1;
        killReward = 30;
        offset[] = {0, 6, 0};
        requirements[] = {};
    }; // "Camouflage Vehicle Cover (Green)"

    class B_HMG_01_F {
        cost = 150;
        demolishable = 1;
        killReward = 100;
        loadable[] = {0, -2.5, 0.4};
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red"
            };
            addWeapons[] = {
                "HMG_static"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "HMG_static"
            };
            turret[] = { 0 };
        };
    }; // "Mk30 HMG .50"

    class Land_IRMaskingCover_01_F {
        cost = 200;
        demolishable = 1;
        garbageCollect = 1;
        killReward = 30;
        offset[] = {0, 8, 0};
        requirements[] = {};
    }; // "IR Masking Tent (Large)"

    class B_HMG_01_high_F {
        cost = 200;
        demolishable = 1;
        killReward = 100;
        loadable[] = {0, -2.5, 0.8};
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red"
            };
            addWeapons[] = {
                "HMG_static"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "HMG_static"
            };
            turret[] = { 0 };
        };
    }; // "Mk30 HMG .50 (Raised)"

    class B_GMG_01_F {
        cost = 200;
        demolishable = 1;
        killReward = 100;
        loadable[] = {0, -2.5, 0.4};
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};
    }; // "Mk32 GMG 20mm"

    class B_GMG_01_high_F {
        cost = 250;
        demolishable = 1;
        killReward = 100;
        loadable[] = {0, -2.5, 0.8};
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};
    }; // "Mk32 GMG 20mm (Raised)"

    // class B_Minigun_01_high_F {
    //     name = "Mk30X Minigun (Raised)";
    //     cost = 250;
    //     spawn = "B_G_HMG_02_high_F";
    //     variant = 1;
    //     requirements[] = {};
    //     rearm = 300;
    //     killReward = 100;
    //     loadable[] = {0, -2.5, 0};
    //
    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "2000Rnd_65x39_Belt_Tracer_Yellow",
    //             "2000Rnd_65x39_Belt_Tracer_Yellow",
    //             "2000Rnd_65x39_Belt_Tracer_Yellow",
    //             "2000Rnd_65x39_Belt_Tracer_Yellow"
    //         };
    //         addWeapons[] = {
    //             "LMG_Minigun_Transport"
    //         };
    //         removeMagazines[] = {
    //             "100Rnd_127x99_mag_Tracer_Yellow",
    //         };
    //         removeWeapons[] = {
    //             "HMG_M2_Mounted"
    //         };
    //         turret[] = { 0 };
    //     };
    // };

    class B_static_AT_F {
        cost = 300;
        demolishable = 1;
        killReward = 100;
        loadable[] = {0, -2.5, 0.2};
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "1Rnd_GAT_missiles",
                "1Rnd_GAT_missiles",
                "1Rnd_GAT_missiles",
                "1Rnd_GAT_missiles",
                "1Rnd_GAT_missiles",
                "1Rnd_GAT_missiles"
            };
            addWeapons[] = {
                "missiles_titan_static"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "missiles_titan_static"
            };
            turret[] = { 0 };
        };
    }; // "Static Titan Launcher (AT) [NATO]"

    class Land_Cargo_Tower_V4_F {
        cost = 450;
        demolishable = 1;
        killReward = 30;
        offset[] = {0, 8, 0};
        requirements[] = {};
    };  // "Cargo Tower"

    class B_HMG_01_A_F {
        cost = 500;
        demolishable = 1;
        killReward = 150;
        loadable[] = {0, -2.5, 0.4};
        name = "Mk30 HMG Auto Turret";
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red"
            };
            addWeapons[] = {
                "HMG_static"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "HMG_static"
            };
            turret[] = { 0 };
        };
    };

    class B_GMG_01_A_F {
        cost = 650;
        demolishable = 1;
        killReward = 150;
        loadable[] = {0, -2.5, 0.4};
        name = "Mk32 GMG Auto Turret";
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};
    };

    class B_static_AT_UP_F {
        cost = 1400;
        demolishable = 1;
        description = "Static AT Launcher (UP) is an upgraded variant of the Static AT launcher.";
        disallowMagazines[] = {
            "4Rnd_GAA_missiles",
            "5Rnd_GAT_missiles",
            "4Rnd_Titan_long_missiles",
            "4Rnd_Titan_long_missiles_O"
        };
        killReward = 200;
        loadable[] = {0, -2.5, 0.2};
        name = "Static AT Launcher (UP)";
        offset[] = {0, 3, 0};
        rearm = 300;
        requirements[] = {};
        spawn = "B_static_AT_F";
        variant = 1;

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "2Rnd_GAT_missiles",
                "2Rnd_GAT_missiles",
                "2Rnd_GAT_missiles",
                "2Rnd_GAT_missiles",
                "2Rnd_GAT_missiles",
                "2Rnd_GAT_missiles",
                "2Rnd_GAT_missiles",
                "2Rnd_GAT_missiles",
                "2Rnd_GAT_missiles",
                "2Rnd_GAT_missiles"
            };
            addWeapons[] = {
                "missiles_titan"
            };
            reloadOverride = 6;
            removeMagazines[] = {
                "1Rnd_GAT_missiles"
            };
            removeWeapons[] = {
                "missiles_titan_static"
            };
            turret[] = { 0 };
        };
    };

    // class Land_MobileRadar_01_radar_F {
    //     cost = 2500;
    //     demolishable = 1;
    //     description = "EW Tower can be used to jam enemy autonomous assets and provide EW support to your team. Its position is revealed to the enemy when it is active.";
    //     garbageCollect = 1;
    //     killReward = 400;
    //     name = "EW Tower";
    //     offset[] = {0, 6, 0};
    //     requirements[] = {};
        // This is not loadable. It will break initialization code to load this.
    // };

    // class B_AAA_System_01_F {
    //     cost = 3500;
    //     description = "Short range anti-mortar defense, capable of automatically engaging incoming ballistic shells. Effective range: 3km.";
    //     killReward = 400;
    //     loadable[] = {0, -1, 1.7};
    //     offset[] = {0, 5.3, 0};
    //     rearm = 180;
    //     requirements[] = {};
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "5000Rnd_762x51_Yellow_Belt"
    //         };
    //         addWeapons[] = {
    //             "M134_minigun"
    //         };
    //         removeMagazines[] = {
    //             "magazine_Cannon_Phalanx_x1550"
    //         };
    //         removeWeapons[] = {
    //             "weapon_Cannon_Phalanx"
    //         };
    //         turret[] = { 0 };
    //     };
    // }; // "Praetorian 1C"

    class B_Mortar_01_F {
        cost = 5000;
        demolishable = 1;
        killReward = 125;
        loadable[] = {0, -2.5, 0};
        offset[] = {0, 3, 0};
        rearm = 900;
        requirements[] = {};
    }; // "Mortar"

    // class B_Mortar_01_TV_F {
    //     ammoOverrides[] = {
    //         {"M_127mm_Firefist_AT", {"M_Switchblade", "Switchblade (Loitering Munition)"}}
    //     };
    //     cost = 50001;
    //     demolishable = 1;
    //     description = "iDi nahuy";
    //     killReward = 125;
    //     loadable[] = {0, -2.5, 0};
    //     name = "Switchblade Launcher";
    //     offset[] = {0, 3, 0};
    //     rearm = 900;
    //     requirements[] = {};
    //     spawn = "B_Mortar_01_F";
    //     variant = 1;
    //
    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles"
    //         };
    //         addWeapons[] = {
    //             "missiles_Firefist"
    //         };
    //         removeMagazines[] = {
    //             "8Rnd_82mm_Mo_shells",
    //             "8Rnd_82mm_Mo_Flare_white",
    //             "8Rnd_82mm_Mo_Smoke_white",
    //             "8Rnd_82mm_Mo_guided",
    //             "8Rnd_82mm_Mo_LG"
    //         };
    //         removeWeapons[] = {
    //             "mortar_82mm"
    //         };
    //         turret[] = { 0 };
    //     };
    // };
    //
    // class B_Ship_Gun_01_F {
    //     cost = 10000;
    //     demolishable = 1;
    //     disallowMagazines[] = {
    //         "magazine_ShipCannon_120mm_HE_cluster_shells_x2",
    //         "magazine_ShipCannon_120mm_mine_shells_x6",
    //         "magazine_ShipCannon_120mm_AT_mine_shells_x6"
    //     };
    //     killReward = 600;
    //     offset[] = {0, 9, 0};
    //     requirements[] = {};
    //     rearm = 2700;
    // }; // "MK45 Hammer"

    // class B_Ship_MRLS_01_F {
    //     cost = 30000;
    //     requirements[] = {};
    //     offset[] = {0, 7, 0};
    //     rearm = 2700;
    //     killReward = 700;
    // }; // "Mk41 VLS"
};
