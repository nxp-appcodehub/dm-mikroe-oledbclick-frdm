/*
 * Copyright 2024, 2026 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*${header:start}*/
#include "fsl_common.h"
#include "app.h"
#include "pin_mux.h"
#include "board.h"
#include "fsl_gpio.h"
#include "fsl_port.h"
/*${header:end}*/

/*${function:start}*/
void BOARD_InitHardware(void)
{
    BOARD_InitBootPins();
    BOARD_I2C_ConfigurePins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();
}
/*${function:end}*/
