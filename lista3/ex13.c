#include <stdio.h>
int main() {
 int idade;
 printf("Digite a idade do nadador: ");
 scanf("%d", &idade);
 if (idade >= 18) {
 printf("Categoria: Sênior\n");
 } else if (idade >= 14) {
 printf("Categoria: Juvenil B\n");
 } else if (idade >= 11) {
 printf("Categoria: Juvenil A\n");
 } else if (idade >= 8) {
 printf("Categoria: Infantil B\n");
 } else if (idade >= 5) {
 printf("Categoria: Infantil A\n");
 } else {
 printf("Sem categoria. Idade abaixo do mínimo permitido.\n");
 }
 return 0;
}