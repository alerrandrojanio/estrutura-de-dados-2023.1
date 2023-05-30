#include <stdio.h>
#include <stdlib.h>
#include "lista-circular.h"

struct head
{
  Element *first;
  Element *last;
  int size;
};

struct element
{
  int value;
  struct element *next;
  struct element *previous;
};

// complexidade espacial O(1) || O(c)
// complexidade temporal O(1) || O(c)
Head *create()
{
  Head *new = (Head *)malloc(sizeof(Head));
  new->first = NULL;
  new->last = NULL;
  new->size = 0;

  return new;
}

// complexidade espacial O(c)
// complexidade temporal O(n)
int add(Head *head, int n)
{
  Element *new = (Element *)malloc(sizeof(Element));
  new->value = n;
  new->next = NULL;
  new->previous = NULL;

  if (head->size == 0)
  {
    head->first = new;
    head->last = new;
    head->size++;

    return 1;
  }

  new->previous = head->last;
  head->last->next = new;
  head->last = new;
  head->size++;

  return 1;
}

// complexidade espacial O(c)
// complexidade temporal O(n)
int removeElement(Head *head, int n)
{
  if (head->size == 0)
  {
    return 0;
  }

  Element *aux = head->first;

  while (aux != NULL)
  {
    if (aux->value == n)
    {
      if (aux == head->first)
      {
        head->first = aux->next;
        head->first->previous = NULL;
      }
      else if (aux == head->last)
      {
        head->last = aux->previous;
        head->last->next = NULL;
      }
      else
      {
        aux->previous->next = aux->next;
        aux->next->previous = aux->previous;
      }

      free(aux);
      head->size--;

      return 1;
    }

    aux = aux->next;
  }

  return 0;
}

// complexidade espacial O(c)
// complexidade temporal O(c)
int size(Head *head)
{
  return head->size;
}

// complexidade espacial O(c)
// complexidade temporal O(n)
int find(Head *head, int n)
{
  if (head->size == 0)
  {
    return -1;
  }

  Element *aux = head->first;
  int i = 0;

  while (aux->next != NULL)
  {
    if (aux->value == n)
    {
      printf("Elemento %d encontrado! Posicao %d\n\n", n, i);
      return i;
    }

    aux = aux->next;
    i++;
  }

  printf("Elemento %d nao encontrado!\n\n", n);
  return -1;
}

// complexidade espacial O(c)
// complexidade temporal O(c)
int isEmpty(Head *head)
{
  return head->size == 0;
}

// complexidade espacial O(n)
// complexidade temporal O(c)
void clear(Head *head)
{
  Element *current = head->first;
  Element *next;

  while (current != NULL)
  {
    next = current->next;
    free(current);
    current = next;
  }

  head->first = NULL;
  head->size = 0;
}

// complexidade espacial O(c)
// complexidade temporal O(n)
int showList(Head *head)
{
  if (head->size == 0)
  {
    printf("Lista vazia!\n\n");

    return 0;
  }

  Element *aux = head->first;

  printf("Lista: ");
  while (aux != NULL)
  {
    printf("%d ", aux->value);
    aux = aux->next;
  }
  printf("\n\n");

  return 1;
}

// complexidade espacial O(c)
// complexidade temporal O(n)
int showListUpsideDown(Head *head)
{
  if (isEmpty(head))
  {
    printf("Lista vazia!\n\n");

    return 0;
  }

  Element *aux = head->last;

  printf("Lista: ");
  while (aux != NULL)
  {
    printf("%d ", aux->value);
    aux = aux->previous;
  }
  printf("\n\n");

  return 1;
}