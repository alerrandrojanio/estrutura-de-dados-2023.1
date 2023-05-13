#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

void show(int n)
{
  printf("Pop do numero: %d\n", n);
}

int main()
{

  Pilha *p = create(5);

  printf("Pilha esta vazia: %d\n\n", isEmpty(p));

  push(p, 1);
  push(p, 2);
  push(p, 3);
  push(p, 4);
  push(p, 5);

  printf("Pilha esta cheia: %d\n\n", isFull(p));

  show(pop(p));
  show(pop(p));
  show(pop(p));
  show(pop(p));
  show(pop(p));

  return 0;
}
