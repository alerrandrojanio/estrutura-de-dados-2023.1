#include <stdio.h>

void trocar(int *a, int *b) {
  int aux;

  aux = *a;
  *a  = *b;
  *b  = aux;
}

int main() {
  int a, b;

  printf("valor de A: \n");
  scanf("%d", &a);

  printf("valor de B: \n");
  scanf("%d", &b);

  printf("antes da troca: \n");
  printf("A = %d\n", a);
  printf("B = %d\n", b);

  trocar(&a, &b);

  printf("apos a troca: \n");
  printf("A = %d\n", a);
  printf("B = %d\n", b);

  return 0;
}