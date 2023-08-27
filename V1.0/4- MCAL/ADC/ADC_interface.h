#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_
#include "LSTD_types.h"
#include "ADC_registers.h"


void ADC_voidInit(void);
u8 ADC_u8GetChannelReading(u8 Copy_u8Reading);



#endif