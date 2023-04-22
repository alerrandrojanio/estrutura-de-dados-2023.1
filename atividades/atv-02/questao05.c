#include <stdio.h>

int digitos(int n, int count) {
  if (n != 0) {
    count++;
    return digitos(n/10, count);
  }
  
  return count;
}

int main() {
  int n = 0;
  int count = 0;
    
  printf("digite o numero: \n");
  scanf("%d", &n);
    
  printf("quantidade de digitos: %d", digitos(n, count));

    
  return 0;
}