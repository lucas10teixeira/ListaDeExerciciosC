#include <stdio.h>

int main() {
    float cotacaoDolar, cotacaoEuro;
    float valor, resultado;
    char opcao;

    // Solicita as cotações
    printf("Informe a cotação do Dólar em relação ao Real: ");
    scanf("%f", &cotacaoDolar);

    printf("Informe a cotação do Euro em relação ao Real: ");
    scanf("%f", &cotacaoEuro);

    do {
        printf("\nEscolha uma opção de conversão:\n");
        printf("a) Real -> Euro\n");
        printf("b) Real -> Dólar\n");
        printf("c) Euro -> Dólar\n");
        printf("d) Euro -> Real\n");
        printf("e) Dólar -> Euro\n");
        printf("f) Dólar -> Real\n");
        printf("s) Sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao);  // espaço antes do %c para limpar buffer

        if (opcao == 'a') {
            printf("Valor em Reais: R$ ");
            scanf("%f", &valor);
            resultado = valor / cotacaoEuro;
            printf("Valor em Euro: € %.2f\n", resultado);
        }
        else if (opcao == 'b') {
            printf("Valor em Reais: R$ ");
            scanf("%f", &valor);
            resultado = valor / cotacaoDolar;
            printf("Valor em Dólar: US$ %.2f\n", resultado);
        }
        else if (opcao == 'c') {
            printf("Valor em Euro: € ");
            scanf("%f", &valor);
            resultado = (valor * cotacaoEuro) / cotacaoDolar;
            printf("Valor em Dólar: US$ %.2f\n", resultado);
        }
        else if (opcao == 'd') {
            printf("Valor em Euro: € ");
            scanf("%f", &valor);
            resultado = valor * cotacaoEuro;
            printf("Valor em Reais: R$ %.2f\n", resultado);
        }
        else if (opcao == 'e') {
            printf("Valor em Dólar: US$ ");
            scanf("%f", &valor);
            resultado = (valor * cotacaoDolar) / cotacaoEuro;
            printf("Valor em Euro: € %.2f\n", resultado);
        }
        else if (opcao == 'f') {
            printf("Valor em Dólar: US$ ");
            scanf("%f", &valor);
            resultado = valor * cotacaoDolar;
            printf("Valor em Reais: R$ %.2f\n", resultado);
        }
        else if (opcao == 's') {
            printf("Encerrando o programa...\n");
        }
        else {
            printf("Opção inválida!\n");
        }

    } while (opcao != 's');

    return 0;
}
