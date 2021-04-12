#include <thread>
#include <chrono>
#include <iostream>

#include "motordriver.h"


/**
 * @brief main This is a minimal main function.
 * @return
 */

int main(void)
{
    std::cout << "Starting simulated motor driver" << std::endl;


    MotorDriver motorDriver;

    while(1)
    {
        // Example request/response  send to the motor driver
        uint32_t request = MotorDriverRegisters::STATUSWORD << 24 | MotorDriverRegisters::STATUSWORD;
        uint32_t response = motorDriver.transferData(request);

        std::cout << "Response to status word request: " << response << std::endl;


        // Call update to simulate motor driver doing work
        motorDriver.update();

        // Sleep for 100ms to simulate cyclic control
        std::this_thread::sleep_for (std::chrono::milliseconds(100));
    }
}
