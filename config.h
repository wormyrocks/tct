#define STEP_MS 20

#define NUM_INPUTS 3
#define NUM_OUTPUTS 16
#define NUM_POWERS 6
#define NUM_GROUNDS 7

const uint8_t powers[] = {P1, P11, P13, P15, P37, P39};
const uint8_t grounds[] = {P40, P38, P36, P10, P12, P14, P16};
const uint8_t inputs[] = {P8, P9, P3}; // clk1, clk2, reset
const uint8_t outputs[] = {P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33}; // anodes, then cathodes
