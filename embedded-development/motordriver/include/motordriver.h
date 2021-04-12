#ifndef MOTORDRIVER_H
#define MOTORDRIVER_H

#include <cstdint>

enum MotorDriverRegisters
{
    UNDEFINED = 0x0,
    STATUSWORD = 0x1,
    CONTROLWORD = 0x2,
    ENCODER_VALUE = 0x3,
    MOTOR_VELOCITY_COMMAND = 0x4,
    OUTPUT_ENABLE = 0x5,
    FAULT = 0x6,
    RESET = 0x7,
    REGISTERS_MAX_VALUE
};

enum MotorState
{
    STATE_BOOT = 0x0,
    STATE_PREOP = 0x1,
    STATE_SAFEOP = 0x11,
    STATE_OP = 0x20
};

const uint16_t STATUS_ERROR = 0x8000;


/**
 * @brief The MotorDriver class
 *
 * This is the main class implementing the motor driver communication
 *
 */
class MotorDriver
{
public:
    /**
     * @brief MotorDriver
     *
     * Constructor. Creates the MotorDriver
     *
     */
    MotorDriver();


    /**
     * @brief transferData Transfer data over the Synchronous Protocol
     * @param data Data to send
     * @return Received data
     */
    uint32_t transferData(uint32_t data);


    /**
     * @brief update Call this function cyclically to simulate a seperate slave
     */
    void update();

};



#endif /* MOTORDRIVER_H */
