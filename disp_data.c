#include<stdint.h>

/*
Link to generate data 

https://xantorohara.github.io/led-matrix-editor/#

*/
uint8_t num[10][8] = {{
                  0x3C,
                  0x24,
                  0x24,
                  0x24, 
                  0x24,
                  0x24,
                  0x24,
                  0x3C
                    },

                   {
                  0x08,
                  0x18,
                  0x28,
                  0x08,
                  0x08,
                  0x08,
                  0x08,
                  0x1C
                    },

                    {
                  0x3C,
                  0x04,
                  0x04,
                  0x3C,
                  0x20,
                  0x20,
                  0x3C,
                  0x00
                    },

                    {
                  0x3C,
                  0x04,
                  0x04,
                  0x3C,
                  0x04,
                  0x04,
                  0x3C,
                  0x00
                    },

                    {
                  0x24,
                  0x24,
                  0x24,
                  0x24,
                  0x3C,
                  0x04,
                  0x04,
                  0x00
                    },

                    {
                  0xC3,
                  0xC3,
                  0xC3,
                  0xFF,
                  0xFF,
                  0xC3,
                  0xC3,
                  0xC3
                    },

                    {
                  0xC3,
                  0xC3,
                  0xC3,
                  0xFF,
                  0xFF,
                  0xC3,
                  0xC3,
                  0xC3
                    },

                    {
                  0xC3,
                  0xC3,
                  0xC3,
                  0xFF,
                  0xFF,
                  0xC3,
                  0xC3,
                  0xC3
                    },

                    {
                  0xC3,
                  0xC3,
                  0xC3,
                  0xFF,
                  0xFF,
                  0xC3,
                  0xC3,
                  0xC3
                    },

                    {
                  0xFF,
                  0x00,
                  0xFF,
                  0x00,
                  0xFF,
                  0x00,
                  0xFF,
                  0x00 
                    }

};

 

uint8_t letters[][8] = {
{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b01111110,
  0b01100110,
  0b01100110,
  0b01100110
},{
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01111100
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01111100
},{
  0b00000000,
  0b01111110,
  0b01100000,
  0b01100000,
  0b01111100,
  0b01100000,
  0b01100000,
  0b01111110
},{
  0b00000000,
  0b01111110,
  0b01100000,
  0b01100000,
  0b01111100,
  0b01100000,
  0b01100000,
  0b01100000
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100000,
  0b01100000,
  0b01101110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01111110,
  0b01100110,
  0b01100110,
  0b01100110
},{
  0b00000000,
  0b00111100,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00111100
},{
  0b00000000,
  0b00011110,
  0b00001100,
  0b00001100,
  0b00001100,
  0b01101100,
  0b01101100,
  0b00111000
},{
  0b00000000,
  0b01100110,
  0b01101100,
  0b01111000,
  0b01110000,
  0b01111000,
  0b01101100,
  0b01100110
},{
  0b00000000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01111110
},{
  0b00000000,
  0b01100011,
  0b01110111,
  0b01111111,
  0b01101011,
  0b01100011,
  0b01100011,
  0b01100011
},{
  0b00000000,
  0b01100011,
  0b01110011,
  0b01111011,
  0b01101111,
  0b01100111,
  0b01100011,
  0b01100011
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01111100,
  0b01100000,
  0b01100000
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01101110,
  0b00111100,
  0b00000110
},{
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01111100,
  0b01111000,
  0b01101100,
  0b01100110
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100000,
  0b00111100,
  0b00000110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b01111110,
  0b01011010,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000
},{
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111110
},{
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111100,
  0b00011000
},{
  0b00000000,
  0b01100011,
  0b01100011,
  0b01100011,
  0b01101011,
  0b01111111,
  0b01110111,
  0b01100011
},{
  0b00000000,
  0b01100011,
  0b01100011,
  0b00110110,
  0b00011100,
  0b00110110,
  0b01100011,
  0b01100011
},{
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111100,
  0b00011000,
  0b00011000,
  0b00011000
},{
  0b00000000,
  0b01111110,
  0b00000110,
  0b00001100,
  0b00011000,
  0b00110000,
  0b01100000,
  0b01111110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b00000110,
  0b00111110,
  0b01100110,
  0b00111110
},{
  0b00000000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01111100
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100000,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b00000110,
  0b00000110,
  0b00000110,
  0b00111110,
  0b01100110,
  0b01100110,
  0b00111110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b01100110,
  0b01111110,
  0b01100000,
  0b00111100
},{
  0b00000000,
  0b00011100,
  0b00110110,
  0b00110000,
  0b00110000,
  0b01111100,
  0b00110000,
  0b00110000
},{
  0b00000000,
  0b00000000,
  0b00111110,
  0b01100110,
  0b01100110,
  0b00111110,
  0b00000110,
  0b00111100
},{
  0b00000000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01100110
},{
  0b00000000,
  0b00000000,
  0b00011000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00111100
},{
  0b00000000,
  0b00001100,
  0b00000000,
  0b00001100,
  0b00001100,
  0b01101100,
  0b01101100,
  0b00111000
},{
  0b00000000,
  0b01100000,
  0b01100000,
  0b01100110,
  0b01101100,
  0b01111000,
  0b01101100,
  0b01100110
},{
  0b00000000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100011,
  0b01110111,
  0b01111111,
  0b01101011,
  0b01101011
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01111100,
  0b01111110,
  0b01100110,
  0b01100110,
  0b01100110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01111100,
  0b01100000,
  0b01100000
},{
  0b00000000,
  0b00000000,
  0b00111100,
  0b01101100,
  0b01101100,
  0b00111100,
  0b00001101,
  0b00001111
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01100000,
  0b01100000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111110,
  0b01000000,
  0b00111100,
  0b00000010,
  0b01111100
},{
  0b00000000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b01111110,
  0b00011000,
  0b00011000,
  0b00011000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100110,
  0b01100110,
  0b00111100,
  0b00011000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100011,
  0b01101011,
  0b01101011,
  0b01101011,
  0b00111110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100110,
  0b00111100,
  0b00011000,
  0b00111100,
  0b01100110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100110,
  0b01100110,
  0b00111110,
  0b00000110,
  0b00111100
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b00001100,
  0b00011000,
  0b00110000,
  0b00111100
}};

// signs 


uint8_t signs [][8] = {
{
  0b00000000,
  0b00000000,
  0b00001000,
  0b00001000,
  0b00111110,
  0b00001000,
  0b00001000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00110110,
  0b00011100,
  0b01111111,
  0b00011100,
  0b00110110,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00000110,
  0b00001100,
  0b00011000,
  0b00110000,
  0b01100000,
  0b00000000
},{
  0b00000000,
  0b01100000,
  0b01100110,
  0b00001100,
  0b00011000,
  0b00110000,
  0b01100110,
  0b00000110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b00000000,
  0b00111100,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111010,
  0b01101100,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00001000,
  0b00010100,
  0b00100010,
  0b01000001,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00000110,
  0b00001100,
  0b00011000,
  0b00110000,
  0b00011000,
  0b00001100,
  0b00000110
},{
  0b00000000,
  0b01100000,
  0b00110000,
  0b00011000,
  0b00001100,
  0b00011000,
  0b00110000,
  0b01100000
},{
  0b00000000,
  0b00000110,
  0b00001100,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00001100,
  0b00000110
},{
  0b00000000,
  0b01100000,
  0b00110000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00110000,
  0b01100000
},{
  0b00000000,
  0b00011110,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011110
},{
  0b00000000,
  0b01111000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b01111000
},{
  0b00000000,
  0b00001110,
  0b00011000,
  0b00011000,
  0b00110000,
  0b00011000,
  0b00011000,
  0b00001110
},{
  0b00000000,
  0b01110000,
  0b00011000,
  0b00011000,
  0b00001100,
  0b00011000,
  0b00011000,
  0b01110000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b01100000
},{
  0b00000000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00110000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00110000,
  0b00110000,
  0b00110000,
  0b01100000
},{
  0b00000000,
  0b00011000,
  0b00111100,
  0b00111100,
  0b00011000,
  0b00011000,
  0b00000000,
  0b00011000
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b00000110,
  0b00011100,
  0b00011000,
  0b00000000,
  0b00011000
},{
  0b00000000,
  0b00111000,
  0b01000100,
  0b01011100,
  0b01011000,
  0b01000010,
  0b00111100,
  0b00000000
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b00111100,
  0b00101000,
  0b01100101,
  0b01100110,
  0b00111111
},{
  0b00000000,
  0b00001000,
  0b00011110,
  0b00100000,
  0b00011100,
  0b00000010,
  0b00111100,
  0b00001000
},{
  0b00000000,
  0b00110110,
  0b00110110,
  0b01111111,
  0b00110110,
  0b01111111,
  0b00110110,
  0b00110110
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00111110,
  0b01111111,
  0b00011100,
  0b00011100,
  0b00011100
},{
  0b00000000,
  0b00011100,
  0b00011100,
  0b00011100,
  0b01111111,
  0b00111110,
  0b00011100,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00001100,
  0b01111110,
  0b01111111,
  0b01111110,
  0b00001100,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00011000,
  0b00111111,
  0b01111111,
  0b00111111,
  0b00011000,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00011100,
  0b00111110,
  0b00111110,
  0b01111111,
  0b01111111
},{
  0b00000000,
  0b01111111,
  0b01111111,
  0b00111110,
  0b00111110,
  0b00011100,
  0b00011100,
  0b00001000
},{
  0b00000000,
  0b01100000,
  0b01111000,
  0b01111110,
  0b01111111,
  0b01111110,
  0b01111000,
  0b01100000
},{
  0b00000000,
  0b00000011,
  0b00001111,
  0b00111111,
  0b01111111,
  0b00111111,
  0b00001111,
  0b00000011
},{
  0b00000000,
  0b00111110,
  0b01000001,
  0b01010101,
  0b01000001,
  0b01010101,
  0b01001001,
  0b00111110
},{
  0b00000000,
  0b00111110,
  0b01111111,
  0b01101011,
  0b01111111,
  0b01101011,
  0b01110111,
  0b00111110
},{
  0b00000000,
  0b00100010,
  0b01110111,
  0b01111111,
  0b01111111,
  0b00111110,
  0b00011100,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00111110,
  0b01111111,
  0b00111110,
  0b00011100,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00101010,
  0b01111111,
  0b00101010,
  0b00001000,
  0b00011100
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00111110,
  0b01111111,
  0b00111110,
  0b00001000,
  0b00011100
},{
  0b00000000,
  0b00000000,
  0b00011100,
  0b00111110,
  0b00111110,
  0b00111110,
  0b00011100,
  0b00000000
},{
  0b11111111,
  0b11111111,
  0b11100011,
  0b11000001,
  0b11000001,
  0b11000001,
  0b11100011,
  0b11111111
},{
  0b00000000,
  0b00000000,
  0b00011100,
  0b00100010,
  0b00100010,
  0b00100010,
  0b00011100,
  0b00000000
},{
  0b11111111,
  0b11111111,
  0b11100011,
  0b11011101,
  0b11011101,
  0b11011101,
  0b11100011,
  0b11111111
},{
  0b00000000,
  0b00001111,
  0b00000011,
  0b00000101,
  0b00111001,
  0b01001000,
  0b01001000,
  0b00110000
},{
  0b00000000,
  0b00001000,
  0b00111110,
  0b00001000,
  0b00011100,
  0b00100010,
  0b00100010,
  0b00011100
},{
  0b00000000,
  0b00011000,
  0b00010100,
  0b00010000,
  0b00010000,
  0b00110000,
  0b01110000,
  0b01100000
},{
  0b00000000,
  0b00001111,
  0b00011001,
  0b00010001,
  0b00010011,
  0b00110111,
  0b01110110,
  0b01100000
},{
  0b00000000,
  0b00001000,
  0b00101010,
  0b00011100,
  0b01110111,
  0b00011100,
  0b00101010,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00101010,
  0b00001000,
  0b00101010,
  0b00011100,
  0b00001000
},{
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00000000,
  0b01100110,
  0b01100110
},{
  0b00000000,
  0b00000000,
  0b00010100,
  0b00100010,
  0b01111111,
  0b00100010,
  0b00010100,
  0b00000000
},{
  0b00000000,
  0b00110110,
  0b00110110,
  0b00010100,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b01100000,
  0b00110000,
  0b00011000,
  0b00001100,
  0b00000110,
  0b00000000
},{
  0b00000000,
  0b00001100,
  0b00001100,
  0b00000110,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00110000,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00110110,
  0b01100011,
  0b01000001,
  0b01000001,
  0b01111111
}};

uint8_t icons[][8] = {
{
  0b00000000,
  0b00000010,
  0b00000010,
  0b00001010,
  0b00001010,
  0b00101010,
  0b00101010,
  0b10101010
},{
  0b10000100,
  0b10000100,
  0b10000100,
  0b10000100,
  0b10000100,
  0b10000100,
  0b10000100,
  0b11111100
},{
  0b10000100,
  0b10000100,
  0b10000100,
  0b10000100,
  0b10000100,
  0b10110100,
  0b10000100,
  0b11111100
},{
  0b10000100,
  0b10000100,
  0b10000100,
  0b10110100,
  0b10000100,
  0b10110100,
  0b10000100,
  0b11111100
},{
  0b10000100,
  0b10110100,
  0b10000100,
  0b10110100,
  0b10000100,
  0b10110100,
  0b10000100,
  0b11111100
},{
  0b10000100,
  0b10000100,
  0b10000100,
  0b10110100,
  0b10110100,
  0b10110100,
  0b10000100,
  0b11111100
},{
  0b10110100,
  0b10110100,
  0b10110100,
  0b10110100,
  0b10110100,
  0b10110100,
  0b10000100,
  0b11111100
},{
  0b00000000,
  0b00000001,
  0b00000010,
  0b00000100,
  0b10001000,
  0b01010000,
  0b00100000,
  0b00000000
},{
  0b00111000,
  0b00111000,
  0b00111000,
  0b00111000,
  0b11111110,
  0b01111100,
  0b00111000,
  0b00010000
},{
  0b00001000,
  0b00001100,
  0b11111110,
  0b11111111,
  0b11111110,
  0b00001100,
  0b00001000,
  0b00000000
},{
  0b00010000,
  0b00111000,
  0b01111100,
  0b11111110,
  0b00111000,
  0b00111000,
  0b00111000,
  0b00111000
},{
  0b00010000,
  0b00110000,
  0b01111111,
  0b11111111,
  0b01111111,
  0b00110000,
  0b00010000,
  0b00000000
}};

/*




*/