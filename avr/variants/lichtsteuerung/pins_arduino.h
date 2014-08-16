#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <avr/pgmspace.h>

#define PA 1
#define PB 2
#define PC 3
#define PD 4
#define PE 5
#define PF 6
#define PG 7

#define NUM_DIGITAL_PINS 			53
#define NUM_ANALOG_INPUTS           0	// This is not correct, however, we don't use any analog inputs so far

static const uint8_t SS   = 53;
static const uint8_t MOSI = 51;
static const uint8_t MISO = 50;
static const uint8_t SCK  = 52;

static const uint8_t A0 = 40;
static const uint8_t A1 = 41;
static const uint8_t A2 = 42;
static const uint8_t A3 = 43;
static const uint8_t A4 = 44;
static const uint8_t A5 = 45;
static const uint8_t A6 = 46;
static const uint8_t A7 = 47;

static const uint8_t SDA = 26;
static const uint8_t SCL = 25;

#ifdef ARDUINO_MAIN

const uint16_t PROGMEM port_to_mode_PGM[] =
{
	NOT_A_PORT,
	&DDRA,
	&DDRB,
	&DDRC,
	&DDRD,
	&DDRE,
	&DDRF,
	&DDRG
};

const uint16_t PROGMEM port_to_output_PGM[] =
{
	NOT_A_PORT,
	&PORTA,
	&PORTB,
	&PORTC,
	&PORTD,
	&PORTE,
	&PORTF,
	&PORTG
};

const uint16_t PROGMEM port_to_input_PGM[] =
{
	NOT_A_PIN,
	&PINA,
	&PINB,
	&PINC,
	&PIND,
	&PINE,
	&PINF,
	&PING
};

const uint8_t PROGMEM digital_pin_to_port_PGM[] =
{
	PA,	 /* 0 */
	PA,
	PA,
	PA,
	PA,
	PA,
	PA,
	PA,

	PB,	 /* 8 */
	PB,
	PB,
	PB,
	PB,
	PB,
	PB,
	PB,

	PC,	 /* 16 */
	PC,
	PC,
	PC,
	PC,
	PC,
	PC,
	PC,

	PD, /* 24 */
	PD,
	PD,
	PD,
	PD,
	PD,
	PD,
	PD,

	PE,		//*	PE 0 32
	PE,		//*	PE 1 33
	PE,		//*	PE 2 34
	PE,		//*	PE 3 35
	PE,		//*	PE 4 36
	PE,		//*	PE 5 37
	PE,		//*	PE 6 38
	PE,		//*	PE 7 39

	PF,	 /* 40 */
	PF,
	PF,
	PF,
	PF,
	PF,
	PF,
	PF,

	PG,	 /* 48 */
	PG,
	PG,
	PG,
	PG
};

const uint8_t PROGMEM digital_pin_to_bit_mask_PGM[] =
{
	_BV(0), /* 0, port A */
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(4),
	_BV(5),
	_BV(6),
	_BV(7),

	_BV(0), /* 8, port B */
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(4),
	_BV(5),
	_BV(6),
	_BV(7),

	_BV(0), /* 16, port C */
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(4),
	_BV(5),
	_BV(6),
	_BV(7),

	_BV(0), /* 24, port D */
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(4),
	_BV(5),
	_BV(6),
	_BV(7),

	_BV(0), /* 32, port E */
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(4),
	_BV(5),
	_BV(6),
	_BV(7),

	_BV(0), /* 40, port F */
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(4),
	_BV(5),
	_BV(6),
	_BV(7),

	_BV(0), /* 48, port G */
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(4)
};

const uint8_t PROGMEM digital_pin_to_timer_PGM[] =
{
};
#endif

#define SERIAL_PORT_HARDWARE        Serial
#define SERIAL_PORT_HARDWARE1       Serial1

#endif
