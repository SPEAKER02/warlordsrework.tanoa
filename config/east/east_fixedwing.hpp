class FixedWing {
    class O_Plane_Civil_01_F {
        cost = 800;
        description = "Caesar BTT is a light unarmed aircraft.";
        killReward = 200;
        name = "Caesar BTT";
        requirements[] = {"A"};
        spawn = "C_Plane_Civil_01_F";
    };

    // class O_Plane_Caesar_hmggmg_01_F {
    //     cost = 1500;
    //     description = "Caesar BTT (HMG/GMG) is a variant of the Caesar BTT armed with a HMG and GMG.";
    //     killReward = 300;
    //     name = "Caesar BTT (HMG/GMG)";
    //     rearm = 300;
    //     requirements[] = {"A"};
    //     spawn = "C_Plane_Civil_01_F";
    //     variant = 1;
    //
    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "500Rnd_127x99_mag_Tracer_Yellow",
    //             "500Rnd_127x99_mag_Tracer_Yellow",
    //             "96Rnd_40mm_G_belt",
    //             "96Rnd_40mm_G_belt",
    //             "240Rnd_CMFlare_Chaff_Magazine"
    //         };
    //         addWeapons[] = {
    //             "HMG_127",
    //             "GMG_40mm",
    //             "CMFlareLauncher"
    //         };
    //         removeMagazines[] = {};
    //         removeWeapons[] = {};
    //         turret[] = { -1 };
    //     };
    // };

    // class O_Plane_Caesar_rocket_01_F {
    //     cost = 1800;
    //     description = "Caesar BTT (Rocket) is a variant of the Caesar BTT armed with rockets.";
    //     killReward = 300;
    //     name = "Caesar BTT (Rocket)";
    //     rearm = 400;
    //     requirements[] = {"A"};
    //     spawn = "C_Plane_Civil_01_F";
    //     variant = 1;

    //     class Pilot: WLTurretDefaults {
    //         addMagazines[] = {
    //             "14Rnd_80mm_rockets",
    //             "14Rnd_80mm_rockets",
    //             "240Rnd_CMFlare_Chaff_Magazine"
    //         };
    //         addWeapons[] = {
    //             "rockets_Skyfire",
    //             "CMFlareLauncher"
    //         };
    //         removeMagazines[] = {};
    //         removeWeapons[] = {};
    //         turret[] = { -1 };
    //     };
    // };

    class O_Plane_Caesar_bomb_01_F {
        ammoOverrides[] = {
            {"Bomb_03_F", {"ammo_kab250kr", "KAB-250KR (TV-Guided)"}}
        };
        cost = 2000;
        description = "Caesar BTT (Bomb) is a variant of the Caesar BTT armed with a pair of TV-guided KAB-250KR bombs, which can be linked to and controlled at ground support terminals after release. Remote bombs can be controlled at ground support terminals in Buy Menu >> Remote Control >> Ground Support Terminal.";
        hasRemoteBomb = 1;
        killReward = 300;
        name = "Caesar BTT (Bomb)";
        rearm = 400;
        requirements[] = {"A"};
        spawn = "C_Plane_Civil_01_F";
        variant = 1;

        class Pilot: WLTurretDefaults {
            addMagazines[] = {
                "2Rnd_Bomb_03_F",
                "240Rnd_CMFlare_Chaff_Magazine"
            };
            addWeapons[] = {
                "Bomb_03_Plane_CAS_02_F",
                "CMFlareLauncher"
            };
            removeMagazines[] = {};
            removeWeapons[] = {};
            turret[] = { -1 };
        };
    };

    class O_T_VTOL_02_recon_F {
        cost = 11800;
        description = "Y-32 Xi'an (AWACS) is a variant of the Y-32 Xi'an with a powerful air radar.";
        disallowMagazines[] = {
            "PylonMissile_1Rnd_LG_scalpel",
            "PylonRack_3Rnd_LG_scalpel",
            "PylonRack_4Rnd_LG_scalpel",
            "PylonWeapon_300Rnd_20mm_shells",
            "PylonRack_20Rnd_Rocket_03_HE_F",
            "PylonRack_20Rnd_Rocket_03_AP_F",
            "PylonRack_19Rnd_Rocket_Skyfire",
            "PylonRack_1Rnd_Missile_AA_03_F",
            "PylonRack_1Rnd_Missile_AGM_01_F",
            "PylonMissile_1Rnd_Bomb_03_F",
            "PylonMissile_1Rnd_BombCluster_02_F"
        };
        hasAWACS = 1;
//         hasHMD = 1;
        killReward = 500;
        name = "Y-32 Xi'an (AWACS)";
        requirements[] = {"A"};
        spawn = "O_T_VTOL_02_infantry_dynamicLoadout_F";

        class Pilot: WLTurretDefaults {
            addMagazines[] = {
                "240Rnd_CMFlare_Chaff_Magazine",
                "Laserbatteries"
            };
            addWeapons[] = {
                "CMFlareLauncher_Singles",
                "Laserdesignator_mounted"
            };
            deviceJammer = 1;
            removeMagazines[] = {
                "168Rnd_CMFlare_Chaff_Magazine"
            };
            removeWeapons[] = {
                "CMFlareLauncher_Triples"
            };
            turret[] = { -1 };
        };

        class Gunner: WLTurretDefaults {
            addMagazines[] = {};
            addWeapons[] = {};
            removeMagazines[] = {
                "250Rnd_30mm_HE_shells_Tracer_Green",
                "250Rnd_30mm_APDS_shells_Tracer_Green",
                "Laserbatteries"
            };
            removeWeapons[] = {
                "gatling_30mm_VTOL_02",
                "Laserdesignator_mounted"
            };
            turret[] = { 0 };
        };
    };

    class O_T_VTOL_02_infantry_dynamicLoadout_F {
        allowPylonMagazines[] = {
            "PylonRack_12Rnd_PG_missiles",
            "PylonMissile_Missile_KH58_INT_x1"
        };
        cost = 32000;
//         hasHMD = 1;
        killReward = 600;
        rearm = 700;
        requirements[] = {"A"};

        class Pilot: WLTurretDefaults {
            addMagazines[] = {
                "240Rnd_CMFlare_Chaff_Magazine"
            };
            addWeapons[] = {
                "CMFlareLauncher_Singles"
            };
            removeMagazines[] = {
                "168Rnd_CMFlare_Chaff_Magazine"
            };
            removeWeapons[] = {
                "CMFlareLauncher_Triples"
            };
            turret[] = { -1 };
        };
    }; // "Y-32 Xi'an (Infantry Transport)"

    class O_Plane_Fighter_03_dynamicLoadout_F {
        allowPylonMagazines[] = {
            {"PylonMissile_Bomb_KAB250_x1", {"Pylons2", "Pylons3", "Pylons5", "Pylons6"}}
        };
        ammoOverrides[] = {
            {"Bomb_03_F", {"ammo_kab250kr", "KAB-250KR (TV-Guided)"}}
        };
        cost = 25000;
        description = "A-143 Buzzard (CAS) is a light CAS aircraft. It can optionally be armed with TV-guided KAB-250KR bombs, which can be linked to and controlled at ground support terminals after release. Remote bombs can be controlled at ground support terminals in Buy Menu >> Remote Control >> Ground Support Terminal.";
//         hasHMD = 1;
        hasRemoteBomb = 1;
        killReward = 600;
        name = "A-143 Buzzard (CAS)";
        rearm = 900;
        requirements[] = {"A"};
        spawn = "I_Plane_Fighter_03_dynamicLoadout_F";
        textures[] = {
            "\a3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_brownhex_CO.paa",
            "\a3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_brownhex_CO.paa"
        };

        class Pilot: WLTurretDefaults {
            addMagazines[] = {
                "240Rnd_CMFlare_Chaff_Magazine"
            };
            addWeapons[] = {};
            removeMagazines[] = {
                "120Rnd_CMFlare_Chaff_Magazine"
            };
            removeWeapons[] = {};
            turret[] = { -1 };
        };
    };

    class O_Plane_CAS_02_dynamicLoadout_F {
        cost = 32000;
//         hasHMD = 1;
        killReward = 900;
        rearm = 900;
        requirements[] = {"A"};

        class Pilot: WLTurretDefaults {
            addMagazines[] = {
                "240Rnd_CMFlare_Chaff_Magazine"
            };
            addWeapons[] = {};
            removeMagazines[] = {
                "120Rnd_CMFlare_Chaff_Magazine"
            };
            removeWeapons[] = {};
            turret[] = { -1 };
        };
    }; // "To-199 Neophron (CAS)"

    // class O_Plane_Fighter_02_F {
    //     allowPylonMagazines[] = {
    //         "PylonMissile_Missile_KH58_INT_x1"
    //     };
    //     cost = 28000;
    //     disallowMagazines[] = {
    //         "PylonMissile_Missile_KH58_x1"
    //     };
//     //     hasHMD = 1;
    //     killReward = 1100;
    //     rearm = 900;
    //     requirements[] = {"A"};
    //
    //     class Pilot: WLTurretDefaults {
    //         addMagazines[] = {
    //             "240Rnd_CMFlare_Chaff_Magazine"
    //         };
    //         addWeapons[] = {
    //             "CMFlareLauncher_Singles"
    //         };
    //         removeMagazines[] = {};
    //         removeWeapons[] = {
    //             "CMFlareLauncher"
    //         };
    //         turret[] = { -1 };
    //     };
    // }; // "To-201 Shikra"

    // class O_Plane_Fighter_02_Stealth_F {
    //     allowPylonMagazines[] = {
    //         {"PylonMissile_Bomb_KAB250_x1", {"pylonBayCenter1", "pylonBayCenter2", "pylonBayLeft2", "pylonBayRight2"}},
    //         "PylonMissile_Missile_KH58_INT_x1"
    //     };
    //     ammoOverrides[] = {
    //         {"Bomb_03_F", {"ammo_kab250se", "KAB-250S-E (GPS-Guided)"}}
    //     };
    //     cost = 28000;
    //     description = "To-201 Shikra (Stealth) is a stealthy variant of the To-201 Shikra armed with a GPS-guided KAB-250S-E launcher. How to use:<br/>1. Use scroll wheel menu to configure GPS munition target.<br/>2. Launch KAB-250.";
    //     disallowMagazines[] = {
    //         "PylonMissile_Missile_KH58_x1"
    //     };
    //     hasGPSMunition = 1;
//     //     hasHMD = 1;
    //     hasReconOptics = 1;
    //     killReward = 1100;
    //     rearm = 720;
    //     requirements[] = {"A"};
    //     variant = 1;
    //
    //     class Pilot: WLTurretDefaults {
    //         addMagazines[] = {
    //             "240Rnd_CMFlare_Chaff_Magazine"
    //         };
    //         addWeapons[] = {
    //             "CMFlareLauncher_Singles"
    //         };
    //         removeMagazines[] = {};
    //         removeWeapons[] = {
    //             "CMFlareLauncher"
    //         };
    //         turret[] = { -1 };
    //     };
    // };

    // class O_Plane_Fighter_02_Remote_F {
    //     allowPylonMagazines[] = {
    //         {"PylonMissile_Bomb_KAB250_x1", {"pylonBayCenter1", "pylonBayCenter2", "pylonBayLeft2", "pylonBayRight2"}},
    //         "PylonMissile_Missile_KH58_INT_x1"
    //     };
    //     ammoOverrides[] = {
    //         {"Bomb_03_F", {"ammo_kab250kr", "KAB-250KR (TV-Guided)"}}
    //     };
    //     cost = 32000;
    //     description = "To-201 Shikra (Land Attack) is a variant of the To-201 Shikra armed with TV-guided KAB-250KR bombs, which can be linked to and controlled at ground support terminals after release. Remote bombs can be controlled at ground support terminals in Buy Menu >> Remote Control >> Ground Support Terminal.";
    //     disallowMagazines[] = {
    //         "PylonMissile_Missile_KH58_x1"
    //     };
//     //     hasHMD = 1;
    //     hasRemoteBomb = 1;
    //     killReward = 1200;
    //     name = "To-201 Shikra (Land Attack)";
    //     rearm = 1200;
    //     requirements[] = {"A"};
    //     spawn = "O_Plane_Fighter_02_F";
    //     variant = 1;

    //     class Pilot: WLTurretDefaults {
    //         addMagazines[] = {};
    //         addWeapons[] = {
    //             "CMFlareLauncher_Singles"
    //         };
    //         removeMagazines[] = {};
    //         removeWeapons[] = {
    //             "CMFlareLauncher"
    //         };
    //         turret[] = { -1 };
    //     };
    // };

    // class O_Plane_Fighter_02_GPS_F {
    //     allowPylonMagazines[] = {
    //         {"PylonMissile_Bomb_KAB250_x1", {"pylonBayCenter1", "pylonBayCenter2", "pylonBayLeft2", "pylonBayRight2"}},
    //         "PylonMissile_Missile_KH58_INT_x1"
    //     };
    //     ammoOverrides[] = {
    //         {"Bomb_03_F", {"ammo_kab250se", "KAB-250S-E (GPS-Guided)"}}
    //     };
    //     cost = 30000;
    //     description = "To-201 Shikra (Standoff) is a variant of the To-201 Shikra armed with a GPS-guided KAB-250S-E launcher. How to use:<br/>1. Use scroll wheel menu to configure GPS munition target.<br/>2. Launch KAB-250.";
    //     disallowMagazines[] = {
    //         "PylonMissile_Missile_KH58_x1"
    //     };
    //     hasGPSMunition = 1;
//     //     hasHMD = 1;
    //     killReward = 1200;
    //     name = "To-201 Shikra (Standoff)";
    //     rearm = 1200;
    //     requirements[] = {"A"};
    //     spawn = "O_Plane_Fighter_02_F";
    //     variant = 1;

    //     class Pilot: WLTurretDefaults {
    //         addMagazines[] = {};
    //         addWeapons[] = {
    //             "CMFlareLauncher_Singles"
    //         };
    //         removeMagazines[] = {};
    //         removeWeapons[] = {
    //             "CMFlareLauncher"
    //         };
    //         turret[] = { -1 };
    //     };
    // };
};
