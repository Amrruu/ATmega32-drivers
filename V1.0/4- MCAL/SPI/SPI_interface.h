#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

#include "LSTD_types.h"
#include "SPI_registers.h"

void SPI_voidInitMaster(void);
void SPI_voidInitSlave(void);
u8 SPI_voidInitTrancieve(u8 Copy_u8Data);



#endif