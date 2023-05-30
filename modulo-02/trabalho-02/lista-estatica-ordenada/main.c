#include <stdio.h>
#include <stdlib.h>
#include "lista-estatica-ordenada.h"

int main()
{
  List *list = create(10);

  showList(list);

  add(list, 5);
  add(list, 3);

  showList(list);

  add(list, 7);
  add(list, 1);

  showList(list);

  removeElement(list, 3);

  showList(list);

  linearSearch(list, 7);
  binarySearch(list, 7);

  printf("A lista esta cheia? %s\n", (isFull(list) == 1) ? "Verdadeiro\n\n" : "Falso\n\n");

  return 0;
}