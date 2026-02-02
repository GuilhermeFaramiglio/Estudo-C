#include <stdio.h>

int main () {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Insira a temperatura atual:");
    scanf("%f", &temperatura);

    if (temperatura >= 30) {
        printf("Temperatura está alta!\n\n");
    } else {
        printf("Temperatura está dentro dos parâmetros!\n\n");
    }


    printf("Insira a umidade atual:");
    scanf("%f", &umidade);

    if (umidade >= 50) {
        printf("Umidade elevada!\n\n");
    } else {
        printf("Umidade dentro dos paramêtros seguros!\n\n");
    }


    printf("Insira o estoque atual:");
    scanf("%u", &estoque);

    if (estoque < estoqueMinimo) {
        printf("O estoque está abaixo do mínimo!\n\n");
    } else {
        printf("Estoque normal!\n\n");
    }

    return 0;
}