#ifndef ADC_REGISTERS_H_
#define ADC_REGISTERS_H_


#define ADMUX          		 *((volatile u8*)0x27)
#define ADMUX_REFS1           7             //ADC multiplexer selection regeister
#define ADMUX_REFS0           6             //Reference selection bit1
#define ADMUX_ADLAR           5             //Reference selection bit0
                                            //ADC left adjust result

#define ADCSRA       	   *((volatile u8*)0x26)    //ADC control and status register A
#define ADCSRA_ADEN         7                   //ADC enable
#define ADCSRA_ADSC         6                   //Start conversion
#define ADCSRA_ADATE        5                   //Auto trigger enable
#define ADCSRA_ADIF         4                   //Interrupt flag
#define ADCSRA_ADIE         3                   //Interrupt enable
#define ADCSRA_ADPS2        2                   //prescaler bit2
#define ADCSRA_ADPS1        1                   //prescaler bit1
#define ADCSRA_ADPS0        0                   //prescaler bit0


#define ADCH           *((volatile u8*)0x25)     //ADC high register
#define ADCL           *((volatile u8*)0x24)     //ADC Low register

#endif