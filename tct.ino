#include "pins.h"
#include "data.h"
#include "config.h"

bool read_outputs[NUM_OUTPUTS];
bool check_outputs[NUM_OUTPUTS];
bool read_inputs[NUM_INPUTS];

void setup() {
  Serial.begin(9600);
}

void init_pins(){
  uint8_t i = 0;
  while (i < NUM_INPUTS){
    pinMode(inputs[i], OUTPUT);
    ++i;
  }
  i = 0;
  while (i < NUM_OUTPUTS){
    pinMode(outputs[i], INPUT);
    digitalWrite(outputs[i], 0);
    ++i;
  }
  i = 0;

}
void phase1(){
    digitalWrite(inputs[0], LOW);
    digitalWrite(inputs[1], LOW);
    delay(1);
    digitalWrite(inputs[0], HIGH);
    delay(4);
}
void phase2(){
    digitalWrite(inputs[0], LOW);
    delay(1);
    digitalWrite(inputs[1], HIGH);
    delay(4);
    digitalWrite(inputs[1], LOW);
}
void loop(){
  while (Serial.available() == 0){}
  Serial.read();
  //general purpose iterators
  uint16_t i = 0;
  unsigned long dt = 0;
  
  init_pins();
  
  uint8_t inp_mask = 0x80;
  uint8_t out_mask = 0x80;
  uint32_t err_count = 0;
  digitalWrite(inputs[2], HIGH);
  delay(200);
  phase1();
  phase2();
  digitalWrite(inputs[2], LOW);
  delay(200);

  while (i < NUM_STEPS){
    uint32_t j = 0;
 
    j = 0;

    byte check = 0;
    
    phase1();
    
    while (j < NUM_OUTPUTS){
      uint16_t a = (i * NUM_OUTPUTS + j) >> 3;
      check_outputs[j] = (output_vals[a] & out_mask) ? 1 : 0;
      read_outputs[j] = digitalRead(outputs[j]);
      if (read_outputs[j] != check_outputs[j]) check = 1;
      ++j;
      if (out_mask == 1) out_mask = 0x80;
      else out_mask = out_mask >> 1;
    }
    j = 0;

    phase2();

    
    while (millis() < dt) {}
    dt = millis() + STEP_MS;    
    
    if (check){
      Serial.print("\nDiscrepancy on step: ");
      Serial.print(i);
      Serial.println(".");
      Serial.print("Out_mask:");
      Serial.println(out_mask);
      Serial.print("Inputs: ");
      while (j < NUM_INPUTS){
        Serial.print(read_inputs[j]);
        ++j;
      }
      j=0;
      Serial.print("\nExpected outputs: ");
      while (j < NUM_OUTPUTS){
        Serial.print(check_outputs[j]);
        ++j;
      }
      j=0;
      Serial.print("\nActual outputs:   ");
      while (j < NUM_OUTPUTS){
        Serial.print(read_outputs[j]);
        ++j;
      }
      j=0;
      ++err_count;
    }
    ++i;
  }
  Serial.print("Test completed with ");
  Serial.print(err_count);
  Serial.println(" errors.");
  i=0;
//  while (i < NUM_POWERS){
//    digitalWrite(powers[i], 0);
//    ++i;
//  }  
}
