#include "LBIT_math.h"
#include "GIE_interface.h"
#include "MDIO_interface.h"
#include "GIE_register.h"

void GIE_voidEnable(void)
{
  SET_BIT(SREG, SREG_I);
}
void GIE_voidDisable(void)
{
  CLEAR_BIT(SREG, SREG_I);
}
