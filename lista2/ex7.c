#include <stdio.h>

int main()
{
    int numerodepassaros,racaonecessaria;
    int passaroconsome = 30;
    
    printf("Quantos passaros?");
    scanf("%d", &numerodepassaros);
    
    racaonecessaria = numerodepassaros * passaroconsome;
    printf("O total de ração necessária por dia é de:\n %d", racaonecessaria);
    

    return 0;
} 