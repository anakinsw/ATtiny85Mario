#define mario_w 16
#define mario_h 16

static const unsigned char mario_idle[] PROGMEM = {
	 0, 0, 0, 0, 0, 0, 0, 48, 32, 184, 32, 253, 96, 225, 48, 60, 176, 60, 240, 224, 96, 252, 192, 189, 128, 57, 0, 0, 0, 0, 0, 0};
	
	/*
static const unsigned char mario_idle[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0xE0, 0x0F, 
  0x70, 0x02, 0xD8, 0x00, 0x18, 0x06, 0x00, 0x00, 0xB0, 0x05, 0xB8, 0x0D, 
  0xB8, 0x1D, 0xF8, 0x1F, 0x60, 0x06, 0x70, 0x0E,
};*/

static const unsigned char mario_walk1[] PROGMEM = {
 0, 0, 0, 0, 0, 12, 16, 124, 144, 108, 176, 108, 24, 126, 88, 62, 120, 48, 48, 190, 224, 254, 192, 254, 0, 108, 0, 12, 0, 0, 0, 0};

static const unsigned char mario_walk2[] PROGMEM= {0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 144, 88, 176, 116, 24, 254, 88, 240, 120, 254, 48, 240, 224, 62, 192, 28, 0, 0, 0, 0, 0, 0};

static const unsigned char mario_jump1[] PROGMEM= {0, 0, 0, 0, 0, 12, 32, 12, 32, 25, 96, 189, 48, 248, 176, 252, 240, 60, 96, 124, 192, 125, 128, 97, 0, 192, 0, 0, 0, 0, 0, 0};

static const unsigned char mario_jump2[] PROGMEM= {0, 0, 0, 0, 224, 56, 224, 49, 32, 51, 32, 45, 96, 125, 48, 124, 176, 108, 240, 252, 96, 252, 192, 125, 128, 109, 0, 200, 0, 0, 0, 0};

static const unsigned char goomba1[] PROGMEM ={
  0x80, 0x63, 0xE0, 0x97, 0xF0, 0x0F, 0xE8, 0x0F, 0xEC, 0x1F, 0x1E, 0x17, 
  0xBF, 0x3B, 0x3F, 0xDA, 0x3F, 0xDA, 0xBF, 0x7B, 0x1E, 0x37, 0xEC, 0x1F, 
  0xE8, 0x97, 0xF0, 0x67, 0xE0, 0x07, 0x80, 0x03, };

static const unsigned char squashed[] PROGMEM = {
  0x58, 0x9C, 0x3C, 0x3E, 0x3E, 0x13, 0x7F, 0xB7, 0xB7, 0x7F, 0x53, 0x3E, 
  0x9E, 0x5C, 0x1C, 0x18};

static const unsigned char fire[] PROGMEM = {
  0x00, 0x18, 0x3C, 0x66, 0x66, 0x3C, 0x18, 0x00, };
