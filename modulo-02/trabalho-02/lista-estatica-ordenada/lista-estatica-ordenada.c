#include <stdio.h>
#include <stdlib.h>
#include "lista-estatica-ordenada.h"

struct list
{
  int *data;
  int n;
  int size;
};

// complexidade espacial O(n)
// complexidade temporal O(1) || O(c)
List *create(int n)
{
  List *list = (List *)malloc(sizeof(List));
  list->data = (int *)calloc(n, sizeof(int));
  list->n = n;
  list->size = 0;
  printf("Instancia de Lista criada em %p!\n\n", list);

  return list;
}

// complexidade espacial O(c)
// complexidade temporal O(n)
int add(List *list, int n)
{
  if (list->size == n)
  {
    return 0;
  }

  if (list->size == 0)
  {
    list->data[0] = n;
    list->size++;

    return 1;
  }

  int i, j;

  for (i = 0; i < list->size; i++)
  {
    if (n < list->data[i])
    {
      break;
    }
  }

  for (j = list->size; j > i; j--)
  {
    list->data[j] = list->data[j - 1];
  }

  list->data[i] = n;
  list->size++;

  return 1;
}

// complexidade espacial O(c)
// complexidade temporal O(n)
int removeElement(List *list, int n)
{
  if (list->size == 0)
  {
    return 0;
  }

  int i = linearSearch(list, n);

  if (i == -1)
  {
    return 0;
  }

  for (int j = i; j < list->size - 1; j++)
  {
    list->data[j] = list->data[j + 1];
  }

  list->size--;

  return 1;
}

// complexidade espacial O(c)
// complexidade temporal O(c)
int size(List *list)
{
  return list->size;
}

// complexidade espacial O(c)
// complexidade temporal O(n)
int linearSearch(List *list, int n)
{
  for (int i = 0; i < list->size; i++)
  {
    if (list->data[i] == n)
    {
      printf("Elemento %d encontrado! Posicao %d\n\n", n, i);

      return i;
    }
  }
  printf("Elemento %d nao encontrado!\n\n", n);

  return -1;
}

// complexidade espacial O(c)
// complexidade temporal O(log n)
int binarySearch(List *list, int n)
{
  int left = 0;
  int right = list->size - 1;
  int middle = 0;

  while (left <= right)
  {
    middle = (left + right) / 2;

    if (list->data[middle] == n)
    {
      printf("Elemento %d encontrado! Posicao %d\n\n", n, middle);

      return middle;
    }

    if (list->data[middle] < n)
    {
      left = middle + 1;
    }
    else
    {
      right = middle - 1;
    }
  }

  printf("Elemento %d nao encontrado!\n\n", n);

  return -1;
}

// complexidade espacial O(c)
// complexidade temporal O(c)
int isFull(List *list)
{
  return list->size == list->n;
}

// complexidade espacial O(c)
// complexidade temporal O(c)
int isEmpty(List *list)
{
  return list->size == 0;
}

// complexidade espacial O(c)
// complexidade temporal O(c)
void clear(List *list)
{
  free(list->data);
  free(list);
}

// complexidade espacial O(c)
// complexidade temporal O(n)
void showList(List *list)
{
  if (isEmpty(list))
  {
    printf("Lista vazia!\n\n");

    return 0;
  }

  printf("Elementos da lista: ");

  for (int i = 0; i < list->size; i++)
  {
    printf("%d ", list->data[i]);
  }

  printf("\n\n");
}