#ifndef USART_INTERFACE_H_
#define USART_INTERFACE_H_

#include "LSTD_types.h"
#include "TIMER_registers.h"

void TIMER0_voidInit(void);
u8 TIMER0_u8SetCallBack(void (*Copy_PVCallBackFunc)(void));

#endif