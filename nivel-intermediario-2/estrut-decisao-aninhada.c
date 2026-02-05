#include <stdio.h>

int main () {
    // int condicao1, condicao2;
    
    // if (condicao1) {
    //     if (condicao2) {
    //         // Código a ser executado se condicao1 e condicao2 forem verdadeiras
    //     }
    // }

    // int idade;

    // printf("Digite a sua idade: \n");
    // scanf("%d", &idade);

    // if (idade < 12) {
    //     printf("Você é uma criança\n");
    // } else if (idade >= 12 && idade < 18) {
    //     printf("Você é um adolescente\n");
    // } else if (idade >= 18 && idade < 60) {
    //     printf("Você é um adulto\n");
    // } else {
    //     printf("Você é um idoso\n");
    // }

    int idade, dependentes;
    float renda;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: \n");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: \n");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade <= 65) {
        if (renda < 3000.0) {
        if (dependentes > 2) {
            printf("Você está qualificado para os benefícios sociais\n");
        } else {
            printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
        }
        } else {
        printf("Você não está qualificado para os benefícios devido à renda\n");
        }
    } else {
        printf("Você não está qualificado para os benefícios devido à idade\n");
    }

    return 0;
}
