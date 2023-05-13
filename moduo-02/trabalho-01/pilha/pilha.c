#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

struct pilha
{
  int *data;
  int n;
  int size;
};

// complexidade espacial O(1) || O(c)
// complexidade temporal O(1) || O(c)
Pilha *create(int n)
{
  Pilha *p = (Pilha *)malloc(sizeof(Pilha));
  p->data = (int *)calloc(n, sizeof(int));
  p->n = n;
  p->size = 0;
  printf("Instancia de Pilha criada em %p!\n\n", p);

  return p;
}

// complexidade espacial O(1) || O(c)
// complexidade temporal O(1) || O(c)
int push(Pilha *p, int n)
{
  if (isFull(p))
  {
    return 0;
  }

  p->data[p->size++] = n;

  return 1;
}

// complexidade espacial O(1) || O(c)
// complexidade temporal O(1) || O(c)
int pop(Pilha *p)
{
  if (isEmpty(p))
  {
    return 0;
  }

  int n = p->data[p->size - 1];
  p->size--;

  return n;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
int size(Pilha *p)
{
  return p->size;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
int top(Pilha *p)
{
  return p->data[p->size - 1];
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
int bottom(Pilha *p)
{
  return p->data[0];
}

// complexidade espacial O(c)
// complexidade temporal O(n)
int find(Pilha *p, int n)
{
  for (int i = 0; i < p->size; i++)
  {
    if (p->data[i] == n)
    {
      return i;
    }
  }

  return -1;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
bool isEmpty(Pilha *p)
{
  if (p->size == 0)
  {
    return true;
  }

  return false;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
bool isFull(Pilha *p)
{
  if (p->size == p->n)
  {
    return true;
  }

  return false;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
void clear(Pilha *p)
{
  p->size = 0;
}
