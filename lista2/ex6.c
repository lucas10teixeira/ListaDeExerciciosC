
#include <stdio.h>

int main()
{
    int qntdetablet,qntdsmart;
    float valortotal;
    float smartphones = 1000.0;
    float tablets = 1500.0;
    
    printf("Quantos tablet?");
    scanf("%d",&qntdetablet);
    
    printf("Quanto smartphones?");
    scanf("%d",&qntdsmart);
    
    valortotal = qntdsmart * smartphones + qntdetablet * tablets;
    
    printf("%2.f", valortotal);

    return 0;
}