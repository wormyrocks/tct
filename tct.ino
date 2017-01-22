#include "pins.h"
#include "data.h"
#include "config.h"

void setup() {
  Serial.begin(9600);

  //general purpose iterators
  uint16_t i = 0;
  unsigned long dt = 0;
  
  init_pins();
  
  delay(300);
  uint16_t j = 0;
  
  uint8_t inp_mask = 0x80;
  uint8_t out_mask = 0x80;
  
  while (i < NUM_STEPS){
    Serial.print("Step: ");
    Serial.println(i);
    dt = millis() + STEP_MS;
    Serial.print("Inputs: ");
    while (j < NUM_INPUTS){
      uint16_t a = (i * NUM_INPUTS + j) >> 3;
      digitalWrite(inputs[j], input_vals[a] & inp_mask);
      Serial.print((input_vals[a] & inp_mask) ? "1" : "0");
      inp_mask = inp_mask >> 1;
      if (inp_mask == 0) inp_mask = 0x80;
      ++j;
    }
    Serial.println();
    
    j = 0;
    
    while (millis() < dt) {}
    
    Serial.print("Expected outputs: ");
    while (j < NUM_OUTPUTS){
      uint16_t a = (i * NUM_OUTPUTS + j) >> 3;
      Serial.print((output_vals[a] & out_mask) ? "1" : "0");
      out_mask = out_mask >> 1;
      if (out_mask == 0) out_mask = 0x80;
      Serial.print("Outputs determined: ");

      ++j;
    }
    Serial.println();
    j = 0;
    ++i;
  }
}

void init_pins(){
  uint8_t i = 0;
  while (i < NUM_INPUTS){
    pinMode(inputs[i], INPUT);
    ++i;
  }
  i = 0;
  while (i < NUM_OUTPUTS){
    pinMode(outputs[i], OUTPUT);
    digitalWrite(outputs[i], 0);
    ++i;
  }
  i = 0;
  while (i < NUM_GROUNDS){
    pinMode(grounds[i], OUTPUT);
    digitalWrite(grounds[i], 0);
    ++i;
  }
  i = 0;
  while (i < NUM_POWERS){
    pinMode(powers[i], OUTPUT);
    digitalWrite(powers[i], 1);
  }
  i = 0;
}

void loop(){}
