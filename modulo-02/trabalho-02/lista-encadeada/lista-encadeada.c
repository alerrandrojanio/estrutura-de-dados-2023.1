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

// complexidade espacial O(1) || O(c)
// complexidade temporal O(1) || O(c)
Head *create() {
  Head * new = (Head *) malloc(sizeof(Head));
  new->first = NULL;
  new->size = 0;
    
  return new;
}

// complexidade espacial O(n)
// complexidade temporal O(c)
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

// complexidade espacial O(n)
// complexidade temporal O(c)
int removeElement(Head *head, int n) {
  if(head->size == 0) {
    return 0;
  }

  Element *current = head->first;
  Element *previous = NULL;

  while(current->next != NULL) {
    if(current->value == n) {
      if (previous == NULL) {
        head->first = current->next;
      } 
      else {
        previous->next = current->next;
      }

      free(current);
      head->size--;

      return 1;
    }
    
    previous = current;
    current = current->next;
  }

  return 0;
}

// complexidade espacial O(c)
// complexidade temporal O(c)
int size(Head *head) {
  return head->size;
}

// complexidade espacial O(n)
// complexidade temporal O(c)
int find(Head *head, int n) {
  if(head->size == 0) {
    return -1;
  }

  Element * aux = head->first;
  int i = 0;

  while(aux->next != NULL) {
    if(aux->value == n) {
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
int isEmpty(Head *head) {
  if (head->size == 0) {
    return 1;
  }

  return 0;
}

// complexidade espacial O(n)
// complexidade temporal O(c)
void clear(Head *head) {
  Element *current = head->first;
  Element *next;

  while (current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }

  head->first = NULL;
  head->size = 0;
}

// complexidade espacial O(n)
// complexidade temporal O(c)
int showList(Head *head) {
  if (head->size == 0) {
    printf("Lista vazia!\n\n");

    return 0;
  }

    Element *aux = head->first;

    printf("Lista: ");
    while (aux != NULL) {
        printf("%d ", aux->value);
        aux = aux->next;
    }
    printf("\n\n");

    return 1;
}