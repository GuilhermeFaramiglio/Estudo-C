#include <stdio.h>

// for(inicialização; condição; incremento) {
//     Bloco de código a ser executado
// }
 
int main() {
    //incremento
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    //decremento
    for (int j = 10; j >= 1; j--) {
        printf("%d\n", j);
    }
   
    return 0;
}