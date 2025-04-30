
#include <stdio.h>
int main()
{
    float nmr1;
    float nmr2;
    float resultado;
    
    printf("Qual o primeiro numero?");
    scanf("%f", &nmr1);
    
    printf("Qual o segundo numero?");
    scanf("%f", &nmr2);
    
    if (nmr2 != 0)
    {
        resultado = nmr1 / nmr2;
        printf("O Resultado da divisão é: %2.f", resultado);
    }
    else
    {
        printf("O divisor precisa ser diferente de 0!");
     }
     return 0;
    
    
    
}