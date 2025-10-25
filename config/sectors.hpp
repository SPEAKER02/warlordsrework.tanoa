class CfgWarlordSectors {
    connections[] = {
        {"LaRachelleAerodrome", "BelfortPoint"},
        {"LaRachelleAerodrome", "NearLeqa"},
        {"LaRachelleAerodrome", "KatkoulaPoint"},
        {"LaRachelleAerodrome", "FuckingNukeBase"},
        {"LaRachelleAerodrome", "Doodstil"},
        {"LaRachelleAerodrome", "OumerePoint"},
        {"LaRachelleAerodrome", "Furryland"},
        {"LaRachelleAerodrome", "PetitNikolet"},
        {"AeroportDeTanoa", "BelfortPoint"},
        {"AeroportDeTanoa", "NearLeqa"},
        {"AeroportDeTanoa", "KatkoulaPoint"},
        {"AeroportDeTanoa", "FuckingNukeBase"},
        {"AeroportDeTanoa", "Doodstil"},
        {"AeroportDeTanoa", "OumerePoint"},
        {"AeroportDeTanoa", "Furryland"},
        {"AeroportDeTanoa", "PetitNikolet"},
        {"TuvakanaAirbase", "BelfortPoint"},
        {"TuvakanaAirbase", "NearLeqa"},
        {"TuvakanaAirbase", "KatkoulaPoint"},
        {"TuvakanaAirbase", "FuckingNukeBase"},
        {"TuvakanaAirbase", "Doodstil"},
        {"TuvakanaAirbase", "OumerePoint"},
        {"TuvakanaAirbase", "Furryland"},
        {"TuvakanaAirbase", "PetitNikolet"},
        {"BaraAirstrip", "BelfortPoint"},
        {"BaraAirstrip", "NearLeqa"},
        {"BaraAirstrip", "KatkoulaPoint"},
        {"BaraAirstrip", "FuckingNukeBase"},
        {"BaraAirstrip", "Doodstil"},
        {"BaraAirstrip", "OumerePoint"},
        {"BaraAirstrip", "Furryland"},
        {"BaraAirstrip", "PetitNikolet"},
        {"SaintGeorgeAirstrip", "BelfortPoint"},
        {"SaintGeorgeAirstrip", "NearLeqa"},
        {"SaintGeorgeAirstrip", "KatkoulaPoint"},
        {"SaintGeorgeAirstrip", "FuckingNukeBase"},
        {"SaintGeorgeAirstrip", "Doodstil"},
        {"SaintGeorgeAirstrip", "OumerePoint"},
        {"SaintGeorgeAirstrip", "Furryland"},
        {"SaintGeorgeAirstrip", "PetitNikolet"},
        {"BelfortPoint", "LaRachelleAerodrome"},
        {"BelfortPoint", "AeroportDeTanoa"},
        {"BelfortPoint", "TuvakanaAirbase"},
        {"BelfortPoint", "BaraAirstrip"},
        {"BelfortPoint", "SaintGeorgeAirstrip"},
        {"NearLeqa", "LaRachelleAerodrome"},
        {"NearLeqa", "AeroportDeTanoa"},
        {"NearLeqa", "TuvakanaAirbase"},
        {"NearLeqa", "BaraAirstrip"},
        {"NearLeqa", "SaintGeorgeAirstrip"},
        {"KatkoulaPoint", "LaRachelleAerodrome"},
        {"KatkoulaPoint", "AeroportDeTanoa"},
        {"KatkoulaPoint", "TuvakanaAirbase"},
        {"KatkoulaPoint", "BaraAirstrip"},
        {"KatkoulaPoint", "SaintGeorgeAirstrip"},
        {"FuckingNukeBase", "LaRachelleAerodrome"},
        {"FuckingNukeBase", "AeroportDeTanoa"},
        {"FuckingNukeBase", "TuvakanaAirbase"},
        {"FuckingNukeBase", "BaraAirstrip"},
        {"FuckingNukeBase", "SaintGeorgeAirstrip"},
        {"Doodstil", "LaRachelleAerodrome"},
        {"Doodstil", "AeroportDeTanoa"},
        {"Doodstil", "TuvakanaAirbase"},
        {"Doodstil", "BaraAirstrip"},
        {"Doodstil", "SaintGeorgeAirstrip"},
        {"OumerePoint", "LaRachelleAerodrome"},
        {"OumerePoint", "AeroportDeTanoa"},
        {"OumerePoint", "TuvakanaAirbase"},
        {"OumerePoint", "BaraAirstrip"},
        {"OumerePoint", "SaintGeorgeAirstrip"},
        {"Furryland", "LaRachelleAerodrome"},
        {"Furryland", "AeroportDeTanoa"},
        {"Furryland", "TuvakanaAirbase"},
        {"Furryland", "BaraAirstrip"},
        {"Furryland", "SaintGeorgeAirstrip"},
        {"PetitNikolet", "LaRachelleAerodrome"},
        {"PetitNikolet", "AeroportDeTanoa"},
        {"PetitNikolet", "TuvakanaAirbase"},
        {"PetitNikolet", "BaraAirstrip"},
        {"PetitNikolet", "SaintGeorgeAirstrip"},
    };

    class LaRachelleAerodrome {
        area[] = {450, 160, 15, 1};
        disableHome = 1;
        location[] = {11815.5, 13101.7, 0};
        name = La Rachelle Aerodrom;
        services[] = {"W", "A", "H"};
    };

    class AeroportDeTanoa {
        area[] = {208, 415, 169, 1};
        disableHome = 1;
        location[] = {7039.1, 7352.7, 0};
        name = Aeroport de Tanoa;
        services[] = {"W", "A", "H"};
    };

    class TuvakanaAirbase {
        area[] = {295, 485, 50, 1};
        disableHome = 1;
        location[] = {2096.5, 13183.6, 0};
        name = TuvakanaAirbase;
        services[] = {"A", "H"};
    };

    class BaraAirstrip {
        area[] = {490, 200, 345, 1};
        disableHome = 1;
        location[] = {2198.2, 3506.2, 0};
        name = Bara Airstrip;
        services[] = {"A", "H"};
    };

    class SaintGeorgeAirstrip {
        area[] = {460, 200, 35, 1};
        disableHome = 1;
        location[] = {11732.8, 3238.3, 0};
        name = Saint-George Airstrip;
        services[] = {"A", "H"};
    };

    class BelfortPoint {
        area[] = {300, 300, 0, 1};
        location[] = {2690, 11308.1, 0};
        name = Belfort point;
        services[] = {"W", "H"};
    };

    class NearLeqa {
        area[] = {300, 300, 0, 1};
        location[] = {2140.6, 8034.9, 0};
        name = Near Leqa;
        services[] = {"W", "H"};
    };

    class KatkoulaPoint {
        area[] = {300, 300, 0, 1};
        location[] = {5420.2, 4798.8, 0};
        name = Katkoula point;
        services[] = {"W", "H"};
    };

    class FuckingNukeBase {
        area[] = {300, 300, 0, 1};
        location[] = {11754.5, 2173.5, 0};
        name = Fucking Nuke factory;
        services[] = {"W", "H"};
    };

    class Doodstil {
        area[] = {300, 300, 0, 1};
        location[] = {12859.3, 4679.6, 0};
        name = Doodstil;
        services[] = {"W", "H"};
    };

    class OumerePoint {
        area[] = {300, 300, 0, 1};
        location[] = {13278.9, 7519.8, 0};
        name = Oumere point;
        services[] = {"W", "H"};
    };

    class Furryland {
        area[] = {300, 300, 0, 1};
        location[] = {14510.9, 10585.7, 0};
        name = Furry land;
        services[] = {"W", "H"};
    };

    class PetitNikolet {
        area[] = {300, 300, 0, 1};
        location[] = {6853.7, 13270.2, 0};
        name = Petit Nikolet;
        services[] = {"W", "H"};
    };

};
