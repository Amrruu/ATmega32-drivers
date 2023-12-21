#ifndef USART_PRIVATE_H_
#define USART_PRIVATE_H_


#define START_ACK       0X08 /*start has been sent*/
#define REP_START_ACk   0X10 /*repeated start*/
#define SLAVE_ADD_AND_WR_ACK  0X18 /*Master transmit (slave address + write reques) ACK*/
#define SLAVE_ADD_AND_RD_ACK  0X40/*Master transmit (slave address + read reques) ACK*/
#define MSTR_WR_BYTE_ACK  0X28 /*master transmit data ACK*/
#define MSTR_RD_BYTE_WITH_ACK  0X50 /* Master received data with ACK*/
#define MSTR_RD_BYTE_WITH_NACK  0X58 /* Master received data with NACK*/
#define SLAVE_ADD_RCVD_RD_REQ   0XA8 /*means that slave address is received with read request*/
#define SLAVE_ADD_RCVD_WR_REQ   0X60 /*means that slave address is received with write request*/
#define SLAVE_DATA_RECEIVED   0X80 /*means that a byte is received*/
#define SLAVE_DATA_TRANSMITTED   0XB8 /*means that the written byte is transmitted*/


#endif