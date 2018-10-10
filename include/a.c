#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int size;
  void (**ptr)(void);
}Fnvector;


void function(Fnvector * f){
  int i;
  printf("%i\n", f->size);
  for(i=0; i<f->size; i++){
    (*(f->ptr[i]))();
  }
}

void o(){
  printf("Olar1\n");
}

void a(){
  printf("Olar2\n");
}

void main(){
  Fnvector * f = (Fnvector*)malloc(sizeof(Fnvector));

  void (*ptr[2])();
  ptr[0] = o;
  ptr[1] = a;

  f->size = 2;
  f->ptr = ptr;
  function(f);
}