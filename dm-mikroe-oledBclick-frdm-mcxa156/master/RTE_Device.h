/*
 * Copyright 2024, 2026 NXP
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _RTE_DEVICE_H
#define _RTE_DEVICE_H

extern void I2C3_InitPins();
extern void I2C3_DeinitPins();
/* Driver name mapping. */
/* User needs to provide the implementation of LPI2CX_GetFreq/LPI2CX_InitPins/LPI2CX_DeinitPins for the enabled LPI2C
 * instance. */
#define RTE_I2C3        1
#define RTE_I2C3_DMA_EN 0

/* LPI2C3 configuration. */
#define RTE_I2C3_Master_DMA_BASE DMA0
#define RTE_I2C3_Master_DMA_CH   3
#define RTE_I2C3_PIN_INIT        I2C3_InitPins
#define RTE_I2C3_PIN_DEINIT      I2C3_DeinitPins


#endif /* _RTE_DEVICE_H */
