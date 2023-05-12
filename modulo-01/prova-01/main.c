#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>
#include "bag.h"

int main() {
  setlocale(LC_ALL, "Portuguese");

  int tamanho = 0;
  int elemento = 0;

  printf("Digite o tamanho da Bag: \n");
  scanf("%d", &tamanho);

  srand(time(NULL));

  Bag* bag = create(tamanho);

  for(int i = 0; i < tamanho; i++) {
    insert(bag, rand()%100);
  }

  printf("O número de elementos na Bag é: %d\n\n", size(bag));

  printAll(bag);

  printf("Digite um elemento para pesquisar na Bag: \n");
  scanf("%d", &elemento);

  if(search(bag, elemento)){
    printf("Elemento %d encontrado!\n\n");
  }
  else {
    printf("Elemento %d não está na Bag!\n\n");
  }

  printf("Get: %d\n\n", get(bag));

  printAll(bag);

  return 0;
}
