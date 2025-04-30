
#include <stdio.h>
int main()
{
    float numero, resultado;
    printf("Digite um número!");
    scanf("%f", &numero);
    
    if (numero >= 0)
    {
       resultado = numero * 2;
       printf("O dobro é: %.2f", resultado);
    }
    else
    {
        resultado = numero * 3;
        printf("O triplo é: %.2f", resultado);
    };
    return 0;
}
