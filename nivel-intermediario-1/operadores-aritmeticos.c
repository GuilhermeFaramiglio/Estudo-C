// operadores aritmeticos (soma[+], subtração[-], multiplicação[*], divisão[/])

#include <stdio.h>

int main (){
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("\nA soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);
}
