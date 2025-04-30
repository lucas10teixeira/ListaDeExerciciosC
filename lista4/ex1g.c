#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, positivos = 0, negativos = 0;

    srand(time(NULL)); // inicializa o gerador aleatório

    for (int i = 0; i < 20; i++) {
        num = (rand() % 21) - 10; // gera número entre -10 e 10
        if (num > 0) {
            printf("%d POSITIVO\n", num);
            positivos++;
        } else if (num < 0) {
            printf("%d NEGATIVO\n", num);
            negativos++;
        } else {
            printf("%d NULO\n", num);
        }
    }

    printf("Total de positivos: %d\n", positivos);
    printf("Total de negativos: %d\n", negativos);
    return 0;
}
