#ifndef MAPPING_H
#define MAPPING_H
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include <pins_arduino.h>
#endif

#include "dictionary.h"

struct led_pattern {
  byte *pattern;
};

struct led_show {
  led_pattern *image;
  long image_size;
  word delay_time;
};


led_pattern Manish[] = {
  {array_M0},
  {array_M1},
  {array_M2},
  {array_M3},
  {array_M4},
  {array_M5}
};

led_pattern ManishStatic[] = {
  array_M5
};

led_pattern Heart0[] = {
  array_H0
};

led_pattern Heart1[] = {
  array_H1
};

led_pattern Aparna[] = {
  {array_A0},
  {array_A1},
  {array_A2},
  {array_A3},
  {array_A4},
  {array_A5}
};

led_pattern AparnaStatic[] = {
  array_A5
};

led_pattern row_up_down[] = {
  
  /*  Row up/down  */
  {array_R0},
  {array_R1},
  {array_R2},
  {array_R3},
  {array_R4},
  {array_R5},
  {array_R4},
  {array_R3},
  {array_R2},
  {array_R1},
  {array_R0}
};

led_pattern column_left_right[] = {
  
  /*  Column left/right  */
  {array_C0},
  {array_C1},
  {array_C2},
  {array_C3},
  {array_C4},
  {array_C5},
  {array_C4},
  {array_C3},
  {array_C2},
  {array_C1},
  {array_C0}
};

led_pattern wave_single[] = {  
  /*  Wave Single  */
  {array_WS0},
  {array_WS1},
  {array_WS2},
  {array_WS3},
  {array_WS4},
  {array_WS5},
  {array_WS6},
  {array_WS7},
  {array_WS8},
  {array_WS9},
  {array_WS10},
  {array_WS9},
  {array_WS8},
  {array_WS7},
  {array_WS6},
  {array_WS5},
  {array_WS4},
  {array_WS3},
  {array_WS2},
  {array_WS1},
  {array_WS0}
};

led_pattern circle_wave[] = {  
  /*  Circle Wave  */
  {array_O},
  {array_CW0},
  {array_CW1},
  {array_CW2},
  {array_CW1},
  {array_CW0},
  {array_O}
};
  
led_pattern pong[] = {
  /*  Pong  */
  {array_PNG0},
  {array_PNG1},
  {array_PNG2},
  {array_PNG3},
  {array_PNG4},
  {array_PNG5},
  {array_PNG6},
  {array_PNG7},
  {array_PNG8},
  {array_PNG9}, 
  {array_PNG8},
  {array_PNG7},
  {array_PNG6},
  {array_PNG5},
  {array_PNG4},
  {array_PNG3},
  {array_PNG2},
  {array_PNG1},
  {array_PNG0} 
};

led_pattern all_on[] = {
  /* All On */
  {array_ALL},
  {array_O},
  {array_ALL},
  {array_O},
  {array_ALL},
  {array_O},
  {array_ALL},
  {array_O}  
};

led_pattern all_off[] = {
  {array_O}
};

//Define columns and row pins
#define VARUN 0
#define KUNAL 0
#define SANDEEP 1

/* VARUN Shirt */
#if defined(VARUN) && VARUN == 1
#define C1 12
#define C2 11
#define C3 10
#define C4 9
#define C5 8
#define C6 7
#define R1 1
#define R2 2
#define R3 3
#define R4 4
#define R5 5
#define R6 6
#endif

/* SANDEEP Shirt */
#if defined(SANDEEP) && SANDEEP == 1
#define C1 13
#define C2 12
#define C3 11
#define C4 10
#define C5 9
#define C6 8
#define R1 2
#define R2 3
#define R3 4
#define R4 5
#define R5 6
#define R6 7
#endif

/* KUNAL Shirt */
#if defined(KUNAL) && KUNAL == 1
#define C1 13
#define C2 12
#define C3 11
#define C4 10
#define C5 9
#define C6 8
#define R1 2
#define R2 3
#define R3 4
#define R4 5
#define R5 6
#define R6 7
#endif

//For some odd reason under Debian 64-bit squeeze I can't compile
//if setting analog pin A3.  I have to resort to setting the pin as
//17 for the lilypad atmega 328
#define A3 17
#define SWITCH A3

#define MAX_ROW 6
#define MAX_COLUMN 6

#define REFRESH_DELAY 30 //in micro seconds

#endif
