#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int numero, tentativa, tentativas = 0;
    srand(time(NULL));
    numero = rand() % 10 + 1;
    printf("Adivinhe o número de 1 a 10. Você tem 3 tentativas!\n");
    do
    {
        tentativas++;
        printf("Tentativa %d: ", tentativas);
        scanf("%d", &tentativa);
        if (tentativa == numero)
        {
            printf("Parabéns! Você acertou! 🎉\n");
        }
        else if (tentativa < numero)
        {
            printf("O número é maior.\n");
        }
        else
        {
            printf("O número é menor.\n");
        }
    } while (tentativa != numero && tentativas < 3);
    if (tentativa != numero)
    {
        printf("Suas tentativas acabaram. O número era: %d\n", numero);
    }
    return 0;
}
