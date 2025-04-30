int main() {
    int valor, resto;
    printf("Digite o valor em reais: ");
    scanf("%d", &valor);
    resto = valor;
    if (resto >= 100) {
    int notas100 = resto / 100;
    printf("%d nota(s) de R$ 100.\n", notas100);
    resto = resto % 100;
    }
    if (resto >= 50) {
    int notas50 = resto / 50;
    printf("%d nota(s) de R$ 50.\n", notas50);
    resto = resto % 50;
    }
    if (resto >= 20) {
    int notas20 = resto / 20;
    printf("%d nota(s) de R$ 20.\n", notas20);
    resto = resto % 20;
    }
    if (resto >= 10) {
    int notas10 = resto / 10;
    printf("%d nota(s) de R$ 10.\n", notas10);
    resto = resto % 10;
    }
    if (resto >= 5) {
    int notas5 = resto / 5;
    printf("%d nota(s) de R$ 5.\n", notas5);
    resto = resto % 5;
    }
    if (resto >= 1) {
    int notas1 = resto;
    printf("%d nota(s) de R$ 1.\n", notas1);
    }
    return 0;
   }