#ifndef KEYBAD_PROGRAM_H_
#define KEYBAD_PROGRAM_H_

#include "LSTD_types.h"
#include "Keybad_config.h"
#include "Keybad_private.h"
#include "Keybad_interface.h"

u8 KBD_u8GetPressedKey(void)
{
  u8 local_u8PressedKey = KBD_NO_PRESSED_KEY, local_u8ColumnIndex, local_u8RowIndex, local_u8PinState;

  static u8 local_u8KBDArr[ROW_NUM][COLUMN_NUM] = KBD_ARR_VAL;

  static u8 local_u8KBDColARR[COLUMN_NUM] = {KBD_COL0_PIN, KBD_COL1_PIN, KBD_COL2_PIN, KBD_COL3_PIN};

  static u8 local_u8KBDRowARR[ROW_NUM] = {KBD_ROW0_PIN, KBD_ROW1_PIN, KBD_ROW2_PIN, KBD_ROW3_PIN};

  for (local_u8ColumnIndex = 0; local_u8ColumnIndex < COLUMN_NUM; local_u8ColumnIndex++)
  {
    /*Activate the current column*/
    MDIO_stderrSetPinValue(KBD_PORT, local_u8KBDColARR[local_u8ColumnIndex], MDIO_LOW);

    for (local_u8RowIndex = 0; local_u8RowIndex < ROW_NUM; local_u8RowIndex++)
    {

      /*Read the current row*/

      MDIO_stderrGetPinValue(&local_u8PinState, KBD_PORT, local_u8KBDRowARR[local_u8RowIndex]);

      /*check if the switch is pressed*/

      if (local_u8PinState == MDIO_LOW)
      {
        local_u8PressedKey = local_u8KBDArr[local_u8RowIndex][local_u8ColumnIndex];

        /*Waiting for an event to occur- Polling or busy waiting until the key is released*/
        while (local_u8PinState == MDIO_LOW)
        {
          MDIO_stderrGetPinValue(&local_u8PinState, KBD_PORT, local_u8KBDRowARR[local_u8RowIndex]);
        }

        return local_u8PressedKey;
      }
    }
    /*Deactivate the current column*/
    MDIO_stderrSetPinValue(KBD_PORT, local_u8KBDColARR[local_u8ColumnIndex], MDIO_HIGH);
  }

  return local_u8PressedKey;
}

#endif
