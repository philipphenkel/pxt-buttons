#include "pxt.h"

using namespace pxt;

namespace buttons {

//%
void enable() {
#if MICROBIT_CODAL
    // V2 only
    uBit.buttonA.enable();
    uBit.buttonB.enable();
#endif
}

//%
void disable() {
#if MICROBIT_CODAL
    // V2 only
    uBit.buttonA.disable();
    uBit.buttonB.disable();
#endif
}

} // namespace buttons