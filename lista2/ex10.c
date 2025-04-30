#include <stdio.h>

int main()

{
    int qntdcamiseta, qntdcalca, qntdcinto;
    float totalcompra;
    float camiseta = 25;
    float calca = 100;
    float cinto = 40;
    
    printf("Quantas camisetas comprou? ");
    scanf("%d", &qntdcamiseta);
    
    printf("Quantas calca?" );
    scanf("%d", &qntdcalca);
    
    printf("Quantos cinto? ");
    scanf("%d", &qntdcinto);
    
   totalcompra =  qntdcinto * cinto + qntdcalca * calca + qntdcamiseta * camiseta;
   totalcompra * 0.10;
   printf(" O total é: %2.f",totalcompra);
  
    
}

