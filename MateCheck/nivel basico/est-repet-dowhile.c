#include <stdio.h>

int main() {

    int i = 1; // Inicializa a variável de controle

    do { // O bloco de código dentro do do será executado pelo menos uma vez
        printf("%d\n", i); // Imprime o valor atual de i
        i++; // Incrementa a variável de controle
    } while (i == 10); // Verifica a condição após a execução do bloco

    return 0;
}