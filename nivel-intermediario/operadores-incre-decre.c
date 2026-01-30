// operadores de incremento e decremento (incremento[++], decremento[--])
// utilizado em loops 

#include <stdio.h>

int main (){
    int num1 = 1, resultado;
    
    //incremento
    printf("Antes do incremento: %d\n", num1);
    // num1 = num1 + 1; //o que seria a forma extensa de escrever
    // num1 += 1; //com operador de atribuição
    num1++;
    printf("Depois do incremento: %d\n", num1);

    //decremento
    printf("Antes do decremento: %d\n", num1);
    // num1 = num1 - 1; //o que seria a forma extensa de escrever
    // num1 -= 1; //com operador de atribuição
    num1--;
    printf("Depois do decremento: %d\n", num1);

    // _______________________________________________________________________________
    
    //Pós-incremento (incrementa depois)
    printf("Antes do Pós-incremento: %d\n", num1);
    resultado = num1++;
    //seria basicamente, a forma extensa de escrever:
    // resultado = num1; e depois: // num1++;
    printf("Depois do Pós-incremento: Numero:%d - Resultado:%d\n", num1, resultado);

    //Pré-incremento (incrementa primeiro)
    printf("Antes do Pré-incremento: %d\n", num1);
    resultado = ++num1;
    printf("Depois do Pré-incremento: Numero: %d - Resultado: %d\n", num1, resultado);

    // _______________________________________________________________________________

    //Pós-decremento (decrementa depois)
    printf("Antes do Pós-decremento: %d\n", num1);
    resultado = num1--;
    //seria basicamente, a forma extensa de escrever:
    // resultado = num1; e depois: // num1--;
    printf("Depois do Pós-decremento: Numero:%d - Resultado:%d\n", num1, resultado);

    //Pré-decremento (decrementa primeiro)
    printf("Antes do Pré-decremento: %d\n", num1);
    resultado = --num1;
    printf("Depois do Pré-decremento: Numero: %d - Resultado: %d\n", num1, resultado);
}