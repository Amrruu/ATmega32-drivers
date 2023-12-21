#ifndef SPI_REGISTERS_H_
#define SPI_REGISTERS_H_

#define SPDR            *((volatile u8*)0x2F)

#define SPSR            *((volatile u8*)0x2E) /* SPI status register*/
#define SPSR_SPIE       0                   /*SPI interrupt flag*/
#define SPSR_SPI2X      7                   /*Prescaler bit 2*/

#define SPCR            *((volatile u8*)0x2D)   /*SPI control register*/
#define SPCR_SPE         6                      /*SPI enable*/
#define SPCR_MSTR        4                      /*Master bit*/
#define SPCR_SPR1        1                      /*Prescaler bit 1*/  
#define SPCR_SPR2        0                      /*Prescaler bit 0*/





#endif