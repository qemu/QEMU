/*
 *  Copyright(c) 2019-2021 Qualcomm Innovation Center, Inc. All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HEXAGON_INTERNAL_H
#define HEXAGON_INTERNAL_H

#include "qemu/log.h"

int hexagon_gdb_read_register(CPUState *cpu, GByteArray *buf, int reg);
int hexagon_gdb_write_register(CPUState *cpu, uint8_t *buf, int reg);
#ifndef CONFIG_USER_ONLY
int hexagon_sys_gdb_read_register(CPUState *cs, GByteArray *mem_buf, int n);
int hexagon_sys_gdb_write_register(CPUState *cs, uint8_t *mem_buf, int n);
#endif
int hexagon_hvx_gdb_read_register(CPUState *env, GByteArray *mem_buf, int n);
int hexagon_hvx_gdb_write_register(CPUState *env, uint8_t *mem_buf, int n);

void hexagon_debug_vreg(CPUHexagonState *env, int regnum);
void hexagon_debug_qreg(CPUHexagonState *env, int regnum);
void hexagon_debug(CPUHexagonState *env);

extern const char * const hexagon_regnames[TOTAL_PER_THREAD_REGS];

void G_NORETURN do_raise_exception(CPUHexagonState *env,
        uint32_t exception,
        target_ulong PC,
        uintptr_t retaddr);


#define hexagon_cpu_mmu_enabled(env) \
    GET_SYSCFG_FIELD(SYSCFG_MMUEN, ARCH_GET_SYSTEM_REG(env, HEX_SREG_SYSCFG))

#endif
