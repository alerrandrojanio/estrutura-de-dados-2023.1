#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include "pilha.h"

void show(int n) {
  printf("Pop feito do número: %d\n", n);
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  Pilha *p = create(5);
  push(p, 1);
  push(p, 2);
  push(p, 3);
  push(p, 4);
  push(p, 5);

  show(pop(p));
  show(pop(p));
  show(pop(p));
  show(pop(p));
  show(pop(p));

  return 0;
}