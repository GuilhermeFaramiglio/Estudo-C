//verificando resto de divisao
#include <stdio.h>

int main () {
    int numero = 11, resto;

    resto = numero % 2;
    printf("A variavel resto é: %d\n", resto);

    if (resto == 0){
        printf("O numero é par\n");
    } else {
        printf("O numero é impar");
    }
    // ou 
    // if (numero % 2 == 0) {
    //     printf("O numero é par\n");
    // }

    return 0;
}