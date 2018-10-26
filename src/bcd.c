#include "bcd.h"
#include "bcd_seven.h"

BCD * bcd_setup(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t dp, double delay){
  BCD * bcd = (BCD*)malloc(sizeof(BCD));

  bcd->a = a;   set_output(a);  set_pullup(a);
  bcd->b = b;   set_output(b);  set_pullup(b);
  bcd->c = c;   set_output(c);  set_pullup(c);
  bcd->d = d;   set_output(d);  set_pullup(d);
  bcd->e = e;   set_output(e);  set_pullup(e);
  bcd->f = f;   set_output(f);  set_pullup(f);
  bcd->g = g;   set_output(g);  set_pullup(g);
  bcd->dp = dp; set_output(dp); set_pullup(dp);
  
  bcd->loop = 0;
  bcd->delay = delay;

  return bcd;
}

void bcd_show_char(BCD * display, char c){
  int i;
  //Remove offset to fit table
  if (c>90) c=c-6;
  if (c>57) c=c-7;
  c=c-48;
  for (i=1; i<=SevenSegmentASCII[c][0]; i++){
    switch(SevenSegmentASCII[c][i]){
      case rep_a:   clr_pullup(display->a);  break;
      case rep_b:   clr_pullup(display->b);  break;
      case rep_c:   clr_pullup(display->c);  break;
      case rep_d:   clr_pullup(display->d);  break;
      case rep_e:   clr_pullup(display->e);  break;
      case rep_f:   clr_pullup(display->f);  break;
      case rep_g:   clr_pullup(display->g);  break;
      case rep_dp:  clr_pullup(display->dp); break;
    }
  }

  if(display->delay > 0){
    bcd_delay(display);
    bcd_clear(display);
  }
}

void bcd_set_loop(BCD * display, uint8_t loop){
  display->loop = loop;
}

void bcd_delay(BCD * display){
  _delay_ms(500);
}

void bcd_clear(BCD * display){
  set_pullup(display->a); 
  set_pullup(display->b); 
  set_pullup(display->c); 
  set_pullup(display->d); 
  set_pullup(display->e); 
  set_pullup(display->f); 
  set_pullup(display->g); 
  set_pullup(display->dp);
}

void bcd_show_string(BCD * display, char * str){
  if(str == NULL) return;
  do{
    uint8_t i=0;
    while(str[i] != '\0'){
      if(str[i] == ' '){
        bcd_clear(display);
        bcd_delay(display);
      }else{
        bcd_show_char(display, str[i]);
      }
      i++;
    }
  }while(display->loop);
}

void bcd_free(BCD * display){
  free(display);
}
