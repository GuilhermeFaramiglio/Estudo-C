//int pode armazenar valores que vão de -2,147,483,648 a 2,147,483,647, 
//permitindo tanto números positivos quanto negativos. 
//Já um unsigned int pode armazenar apenas valores positivos, 
//dobrando a faixa positiva para 0 a 4,294,967,295.


#include <stdio.h>
 
int main() {
    //valores assinados
    int signedNumber = 3000000000; // Este valor excede o limite de um int normal
    unsigned int unsignedNumber = 3000000000;
 
    printf("Número com sinal: %d\n", signedNumber);
    printf("Número sem sinal: %u\n", unsignedNumber);

    //valores long:
    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long long int): %lld\n", bigNumber);

    //valores long double
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
 
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21lf\n", veryPreciseNumber);
 
    //mistura

    return 0;
}