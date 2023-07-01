#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

struct tree
{
  int value;
  struct tree *right;
  struct tree *left;
};

Tree *create(int v)
{
  Tree *tree = (Tree *)malloc(sizeof(Tree));
  tree->value = v;
  tree->right = NULL;
  tree->left = NULL;

  return tree;
}

void clear(Tree *tree)
{
  if (tree != NULL)
  {
    clear(tree->left);
    clear(tree->right);
    free(tree);
  }
}

int insert(Tree *tree, int value)
{
  if (tree == NULL)
  {
    return 0;
  }

  if (value < tree->value)
  {
    if (tree->left == NULL)
    {
      tree->left = create(value);
      return 1;
    }
    else
    {
      return insert(tree->left, value);
    }
  }
  else if (value > tree->value)
  {
    if (tree->right == NULL)
    {
      tree->right = create(value);
      return 1;
    }
    else
    {
      return insert(tree->right, value);
    }
  }
  else
  {
    return 0;
  }
}

void printAllPre(Tree *tree)
{
  if (tree != NULL)
  {
    printf("%d ", tree->value);
    printAllPre(tree->left);
    printAllPre(tree->right);
  }
}

void printAllPos(Tree *tree)
{
  if (tree != NULL)
  {
    printAllPos(tree->left);
    printAllPos(tree->right);
    printf("%d ", tree->value);
  }
}

void printAllIn(Tree *tree)
{
  if (tree != NULL)
  {
    printAllIn(tree->left);
    printf("%d ", tree->value);
    printAllIn(tree->right);
  }
}

Tree *search(Tree *tree, int value)
{
  if (tree == NULL || tree->value == value)
  {
    return tree;
  }

  if (value < tree->value)
  {
    return search(tree->left, value);
  }
  else
  {
    return search(tree->right, value);
  }
}