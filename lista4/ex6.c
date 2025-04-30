#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, num, menor, maior, soma = 0;
    float media;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        num = rand() % 101;
        printf("Valor %d: %d\n", i + 1, num);
        if (i == 0)
        {
            menor = num;
            maior = num;
        }
        else
        {
            if (num < menor)
            {
                menor = num;
            }
            if (num > maior)
            {
                maior = num;
            }
        }
        soma += num;
        media = soma / 5.0;
        printf("\nMenor valor: %d\n", menor);
        printf("Maior valor: %d\n", maior);
        printf("Média: %.2f\n", media);
        return 0;
       }   }
