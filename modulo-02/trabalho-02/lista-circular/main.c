#include <stdio.h>
#include <stdlib.h>
#include "lista-circular.h"

int main()
{
  Head *list = create();

  printf("A lista esta vazia? %s\n", (isEmpty(list) == 1) ? "Verdadeiro\n\n" : "Falso\n\n");

  showList(list);
  add(list, 1);
  add(list, 2);
  add(list, 3);
  showList(list);
  showListUpsideDown(list);

  removeElement(list, 2);
  showList(list);

  return 0;
}
