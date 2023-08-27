#ifndef CLCD_INTERFACE_H_
#define CLCD_INTERFACE_H_

#include "LSTD_types.h"
#include "CLCD_config.h"

void CLCD_voidSendCommand(u8 Copy_u8Command);

void CLCD_voidSendData(u8 Copy_u8Data);

void CLCD_voidInit(void);

void CLCD_voidSendString(const char *Copy_pcString);

void CLCD_voidGoToXY(u8 Copy_u8XPos, u8 Copy_u8YPos);
#endif
