// implementations. 
#include"disp_driver.h"

// Initialize display ports of msp430FR2311
void ports_msp430_init(){
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;
    GPIO_setAsOutputPin(DOUT); 
    GPIO_setAsOutputPin(CS); 
    GPIO_setAsOutputPin(CLK); 
    GPIO_setAsOutputPin(red_led);
}

void shift_packet(uint16_t packet){
    // shift packet starting from MSB first. 
    int i ;
    int bit ;
    write_high(CS); 
    write_low(CLK); // pull CLK low 

    for(i=15;i>=0;i--){
        bit = (packet & (1<<i)) ; 

        if(bit == 0){
            // shift low
            write_low(DOUT); 
        }else{
            //shift high
            write_high(DOUT); 
        }

        write_high(CLK); 
        __delay_cycles(1000); 
        write_low(CLK); 
        __delay_cycles(1000); 
    }
    // shifting done now latch 
    write_low(CS); 
    __delay_cycles(1000); 
    write_high(CS);
}

void disp_init(){
    // setup scan all digits 
    shift_packet(0x0b07); 
    // set up no decode to 0 
    shift_packet(0x0900); 

    shift_packet(0x0c01); 

    shift_packet(0x0f00); 
    disp_clear(); 
    shift_packet(0x0a02); // brightness 

}

void disp_clear(){
    // shift all 0's 
    shift_packet(0x0100); 
    shift_packet(0x0200);
    shift_packet(0x0300);
    shift_packet(0x0400);
    shift_packet(0x0500);
    shift_packet(0x0600);
    shift_packet(0x0700);
    shift_packet(0x0800);
}

void write_pixel(uint16_t x, uint16_t y){
    // lits perticular pxet on 8x8   
    x = x + 1 ; // idex matching
    uint16_t packet ; 
    packet = (x << 8) | (1<<y) ; 
    shift_packet(packet); 
}

void write_8x8_image(uint8_t * data_ptr){
    // write row by row 
    int i ; 
    for(i=8;i>=1;i--){
        shift_packet((i<<8) | rev_byte((uint8_t)(*data_ptr))); 
        data_ptr++; 
    }    
}

uint8_t rev_byte(uint8_t data_byte){
    // reverse the byte pattern 
    uint8_t temp = 0x00 ; 
    int i ; 
    int bit ; 

    for(i=7;i>=0;i--){

    bit = (1&data_byte); 
    if(bit == 1){
        temp = temp | (1<<i); 
    }else{
        temp = temp & ~(1<<i); 
    }
    data_byte = data_byte >> 1 ; 
    }

    return temp; 
}

void shift_packet_no_latch(uint16_t packet){
    // shift packet starting from MSB first. 
    // control 4 displays simultaneously
    int i ;
    int bit ;
    write_high(CS); 
    write_low(CLK); // pull CLK low 

    for(i=15;i>=0;i--){
        bit = (packet & (1<<i)) ; 

        if(bit == 0){
            // shift low
            write_low(DOUT); 
        }else{
            //shift high
            write_high(DOUT); 
        }

        write_high(CLK); 
        __delay_cycles(delay); 
        write_low(CLK); 
        __delay_cycles(delay); 
    }
}

void latch(){
    write_low(CS); 
    __delay_cycles(delay); 
    write_high(CS);
}

void write_cross(){
    shift_packet((1<<8) | 0x81); 
    shift_packet((2<<8) | 0x42); 
    shift_packet((3<<8) | 0x24); 
    shift_packet((4<<8) | 0x18); 
    shift_packet((5<<8) | 0x18); 
    shift_packet((6<<8) | 0x24); 
    shift_packet((7<<8) | 0x42); 
    shift_packet((8<<8) | 0x81); 
}


void disp_full(uint8_t * disp_data){
    // handelss comlpte display
    
    int i ; 
    for(i=8;i>=1;i--){
        shift_packet_no_latch( (i<<8) | rev_byte(letters[disp_data[3] - 65][8-i]) ); // disp 3
        shift_packet_no_latch( (i<<8) | rev_byte(letters[disp_data[2] - 65][8-i]) ); // disp 2
        shift_packet_no_latch( (i<<8) | rev_byte(letters[disp_data[1] - 65][8-i]) );
        shift_packet_no_latch( (i<<8) | rev_byte(letters[disp_data[0] - 65][8-i]) );
        latch(); 
    }
}

void disp_full_signs(uint8_t * disp_data){
    // handelss comlpte display
    
    int i ; 
    for(i=8;i>=1;i--){
        shift_packet_no_latch( (i<<8) | rev_byte(signs[disp_data[3]][8-i]) ); // disp 3
        shift_packet_no_latch( (i<<8) | rev_byte(signs[disp_data[2]][8-i]) ); // disp 2
        shift_packet_no_latch( (i<<8) | rev_byte(signs[disp_data[1]][8-i]) );
        shift_packet_no_latch( (i<<8) | rev_byte(signs[disp_data[0]][8-i]) );
        latch(); 
    }
}

void disp_full_icons(uint8_t * disp_data){
    // handelss comlpte display
    
    int i ; 
    for(i=8;i>=1;i--){
        shift_packet_no_latch( (i<<8) | rev_byte(icons[disp_data[3]][8-i]) ); // disp 3
        shift_packet_no_latch( (i<<8) | rev_byte(icons[disp_data[2]][8-i]) ); // disp 2
        shift_packet_no_latch( (i<<8) | rev_byte(icons[disp_data[1]][8-i]) );
        shift_packet_no_latch( (i<<8) | rev_byte(icons[disp_data[0]][8-i]) );
        latch(); 
    }
}

void scroll_text(uint8_t * data_string, bool pause){
    uint8_t data_buff[4] = {91,91,91,91} ; 
    uint8_t i,j ; 
    uint8_t * temp ; 
    temp = data_string ; 

    // find size of the string 
    int size = 0 ; 
    while(*data_string != '\0'){
        size++; 
        data_string++; 
    }

    data_string = temp ; 
    for(i=0;i<size;i++){
        for(j=0;j<3;j++){
            data_buff[j] = data_buff[j+1]; 
        }
        data_buff[3] = data_string[i]; 
        disp_full(data_buff); 
        __delay_cycles(100000); 
    }

    if(pause){
    __delay_cycles(3*500000);
    } 
    // padd zeros now 4 times only to clear display 
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            data_buff[j] = data_buff[j+1]; 
        }
        data_buff[3] = 91 ; // blank
        disp_full(data_buff); 
        __delay_cycles(100000);  
    }


}

void disp_frame(uint32_t * data_buff){
    // data_buff is frame data 8X64 bits
    int i,j,p ; 
    //display frame 
    for(i=8;i>=1;i--){
     for(j=0;j<4;j++){   
    shift_packet_no_latch(((i)<<8) | rev_byte(get_byte(j,data_buff[i-1]))) ;
     }
     latch();  
    }
}

uint16_t get_byte(uint8_t offset, uint32_t data_32){
    // returns a byte chunk at given offset
    // offset 3 2 1 0  (display number from left to right)
    // gives 8 bit data chunk and padds it with zero using typecasting
    switch(offset){
        case 0: //mast disp 0 data
                data_32 &= 0x000000FF ; 
                return (uint16_t)data_32 ; 
                break; 
        case 1: data_32 &= 0x0000FF00 ; 
                data_32 = data_32 >> 8 ; 
                return (uint16_t)data_32 ; 
                break; 
        case 2: data_32 &= 0x00FF0000 ;
                data_32 = data_32 >> 16 ;  
                return (uint16_t)data_32 ; 
                break; 
        case 3: data_32 &= 0xFF000000 ;
                data_32 = data_32 >> 24 ;  
                return (uint16_t)data_32 ; 
                break; 
        default: return (uint16_t)0x00000000 ; 
                break;         
    }       
    
}

