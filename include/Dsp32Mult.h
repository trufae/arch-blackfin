#include "arch_blackfin.h"

class Dsp32MultInstruction {
public:
    static bool Disassemble(uint16_t instructionWordHigh, uint16_t instructionWordLow, struct blackfin::Instruction &instr, bool parallel);
};
