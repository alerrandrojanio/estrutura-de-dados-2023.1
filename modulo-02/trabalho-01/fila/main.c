#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fila.h"

void show(int n)
{
  printf("Pop do numero: %d\n", n);
}

int main()
{

  Fila *f = create(5);

  printf("Fila esta vazia: %d\n\n", isEmpty(f));

  push(f, 1);
  printf("Tamanho da Fila: %d\n\n", size(f));

  push(f, 2);
  push(f, 3);
  push(f, 4);
  push(f, 5);

  printf("Posicao do numero 3: %d\n\n", find(f, 3));

  printf("Fila esta cheia: %d\n\n", isFull(f));

  show(pop(f));
  show(pop(f));
  show(pop(f));
  show(pop(f));
  show(pop(f));
  printf("Tamanho da Fila: %d\n\n", size(f));

  return 0;
}