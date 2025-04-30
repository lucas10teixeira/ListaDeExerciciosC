#include <stdio.h>

int main() {
    int num, soma = 0;
    for (int i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }
    float media = soma / 15.0;
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);
    return 0;
}