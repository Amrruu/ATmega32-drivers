#ifndef TWI_REGISTERS_H_
#define TWI_REGISTERS_H_

#define TWCR        *((volatile u8*)0x56) /*TWI control register*/
#define TWCR_TWINT  7                     /*Interrupt flag*/
#define TWCR_TWEA   6                     /*Enable Ack*/
#define TWCR_TWSTA  4                     /*Start Condition*/
#define TWCR_TWSTO  4                     /*Stop Condition*/
#define TWCR_TWWC   3                     /*Write Collision*/    
#define TWCR_TWEN   2                     /*Enable*/
#define TWCR_TWIE   0                     /*Interrupt enable*/
 

#define TWDR     *((volatile u8*)0x23)     /*TWI Data Register*/
#define TWAR      *((volatile u8*)0x22)     /*TWI Address Register*/
#define TWAR_TWGCE 0                        /*General call recognition Enable*/


#define TWSR      *((volatile u8*)0x21)     /*TWI Status Register*/
#define TWSR_TWPS0 0                        /*Prescaler Bit 0 */  
#define TWSR_TWPS1 1                        /*Prescaler Bit 1*/

#define TWBR      *((volatile u8*)0x20)
#endif