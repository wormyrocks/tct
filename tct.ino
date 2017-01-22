#include "pins.h"
#include "data.h"

// BEGIN USER DEFINITIONS
#define PWR P1
#define GND P1
#define STEP_MS 500
#define NUM_INPUTS 3
#define NUM_OUTPUTS 16

const uint8_t inputs[] = {P1, P2, P3}; // clk1, clk2, reset
const uint8_t outputs[] = {P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20}; // anodes, then cathodes
// END USER DEFINITIONS

void setup() {
  Serial.begin(9600);
  
  pinMode(PWR, OUTPUT);
  pinMode(GND, OUTPUT);
  digitalWrite(PWR, 0);
  digitalWrite(GND, 0);

  //general purpose iterators
  uint16_t i = 0;
  unsigned long dt = 0;
  
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
      uint16_t a = (i * NUM_INPUTS+j) >> 3;
      digitalWrite(inputs[j], input_vals[a] & inp_mask);
      Serial.print((input_vals[a] & inp_mask) ? "1" : "0");
      inp_mask = inp_mask >> 1;
      if (inp_mask == 0) inp_mask = 0x80;
      ++j;
    }
    Serial.println();
    j = 0;
    
    while (millis() < dt) {}
    
    Serial.print("Outputs: ");
    while (j < NUM_OUTPUTS){
      uint16_t a = (i * NUM_OUTPUTS+j) >> 3;
//      digitalWrite(outputs[j], output_vals[a] & out_mask);
      Serial.print((output_vals[a] & out_mask) ? "1" : "0");
      out_mask = out_mask >> 1;
      if (out_mask == 0) out_mask = 0x80;
      ++j;
    }
    Serial.println();
    j = 0;
    ++i;
  }
}

void loop(){}
