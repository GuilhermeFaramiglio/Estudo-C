#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 10)
    {
        if(i %2 == 0){
            printf("O número %d é par!\n", i);
        } else { // (i %2 != 0) se não, o resto da divisão por 2 for diferente de 0 imprime ímpar
            printf("O número %d é impar\n", i);
        }
        i++;
    }

    return 0;
}