#include <stdio.h>
#include <stdlib.h>
#include "lista-encadeada.h"

int main() {
    Head* list = create();

    printf("A lista esta vazia? %s\n", (isEmpty(list) == 1) ? "Verdadeiro\n\n" : "Falso\n\n");

    showList(list);
    add(list, 1);
    add(list, 2);

    add(list, 3);
    showList(list);

    find(list, 2);

    removeElement(list, 2);
    showList(list);
    find(list, 2);

    printf("A lista esta vazia? %s\n", (isEmpty(list) == 1) ? "Verdadeiro\n\n" : "Falso\n\n");


    return 0;
}
