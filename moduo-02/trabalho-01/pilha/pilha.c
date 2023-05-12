#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

struct pilha {
  int* data;
  int n;
  int size;
};

Pilha* create(int n) {
  Pilha* p = (Pilha*)malloc(sizeof(Pilha));
  p->data = (int*)calloc(n, sizeof(int));
  p->n = n;
  p->size = 0;
  printf("Instância de Pilha criada em %p!\n\n", p);

  return p;
}

int push(Pilha* p, int n) {
  if(isFull(p)) {
    return 0; 
  }
  
  p->data[p->size++] = n;
  return 1;
}

int pop(Pilha* p) {
  if(isEmpty(p)) {
    return 0;
  }
  
  int n = p->data[p->size - 1];
  p->size--;

  return n;
}

int size(Pilha* p) {
  return p->size;
}

int top(Pilha* p) {
  return p->data[p->size - 1];
}

int bottom(Pilha* p) {
  return p->data[0];
}

int find(Pilha* p, int n) {
  if (n >= p->size || n < 0) {
    return -1;
  }

  return p->data[n];
}

bool isEmpty(Pilha* p) {
  if(p->size == 0) {
    return true;
  }
  
  return false;
}

bool isFull(Pilha* p) {
  if(p->size == p->n) {
    return true;
  }
  
  return false; 
}

void clear(Pilha* p) {
  p->size = 0;
}