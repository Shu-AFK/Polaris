#ifndef POLARIS_CPU_H
#define POLARIS_CPU_H

#include <cstdint>
#include <array>

class T_CPU {
public:
    enum Register {
        RAX, RBX, RCX, RDX,
        RSI, RDI, RBP, RSP,
        R8, R9, R10, R11,
        R12, R13, R14, R15,
        REG_COUNT // total number of general-purpose registers
    };

    T_CPU() {
        registers.fill(0);
    }

    uint64_t &getRegister(Register reg) {
        return registers[reg];
    }

private:
    std::array<uint64_t, REG_COUNT> registers;
};

#endif //POLARIS_CPU_H
