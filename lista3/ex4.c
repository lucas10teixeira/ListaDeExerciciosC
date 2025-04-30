
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero % 3 == 0)
    {
        printf("O numero é divisível por 3: %.2d", numero);
    }
    else
    {
        printf("O numero inserido não é divisivel por 3!");
    }
    return 0;
}
