#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista.h"

int main()
{

  Lista *l = create(5);

  printf("lista esta vazia: %d\n\n", isEmpty(l));

  add(l, 1);
  add(l, 2);
  add(l, 3);
  add(l, 4);
  add(l, 5);

  printf("Lista esta cheia: %d\n\n", isFull(l));

  removeElement(l, 0);
  removeElement(l, 1);
  removeElement(l, 10);

  return 0;
}
