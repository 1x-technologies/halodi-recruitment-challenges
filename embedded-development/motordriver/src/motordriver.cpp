#include <cstdint>
#include "motordriver.h"


uint16_t Registers[REGISTERS_MAX_VALUE];


MotorDriver::MotorDriver()
{
    // Clear all registers
    for(uint8_t i = 0; i < REGISTERS_MAX_VALUE; ++i)
    {
        Registers[i] = 0;
    }

    // Set the fault flag on boot
    Registers[FAULT] = 1;
}

uint32_t MotorDriver::transferData(uint32_t data)
{
    uint8_t writing = (data >> 31);
    uint8_t command = (data >> 24) & 0x7F;
    uint16_t value = (data >> 8) & 0xFFFF;
    uint8_t checksum = data & 0xFF;

    // TODO: Implement checksum

    if(writing)
    {
        Registers[command] = value;
        return 0;
    }
    else
    {

        // TODO: Implement checksum for response
        return Registers[command] << 8;
    }


}

void MotorDriver::update()
{
    if(Registers[STATUSWORD] == MotorState::STATE_BOOT)
    {
        Registers[STATUSWORD] = MotorState::STATE_PREOP;
        Registers[CONTROLWORD] = MotorState::STATE_PREOP;
    }

    Registers[ENCODER_VALUE] += Registers[MOTOR_VELOCITY_COMMAND];
}
