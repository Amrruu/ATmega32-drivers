#include <util/delay.h>
#include "LSTD_types.h"
#include "LBIT_math.h"
#include "MDIO_interface.h"
#include "CLCD_interface.h"

void CLCD_voidSendCommand(u8 Copy_u8Command)
{

	/* Set the RS to send command */
	MDIO_stderrSetPinValue(CLCD_CTRL_PORT, CLCD_RS_PIN, MDIO_LOW);
	/* Set the RW to send command */
	MDIO_stderrSetPinValue(CLCD_CTRL_PORT, CLCD_RW_PIN, MDIO_LOW);
	/*send the command to LCD */
	MDIO_stderrSetPortValue(CLCD_DATA_PORT, Copy_u8Command);
	/* Sending a pulse on E pin */
	MDIO_stderrSetPinValue(CLCD_CTRL_PORT, CLCD_E_PIN, MDIO_HIGH);
	_delay_ms(2);
	MDIO_stderrSetPinValue(CLCD_CTRL_PORT, CLCD_E_PIN, MDIO_LOW);
}

void CLCD_voidSendData(u8 Copy_u8Data)
{
	/* Set the RS to send command */
	MDIO_stderrSetPinValue(CLCD_CTRL_PORT, CLCD_RS_PIN, MDIO_HIGH);
	/* Set the RW to send command */
	MDIO_stderrSetPinValue(CLCD_CTRL_PORT, CLCD_RW_PIN, MDIO_LOW);
	/*send the command to LCD */
	MDIO_stderrSetPortValue(CLCD_DATA_PORT, Copy_u8Data);
	/* Sending a pulse on E pin */
	MDIO_stderrSetPinValue(CLCD_CTRL_PORT, CLCD_E_PIN, MDIO_HIGH);
	_delay_ms(2);
	MDIO_stderrSetPinValue(CLCD_CTRL_PORT, CLCD_E_PIN, MDIO_LOW);
}

void CLCD_voidInit(void)
{
	_delay_ms(40);

	/*Function set command: 2 lines, 5*8 Font size*/
	CLCD_voidSendCommand(0b00111000);

	/*Display on off control: display enable, disable cursor, no blink cursor*/
	CLCD_voidSendCommand(0b00001100);

	/*Clear display*/
	CLCD_voidSendCommand(1);
}

void CLCD_voidSendString(const char *Copy_pcString)
{
	u8 local_u8Counter = 0;
	while (Copy_pcString[local_u8Counter] != '\0')
	{
		CLCD_voidSendData(Copy_pcString[local_u8Counter]);
		local_u8Counter++;
	}
}

void CLCD_voidGoToXY(u8 Copy_u8XPos, u8 Copy_u8YPos)
{
	u8 local_u8Address = 0;
	if (Copy_u8XPos == 0)
	{
		local_u8Address = Copy_u8YPos;
	}
	else if (Copy_u8XPos == 1)
	{
		local_u8Address = Copy_u8YPos + 0x40;
	}

	// command = 0x80 + u8Ypos+ (u8Xpos*4 << 4) ->> send command

	CLCD_voidSendCommand(local_u8Address + 128);
}

void CLCD_voidWriteSpecialCharacter(u8 *Copy_pu8Pattern, u8 Copy_u8PatternNumber, u8 Copy_u8XPos, u8 Copy_u8YPos)
{
	u8 local_u8CGRAMAddress = 0;
	u8 local_u8Iterator;

	/*Calculate the CGRAM ADDRESS*/
	local_u8CGRAMAddress = Copy_u8PatternNumber * 8;

	/*Send CG Ram address command to LCD, with setting bit 6, clearing bit 7  */
	CLCD_voidSendCommand(local_u8CGRAMAddress + 64);

	for (local_u8Iterator = 0; local_u8Iterator < 8; local_u8Iterator++)
	{
		CLCD_voidSendData(Copy_pu8Pattern[local_u8Iterator]);
	}
	/*go back to DDRAM to display the pattern */
	CLCD_voidGoToXY(Copy_u8XPos, Copy_u8YPos);

	/* Display the pattern written in the CG RAM */
	CLCD_voidSendData(Copy_u8PatternNumber);
}
