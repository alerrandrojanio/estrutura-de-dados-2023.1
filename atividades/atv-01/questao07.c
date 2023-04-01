#include <stdio.h>

void imprime(float *a) {
  printf("endereco: %p\n", &a);
  printf("valor: %.2f\n", *a);
  printf("tamanho em bytes: %d\n", sizeof(*a));
  if(*a >= 100) {
    printf("ate 100 tira: %.2f", (100 - *a));
  }
  else {
    printf("ate 100 falta: %.2f", (100 - *a));
  }

}

int main() {
  float *a;

  printf("digite um numero: \n");
  scanf("%f", &a);

  imprime(&a);

  return 0;
}
