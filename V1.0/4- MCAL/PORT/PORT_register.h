#ifndef PORT_REGISTER_H_
#define PORT_REGISTER_H_

typedef struct
{
	const u8 PIN;
	u8 DDR;
	u8 PORT;
}GPIO_t;


#define GPIOA ((volatile GPIO_t*)(0x39))
#define GPIOB ((volatile GPIO_t*)(0x36))
#define GPIOC ((volatile GPIO_t*)(0x33))
#define GPIOD ((volatile GPIO_t*)(0x30))


#endif