#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0)
    {
        printf("O número é par: %.1d", numero);
        
    }
    else
    {
        printf("O numero é impar: %.1d", numero);
    }
    return 0;
}
