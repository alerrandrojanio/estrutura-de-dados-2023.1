#include <stdio.h>

void trocar(char *a, char *b) {
  char aux;

  aux = *a;
  *a  = *b;
  *b  = aux;
}

int main() {
  char a, b;

  printf("caractere 1: \n");
  scanf(" %c", &a);

  printf("caractere 2: \n");
  scanf(" %c", &b);

  printf("antes da troca: \n");
  printf("1 = %c\n", a);
  printf("2 = %c\n", b);

  trocar(&a, &b);

  printf("apos a troca: \n");
  printf("1 = %c\n", a);
  printf("2 = %c\n", b);

  return 0;
}