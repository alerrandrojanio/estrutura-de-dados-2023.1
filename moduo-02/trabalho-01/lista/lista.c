#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista.h"

struct lista
{
  int *data;
  int n;
  int size;
};

// complexidade espacial O(n)
// complexidade temporal O(1) || O(c)
Lista *create(int n)
{
  Lista *l = (Lista *)malloc(sizeof(Lista));
  l->data = (int *)calloc(n, sizeof(int));
  l->n = n;
  l->size = 0;
  printf("Instancia de Lista criada em %p!\n\n", l);

  return l;
}

// complexidade espacial O(1) || O(c)
// complexidade temporal O(1) || O(c)
int add(Lista *l, int n)
{
  if (isFull(l))
  {
    return 0;
  }

  l->data[l->size++] = n;

  return 1;
}

// complexidade espacial O(n)
// complexidade temporal O(n)
int removeElement(Lista *l, int position)
{
  if (isEmpty(l) || position < 0 || position >= l->size)
  {
    printf("Nao ha elemento na posicao: %d\n\n", position);

    return 0;
  }

  int n = l->data[position];

  for (int i = position; i < l->size - 1; i++)
  {
    l->data[i] = l->data[i + 1];
  }

  l->size--;

  printf("Elemento removido: %d\n\n", n);
  return 1;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
int size(Lista *l)
{
  return l->size;
}

// complexidade espacial O(n)
// complexidade temporal O(n)
int find(Lista *l, int n)
{
  for (int i = 0; i < l->size; i++)
  {
    if (l->data[i] == n)
    {
      return i;
    }
  }

  return -1;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
bool isEmpty(Lista *l)
{
  if (l->size == 0)
  {
    return true;
  }

  return false;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
bool isFull(Lista *l)
{
  if (l->size == l->n)
  {
    return true;
  }

  return false;
}

// complexidade espacial O(c)
// complexidade temporal O(1) || O(c)
void clear(Lista *l)
{
  l->size = 0;
}
