#include <stdio.h>
int main()
{
float cotacao, dolares, total_reais;
printf("Digite a cotação do dólar: ");
scanf("%f", &cotacao);
printf("Digite a quantidade de dólares a comprar: ");
scanf("%f", &dolares);
total_reais = dolares * cotacao;
printf("O total a pagar em reais é: R$ %.2f\n", total_reais);
return 0;
}
