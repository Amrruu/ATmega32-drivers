#include "LSTD_types.h"
#include "LBIT_math.h"

#include "TIMER_interface.h"
#include "TIMER_config.h"
#include "TIMER_private.h"
#include "TIMER_registers.h"

void TIMER0_voidInit(void)
{
}
u8 TIMER0_u8SetCallBack(void (*Copy_PVCallBackFunc)(void))
{
}

typedef struct
{
  u8 *Channel;
  u16 *Result;
  u8 size;
  void (*NotificationFunc)(void);
} chain_t;

static u8 *ADC_pu8ChainChannelArr = NULL;  /*Global variable to carry chain array*/
static u8 ADC_u8ChainSize;                 /*Global variable to carry chain size*/
static u16 *ADC_pu16ChainResultArr = NULL; /*Global variable to carry chain result*/
static void (*ADC_pvCallBackNotificationFunc)(void) = NULL;
static u8 ADC_u8ChainConversionIndex = 0;
static u8 ADC_u8ISRSource;

#define SINGLE_CHANNEL_ASYNCH 0
#define CHAIN_ASYNCH 1

u8 ADC_u8StartChainAsync(chain_t *Copy_chain)
{
  STD_error_t stdErr;
  u8 copy_u8BusyFuncFlag = IDLE;
  if (Copy_chain == NULL)
  {
    stdErr = E_NULL_POINTER;
  }
  else
  {
    if (copy_u8BusyFuncFlag == IDLE)
    {
      /*Make ADC BUSY*/
      copy_u8BusyFuncFlag = BUSY;

      /*Initialize Chain channel Array*/
      ADC_pu8ChainChannelArr = Copy_chain->Channel;

      /*Initialize Result Array */
      ADC_pu16ChainResultArr = Copy_chain->Result;

      /*Initialize Chain size*/
      ADC_u8ChainSize = Copy_chain->size;

      /*Initialize Notification function*/
      ADC_pvCallBackNotificationFunc = Copy_chain->NotificationFunc;

      /*Initialize current conversion index*/
      ADC_u8ChainConversionIndex = 0;

      /*Set required Channel*/
      ADMUX &= 0b11100000;
      ADMUX |= ADC_pu8ChainChannelArr[ADC_u8 ChainConversionIndex];

      /*Start conversion*/
      SET_BIT(ADCSRA, ADCSRA_ADSC);

      /*Enable conversion Complete interrupt*/
      SET_BIT(ADCSRA, ADCSRA_ADIE);
    }
    else
    {
      stdErr = BUSY_FUNC;
    }
  }
  return stdErr;
}

void __vector_16(void) __attribute__((signal));
void __vector_16(void)
{
}