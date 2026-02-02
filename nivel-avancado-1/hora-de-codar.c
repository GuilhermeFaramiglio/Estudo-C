#include <stdio.h>

int main () {
    //Produtos
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    //Estoque utilizando unsigned pois não precisamos de valores negativos aqui
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    // Valor dos produtos (unid.) em float pois é um tipo de dado menor
    float valorA = 10.50;
    float valorB = 20.40;

    // Estoque minimo também utilizando unsigned pois não pode ter valor negativo
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 500;

    // Aqui é o valor total baseado em estoque, pode ser um tipo de dado maior como 'double'
    double valorTotalA;
    double valorTotalB;

    int resultadoA;
    int resultadoB;
    float resultadoTotal;

    //Exibir informações do produto
    printf("Produto '%s', tem em estoque %u und. e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto '%s', tem em estoque %u und. e o valor unitário é R$ %.2f\n\n", produtoB, estoqueB, valorB);

    //Comparações com valor minimo
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;
    printf("O Produto '%s' tem estoque minimo?: %d\n", produtoA, resultadoA);
    printf("O Produto '%s' tem estoque minimo?: %d\n\n", produtoB, resultadoB);

    //Comparação entre os valores totais dos produtos
    valorTotalA = estoqueA * valorA;
    valorTotalB = estoqueB * valorB;
    resultadoTotal = valorTotalA > valorTotalB;
    resultadoTotal = valorTotalB > valorTotalA;
    //ou direto no printf
    printf("O valor total de A (R$ %.2f) é maior que valor total de B (R$ %.2f)?: %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));
    printf("O valor total de B (R$ %.2f) é maior que valor total de A (R$ %.2f)?: %d\n", estoqueB * valorB, estoqueA * valorA, (estoqueB * valorB) > (estoqueA * valorA));

    return 0;
}