//console simples de interação com o usuário - entrada e saida de dados.

// %d: Imprime um inteiro no formato decimal.
// %i: Equivalente a %d.
// %f: Imprime um número de ponto flutuante no formato padrão.
// %e: Imprime um número de ponto flutuante na notação científica.
// %c: Imprime um único caractere.
// %s: Imprime uma cadeia (string) de caracteres.

#include <stdio.h>

// EXEMPLO DE ENTRADA DE DADOS (Usuários)
int main () {
    // Sintaxe scanf
    // scanf("formato1" "formato2", &variavel1, variavel2, ...);
    // utiliza-se '&' antes da variavel algumas que são do tipo inteiro, float, double...
    int idade;
    float altura;
    char opcao;
    char nome[10];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A idade é: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Digite a opção: ");
    scanf(" %c", &opcao); //Tem um espaço aqui antes do especificador de tipo, pois char é apenas um caractere, e a linguagem C já interpreta o "Enter" como 1 caracter.
    printf("A opção é: %c", opcao);
}