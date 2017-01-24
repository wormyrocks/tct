#define NUM_STEPS 323
const byte PROGMEM input_vals[] = {
0x4, 0x45, 0x14, 0x51, 0x40
};
const byte PROGMEM output_vals[] = {
0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x1, 0x18, 0x2, 0x30, 0x4, 0x10, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x0,
0x1, 0x38, 0x2, 0x20, 0x4, 0x30, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x0,
0x1, 0x30, 0x2, 0x48, 0x4, 0x30, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x10,
0x1, 0x38, 0x2, 0x48, 0x4, 0x30, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x30,
0x1, 0x48, 0x2, 0x48, 0x4, 0x30, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x28,
0x1, 0x6c, 0x2, 0x48, 0x4, 0x30, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x10,
0x1, 0x6c, 0x2, 0x4c, 0x4, 0x30, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x38,
0x1, 0x40, 0x2, 0x44, 0x4, 0x38, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x10, 0x80, 0x6c,
0x1, 0xcc, 0x2, 0x58, 0x4, 0x38, 0x8, 0x10, 0x10, 0x0, 0x20, 0x0, 0x40, 0x38, 0x80, 0x78,
0x1, 0x84, 0x2, 0xc0, 0x4, 0x0, 0x8, 0x38, 0x10, 0x0, 0x20, 0x10, 0x40, 0x48, 0x80, 0x80,
0x1, 0x81, 0x2, 0xc0, 0x4, 0x70, 0x8, 0x10, 0x10, 0x28, 0x20, 0x0, 0x40, 0x0, 0x80, 0xc0,
0x1, 0x1, 0x2, 0x1, 0x4, 0xd0, 0x8, 0x48, 0x10, 0x10, 0x20, 0x0, 0x40, 0x0, 0x80, 0xc1,
0x1, 0x3, 0x2, 0x1, 0x4, 0xe0, 0x8, 0xd8, 0x10, 0x0, 0x20, 0x0, 0x40, 0x80, 0x80, 0x81,
0x1, 0x2, 0x2, 0x43, 0x4, 0x31, 0x8, 0x90, 0x10, 0x0, 0x20, 0x0, 0x40, 0x81, 0x80, 0x82,
0x1, 0x86, 0x2, 0xa3, 0x4, 0x73, 0x8, 0x30, 0x10, 0x0, 0x20, 0x0, 0x40, 0x81, 0x80, 0x82,
0x1, 0x84, 0x2, 0x30, 0x4, 0x2, 0x8, 0x50, 0x10, 0x0, 0x20, 0x0, 0x40, 0x81, 0x80, 0xc6,
0x1, 0xaf, 0x2, 0x0, 0x4, 0x10, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0xc3, 0x80, 0x46,
0x1, 0xc9, 0x2, 0x1f, 0x4, 0x0, 0x8, 0x0, 0x10, 0x0, 0x20, 0x81, 0x40, 0xc7, 0x80, 0x28,
0x1, 0xe1, 0x2, 0x1f, 0x4, 0xe, 0x8, 0x0, 0x10, 0x0, 0x20, 0x40, 0x40, 0x46, 0x80, 0x38,
0x1, 0xc1, 0x2, 0x70, 0x4, 0x11, 0x8, 0x4, 0x10, 0x0, 0x20, 0x0, 0x40, 0x5c, 0x80, 0x1f,
0x1, 0x45, 0x2, 0x51, 0x4, 0x18, 0x8, 0x0, 0x10, 0x0, 0x20, 0x8, 0x40, 0x30, 0x80, 0x51,
0x1, 0x49, 0x2, 0x12, 0x4, 0x38, 0x8, 0x0, 0x10, 0x0, 0x20, 0x10, 0x40, 0x38, 0x80, 0x5a,
0x1, 0x8b, 0x2, 0x4, 0x4, 0x38, 0x8, 0x10, 0x10, 0x0, 0x20, 0x38, 0x40, 0x4, 0x80, 0xc0,
0x1, 0xc7, 0x2, 0x7, 0x4, 0x38, 0x8, 0x38, 0x10, 0x28, 0x20, 0x18, 0x40, 0x78, 0x80, 0xc6,
0x1, 0x48, 0x2, 0x70, 0x4, 0x22, 0x8, 0x44, 0x10, 0x24, 0x20, 0x44, 0x40, 0xc0, 0x80, 0x10,
0x1, 0x48, 0x2, 0x50, 0x4, 0x10, 0x8, 0x66, 0x10, 0x6e, 0x20, 0xe0, 0x40, 0xe0, 0x80, 0xe0,
0x1, 0x10, 0x2, 0x18, 0x4, 0x58, 0x8, 0x42, 0x10, 0xb, 0x20, 0x5, 0x40, 0x11, 0x80, 0x10,
0x1, 0x30, 0x2, 0x0, 0x4, 0x1c, 0x8, 0xbb, 0x10, 0x81, 0x20, 0x8d, 0x40, 0xa, 0x80, 0x38,
0x1, 0x28, 0x2, 0x20, 0x4, 0x27, 0x8, 0xe2, 0x10, 0x0, 0x20, 0x8c, 0x40, 0x3, 0x80, 0x2c,
0x1, 0x6c, 0x2, 0x66, 0x4, 0xb7, 0x8, 0xe6, 0x10, 0x85, 0x20, 0x7, 0x40, 0x13, 0x80, 0xe,
0x1, 0x60, 0x2, 0x0, 0x4, 0x10, 0x8, 0x30, 0x10, 0x8, 0x20, 0xc, 0x40, 0x0, 0x80, 0x21,
0x1, 0x60, 0x2, 0x20, 0x4, 0x30, 0x8, 0x38, 0x10, 0xc, 0x20, 0xc, 0x40, 0x0, 0x80, 0x60,
0x1, 0x10, 0x2, 0x0, 0x4, 0x48, 0x8, 0x24, 0x10, 0x0, 0x20, 0xc, 0x40, 0x0, 0x80, 0x60,
0x1, 0x20, 0x2, 0x0, 0x4, 0x0, 0x8, 0x0, 0x10, 0xc, 0x20, 0x0, 0x40, 0x0, 0x80, 0x20,
0x1, 0x0, 0x2, 0x0, 0x4, 0x0, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x0,
0x1, 0x0, 0x2, 0x0, 0x4, 0x0, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x0,
0x1, 0x0, 0x2, 0x0, 0x4, 0x0, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x0,
0x1, 0x0, 0x2, 0x0, 0x4, 0x0, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x0,
0x1, 0x0, 0x2, 0x0, 0x4, 0x0, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x0,
0x1, 0x0, 0x2, 0x0, 0x4, 0x0, 0x8, 0x0, 0x10, 0x0, 0x20, 0x0, 0x40, 0x0, 0x80, 0x0
};
