#include "LSTD_types.h"
#include "LBIT_math.h"

#include "ADC_interface.h"
#include "ADC_config.h"
#include "ADC_private.h"
#include "ADC_registers.h"

void ADC_voidInit(void)
{
  /*AVCC as reference voltage*/
  SET_BIT(ADMUX, ADMUX_REFS0);
  CLEAR_BIT(ADMUX, ADMUX_REFS1);

  /*Activate Left adjust result*/
  SET_BIT(ADMUX, ADMUX_ADLAR);

  /*ٍset the prescaler to divide by 128*/
  SET_BIT(ADCSRA, ADCSRA_ADPS2);
  SET_BIT(ADCSRA, ADCSRA_ADPS1);
  SET_BIT(ADCSRA, ADCSRA_ADPS0);

  /*Enable peripheral*/
  SET_BIT(ADCSRA, ADCSRA_ADEN);
}

u8 ADC_u8GetChannelReading(u8 Copy_u8Reading)
{
  u8 ADMUX = 0b11100000;

  /*selecting the ADC channel*/
  ADMUX |= Copy_u8Reading;

  /* polling on the conversion complete flag */
  while ((GET_BIT(ADCSRA, ADCSRA_ADIF)) == 0)
    ;

  /*clear the flag bit by setting it to 1 */
  SET_BIT(ADCSRA, ADCSRA_ADIF);

  /*Returning the reading*/
  return ADCH;
}
