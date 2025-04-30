#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main()
{
    int num, i;
   char repetir;
    int resposta_valida;
    do
    {
        printf("Entre com um número (1 a 9): ");
        scanf("%d", &num);
        if (num < 1 || num > 9)
        {
            printf("Número fora do intervalo permitido.\n");
        }
        else
        {
            // Escreve a tabuada do num lido
            i = 1;
            while (i <= 10)
            {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        }
        // Ler e validar se o usuário deseja calcular outro número
        do
        {
            printf("Calcular outro número (s/n)? ");
            scanf(" %c", &repetir);
            repetir = toupper(repetir);
            if (repetir != 'S' && repetir == 'N')
            {
                printf("Opção inválida. Digite apenas 's' ou 'n'.\n");
                resposta_valida = false;
            }
            else
            {
                resposta_valida = true;
            }
        } while (resposta_valida == false);
    } while (repetir == 'S');
    return 0;
}