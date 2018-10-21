#include "..bcd.h"
#include <stdio.h>
#include <util/delay.h>
  
int main(){
  BCD * disp = bcd_setup(6, 7, 8, 9, 10, 11, 12, 13, 500);

  bcd_show_string(disp, "olar eair tudo certo");
  bcd_show_char(disp, '1');
  bcd_show_string(disp, "abcdef");

  bcd_set_loop(disp, 1);
  bcd_show_string(disp, "hu3");

  while(1);
}