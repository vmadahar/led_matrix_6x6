/* Main program */

#include "mapping.h"


#if defined(SANDEEP) && SANDEEP == 1
led_show light_pattern_letters[] = {
  {Manish, sizeof(Manish)/sizeof(Manish[0]), 1000},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {ManishStatic, sizeof(ManishStatic)/sizeof(ManishStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100} 
};
#endif

#if defined(VARUN) && VARUN == 1
led_show light_pattern_letters[] = {
  {Heart0, sizeof(Heart0)/sizeof(Heart0[0]), 800},
  {Heart1, sizeof(Heart1)/sizeof(Heart1[0]), 300}  
};
#endif

#if defined(KUNAL) && KUNAL == 1
led_show light_pattern_letters[] = {
  {Aparna, sizeof(Aparna)/sizeof(Aparna[0]), 1000},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100},
  {AparnaStatic, sizeof(AparnaStatic)/sizeof(AparnaStatic[0]), 500},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 100}
};
#endif

//10 Seconds
led_show light_pattern_graphics[] = {
  
  {all_on, sizeof(all_on)/sizeof(all_on[0]), 150},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 60},
  {all_on, sizeof(all_on)/sizeof(all_on[0]), 150},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 60},
  {all_on, sizeof(all_on)/sizeof(all_on[0]), 150},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 60},
  
  {column_left_right, sizeof(column_left_right)/sizeof(column_left_right[0]), 100},
  {column_left_right, sizeof(column_left_right)/sizeof(column_left_right[0]), 100},
  {column_left_right, sizeof(column_left_right)/sizeof(column_left_right[0]), 100},
  {column_left_right, sizeof(column_left_right)/sizeof(column_left_right[0]), 100},
  {column_left_right, sizeof(column_left_right)/sizeof(column_left_right[0]), 100},
  {column_left_right, sizeof(column_left_right)/sizeof(column_left_right[0]), 100},
  {column_left_right, sizeof(column_left_right)/sizeof(column_left_right[0]), 100},
  
  {circle_wave, sizeof(circle_wave)/sizeof(circle_wave[0]), 100},
  {circle_wave, sizeof(circle_wave)/sizeof(circle_wave[0]), 100},
  
  {row_up_down, sizeof(row_up_down)/sizeof(row_up_down[0]), 100},
  {row_up_down, sizeof(row_up_down)/sizeof(row_up_down[0]), 100},  
  
  {wave_single, sizeof(wave_single)/sizeof(wave_single[0]), 100},
  {wave_single, sizeof(wave_single)/sizeof(wave_single[0]), 100},
  
  {all_on, sizeof(all_on)/sizeof(all_on[0]), 150},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 60},
  {all_on, sizeof(all_on)/sizeof(all_on[0]), 150},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 60},
  {all_on, sizeof(all_on)/sizeof(all_on[0]), 150},
  {all_off, sizeof(all_off)/sizeof(all_off[0]), 60},
};

//Blinks each column/row led
void blink_led(byte column, byte row) {
  digitalWrite(column, HIGH);
  digitalWrite(row, HIGH);
  delayMicroseconds(REFRESH_DELAY);
  digitalWrite(row, LOW);
  digitalWrite(column, LOW);
}

//Checks if led needs to be on
byte check_led(byte column,byte row, byte *array) {
  byte result = 0;
  switch (row) {
    case 0:
    if (array[column] & B100000) {
      result = 1;
    }
    break;
    case 1:
    if (array[column] & B010000) {
      result = 1;
    }
    break;
    case 2:
    if (array[column] & B001000) {
      result = 1;
    }
    break;
    case 3:
    if (array[column] & B000100) {
      result = 1;
    }
    break;
    case 4:
    if (array[column] & B000010) {
      result = 1;
    }
    break;
    case 5:
    if (array[column] & B000001) {
      result = 1;
    }
    break;    
  }
  return result;
}
  
//Goes through each pattern and lights them up
void showPattern(struct led_pattern *light, long img_size, word delay_time) {
  for (long j=0; j<img_size; j++) {
      byte r;
      byte c;
      long last_time = 0;  
      boolean done = false;
      last_time = millis();
      while (!done) {    
        for (c=0; c<MAX_COLUMN; c++) {
          for (r=0; r<MAX_ROW; r++) {            
            //For arms we just see if we need to turn off or not
            if (check_led(c, r, light[j].pattern)) {
                blink_led(getColumnPin(r), getRowPin(c));
              }
            }
        } 
        if ((millis() - last_time) > delay_time) {
          done = true;
        }
      }
    }
}

//This guy loops each pattern with delay
void startPattern() { 
  long i = 0;
  
  long size_of_pattern = (sizeof(light_pattern_graphics)/sizeof(light_pattern_graphics[0]));
  for (i = 0; i<size_of_pattern; i++) {
    showPattern(light_pattern_graphics[i].image, light_pattern_graphics[i].image_size, light_pattern_graphics[i].delay_time);
  }
  
  while (1)
  {
    size_of_pattern = (sizeof(light_pattern_letters)/sizeof(light_pattern_letters[0]));
    for (i = 0; i<size_of_pattern; i++) {
      showPattern(light_pattern_letters[i].image, light_pattern_letters[i].image_size, light_pattern_letters[i].delay_time);
    }
  }
}

byte getColumnPin(byte c) {
  byte pin = 0;
  switch (c) {
    case 0:
    pin = C1;
    break;    
    case 1:
    pin = C2;
    break;    
    case 2:
    pin = C3;
    break;    
    case 3:
    pin = C4;
    break;    
    case 4:
    pin = C5; 
    break;
    case 5:
    pin = C6;
    break;
  }  
  return pin;
}

byte getRowPin(byte r) {
  byte pin = 0;
  switch (r) {
    case 0:
    pin = R1;
    break;    
    case 1:
    pin = R2;
    break;    
    case 2:
    pin = R3;
    break;    
    case 3:
    pin = R4;
    break;    
    case 4:
    pin = R5;
    break;
    case 5:
    pin = R6;
    break;
  }  
  return pin;
}

void setup() {
  
  //Setup up outputs for each column/rows
  for (byte i=0; i<=13; i++) {
    pinMode(i, OUTPUT);
  }
  
  //Setup input to always high
  pinMode(SWITCH, INPUT);
  digitalWrite(SWITCH, HIGH);  
}

//Deboucing keys
boolean lastButton = HIGH;

//Use input
boolean useInput = true;

// Variables will change:
int lastButtonState = HIGH;   // the previous reading from the input pin

// the following variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long lastDebounceTime = 0;  // the last time the output pin was toggled
long debounceDelay = 1000;    // the debounce time; increase if the output flickers
void loop() {  
   if (useInput) {
       int reading = digitalRead(SWITCH);

      // check to see if you just pressed the button 
      // (i.e. the input went from LOW to HIGH),  and you've waited 
      // long enough since the last press to ignore any noise:  
    
      // If the switch changed, due to noise or pressing:
      if (reading != lastButtonState) {
        // reset the debouncing timer
        lastDebounceTime = millis();
      } 
      
      if ((millis() - lastDebounceTime) > debounceDelay) {
        // whatever the reading is at, it's been there for longer
        // than the debounce delay, so take it as the actual current state:
        if (!reading)
        {
          startPattern();
        }
      }
    
      // save the reading.  Next time through the loop,
      // it'll be the lastButtonState:
      lastButtonState = reading;
   } else {
      startPattern();
    }

}
