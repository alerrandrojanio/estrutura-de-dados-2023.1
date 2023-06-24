#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

struct tree
{
  struct node *first;
  int size;
};

struct node
{
  int value;
  struct node *left;
  struct node *right;
};

Tree *create()
{
  Tree *tree = (Tree *)malloc(sizeof(Tree));
  tree->first = NULL;
  tree->size = 0;
  printf("Instancia de arvore criada em %p!\n\n", tree);

  return tree;
}

int insert(Tree *tree, int value)
{
  if (tree->size == 0)
  {
    Node *node = (Node *)malloc(sizeof(Node));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    tree->first = node;
    tree->size++;
    return 1;
  }
  else
  {
    Node *node = tree->first;
    while (node != NULL)
    {
      if (value < node->value)
      {
        if (node->left == NULL)
        {
          Node *newNode = (Node *)malloc(sizeof(Node));
          newNode->value = value;
          newNode->left = NULL;
          newNode->right = NULL;
          node->left = newNode;
          tree->size++;
          return 1;
        }
        else
        {
          node = node->left;
        }
      }
      else if (value > node->value)
      {
        if (node->right == NULL)
        {
          Node *newNode = (Node *)malloc(sizeof(Node));
          newNode->value = value;
          newNode->left = NULL;
          newNode->right = NULL;
          node->right = newNode;
          tree->size++;
          return 1;
        }
        else
        {
          node = node->right;
        }
      }
      else
      {
        return 0;
      }
    }
  }
}

void clear(Tree *tree)
{
  Node *node = tree->first;
  while (node != NULL)
  {
    Node *left = node->left;
    Node *right = node->right;
    free(node);
    node = left;
    if (node == NULL)
    {
      node = right;
    }
  }
  free(tree);
}