#include <stdio.h>

int main() {
    int numero;

    do
    {
        printf("Insira um número: ");
        scanf("%d", &numero);

        if(numero %2 == 0) {
            printf("%d é par!\n", numero);
            printf("Programa encerrado!");
        } else {
            printf("%d é impar!\n", numero);
        }
    } while (numero %2 != 0);
    
    return 0;
}