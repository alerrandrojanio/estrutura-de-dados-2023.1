#include <stdio.h>
#include <stdlib.h>
#include "lista-encadeada.h"

struct head {
  Element * first;
  int size;
};

struct element {
  int value;
  struct element * next;
};

Head *create() {
  Head * new = (Head *) malloc(sizeof(Head));
  new->first = NULL;
  new->size = 0;
    
  return new;
}
int add(Head *head, int n) {
  Element * new = (Element *) malloc(sizeof(Element));
	new->value = n;
	new->next = NULL;
	Element * aux = head->first;

  if(head->size == 0) {
		head->first = new;
		head->size++;

    return 1;
  }
	
	if(head->size > 0) {
		while(aux->next != NULL){
			aux = aux->next;
		}

		aux->next = new;
		head->size++;
    
    return 1;
	} 

  return 0;
}

int removeElement(Head *head, int n) {
  if(head->size == 0) {
    return 0;
  }

  Element * aux = head->first;
  while(aux->next != NULL) {
    if(aux->value == n) {
      
    }
  }
}

int size(Head *head) {
  return head->size;
}
int find(Head *head, int n) {
  if(head->size == 0) {
    return -1;
  }

  Element * aux = head->first;
  int i = 0;

  while(aux->next != NULL) {
    if(aux->value == n) {
      printf("Encontrado! Posicao %d", i);
      return i;
    }

    i++;
  }

  return -1;
}

int isEmpty(Head *head) {
  if (head->size == 0) {
    return 1;
  }

  return 0;
}

void clear(Head *head) {
  head->first = NULL;
  head->size = 0;
}