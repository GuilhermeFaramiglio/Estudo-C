#include <stdio.h>

// A sintaxe básica do while é bastante simples: consiste na palavra-chave while, 
// seguida por uma condição entre parênteses, e um bloco de código entre chaves que será executado repetidamente 
// enquanto a condição for verdadeira.

int main() {

    int i = 1; // Inicializa a variável de controle

    while (i <= 10) { // Verifica a condição
        printf("%d\n", i); // Imprime o valor atual de i
        i++; // Incrementa a variável de controle
    }

    return 0;
}