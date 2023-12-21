#ifndef TWI_INTERFACE_H_
#define TWI_INTERFACE_H_

#include "LSTD_types.h"
#include "TWI_registers.h"

void TWI0_voidInit(void);
u8 TWI0_u8SetCallBack(void (*Copy_PVCallBackFunc)(void));

#endif