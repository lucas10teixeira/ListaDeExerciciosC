#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);
        if (num % 2 == 0) pares++;
        else impares++;
    }
    printf("Pares: %d\n", pares);
    printf("Ímpares: %d\n", impares);
    return 0;
}
