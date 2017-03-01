#include "pins.h"
#include "data.h"
#include "config.h"

bool read_outputs[NUM_OUTPUTS];
bool check_outputs[NUM_OUTPUTS];
bool read_inputs[NUM_INPUTS];

void setup() {
  delay(2000);
  init_pins();
  //general purpose iterators
  uint16_t i = 0;
  unsigned long dt = 0;
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
    
    phase1();

    phase2();

    
    while (micros() < dt) {}
    dt = micros() + 100;    

    ++i;
  }
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
 

}
