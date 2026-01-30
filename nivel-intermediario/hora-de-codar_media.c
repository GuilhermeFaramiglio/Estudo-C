#include <stdio.h>

//programa para cálculo de média de alunos
int main() {
    //primeiro realizar a entrada de dados
    int nota1, nota2, nota3;
    float media;

    printf("****Cálculo Média****\n");
    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    //segundo realizar o calculo das notas e armazenar numa variável
    media = (float) (nota1 + nota2 + nota3) / 3; // conversão explicita com float pois as notas são inteiras

    //terceiro exibir o valor obtido
    printf("A Média é: %.1f", media);

    return 0;
}