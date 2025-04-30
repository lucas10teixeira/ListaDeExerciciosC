#include <stdio.h>

int main()
{
    int n, num, soma = 0;
    printf("Quantos números você deseja somar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }

    printf("Soma total: %d\n", soma);
    return 0;
}
