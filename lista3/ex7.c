#include <stdio.h>
int main() {
 float valorCompra, valorVenda;
 printf("Digite o valor de compra do produto: ");
 scanf("%f", &valorCompra);
 if (valorCompra < 20.0) {
 
 valorVenda = valorCompra * 1.45;
 } else if (valorCompra <= 50.0) {
 
 valorVenda = valorCompra * 1.35;
 } else {
 
 valorVenda = valorCompra * 1.25;
 }
 printf("Valor de venda: R$ %.2f\n", valorVenda);
 return 0;
}
