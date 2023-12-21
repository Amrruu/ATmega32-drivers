#ifndef USART_REGISTERS_H_
#define USART_REGISTERS_H_

#define USART_UDR       *((volatile u8*)0x2C)  

#define USART_UCSRA     *((volatile u8*)0x2B)

#define UCSRA_RXC         7
#define UCSRA_TXC         6
#define UCSRA_UDRE        5
#define UCSRA_FE          4
#define UCSRA_DOR         3
#define UCSRA_PE          2
#define UCSRA_U2X         1
#define UCSRA_MPCM        0

#define USART_UCSRB     *((volatile u8*)0x2A)  
#define UCSRB_RXCIE     7     
#define UCSRB_TXCIE     6    
#define UCSRB_UDRIE     5    
#define UCSRB_RXEN      4   
#define UCSRB_TXEN      3   
#define UCSRB_UCSZ2     2    
#define UCSRB_RXB8      1   
#define UCSRB_TXB8      0   

#define USART_UBRRL     *((volatile u8*)0x29)  




#endif