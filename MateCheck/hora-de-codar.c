#include <stdio.h>

void recursivo(int numero) {
    if (numero > 0) {
        // printf("%d ", numero); a ordem da impressão quando diferente, imprime regressivamente ou progressivamente
        recursivo(numero - 1);
        printf("%d ", numero);
    }
}
 
int main() {
    int quantidade = 10;
    printf("Contagem regressiva: ");
    recursivo(quantidade);
    return 0;
}