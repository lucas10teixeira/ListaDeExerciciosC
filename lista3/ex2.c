#include <stdio.h>
int main() {
 int A, B, C;
 printf("Digite o valor de A: ");
 scanf("%d", &A);
 printf("Digite o valor de B: ");
 scanf("%d", &B);
 printf("Digite o valor de C: ");
 scanf("%d", &C);

 if (A + B < A + C) {
 printf("A + B é menor que A + C.\n");
 } else {
 printf("A + B não é menor que A + C.\n");
 }
 return 0;
}
