/*
 * Copyright 2024, 2026 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */


#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
    kPIN_MUX_DirectionInput = 0U,        /* Input direction */
    kPIN_MUX_DirectionOutput = 1U,       /* Output direction */
    kPIN_MUX_DirectionInputOrOutput = 2U /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif


#define SOPT5_LPUART0RXSRC_LPUART_RX 0x00u /*!<@brief LPUART0 Receive Data Source Select: LPUART_RX pin */

void BOARD_InitBootPins(void);
/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/*!
 *
 */
void BOARD_I2C_ConfigurePins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void);
/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_TX_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_TX_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_TX_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTB2 (number 14), PTB2/J1[2]/J5[3]
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_RX_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_RX_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_RX_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                     /* @} */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
