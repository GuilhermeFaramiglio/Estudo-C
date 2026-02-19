#include <stdio.h>

int main() {
    int index;

    char *nomesAlunos[3][3] = {
        {"Aluno 1", "Pt: 30", "Mat: 90"},
        {"Aluno 2", "Pt: 60", "Mat: 60"},
        {"Aluno 3", "Pt: 90", "Mat: 30"}
    };
    
    printf("Alunos disponíveis:\n");
    printf("0 - Aluno 1\n");
    printf("1 - Aluno 2\n");
    printf("2 - Aluno 3\n");
    printf("Digite o numero do aluno para ver suas notas: ");
    scanf("%d", &index);

    printf("\n\n");
    printf("As notas do %s são: %s, %s. \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    
    return 0;
}