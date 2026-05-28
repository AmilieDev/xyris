/**
 * @file Arch.hpp
 * @author Keeton Feavel (keetonfeavel@cedarville.edu)
 * @brief i686 architecture implementation of Arch.hpp
 * @version 0.1
 * @date 2021-08-24
 *
 * @copyright Copyright the Xyris Contributors (c) 2021
 *
 */
#pragma once
#include <Arch/x86_64/regs.hpp>
#include <Arch/x86_64/ports.hpp>
#include <Arch/x86_64/isr.hpp>

namespace Arch {

struct stackframe {
    struct stackframe* ebp;
    size_t eip;
};

} // !namespace Arch
