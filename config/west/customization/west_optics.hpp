#include "west_optics_short.hpp"

class OpticMOS: WLCAttachment {
    name = "MOS";
    attachments[] = {
        "optic_SOS"
    };
};

class OpticAMS: WLCAttachment {
    name = "AMS";
    attachments[] = {
        "optic_AMS_snd"
    };
};

class OpticERCO: WLCAttachment {
    name = "ERCO";
    attachments[] = {
        "optic_ERCO_snd_F"
    };
};