// operadores de atribuição (simples[=], com soma[+=], com subtração[-=], com multiplicação[*=], com divisão[/=])

#include <stdio.h>

int main (){
    int num1=10, num2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    //mesma coisa que: resultado = resultado(10) + 20;
    resultado += 20;
    printf("Resultado: %d\n", resultado);

    resultado -= num1; //mesma coisa que: resultado = resultado - num1;
    printf("Resultado: %d\n", resultado);

    resultado *= 5; //mesma coisa que: resultado = resultado * 5;
    printf("Resultado: %d\n", resultado);

    resultado /= 2; //mesma coisa que: resultado = resultado / 2;
    printf("Resultado: %d", resultado);
}