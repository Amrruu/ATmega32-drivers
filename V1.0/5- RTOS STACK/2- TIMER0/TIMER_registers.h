#ifndef TIMER_REGISTERS_H_
#define TIMER_REGISTERS_H_
/*Registers for TIMER 0 */
#define TCCR0 *((volatile u8 *)0x53) /*TIMER0 CONTROL REGISTER*/
#define TCCR0_CS00 0                 /*CLOCK SOURCE SELECTION*/
#define TCCR0_CS01 1                 /*CLOCK SOURCE SELECTION*/
#define TCCR0_CS02 2                 /*CLOCK SOURCE SELECTION*/
#define TCCR0_WGM01 3                /*WAVEFORM GENERATION BIT 1*/
#define TCCR0_COM00 4                /*COMPARE OUTPUT MODE BIT 0*/
#define TCCR0_COM01 5                /*COMPARE OUTPUT MODE BIT 1*/
#define TCCR0_WGM00 6                /*WAVEFORM GENERATION BIT 0*/
#define TCCR0_FOC0 7                 /*FORCE OUTPUT COMPARE*/

#define TCNT0 *((volatile u8 *)0x52) /* Timer/Counter Register */

#define OCR0 *((volatile u8 *)0x5C) /* Output Compare Register */

#define TIMSK *((volatile u8 *)0x59) /* Timer/Counter Interrupt Mask Register */
#define TIMSK_TOIE 0
#define TIMSK_OCIE0 1

#define TIFR *((volatile u8 *)0x58) /* Timer/Counter Interrupt Flag Register */
#define TIFR_TOV0 0
#define TIFR_OCF0 1

/* Registers for TIMER 1 */
#define TCCR1A *((volatile u8 *)0x4F) /* Timer/Counter1 Control Register A */
#define TCCR1A_WGM10 0                /* Waveform Generation Mode bit 0*/
#define TCCR1A_WGM11 1                /* Waveform Generation Mode bit 1*/
#define TCCR1A_FOC1B 2                /* Force Output Compare for Compare unit B */
#define TCCR1A_FOC1A 3                /* Force Output Compare for Compare unit A */
#define TCCR1A_COM1B0 4               /* Compare Output Mode for Compare unit B Bit 4 */
#define TCCR1A_COM1B1 5               /* Compare Output Mode for Compare unit B Bit 5 */
#define TCCR1A_COM1A0 6               /* Compare Output Mode for Compare unit A Bit 6 */
#define TCCR1A_COM1A1 7               /* Compare Output Mode for Compare unit A Bit 7 */

#define TCCR1B *((volatile u8 *)0x4E) /* Timer/Counter1 Control Register B */
#define TCCR1B_CS10 0                 /* Clock Select Bit 0 */
#define TCCR1B_CS11 1                 /* Clock Select Bit 1 */
#define TCCR1B_CS12 2                 /* Clock Select Bit 2 */
#define TCCR1B_WGM12 3                /* Waveform Generation Mode bit 3 */
#define TCCR1B_WGM13 4                /* Waveform Generation Mode bit 4 */
#define TCCR1B_RESERVED 5             /* Unused bit */
#define TCCR1B_ICES1 6                /* Input Capture Edge Select bit 6 */
#define TCCR1B_ICNC1 7                /* Input Capture Noise Canceler bit 7 */

#define TCNT1 *((volatile u16 *)0x4C) /* Timer/Counter1 Registers Low and high */

#define OCR1A *((volatile u16 *)0x4A) /* Output Compare Register 1 A */

#define OCR1B *((volatile u16 *)0x48) /* Output Compare Register 1 B */

#define ICR1 *((volatile u16 *)0x46) /* Input Capture Register */

#define TIMSK_TOIE1 2  /* Timer/Counter1, Overflow Interrupt Enable */
#define TIMSK_OCIE1B 3 /* Timer/Counter1, Output Compare B Match Interrupt Enable */
#define TIMSK_OCIE1A 4 /* Timer/Counter1, Output Compare A Match Interrupt Enable */
#define TIMSK_TICIE1 5 /* Timer/Counter1, Input Capture Interrupt Enable */

#define TIFR_TOV1 2  /* Timer/Counter1, Overflow Flag */
#define TIFR_OCF1B 3 /* Timer/Counter1, Output Compare B Match Flag */
#define TIFR_OCF1A 4 /* Timer/Counter1, Output Compare A Match Flag */
#define TIFR_ICF1 5  /*  Timer/Counter1, Input Capture Flag */

#endif