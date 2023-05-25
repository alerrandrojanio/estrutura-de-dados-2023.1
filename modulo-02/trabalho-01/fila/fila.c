#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "fila.h"

struct fila
{
  int *data;
  int n;
  int size;
};

// complexidade espacial O(n)
// complexidade temporal O(1) || O(c)
Fila *create(int n)
{
  Fila *f = (Fila *)malloc(sizeof(Fila));
  f->data = (int *)calloc(n, sizeof(int));
  f->n = n;
  f->size = 0;
  printf("Instancia de Fila criada em %p!\n\n", f);

  return f;
}

// complexidade espacial O(1) || O(c)
// complexidade temporal O(1) || O(c)
int push(Fila *f, int n)
{
  if (isFull(f))
  {
    return 0;
  }

  f->data[f->size++] = n;

  return 1;
}

// complexidade espacial O(n)
// complexidade temporal O(n)
int pop(Fila *f)
{
  if (isEmpty(f))
  {
    return 0;
  }

  int n = f->data[0];

  for (int i = 0; i < f->size - 1; i++)
  {
    f->data[i] = f->data[i + 1];
  }

  f->size--;

  return n;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
int size(Fila *f)
{
  return f->size;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
int top(Fila *f)
{
  return f->data[f->size - 1];
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
int bottom(Fila *f)
{
  return f->data[0];
}

// complexidade espacial O(n)
// complexidade temporal O(n)
int find(Fila *f, int n)
{
  for (int i = 0; i < f->size; i++)
  {
    if (f->data[i] == n)
    {
      return i;
    }
  }

  return -1;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
bool isEmpty(Fila *f)
{
  if (f->size == 0)
  {
    return true;
  }

  return false;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
bool isFull(Fila *f)
{
  if (f->size == f->n)
  {
    return true;
  }

  return false;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
void clear(Fila *f)
{
  f->size = 0;
}
