#include <stdio.h>

int anos_necessarios(float altura_francisco, float altura_jose, int anos) {
    if (altura_jose > altura_francisco) {
        return anos;
    } else {
        altura_francisco += 0.02;
        altura_jose += 0.03;
        return anos_necessarios(altura_francisco, altura_jose, anos+1);
    }
}

int main() {
    float altura_francisco = 1.60;
    float altura_jose = 1.40;
    int anos = anos_necessarios(altura_francisco, altura_jose, 0);

    printf("serao necessarios %d anos.\n", anos);
    return 0;
}
