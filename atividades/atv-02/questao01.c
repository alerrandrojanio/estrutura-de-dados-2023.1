#include <stdio.h>

int fatorial(int n) {
  if(n == 1 || n == 0) {
    return 1;
  }
  else {
      return fatorial(n-1)*n;
  }

}

int main() {
  int n;

  printf("digite um numero: \n");
  scanf("%d", &n);

  printf("o fatorial e: %d\n", fatorial(n));

  return 0;
}
