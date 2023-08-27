#ifndef KEYBAD_CONFIG_H_
#define KEYBAD_CONFIG_H_

#include "MDIO_interface.h"

#define KBD_PORT						MDIO_PORTA
#define KBD_ROW0_PIN					MDIO_PIN0
#define KBD_ROW1_PIN					MDIO_PIN1
#define KBD_ROW2_PIN					MDIO_PIN2
#define KBD_ROW3_PIN					MDIO_PIN3
#define KBD_COL0_PIN					MDIO_PIN4
#define KBD_COL1_PIN					MDIO_PIN5
#define KBD_COL2_PIN					MDIO_PIN6
#define KBD_COL3_PIN					MDIO_PIN7



#define KBD_NO_PRESSED_KEY				0xFF
#define KBD_ARR_VAL						{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}

#endif
