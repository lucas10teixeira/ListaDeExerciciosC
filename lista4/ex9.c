#include <stdio.h>
int main()
{
    int n, i, j;
    char simbolo;
    printf("Entre com um número: ");
    scanf("%d", &n);
    printf("Entre com um caracter: ");
    scanf(" %c", &simbolo);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", simbolo);
        }
        printf("\n");
    }
}
