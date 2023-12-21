#ifndef USART_CONFIG_H_
#define USART_CONFIG_H_


typedef struct{
  u8 characterSize;     /*data length according to @ref character size*/
  u8 baudRate;          /*baudRate according to @ref baud rate*/
  u8 stopBits;          /*data length according to @ref Stop bits*/
  u8 parityCheck;       /*data length according to @ref character size*/
  u8 transmitterEnable; /*Transmitter enable control according to @ref Transmitter enable*/
  u8 recieverEnable;    /*Reciever enable control according to @ref Reciever enable*/
  u8 interruptEnable;    
}USART_config_t;

/* @ref character size bit 1, 2 in UCSRC register*/
#define FIVE_BITS             0b00
#define SIX_BITS              0b01
#define SEVEN_BITS            0b10
#define EIGHT_BITS            0b11
#define NINE_BITS             0b11

/* @ref baud rate in UBRRH register*/  
#define BAUDRATE_2400         207
#define BAUDRATE_4800         103
#define BAUDRATE_9600         51
#define BAUDRATE_14400        34
#define BAUDRATE_19200        25
#define BAUDRATE_28800        16
#define BAUDRATE_38400        12
#define BAUDRATE_57600        8
#define BAUDRATE_76800        6
#define BAUDRATE_115200       3
#define BAUDRATE_230400       1

/*@ref Stop bits selection in bit 3 in USCRC register*/
#define ONE_STOP_BIT          0
#define TWO_STOP_BIT          1

/*@ref Parity Check selection in bits 4,5 in USCRC register*/
#define PARITY_DISABLED       0b00
#define PARITY_EVEN           0b01
#define PARITY_ODD            0b11

/*@ref Transmitter enable in bit 3 in UCSRB*/
#define TRANSMITTER_ENABLE      1
#define TRANSMITTER_DISABLE     0

/*@ref Transmitter enable in bit 4 in UCSRB*/
#define RECIEVER_ENABLE      1
#define RECIEVER_DISABLE     0


#endif