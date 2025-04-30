
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaUsuario, numeroUsuario, numeroComputador, soma;

    printf("=== Jogo do PAR ou ÍMPAR ===\n");
    printf("Escolha:\n");
    printf("0 - PAR\n");
    printf("1 - ÍMPAR\n");
    printf("Sua escolha: ");
    scanf("%d", &escolhaUsuario);

    if (escolhaUsuario != 0 && escolhaUsuario != 1) {
        printf("Escolha inválida. Use 0 para PAR ou 1 para ÍMPAR.\n");
        return 1;
    }

    printf("Digite um número de 0 a 5 (dedos): ");
    scanf("%d", &numeroUsuario);

    if (numeroUsuario < 0 || numeroUsuario > 5) {
        printf("Número fora do intervalo permitido.\n");
        return 1;
    }

    // Inicializa o gerador de números aleatórios
    srand(time(0));
    numeroComputador = rand() % 6;

    printf("O computador jogou: %d\n", numeroComputador);

    soma = numeroUsuario + numeroComputador;
    printf("Soma dos valores: %d\n", soma);

    // Verifica quem ganhou
    if ((soma % 2 == 0 && escolhaUsuario == 0) || 
        (soma % 2 == 1 && escolhaUsuario == 1)) {
        printf("Você venceu!\n");
    } else {
        printf("O programa venceu!\n");
    }

    return 0;
}