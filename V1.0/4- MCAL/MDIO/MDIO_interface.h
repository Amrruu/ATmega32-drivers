/************************************/
/*	Author	  :	Omar Morsy			*/
/*	SWC		  : DIO					*/
/*  Layer	  : MCAL				*/
/*	Version	  :	1.1		  			*/
/*	Date	  :	August 2, 2023		*/
/*	Last Edit :	August 3, 2023		*/
/************************************/

#ifndef _MDIO_INTERFACE_H_
#define _MDIO_INTERFACE_H_

#define MDIO_PORTA			1
#define MDIO_PORTB			2
#define MDIO_PORTC			3
#define MDIO_PORTD			4

#define MDIO_OUTPUT			1
#define MDIO_INPUT			2
#define MDIO_INPUT_PULLUP	3

#define MDIO_LOW			1
#define MDIO_HIGH			2

/* Port Access */
STD_error_t MDIO_stderrSetPortDirection(u8 ARG_u8Port, u8 ARG_u8Direction);
STD_error_t MDIO_stderrSetPortValue(u8 ARG_u8Port, u8 ARG_u8Value);
STD_error_t	MDIO_stderrGetPortValue(u8* ARG_u8pValue, u8 ARG_u8Port);

/* Pin Access */
STD_error_t MDIO_stderrSetPinDirection(u8 ARG_u8Port, u8 ARG_u8Pin, u8 ARG_u8Direction);
STD_error_t MDIO_stderrSetPinValue(u8 ARG_u8Port, u8 ARG_u8Pin, u8 ARG_u8Value);
STD_error_t MDIO_stderrGetPinValue(u8* ARG_u8pValue, u8 ARG_u8Port, u8 ARG_u8Pin);

#endif
