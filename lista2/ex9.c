
#include <stdio.h>

int main()
{
    
    float valorcompra, desconto;
    printf("Qual o valor da compra?");
    scanf("%f",&valorcompra);
    
    
    desconto = valorcompra * 0.15;
    
    printf("o valor é %2.f", desconto);
}
