#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bag.h"

struct bag {
  int *data;
  int n;
  int size;
};

Bag* create(int n) {
  Bag* bag = (Bag*)malloc(sizeof(Bag));
  bag->data = (int*)calloc(n, sizeof(int));
  bag->n = n;
  bag->size = 0;
  printf("Instância de Bag criada em %p!\n\n", bag);

  return bag;
}

void insert(Bag *bag, int e) {
  if (bag->size < bag->n && e > 0) {
    int i = 0;

    do {
      i = rand() % bag->n;
    }
    while (bag->data[i] != 0);
      bag->data[i] = e;
      printf("Elemento %i inserido em bag->[%i].\n\n", e, i);

      bag->size++;
    }
}

int get(Bag* bag) {
  int i = 0;

  do {
      i = rand() % bag->size;
  } while (bag->data[i] == 0);
  
  int aux = bag->data[i];
  bag->data[i] = 0;

  return aux;
}

bool search(Bag *bag, int e) {
  for (int i = 0; i < bag->n; i++) {
    if (bag->data[i] == e) {
      return 1;
    }
  }

  return 0;
}

int size(Bag* bag) {
  return bag->size;
}

void printAll(Bag* bag) {
  printf("Bag: {");
  for (int i = 0; i < bag->n; i++) {
    if (bag->data[i] != 0) {
      printf("%i", bag->data[i]);
      if (i < bag->n - 1) {
        printf(", ");
      }
    }
  }
  printf("}\n\n");
}
