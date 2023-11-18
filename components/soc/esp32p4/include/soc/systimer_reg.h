/**
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** SYSTIMER_CONF_REG register
 *  Configure system timer clock
 */
#define SYSTIMER_CONF_REG (DR_REG_SYSTIMER_BASE + 0x0)
/** SYSTIMER_SYSTIMER_CLK_FO : R/W; bitpos: [0]; default: 0;
 *  systimer clock force on
 */
#define SYSTIMER_SYSTIMER_CLK_FO    (BIT(0))
#define SYSTIMER_SYSTIMER_CLK_FO_M  (SYSTIMER_SYSTIMER_CLK_FO_V << SYSTIMER_SYSTIMER_CLK_FO_S)
#define SYSTIMER_SYSTIMER_CLK_FO_V  0x00000001U
#define SYSTIMER_SYSTIMER_CLK_FO_S  0
/** SYSTIMER_ETM_EN : R/W; bitpos: [1]; default: 0;
 *  enable systimer's etm task and event
 */
#define SYSTIMER_ETM_EN    (BIT(1))
#define SYSTIMER_ETM_EN_M  (SYSTIMER_ETM_EN_V << SYSTIMER_ETM_EN_S)
#define SYSTIMER_ETM_EN_V  0x00000001U
#define SYSTIMER_ETM_EN_S  1
/** SYSTIMER_TARGET2_WORK_EN : R/W; bitpos: [22]; default: 0;
 *  target2 work enable
 */
#define SYSTIMER_TARGET2_WORK_EN    (BIT(22))
#define SYSTIMER_TARGET2_WORK_EN_M  (SYSTIMER_TARGET2_WORK_EN_V << SYSTIMER_TARGET2_WORK_EN_S)
#define SYSTIMER_TARGET2_WORK_EN_V  0x00000001U
#define SYSTIMER_TARGET2_WORK_EN_S  22
/** SYSTIMER_TARGET1_WORK_EN : R/W; bitpos: [23]; default: 0;
 *  target1 work enable
 */
#define SYSTIMER_TARGET1_WORK_EN    (BIT(23))
#define SYSTIMER_TARGET1_WORK_EN_M  (SYSTIMER_TARGET1_WORK_EN_V << SYSTIMER_TARGET1_WORK_EN_S)
#define SYSTIMER_TARGET1_WORK_EN_V  0x00000001U
#define SYSTIMER_TARGET1_WORK_EN_S  23
/** SYSTIMER_TARGET0_WORK_EN : R/W; bitpos: [24]; default: 0;
 *  target0 work enable
 */
#define SYSTIMER_TARGET0_WORK_EN    (BIT(24))
#define SYSTIMER_TARGET0_WORK_EN_M  (SYSTIMER_TARGET0_WORK_EN_V << SYSTIMER_TARGET0_WORK_EN_S)
#define SYSTIMER_TARGET0_WORK_EN_V  0x00000001U
#define SYSTIMER_TARGET0_WORK_EN_S  24
/** SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN : R/W; bitpos: [25]; default: 1;
 *  If timer unit1 is stalled when core1 stalled
 */
#define SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN    (BIT(25))
#define SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN_M  (SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN_V << SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN_S)
#define SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_CORE1_STALL_EN_S  25
/** SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN : R/W; bitpos: [26]; default: 1;
 *  If timer unit1 is stalled when core0 stalled
 */
#define SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN    (BIT(26))
#define SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN_M  (SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN_V << SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN_S)
#define SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_CORE0_STALL_EN_S  26
/** SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN : R/W; bitpos: [27]; default: 0;
 *  If timer unit0 is stalled when core1 stalled
 */
#define SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN    (BIT(27))
#define SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN_M  (SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN_V << SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN_S)
#define SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_CORE1_STALL_EN_S  27
/** SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN : R/W; bitpos: [28]; default: 0;
 *  If timer unit0 is stalled when core0 stalled
 */
#define SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN    (BIT(28))
#define SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN_M  (SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN_V << SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN_S)
#define SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_CORE0_STALL_EN_S  28
/** SYSTIMER_TIMER_UNIT1_WORK_EN : R/W; bitpos: [29]; default: 0;
 *  timer unit1 work enable
 */
#define SYSTIMER_TIMER_UNIT1_WORK_EN    (BIT(29))
#define SYSTIMER_TIMER_UNIT1_WORK_EN_M  (SYSTIMER_TIMER_UNIT1_WORK_EN_V << SYSTIMER_TIMER_UNIT1_WORK_EN_S)
#define SYSTIMER_TIMER_UNIT1_WORK_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_WORK_EN_S  29
/** SYSTIMER_TIMER_UNIT0_WORK_EN : R/W; bitpos: [30]; default: 1;
 *  timer unit0 work enable
 */
#define SYSTIMER_TIMER_UNIT0_WORK_EN    (BIT(30))
#define SYSTIMER_TIMER_UNIT0_WORK_EN_M  (SYSTIMER_TIMER_UNIT0_WORK_EN_V << SYSTIMER_TIMER_UNIT0_WORK_EN_S)
#define SYSTIMER_TIMER_UNIT0_WORK_EN_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_WORK_EN_S  30
/** SYSTIMER_CLK_EN : R/W; bitpos: [31]; default: 0;
 *  register file clk gating
 */
#define SYSTIMER_CLK_EN    (BIT(31))
#define SYSTIMER_CLK_EN_M  (SYSTIMER_CLK_EN_V << SYSTIMER_CLK_EN_S)
#define SYSTIMER_CLK_EN_V  0x00000001U
#define SYSTIMER_CLK_EN_S  31

/** SYSTIMER_UNIT0_OP_REG register
 *  system timer unit0 value update register
 */
#define SYSTIMER_UNIT0_OP_REG (DR_REG_SYSTIMER_BASE + 0x4)
/** SYSTIMER_TIMER_UNIT0_VALUE_VALID : R/SS/WTC; bitpos: [29]; default: 0;
 *  timer value is sync and valid
 */
#define SYSTIMER_TIMER_UNIT0_VALUE_VALID    (BIT(29))
#define SYSTIMER_TIMER_UNIT0_VALUE_VALID_M  (SYSTIMER_TIMER_UNIT0_VALUE_VALID_V << SYSTIMER_TIMER_UNIT0_VALUE_VALID_S)
#define SYSTIMER_TIMER_UNIT0_VALUE_VALID_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_VALUE_VALID_S  29
/** SYSTIMER_TIMER_UNIT0_UPDATE : WT; bitpos: [30]; default: 0;
 *  update timer_unit0
 */
#define SYSTIMER_TIMER_UNIT0_UPDATE    (BIT(30))
#define SYSTIMER_TIMER_UNIT0_UPDATE_M  (SYSTIMER_TIMER_UNIT0_UPDATE_V << SYSTIMER_TIMER_UNIT0_UPDATE_S)
#define SYSTIMER_TIMER_UNIT0_UPDATE_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_UPDATE_S  30

/** SYSTIMER_UNIT1_OP_REG register
 *  system timer unit1 value update register
 */
#define SYSTIMER_UNIT1_OP_REG (DR_REG_SYSTIMER_BASE + 0x8)
/** SYSTIMER_TIMER_UNIT1_VALUE_VALID : R/SS/WTC; bitpos: [29]; default: 0;
 *  timer value is sync and valid
 */
#define SYSTIMER_TIMER_UNIT1_VALUE_VALID    (BIT(29))
#define SYSTIMER_TIMER_UNIT1_VALUE_VALID_M  (SYSTIMER_TIMER_UNIT1_VALUE_VALID_V << SYSTIMER_TIMER_UNIT1_VALUE_VALID_S)
#define SYSTIMER_TIMER_UNIT1_VALUE_VALID_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_VALUE_VALID_S  29
/** SYSTIMER_TIMER_UNIT1_UPDATE : WT; bitpos: [30]; default: 0;
 *  update timer unit1
 */
#define SYSTIMER_TIMER_UNIT1_UPDATE    (BIT(30))
#define SYSTIMER_TIMER_UNIT1_UPDATE_M  (SYSTIMER_TIMER_UNIT1_UPDATE_V << SYSTIMER_TIMER_UNIT1_UPDATE_S)
#define SYSTIMER_TIMER_UNIT1_UPDATE_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_UPDATE_S  30

/** SYSTIMER_UNIT0_LOAD_HI_REG register
 *  system timer unit0 value high load register
 */
#define SYSTIMER_UNIT0_LOAD_HI_REG (DR_REG_SYSTIMER_BASE + 0xc)
/** SYSTIMER_TIMER_UNIT0_LOAD_HI : R/W; bitpos: [19:0]; default: 0;
 *  timer unit0 load high 20 bits
 */
#define SYSTIMER_TIMER_UNIT0_LOAD_HI    0x000FFFFFU
#define SYSTIMER_TIMER_UNIT0_LOAD_HI_M  (SYSTIMER_TIMER_UNIT0_LOAD_HI_V << SYSTIMER_TIMER_UNIT0_LOAD_HI_S)
#define SYSTIMER_TIMER_UNIT0_LOAD_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_UNIT0_LOAD_HI_S  0

/** SYSTIMER_UNIT0_LOAD_LO_REG register
 *  system timer unit0 value low load register
 */
#define SYSTIMER_UNIT0_LOAD_LO_REG (DR_REG_SYSTIMER_BASE + 0x10)
/** SYSTIMER_TIMER_UNIT0_LOAD_LO : R/W; bitpos: [31:0]; default: 0;
 *  timer unit0 load low 32 bits
 */
#define SYSTIMER_TIMER_UNIT0_LOAD_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT0_LOAD_LO_M  (SYSTIMER_TIMER_UNIT0_LOAD_LO_V << SYSTIMER_TIMER_UNIT0_LOAD_LO_S)
#define SYSTIMER_TIMER_UNIT0_LOAD_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT0_LOAD_LO_S  0

/** SYSTIMER_UNIT1_LOAD_HI_REG register
 *  system timer unit1 value high load register
 */
#define SYSTIMER_UNIT1_LOAD_HI_REG (DR_REG_SYSTIMER_BASE + 0x14)
/** SYSTIMER_TIMER_UNIT1_LOAD_HI : R/W; bitpos: [19:0]; default: 0;
 *  timer unit1 load high 20 bits
 */
#define SYSTIMER_TIMER_UNIT1_LOAD_HI    0x000FFFFFU
#define SYSTIMER_TIMER_UNIT1_LOAD_HI_M  (SYSTIMER_TIMER_UNIT1_LOAD_HI_V << SYSTIMER_TIMER_UNIT1_LOAD_HI_S)
#define SYSTIMER_TIMER_UNIT1_LOAD_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_UNIT1_LOAD_HI_S  0

/** SYSTIMER_UNIT1_LOAD_LO_REG register
 *  system timer unit1 value low load register
 */
#define SYSTIMER_UNIT1_LOAD_LO_REG (DR_REG_SYSTIMER_BASE + 0x18)
/** SYSTIMER_TIMER_UNIT1_LOAD_LO : R/W; bitpos: [31:0]; default: 0;
 *  timer unit1 load low 32 bits
 */
#define SYSTIMER_TIMER_UNIT1_LOAD_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT1_LOAD_LO_M  (SYSTIMER_TIMER_UNIT1_LOAD_LO_V << SYSTIMER_TIMER_UNIT1_LOAD_LO_S)
#define SYSTIMER_TIMER_UNIT1_LOAD_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT1_LOAD_LO_S  0

/** SYSTIMER_TARGET0_HI_REG register
 *  system timer comp0 value high register
 */
#define SYSTIMER_TARGET0_HI_REG (DR_REG_SYSTIMER_BASE + 0x1c)
/** SYSTIMER_TIMER_TARGET0_HI : R/W; bitpos: [19:0]; default: 0;
 *  timer taget0 high 20 bits
 */
#define SYSTIMER_TIMER_TARGET0_HI    0x000FFFFFU
#define SYSTIMER_TIMER_TARGET0_HI_M  (SYSTIMER_TIMER_TARGET0_HI_V << SYSTIMER_TIMER_TARGET0_HI_S)
#define SYSTIMER_TIMER_TARGET0_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_TARGET0_HI_S  0

/** SYSTIMER_TARGET0_LO_REG register
 *  system timer comp0 value low register
 */
#define SYSTIMER_TARGET0_LO_REG (DR_REG_SYSTIMER_BASE + 0x20)
/** SYSTIMER_TIMER_TARGET0_LO : R/W; bitpos: [31:0]; default: 0;
 *  timer taget0 low 32 bits
 */
#define SYSTIMER_TIMER_TARGET0_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET0_LO_M  (SYSTIMER_TIMER_TARGET0_LO_V << SYSTIMER_TIMER_TARGET0_LO_S)
#define SYSTIMER_TIMER_TARGET0_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET0_LO_S  0

/** SYSTIMER_TARGET1_HI_REG register
 *  system timer comp1 value high register
 */
#define SYSTIMER_TARGET1_HI_REG (DR_REG_SYSTIMER_BASE + 0x24)
/** SYSTIMER_TIMER_TARGET1_HI : R/W; bitpos: [19:0]; default: 0;
 *  timer taget1 high 20 bits
 */
#define SYSTIMER_TIMER_TARGET1_HI    0x000FFFFFU
#define SYSTIMER_TIMER_TARGET1_HI_M  (SYSTIMER_TIMER_TARGET1_HI_V << SYSTIMER_TIMER_TARGET1_HI_S)
#define SYSTIMER_TIMER_TARGET1_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_TARGET1_HI_S  0

/** SYSTIMER_TARGET1_LO_REG register
 *  system timer comp1 value low register
 */
#define SYSTIMER_TARGET1_LO_REG (DR_REG_SYSTIMER_BASE + 0x28)
/** SYSTIMER_TIMER_TARGET1_LO : R/W; bitpos: [31:0]; default: 0;
 *  timer taget1 low 32 bits
 */
#define SYSTIMER_TIMER_TARGET1_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET1_LO_M  (SYSTIMER_TIMER_TARGET1_LO_V << SYSTIMER_TIMER_TARGET1_LO_S)
#define SYSTIMER_TIMER_TARGET1_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET1_LO_S  0

/** SYSTIMER_TARGET2_HI_REG register
 *  system timer comp2 value high register
 */
#define SYSTIMER_TARGET2_HI_REG (DR_REG_SYSTIMER_BASE + 0x2c)
/** SYSTIMER_TIMER_TARGET2_HI : R/W; bitpos: [19:0]; default: 0;
 *  timer taget2 high 20 bits
 */
#define SYSTIMER_TIMER_TARGET2_HI    0x000FFFFFU
#define SYSTIMER_TIMER_TARGET2_HI_M  (SYSTIMER_TIMER_TARGET2_HI_V << SYSTIMER_TIMER_TARGET2_HI_S)
#define SYSTIMER_TIMER_TARGET2_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_TARGET2_HI_S  0

/** SYSTIMER_TARGET2_LO_REG register
 *  system timer comp2 value low register
 */
#define SYSTIMER_TARGET2_LO_REG (DR_REG_SYSTIMER_BASE + 0x30)
/** SYSTIMER_TIMER_TARGET2_LO : R/W; bitpos: [31:0]; default: 0;
 *  timer taget2 low 32 bits
 */
#define SYSTIMER_TIMER_TARGET2_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET2_LO_M  (SYSTIMER_TIMER_TARGET2_LO_V << SYSTIMER_TIMER_TARGET2_LO_S)
#define SYSTIMER_TIMER_TARGET2_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_TARGET2_LO_S  0

/** SYSTIMER_TARGET0_CONF_REG register
 *  system timer comp0 target mode register
 */
#define SYSTIMER_TARGET0_CONF_REG (DR_REG_SYSTIMER_BASE + 0x34)
/** SYSTIMER_TARGET0_PERIOD : R/W; bitpos: [25:0]; default: 0;
 *  target0 period
 */
#define SYSTIMER_TARGET0_PERIOD    0x03FFFFFFU
#define SYSTIMER_TARGET0_PERIOD_M  (SYSTIMER_TARGET0_PERIOD_V << SYSTIMER_TARGET0_PERIOD_S)
#define SYSTIMER_TARGET0_PERIOD_V  0x03FFFFFFU
#define SYSTIMER_TARGET0_PERIOD_S  0
/** SYSTIMER_TARGET0_PERIOD_MODE : R/W; bitpos: [30]; default: 0;
 *  Set target0 to period mode
 */
#define SYSTIMER_TARGET0_PERIOD_MODE    (BIT(30))
#define SYSTIMER_TARGET0_PERIOD_MODE_M  (SYSTIMER_TARGET0_PERIOD_MODE_V << SYSTIMER_TARGET0_PERIOD_MODE_S)
#define SYSTIMER_TARGET0_PERIOD_MODE_V  0x00000001U
#define SYSTIMER_TARGET0_PERIOD_MODE_S  30
/** SYSTIMER_TARGET0_TIMER_UNIT_SEL : R/W; bitpos: [31]; default: 0;
 *  select which unit to compare
 */
#define SYSTIMER_TARGET0_TIMER_UNIT_SEL    (BIT(31))
#define SYSTIMER_TARGET0_TIMER_UNIT_SEL_M  (SYSTIMER_TARGET0_TIMER_UNIT_SEL_V << SYSTIMER_TARGET0_TIMER_UNIT_SEL_S)
#define SYSTIMER_TARGET0_TIMER_UNIT_SEL_V  0x00000001U
#define SYSTIMER_TARGET0_TIMER_UNIT_SEL_S  31

/** SYSTIMER_TARGET1_CONF_REG register
 *  system timer comp1 target mode register
 */
#define SYSTIMER_TARGET1_CONF_REG (DR_REG_SYSTIMER_BASE + 0x38)
/** SYSTIMER_TARGET1_PERIOD : R/W; bitpos: [25:0]; default: 0;
 *  target1 period
 */
#define SYSTIMER_TARGET1_PERIOD    0x03FFFFFFU
#define SYSTIMER_TARGET1_PERIOD_M  (SYSTIMER_TARGET1_PERIOD_V << SYSTIMER_TARGET1_PERIOD_S)
#define SYSTIMER_TARGET1_PERIOD_V  0x03FFFFFFU
#define SYSTIMER_TARGET1_PERIOD_S  0
/** SYSTIMER_TARGET1_PERIOD_MODE : R/W; bitpos: [30]; default: 0;
 *  Set target1 to period mode
 */
#define SYSTIMER_TARGET1_PERIOD_MODE    (BIT(30))
#define SYSTIMER_TARGET1_PERIOD_MODE_M  (SYSTIMER_TARGET1_PERIOD_MODE_V << SYSTIMER_TARGET1_PERIOD_MODE_S)
#define SYSTIMER_TARGET1_PERIOD_MODE_V  0x00000001U
#define SYSTIMER_TARGET1_PERIOD_MODE_S  30
/** SYSTIMER_TARGET1_TIMER_UNIT_SEL : R/W; bitpos: [31]; default: 0;
 *  select which unit to compare
 */
#define SYSTIMER_TARGET1_TIMER_UNIT_SEL    (BIT(31))
#define SYSTIMER_TARGET1_TIMER_UNIT_SEL_M  (SYSTIMER_TARGET1_TIMER_UNIT_SEL_V << SYSTIMER_TARGET1_TIMER_UNIT_SEL_S)
#define SYSTIMER_TARGET1_TIMER_UNIT_SEL_V  0x00000001U
#define SYSTIMER_TARGET1_TIMER_UNIT_SEL_S  31

/** SYSTIMER_TARGET2_CONF_REG register
 *  system timer comp2 target mode register
 */
#define SYSTIMER_TARGET2_CONF_REG (DR_REG_SYSTIMER_BASE + 0x3c)
/** SYSTIMER_TARGET2_PERIOD : R/W; bitpos: [25:0]; default: 0;
 *  target2 period
 */
#define SYSTIMER_TARGET2_PERIOD    0x03FFFFFFU
#define SYSTIMER_TARGET2_PERIOD_M  (SYSTIMER_TARGET2_PERIOD_V << SYSTIMER_TARGET2_PERIOD_S)
#define SYSTIMER_TARGET2_PERIOD_V  0x03FFFFFFU
#define SYSTIMER_TARGET2_PERIOD_S  0
/** SYSTIMER_TARGET2_PERIOD_MODE : R/W; bitpos: [30]; default: 0;
 *  Set target2 to period mode
 */
#define SYSTIMER_TARGET2_PERIOD_MODE    (BIT(30))
#define SYSTIMER_TARGET2_PERIOD_MODE_M  (SYSTIMER_TARGET2_PERIOD_MODE_V << SYSTIMER_TARGET2_PERIOD_MODE_S)
#define SYSTIMER_TARGET2_PERIOD_MODE_V  0x00000001U
#define SYSTIMER_TARGET2_PERIOD_MODE_S  30
/** SYSTIMER_TARGET2_TIMER_UNIT_SEL : R/W; bitpos: [31]; default: 0;
 *  select which unit to compare
 */
#define SYSTIMER_TARGET2_TIMER_UNIT_SEL    (BIT(31))
#define SYSTIMER_TARGET2_TIMER_UNIT_SEL_M  (SYSTIMER_TARGET2_TIMER_UNIT_SEL_V << SYSTIMER_TARGET2_TIMER_UNIT_SEL_S)
#define SYSTIMER_TARGET2_TIMER_UNIT_SEL_V  0x00000001U
#define SYSTIMER_TARGET2_TIMER_UNIT_SEL_S  31

/** SYSTIMER_UNIT0_VALUE_HI_REG register
 *  system timer unit0 value high register
 */
#define SYSTIMER_UNIT0_VALUE_HI_REG (DR_REG_SYSTIMER_BASE + 0x40)
/** SYSTIMER_TIMER_UNIT0_VALUE_HI : RO; bitpos: [19:0]; default: 0;
 *  timer read value high 20bits
 */
#define SYSTIMER_TIMER_UNIT0_VALUE_HI    0x000FFFFFU
#define SYSTIMER_TIMER_UNIT0_VALUE_HI_M  (SYSTIMER_TIMER_UNIT0_VALUE_HI_V << SYSTIMER_TIMER_UNIT0_VALUE_HI_S)
#define SYSTIMER_TIMER_UNIT0_VALUE_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_UNIT0_VALUE_HI_S  0

/** SYSTIMER_UNIT0_VALUE_LO_REG register
 *  system timer unit0 value low register
 */
#define SYSTIMER_UNIT0_VALUE_LO_REG (DR_REG_SYSTIMER_BASE + 0x44)
/** SYSTIMER_TIMER_UNIT0_VALUE_LO : RO; bitpos: [31:0]; default: 0;
 *  timer read value low 32bits
 */
#define SYSTIMER_TIMER_UNIT0_VALUE_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT0_VALUE_LO_M  (SYSTIMER_TIMER_UNIT0_VALUE_LO_V << SYSTIMER_TIMER_UNIT0_VALUE_LO_S)
#define SYSTIMER_TIMER_UNIT0_VALUE_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT0_VALUE_LO_S  0

/** SYSTIMER_UNIT1_VALUE_HI_REG register
 *  system timer unit1 value high register
 */
#define SYSTIMER_UNIT1_VALUE_HI_REG (DR_REG_SYSTIMER_BASE + 0x48)
/** SYSTIMER_TIMER_UNIT1_VALUE_HI : RO; bitpos: [19:0]; default: 0;
 *  timer read value high 20bits
 */
#define SYSTIMER_TIMER_UNIT1_VALUE_HI    0x000FFFFFU
#define SYSTIMER_TIMER_UNIT1_VALUE_HI_M  (SYSTIMER_TIMER_UNIT1_VALUE_HI_V << SYSTIMER_TIMER_UNIT1_VALUE_HI_S)
#define SYSTIMER_TIMER_UNIT1_VALUE_HI_V  0x000FFFFFU
#define SYSTIMER_TIMER_UNIT1_VALUE_HI_S  0

/** SYSTIMER_UNIT1_VALUE_LO_REG register
 *  system timer unit1 value low register
 */
#define SYSTIMER_UNIT1_VALUE_LO_REG (DR_REG_SYSTIMER_BASE + 0x4c)
/** SYSTIMER_TIMER_UNIT1_VALUE_LO : RO; bitpos: [31:0]; default: 0;
 *  timer read value low 32bits
 */
#define SYSTIMER_TIMER_UNIT1_VALUE_LO    0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT1_VALUE_LO_M  (SYSTIMER_TIMER_UNIT1_VALUE_LO_V << SYSTIMER_TIMER_UNIT1_VALUE_LO_S)
#define SYSTIMER_TIMER_UNIT1_VALUE_LO_V  0xFFFFFFFFU
#define SYSTIMER_TIMER_UNIT1_VALUE_LO_S  0

/** SYSTIMER_COMP0_LOAD_REG register
 *  system timer comp0 conf sync register
 */
#define SYSTIMER_COMP0_LOAD_REG (DR_REG_SYSTIMER_BASE + 0x50)
/** SYSTIMER_TIMER_COMP0_LOAD : WT; bitpos: [0]; default: 0;
 *  timer comp0 sync enable signal
 */
#define SYSTIMER_TIMER_COMP0_LOAD    (BIT(0))
#define SYSTIMER_TIMER_COMP0_LOAD_M  (SYSTIMER_TIMER_COMP0_LOAD_V << SYSTIMER_TIMER_COMP0_LOAD_S)
#define SYSTIMER_TIMER_COMP0_LOAD_V  0x00000001U
#define SYSTIMER_TIMER_COMP0_LOAD_S  0

/** SYSTIMER_COMP1_LOAD_REG register
 *  system timer comp1 conf sync register
 */
#define SYSTIMER_COMP1_LOAD_REG (DR_REG_SYSTIMER_BASE + 0x54)
/** SYSTIMER_TIMER_COMP1_LOAD : WT; bitpos: [0]; default: 0;
 *  timer comp1 sync enable signal
 */
#define SYSTIMER_TIMER_COMP1_LOAD    (BIT(0))
#define SYSTIMER_TIMER_COMP1_LOAD_M  (SYSTIMER_TIMER_COMP1_LOAD_V << SYSTIMER_TIMER_COMP1_LOAD_S)
#define SYSTIMER_TIMER_COMP1_LOAD_V  0x00000001U
#define SYSTIMER_TIMER_COMP1_LOAD_S  0

/** SYSTIMER_COMP2_LOAD_REG register
 *  system timer comp2 conf sync register
 */
#define SYSTIMER_COMP2_LOAD_REG (DR_REG_SYSTIMER_BASE + 0x58)
/** SYSTIMER_TIMER_COMP2_LOAD : WT; bitpos: [0]; default: 0;
 *  timer comp2 sync enable signal
 */
#define SYSTIMER_TIMER_COMP2_LOAD    (BIT(0))
#define SYSTIMER_TIMER_COMP2_LOAD_M  (SYSTIMER_TIMER_COMP2_LOAD_V << SYSTIMER_TIMER_COMP2_LOAD_S)
#define SYSTIMER_TIMER_COMP2_LOAD_V  0x00000001U
#define SYSTIMER_TIMER_COMP2_LOAD_S  0

/** SYSTIMER_UNIT0_LOAD_REG register
 *  system timer unit0 conf sync register
 */
#define SYSTIMER_UNIT0_LOAD_REG (DR_REG_SYSTIMER_BASE + 0x5c)
/** SYSTIMER_TIMER_UNIT0_LOAD : WT; bitpos: [0]; default: 0;
 *  timer unit0 sync enable signal
 */
#define SYSTIMER_TIMER_UNIT0_LOAD    (BIT(0))
#define SYSTIMER_TIMER_UNIT0_LOAD_M  (SYSTIMER_TIMER_UNIT0_LOAD_V << SYSTIMER_TIMER_UNIT0_LOAD_S)
#define SYSTIMER_TIMER_UNIT0_LOAD_V  0x00000001U
#define SYSTIMER_TIMER_UNIT0_LOAD_S  0

/** SYSTIMER_UNIT1_LOAD_REG register
 *  system timer unit1 conf sync register
 */
#define SYSTIMER_UNIT1_LOAD_REG (DR_REG_SYSTIMER_BASE + 0x60)
/** SYSTIMER_TIMER_UNIT1_LOAD : WT; bitpos: [0]; default: 0;
 *  timer unit1 sync enable signal
 */
#define SYSTIMER_TIMER_UNIT1_LOAD    (BIT(0))
#define SYSTIMER_TIMER_UNIT1_LOAD_M  (SYSTIMER_TIMER_UNIT1_LOAD_V << SYSTIMER_TIMER_UNIT1_LOAD_S)
#define SYSTIMER_TIMER_UNIT1_LOAD_V  0x00000001U
#define SYSTIMER_TIMER_UNIT1_LOAD_S  0

/** SYSTIMER_INT_ENA_REG register
 *  systimer interrupt enable register
 */
#define SYSTIMER_INT_ENA_REG (DR_REG_SYSTIMER_BASE + 0x64)
/** SYSTIMER_TARGET0_INT_ENA : R/W; bitpos: [0]; default: 0;
 *  interupt0 enable
 */
#define SYSTIMER_TARGET0_INT_ENA    (BIT(0))
#define SYSTIMER_TARGET0_INT_ENA_M  (SYSTIMER_TARGET0_INT_ENA_V << SYSTIMER_TARGET0_INT_ENA_S)
#define SYSTIMER_TARGET0_INT_ENA_V  0x00000001U
#define SYSTIMER_TARGET0_INT_ENA_S  0
/** SYSTIMER_TARGET1_INT_ENA : R/W; bitpos: [1]; default: 0;
 *  interupt1 enable
 */
#define SYSTIMER_TARGET1_INT_ENA    (BIT(1))
#define SYSTIMER_TARGET1_INT_ENA_M  (SYSTIMER_TARGET1_INT_ENA_V << SYSTIMER_TARGET1_INT_ENA_S)
#define SYSTIMER_TARGET1_INT_ENA_V  0x00000001U
#define SYSTIMER_TARGET1_INT_ENA_S  1
/** SYSTIMER_TARGET2_INT_ENA : R/W; bitpos: [2]; default: 0;
 *  interupt2 enable
 */
#define SYSTIMER_TARGET2_INT_ENA    (BIT(2))
#define SYSTIMER_TARGET2_INT_ENA_M  (SYSTIMER_TARGET2_INT_ENA_V << SYSTIMER_TARGET2_INT_ENA_S)
#define SYSTIMER_TARGET2_INT_ENA_V  0x00000001U
#define SYSTIMER_TARGET2_INT_ENA_S  2

/** SYSTIMER_INT_RAW_REG register
 *  systimer interrupt raw register
 */
#define SYSTIMER_INT_RAW_REG (DR_REG_SYSTIMER_BASE + 0x68)
/** SYSTIMER_TARGET0_INT_RAW : R/WTC/SS; bitpos: [0]; default: 0;
 *  interupt0 raw
 */
#define SYSTIMER_TARGET0_INT_RAW    (BIT(0))
#define SYSTIMER_TARGET0_INT_RAW_M  (SYSTIMER_TARGET0_INT_RAW_V << SYSTIMER_TARGET0_INT_RAW_S)
#define SYSTIMER_TARGET0_INT_RAW_V  0x00000001U
#define SYSTIMER_TARGET0_INT_RAW_S  0
/** SYSTIMER_TARGET1_INT_RAW : R/WTC/SS; bitpos: [1]; default: 0;
 *  interupt1 raw
 */
#define SYSTIMER_TARGET1_INT_RAW    (BIT(1))
#define SYSTIMER_TARGET1_INT_RAW_M  (SYSTIMER_TARGET1_INT_RAW_V << SYSTIMER_TARGET1_INT_RAW_S)
#define SYSTIMER_TARGET1_INT_RAW_V  0x00000001U
#define SYSTIMER_TARGET1_INT_RAW_S  1
/** SYSTIMER_TARGET2_INT_RAW : R/WTC/SS; bitpos: [2]; default: 0;
 *  interupt2 raw
 */
#define SYSTIMER_TARGET2_INT_RAW    (BIT(2))
#define SYSTIMER_TARGET2_INT_RAW_M  (SYSTIMER_TARGET2_INT_RAW_V << SYSTIMER_TARGET2_INT_RAW_S)
#define SYSTIMER_TARGET2_INT_RAW_V  0x00000001U
#define SYSTIMER_TARGET2_INT_RAW_S  2

/** SYSTIMER_INT_CLR_REG register
 *  systimer interrupt clear register
 */
#define SYSTIMER_INT_CLR_REG (DR_REG_SYSTIMER_BASE + 0x6c)
/** SYSTIMER_TARGET0_INT_CLR : WT; bitpos: [0]; default: 0;
 *  interupt0 clear
 */
#define SYSTIMER_TARGET0_INT_CLR    (BIT(0))
#define SYSTIMER_TARGET0_INT_CLR_M  (SYSTIMER_TARGET0_INT_CLR_V << SYSTIMER_TARGET0_INT_CLR_S)
#define SYSTIMER_TARGET0_INT_CLR_V  0x00000001U
#define SYSTIMER_TARGET0_INT_CLR_S  0
/** SYSTIMER_TARGET1_INT_CLR : WT; bitpos: [1]; default: 0;
 *  interupt1 clear
 */
#define SYSTIMER_TARGET1_INT_CLR    (BIT(1))
#define SYSTIMER_TARGET1_INT_CLR_M  (SYSTIMER_TARGET1_INT_CLR_V << SYSTIMER_TARGET1_INT_CLR_S)
#define SYSTIMER_TARGET1_INT_CLR_V  0x00000001U
#define SYSTIMER_TARGET1_INT_CLR_S  1
/** SYSTIMER_TARGET2_INT_CLR : WT; bitpos: [2]; default: 0;
 *  interupt2 clear
 */
#define SYSTIMER_TARGET2_INT_CLR    (BIT(2))
#define SYSTIMER_TARGET2_INT_CLR_M  (SYSTIMER_TARGET2_INT_CLR_V << SYSTIMER_TARGET2_INT_CLR_S)
#define SYSTIMER_TARGET2_INT_CLR_V  0x00000001U
#define SYSTIMER_TARGET2_INT_CLR_S  2

/** SYSTIMER_INT_ST_REG register
 *  systimer interrupt status register
 */
#define SYSTIMER_INT_ST_REG (DR_REG_SYSTIMER_BASE + 0x70)
/** SYSTIMER_TARGET0_INT_ST : RO; bitpos: [0]; default: 0;
 *  interupt0 status
 */
#define SYSTIMER_TARGET0_INT_ST    (BIT(0))
#define SYSTIMER_TARGET0_INT_ST_M  (SYSTIMER_TARGET0_INT_ST_V << SYSTIMER_TARGET0_INT_ST_S)
#define SYSTIMER_TARGET0_INT_ST_V  0x00000001U
#define SYSTIMER_TARGET0_INT_ST_S  0
/** SYSTIMER_TARGET1_INT_ST : RO; bitpos: [1]; default: 0;
 *  interupt1 status
 */
#define SYSTIMER_TARGET1_INT_ST    (BIT(1))
#define SYSTIMER_TARGET1_INT_ST_M  (SYSTIMER_TARGET1_INT_ST_V << SYSTIMER_TARGET1_INT_ST_S)
#define SYSTIMER_TARGET1_INT_ST_V  0x00000001U
#define SYSTIMER_TARGET1_INT_ST_S  1
/** SYSTIMER_TARGET2_INT_ST : RO; bitpos: [2]; default: 0;
 *  interupt2 status
 */
#define SYSTIMER_TARGET2_INT_ST    (BIT(2))
#define SYSTIMER_TARGET2_INT_ST_M  (SYSTIMER_TARGET2_INT_ST_V << SYSTIMER_TARGET2_INT_ST_S)
#define SYSTIMER_TARGET2_INT_ST_V  0x00000001U
#define SYSTIMER_TARGET2_INT_ST_S  2

/** SYSTIMER_REAL_TARGET0_LO_REG register
 *  system timer comp0 actual target value low register
 */
#define SYSTIMER_REAL_TARGET0_LO_REG (DR_REG_SYSTIMER_BASE + 0x74)
/** SYSTIMER_TARGET0_LO_RO : RO; bitpos: [31:0]; default: 0;
 *  actual target value value low 32bits
 */
#define SYSTIMER_TARGET0_LO_RO    0xFFFFFFFFU
#define SYSTIMER_TARGET0_LO_RO_M  (SYSTIMER_TARGET0_LO_RO_V << SYSTIMER_TARGET0_LO_RO_S)
#define SYSTIMER_TARGET0_LO_RO_V  0xFFFFFFFFU
#define SYSTIMER_TARGET0_LO_RO_S  0

/** SYSTIMER_REAL_TARGET0_HI_REG register
 *  system timer comp0 actual target value high register
 */
#define SYSTIMER_REAL_TARGET0_HI_REG (DR_REG_SYSTIMER_BASE + 0x78)
/** SYSTIMER_TARGET0_HI_RO : RO; bitpos: [19:0]; default: 0;
 *  actual target value value high 20bits
 */
#define SYSTIMER_TARGET0_HI_RO    0x000FFFFFU
#define SYSTIMER_TARGET0_HI_RO_M  (SYSTIMER_TARGET0_HI_RO_V << SYSTIMER_TARGET0_HI_RO_S)
#define SYSTIMER_TARGET0_HI_RO_V  0x000FFFFFU
#define SYSTIMER_TARGET0_HI_RO_S  0

/** SYSTIMER_REAL_TARGET1_LO_REG register
 *  system timer comp1 actual target value low register
 */
#define SYSTIMER_REAL_TARGET1_LO_REG (DR_REG_SYSTIMER_BASE + 0x7c)
/** SYSTIMER_TARGET1_LO_RO : RO; bitpos: [31:0]; default: 0;
 *  actual target value value low 32bits
 */
#define SYSTIMER_TARGET1_LO_RO    0xFFFFFFFFU
#define SYSTIMER_TARGET1_LO_RO_M  (SYSTIMER_TARGET1_LO_RO_V << SYSTIMER_TARGET1_LO_RO_S)
#define SYSTIMER_TARGET1_LO_RO_V  0xFFFFFFFFU
#define SYSTIMER_TARGET1_LO_RO_S  0

/** SYSTIMER_REAL_TARGET1_HI_REG register
 *  system timer comp1 actual target value high register
 */
#define SYSTIMER_REAL_TARGET1_HI_REG (DR_REG_SYSTIMER_BASE + 0x80)
/** SYSTIMER_TARGET1_HI_RO : RO; bitpos: [19:0]; default: 0;
 *  actual target value value high 20bits
 */
#define SYSTIMER_TARGET1_HI_RO    0x000FFFFFU
#define SYSTIMER_TARGET1_HI_RO_M  (SYSTIMER_TARGET1_HI_RO_V << SYSTIMER_TARGET1_HI_RO_S)
#define SYSTIMER_TARGET1_HI_RO_V  0x000FFFFFU
#define SYSTIMER_TARGET1_HI_RO_S  0

/** SYSTIMER_REAL_TARGET2_LO_REG register
 *  system timer comp2 actual target value low register
 */
#define SYSTIMER_REAL_TARGET2_LO_REG (DR_REG_SYSTIMER_BASE + 0x84)
/** SYSTIMER_TARGET2_LO_RO : RO; bitpos: [31:0]; default: 0;
 *  actual target value value low 32bits
 */
#define SYSTIMER_TARGET2_LO_RO    0xFFFFFFFFU
#define SYSTIMER_TARGET2_LO_RO_M  (SYSTIMER_TARGET2_LO_RO_V << SYSTIMER_TARGET2_LO_RO_S)
#define SYSTIMER_TARGET2_LO_RO_V  0xFFFFFFFFU
#define SYSTIMER_TARGET2_LO_RO_S  0

/** SYSTIMER_REAL_TARGET2_HI_REG register
 *  system timer comp2 actual target value high register
 */
#define SYSTIMER_REAL_TARGET2_HI_REG (DR_REG_SYSTIMER_BASE + 0x88)
/** SYSTIMER_TARGET2_HI_RO : RO; bitpos: [19:0]; default: 0;
 *  actual target value value high 20bits
 */
#define SYSTIMER_TARGET2_HI_RO    0x000FFFFFU
#define SYSTIMER_TARGET2_HI_RO_M  (SYSTIMER_TARGET2_HI_RO_V << SYSTIMER_TARGET2_HI_RO_S)
#define SYSTIMER_TARGET2_HI_RO_V  0x000FFFFFU
#define SYSTIMER_TARGET2_HI_RO_S  0

/** SYSTIMER_DATE_REG register
 *  system timer version control register
 */
#define SYSTIMER_DATE_REG (DR_REG_SYSTIMER_BASE + 0xfc)
/** SYSTIMER_DATE : R/W; bitpos: [31:0]; default: 35655795;
 *  systimer register version
 */
#define SYSTIMER_DATE    0xFFFFFFFFU
#define SYSTIMER_DATE_M  (SYSTIMER_DATE_V << SYSTIMER_DATE_S)
#define SYSTIMER_DATE_V  0xFFFFFFFFU
#define SYSTIMER_DATE_S  0

#ifdef __cplusplus
}
#endif
