#define NUM_STEPS 323
const byte PROGMEM input_vals[] = {
0x4, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x0
};
const byte PROGMEM output_vals[] = {
0b1, 0b11100111, 0b10, 0b11001111, 0b100, 0b11101111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11111111,
0b1, 0b11000111, 0b10, 0b11011111, 0b100, 0b11001111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11111111,
0b1, 0b11001111, 0b10, 0b10110111, 0b100, 0b11001111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11101111,
0b1, 0b11000111, 0b10, 0b10110111, 0b100, 0b11001111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11001111,
0b1, 0b10110111, 0b10, 0b10110111, 0b100, 0b11001111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11010111,
0b1, 0b10010011, 0b10, 0b10110111, 0b100, 0b11001111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11101111,
0b1, 0b10010011, 0b10, 0b10110011, 0b100, 0b11001111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11000111,
0b1, 0b10111111, 0b10, 0b10111011, 0b100, 0b11000111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11101111, 0b10000000, 0b10010011,
0b1, 0b110011, 0b10, 0b10100111, 0b100, 0b11000111, 0b1000, 0b11101111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11000111, 0b10000000, 0b10000111,
0b1, 0b1111011, 0b10, 0b111111, 0b100, 0b11111111, 0b1000, 0b11000111, 0b10000, 0b11111111, 0b100000, 0b11101111, 0b1000000, 0b10110111, 0b10000000, 0b1111111,
0b1, 0b1111110, 0b10, 0b111111, 0b100, 0b10001111, 0b1000, 0b11101111, 0b10000, 0b11010111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b111111,
0b1, 0b11111110, 0b10, 0b11111110, 0b100, 0b101111, 0b1000, 0b10110111, 0b10000, 0b11101111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b111110,
0b1, 0b11111100, 0b10, 0b11111110, 0b100, 0b11111, 0b1000, 0b100111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b1111111, 0b10000000, 0b1111110,
0b1, 0b11111101, 0b10, 0b10111100, 0b100, 0b11001110, 0b1000, 0b1101111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b1111110, 0b10000000, 0b1111101,
0b1, 0b1111001, 0b10, 0b1011100, 0b100, 0b10001100, 0b1000, 0b11001111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b1111110, 0b10000000, 0b1111101,
0b1, 0b1111011, 0b10, 0b11001111, 0b100, 0b11111101, 0b1000, 0b10101111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b1111110, 0b10000000, 0b111001,
0b1, 0b1010000, 0b10, 0b11111111, 0b100, 0b11101111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b111100, 0b10000000, 0b10111001,
0b1, 0b110110, 0b10, 0b11100000, 0b100, 0b11111111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b1111110, 0b1000000, 0b111000, 0b10000000, 0b11010111,
0b1, 0b11110, 0b10, 0b11100000, 0b100, 0b11110001, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b10111111, 0b1000000, 0b10111001, 0b10000000, 0b11000111,
0b1, 0b111110, 0b10, 0b10001111, 0b100, 0b11101110, 0b1000, 0b11111011, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b10100011, 0b10000000, 0b11100000,
0b1, 0b10111010, 0b10, 0b10101110, 0b100, 0b11100111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11110111, 0b1000000, 0b11001111, 0b10000000, 0b10101110,
0b1, 0b10110110, 0b10, 0b11101101, 0b100, 0b11000111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11101111, 0b1000000, 0b11000111, 0b10000000, 0b10100101,
0b1, 0b1110100, 0b10, 0b11111011, 0b100, 0b11000111, 0b1000, 0b11101111, 0b10000, 0b11111111, 0b100000, 0b11000111, 0b1000000, 0b11111011, 0b10000000, 0b111111,
0b1, 0b111000, 0b10, 0b11111000, 0b100, 0b11000111, 0b1000, 0b11000111, 0b10000, 0b11010111, 0b100000, 0b11100111, 0b1000000, 0b10000111, 0b10000000, 0b111001,
0b1, 0b10110111, 0b10, 0b10001111, 0b100, 0b11011101, 0b1000, 0b10111011, 0b10000, 0b11011011, 0b100000, 0b10111011, 0b1000000, 0b111111, 0b10000000, 0b11101111,
0b1, 0b10110111, 0b10, 0b10101111, 0b100, 0b11101111, 0b1000, 0b10011001, 0b10000, 0b10010001, 0b100000, 0b11111, 0b1000000, 0b11111, 0b10000000, 0b11111,
0b1, 0b11101111, 0b10, 0b11100111, 0b100, 0b10100111, 0b1000, 0b10111101, 0b10000, 0b11110100, 0b100000, 0b11111010, 0b1000000, 0b11101110, 0b10000000, 0b11101111,
0b1, 0b11001111, 0b10, 0b11111111, 0b100, 0b11100011, 0b1000, 0b1000100, 0b10000, 0b1111110, 0b100000, 0b1110010, 0b1000000, 0b11110101, 0b10000000, 0b11000111,
0b1, 0b11010111, 0b10, 0b11011111, 0b100, 0b11011000, 0b1000, 0b11101, 0b10000, 0b11111111, 0b100000, 0b1110011, 0b1000000, 0b11111100, 0b10000000, 0b11010011,
0b1, 0b10010011, 0b10, 0b10011001, 0b100, 0b1001000, 0b1000, 0b11001, 0b10000, 0b1111010, 0b100000, 0b11111000, 0b1000000, 0b11101100, 0b10000000, 0b11110001,
0b1, 0b10011111, 0b10, 0b11111111, 0b100, 0b11101111, 0b1000, 0b11001111, 0b10000, 0b11110111, 0b100000, 0b11110011, 0b1000000, 0b11111111, 0b10000000, 0b11011110,
0b1, 0b10011111, 0b10, 0b11011111, 0b100, 0b11001111, 0b1000, 0b11000111, 0b10000, 0b11110011, 0b100000, 0b11110011, 0b1000000, 0b11111111, 0b10000000, 0b10011111,
0b1, 0b11101111, 0b10, 0b11111111, 0b100, 0b10110111, 0b1000, 0b11011011, 0b10000, 0b11111111, 0b100000, 0b11110011, 0b1000000, 0b11111111, 0b10000000, 0b10011111,
0b1, 0b11011111, 0b10, 0b11111111, 0b100, 0b11111111, 0b1000, 0b11111111, 0b10000, 0b11110011, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11011111,
0b1, 0b11111111, 0b10, 0b11111111, 0b100, 0b11111111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11111111,
0b1, 0b11111111, 0b10, 0b11111111, 0b100, 0b11111111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11111111,
0b1, 0b11111111, 0b10, 0b11111111, 0b100, 0b11111111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11111111,
0b1, 0b11111111, 0b10, 0b11111111, 0b100, 0b11111111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11111111,
0b1, 0b11111111, 0b10, 0b11111111, 0b100, 0b11111111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11111111,
0b1, 0b11111111, 0b10, 0b11111111, 0b100, 0b11111111, 0b1000, 0b11111111, 0b10000, 0b11111111, 0b100000, 0b11111111, 0b1000000, 0b11111111, 0b10000000, 0b11111111
};
