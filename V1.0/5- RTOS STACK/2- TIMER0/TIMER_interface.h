#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

#include "LSTD_types.h"
#include "TIMER_registers.h"

#include "LSTD_types.h"
#include "TIMER_registers.h"

/* TIMER0 APIs*/
void TIMER0_voidInit(void);
void TIMER0_voidSetCompareMatchValue(u8 Copy_u8CompareMatchValue);

/* TIMER1 APIs*/
void TIMER1_voidInit(void);
void TIMER1_voidSetICR(u16 Copy_u16Top);
void TIMER1_voidSetTIMER1CHANNEL1CompareMatchValue(u16 Copy_u8CompareMatchValue);
void TIMER1_voidSetTimer1Value(u16 Copy_u16Value);
u16 TIMER1_voidGetTimer1Value(void);


/* ICU APIs* */
void ICU_voidInit(void);
void ICU_voidSetTriggerEdge(u8 Copy_u8Edge);
void ICU_voidInterruptEnable(void);
void ICU_voidInterruptDisable(void);
u8 ICU_u8SetCallBack(void (*Copy_PVCallBackFunc)(void));
u16 ICU_u16ICUReadValue();


u8 TIMER0_u8SetCallBack(void (*Copy_PVCallBackFunc)(void));

#endif