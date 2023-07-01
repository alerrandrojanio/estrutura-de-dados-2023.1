#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main()
{
  Tree *tree = create();

  insert(tree, 10);
  insert(tree, 5);
  insert(tree, 15);

  Tree *searched = search(tree, 10);
  printf("Numero 10 na arvore? %s", searched != NULL ? "Verdadeiro\n\n" : "Falso\n\n");

  searched = search(tree, 1);
  printf("Numero 1 na arvore? %s", searched != NULL ? "Verdadeiro\n\n" : "Falso\n\n");

  printf("Pre-ordem:");
  printAllPre(tree);
  printf("\n\n");

  printf("In-ordem: ");
  printAllIn(tree);
  printf("\n\n");

  printf("Pos-ordem:");
  printAllPos(tree);
  printf("\n\n");
}
