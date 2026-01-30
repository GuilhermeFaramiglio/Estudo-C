// operadores relacionais (>, <,==, !=)
// > (maior que)
// < (menor que)
// >= (maior ou igual a)
// <= (menor ou igual a)
// == (igual a)
// != (diferente de)

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // comparação de diferentes tipos de variaveis
    int x = 5;
    float y = 5.0;

    printf("x == y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    return 0;
}