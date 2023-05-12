#include <stdio.h>

double soma_h(int n) {
    if (n == 1) {
        return 1.0;
    } else {
        return 1.0/n + soma_h(n-1);
    }
}

int main() {
    int n;

    printf("digite o valor de n: ");
    scanf("%d", &n);

    printf("o valor de h e %.3f\n", soma_h(n));

    return 0;
}
