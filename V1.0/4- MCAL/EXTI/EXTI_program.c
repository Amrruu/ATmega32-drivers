
#include "MDIO_interface.h"
#include "EXTI_interface.h"
#include "EXTI_registers.h"
#include "EXTI_private.h"
#include "EXTI_config.h"
#include "LBIT_math.h"

void EXTI_voidINT0Init(void)
{
/*check sense control*/
#if INT0_SENSE == LOW_LEVEL
  CLEAR_BIT(MCUCR, MCUCR_ISC00);
  CLEAR_BIT(MCUCR, MCUCR_ISC01);

#elif INT0_SENSE == ON_CHANGE
  SET_BIT(MCUCR, MCUCR_ISC00);
  CLEAR_BIT(MCUCR, MCUCR_ISC01);

#elif INT0_SENSE == FALLING_EDGE
  CLEAR_BIT(MCUCR, MCUCR_ISC00);
  SET_BIT(MCUCR, MCUCR_ISC01);

#elif INT0_SENSE == RISING_EDGE
  CLEAR_BIT(MCUCR, MCUCR_ISC00);
  SET_BIT(MCUCR, MCUCR_ISC01);

#else
#error "Wrong INT0_SENSE configuration option"
#endif
/*check peripheral interrupt enable initial state*/
#if INT0_INITIAL_STATE == ENABLED
  SET_BIT(GICR, GICR_INT0);

#elif INT0_INITIAL_STATE == DISABLED
  CLEAR_BIT(GICR, GICR_INT0);

#else
#error "Wrong INT0_INITAL_STATE configuration option"
#endif
}
void EXTI_voidINT1Init(void);
void EXTI_voidINT2Init(void);

// USING POST_BUILD_CONFIG
void EXTI_u8INT0SetSenseControl(u8 copy_u8Sense)
{
  if (copy_u8Sense == LOW_LEVEL)
  {
    CLEAR_BIT(MCUCR, MCUCR_ISC00);
    CLEAR_BIT(MCUCR, MCUCR_ISC01);
  }
  else if (copy_u8Sense == ON_CHANGE)
  {
    SET_BIT(MCUCR, MCUCR_ISC00);
    CLEAR_BIT(MCUCR, MCUCR_ISC01);
  }
  else if (copy_u8Sense == FALLING_EDGE)
  {
    CLEAR_BIT(MCUCR, MCUCR_ISC00);
    SET_BIT(MCUCR, MCUCR_ISC01);
  }
  else if (copy_u8Sense == RISING_EDGE)
  {
    CLEAR_BIT(MCUCR, MCUCR_ISC00);
    SET_BIT(MCUCR, MCUCR_ISC01);
  }
}
