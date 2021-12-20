/*
 * dio_registers.h
 *
 *  Created on: Oct 2, 2021
 *      Author: Abdurrahman Mohamed
 */

#ifndef DIO_REGISTERS_H_
#define DIO_REGISTERS_H_

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/*GPIO registers adresses*/

#define PORTA_REG *((volatile char*)0x3B)
#define DDRA_REG  *((volatile char*)0x3A)
#define PINA_REG  *((volatile char*)0x39)

#define PORTB_REG *((volatile char*)0x38)
#define DDRB_REG  *((volatile char*)0x37)
#define PINB_REG  *((volatile char*)0x36)

#define PORTC_REG *((volatile char*)0x35)
#define DDRC_REG  *((volatile char*)0x34)
#define PINC_REG  *((volatile char*)0x33)

#define PORTD_REG *((volatile char*)0x32)
#define DDRD_REG  *((volatile char*)0x31)
#define PIND_REG  *((volatile char*)0x30)



#endif /* DIO_REGISTERS_H_ */
