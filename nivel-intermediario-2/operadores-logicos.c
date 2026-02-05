// operadores lógicos
// && - e
// || - ou
// ! - diferente

#include <stdio.h>

int main () {
    int a, b;

    if (a > 0 && b > 0) {
        printf("Ambos são positivos.\n");
    }

    if (a > 0 || b > 0) {
        printf("Pelo menos um é positivo.\n");
    }

    if (!a) {
        printf("a é zero.\n");
    }

    int x = 5;
    int y = 10;

    if (x > 0 && y > 0) {
        printf("Ambos os números são positivos\n");
    }

    return 0;
}