#ifndef SLIMEVR_ONOFFBUTTON_H_
#define SLIMEVR_ONOFFBUTTON_H_

#include "logging/Logger.h"
#include "globals.h"

#ifndef ON_OFF_BUTTON_ACTIVE_LEVEL
#define ON_OFF_BUTTON_ACTIVE_LEVEL LOW
#endif

#ifndef ON_OFF_BUTTON_HOLD_TIME_MS
#define ON_OFF_BUTTON_HOLD_TIME_MS 1000
#endif

namespace SlimeVR {

class OnOffButton {
public:
    void setup();
    void update();
private:
    SlimeVR::Logging::Logger m_Logger = SlimeVR::Logging::Logger("OnOffButton");
};

}

#endif