#include "LSTD_types.h"
#include "PORT_config.h"
#include "PORT_private.h"
#include "PORT_interface.h"
#include "PORT_register.h"
void PORT_voidInit(void)
{
  GPIOA->DDR = PORTA_DIR;
  GPIOB->DDR = PORTB_DIR;
  GPIOC->DDR = PORTC_DIR;
  GPIOD->DDR = PORTD_DIR;

  GPIOA->PORT = PORTA_INITVALUE;
  GPIOB->PORT = PORTB_INITVALUE;
  GPIOC->PORT = PORTC_INITVALUE;
  GPIOD->PORT = PORTD_INITVALUE;
}