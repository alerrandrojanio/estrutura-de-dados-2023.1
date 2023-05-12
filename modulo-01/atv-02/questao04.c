#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}

double s(int n) {
    if (n == 1) {
        return 1.0;
    } else {
        return (double)fatorial(n)/n + s(n-1);
    }
}

int main() {
    int n;

    printf("digite o valor de n: ");
    scanf("%d", &n);

    double resultado = s(n);

    printf("o valor de s e %.3f\n", resultado);

    return 0;
}
