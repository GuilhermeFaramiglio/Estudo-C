//console simples de interação com o usuário - entrada e saida de dados.

// %d: Imprime um inteiro no formato decimal.
// %i: Equivalente a %d.
// %f: Imprime um número de ponto flutuante no formato padrão.
// %e: Imprime um número de ponto flutuante na notação científica.
// %c: Imprime um único caractere.
// %s: Imprime uma cadeia (string) de caracteres.

#include <stdio.h>

// EXEMPLO DE SAIDA DE DADOS
int main () {
    //Exemplo de utilizando com exibição [SAIDA] de valores das variaveis:
    //Para exibir variaveis utilizando printf são utilizados também especificadores de tipos:
    //Ex: printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3);
    int idade = 26;
    float altura = 1.74;
    char opcao = 'S';
    char nome[10] = "Guilherme";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %f\n", altura);
    printf("A altura é: %.2f\n", altura);
    printf("A opcao é: %c", opcao);
}
