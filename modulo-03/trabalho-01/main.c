#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main()
{
  Tree *tree = create();

  insert(tree, 10);
  insert(tree, 5);
  insert(tree, 15);
}