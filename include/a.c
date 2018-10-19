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

void let(Fnvector * f, void * function){
  void **temp = f->ptr;
  // f->size++;
  f->ptr = realloc(temp, f->size++ * sizeof(void *));
  f->ptr[f->size-1] = function;
}

void main(){
  Fnvector * f = (Fnvector*)malloc(sizeof(Fnvector));

  let(f, o);
  let(f, a);
  function(f);
}