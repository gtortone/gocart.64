#ifndef DEBUG_H
#define DEBUG_H

#ifdef DEBUG

// enable UART console on GC_DBG_UART_ID (GC_DBG_UART_TX_PIN / GC_DBG_UART_RX_PIN)
#define PICO_UART_CONSOLE

#endif      // DEBUG

#endif
