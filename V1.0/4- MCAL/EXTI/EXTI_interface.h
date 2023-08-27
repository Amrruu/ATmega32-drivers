#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_
#include "LSTD_types.h"

void EXTI_voidINT0Init(void);
void EXTI_voidINT1Init(void);
void EXTI_voidINT2Init(void);
void EXTI_u8INT0SetSenseControl(u8 copy_u8Sense);
void EXTI_u8INT1SetSenseControl(u8 copy_u8Sense);
void EXTI_u8INT2SetSenseControl(u8 copy_u8Sense);

void EXTI_u8INTEnable(u8 copy_u8Sense);
void EXTI_u8INTDISABLE(u8 copy_u8Sense);

void EXTI_voidINT0SetCallBack(void (*INT0)(void));
#endif