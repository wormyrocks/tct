#define STEP_MS 10

#define NUM_INPUTS 3
#define NUM_OUTPUTS 16
#define NUM_POWERS 10
#define NUM_GROUNDS 11

//const uint8_t powers[] = {P1, P5, P7, P11, P13, P15, P17, P34, P37, P39};
//const uint8_t grounds[] = {P2, P4, P6, P10, P12, P14, P16, P35, P36, P38, P40};
const uint8_t inputs[] = {P8, P9, P3}; // clk1, clk2, reset
const uint8_t outputs[] = {P18, P19, P20, P21, P22, P23, P24, P25,
                          P33, P32, P31, P30, P29, P28, P27, P26}; // anodes, then cathodes
