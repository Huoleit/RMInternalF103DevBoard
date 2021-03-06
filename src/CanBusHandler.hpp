#include "ch.hpp"
#include "hal.h"
#include "chprintf.h"

namespace CanBusHandler
{
void start();

extern volatile int32_t receiveCount;
//control command
extern volatile int16_t setCurrent_1;

//motor feedbacks
extern volatile int16_t tourqe_1;
extern volatile int16_t rpm_1;
extern volatile int16_t orientation_1; // [0,8191] -> [0,360 degree)

}; // namespace CanBusHandler