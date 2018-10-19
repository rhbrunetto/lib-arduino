#ifndef __BCD__
#define __BCD__

typedef struct {
  uint8_t a, b, c, d, e, f, g;
}BCD;


BCD * bcd_setup(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g){
  BCD * bcd = (BCD*)malloc(sizeof(BCD));
  bcd->a = a;
  bcd->b = b;
  bcd->c = c;
  bcd->d = d;
  bcd->e = e;
  bcd->f = f;
  bcd->g = g;
}

void bcd_show(char * character);


#endif