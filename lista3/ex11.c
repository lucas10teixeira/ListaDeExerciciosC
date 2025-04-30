#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int faces, resultado;
    printf("Digite o número de faces do dado (4, 6, 8, 10, 12 ou 16): ");
    scanf("%d", &faces);
    if (faces == 4 || faces == 6 || faces == 8 || faces == 10 || faces == 12 || faces == 16)
    {
        srand(time(0));
        resultado = rand() % faces + 1;
        printf("Você rolou um dado de %d faces e tirou: %d\n", faces,
               resultado);
    }
    else
    {
 printf("Número de faces inválido. Use apenas 4, 6, 8, 10, 12 ou 16.\n");
    }
    return 0;
}
