// Main driver for 8X8 display 

// get gpio driver. 
#include"gpio.h"

//macro definitions. 

#define red_led GPIO_PORT_P1,GPIO_PIN0 // on board red led for debug

#define DOUT  GPIO_PORT_P1,GPIO_PIN1//1.1 for MSP430FR2311 
#define CS   GPIO_PORT_P2,GPIO_PIN6 //2.6
#define CLK  GPIO_PORT_P2,GPIO_PIN7 //2.7 

#define write_high GPIO_setOutputHighOnPin 
#define write_low GPIO_setOutputLowOnPin
#define delay 10 

#define PAUSE true 
#define NO_PAUSE false 
// datasets  
extern uint8_t num[10][8]; //numbers from 0 to 9  
extern uint8_t letters[][8];  // ABCD latters
extern uint8_t signs [][8]; // special signs
extern uint8_t icons[][8]; // special icons

//function prototypes
void write_pixel(uint16_t x, uint16_t y); 
void ports_msp430_init(); 
void disp_init(); 
void shift_packet(uint16_t packet); 
void disp_clear(); 
void write_8x8_image(); 
void write_cross(); 
uint8_t rev_byte(uint8_t); 
void latch(); 
void shift_packet_no_latch(uint16_t packet); 
void disp_full(uint8_t * disp_data); 
void disp_full_signs(uint8_t * disp_data); 
void disp_full_icons(uint8_t * disp_data); 
void scroll_text(uint8_t  * data_string, bool pause); 

// data to write 

 

