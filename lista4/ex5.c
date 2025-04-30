#include <stdio.h>
#include <ctype.h> 
int main() {
    int x;
    float notaA, notaB, notaC, media, somaMedias = 0;
    char substituir;
    
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        printf("\nAluno %d\n", i);

        printf("Digite a nota do Grau A: ");
        scanf("%f", &notaA);
        printf("Digite a nota do Grau B: ");
        scanf("%f", &notaB);

        media = (notaA + notaB) / 2;

        if (media >= 6.0) {
            printf("APROVADO\n");
        } else {
            printf("Media insuficiente: %.2f\n", media);
            printf("Digite a nota do Grau C: ");
            scanf("%f", &notaC);
            
            printf("Qual grau deseja substituir (A ou B)? ");
            scanf(" %c", &substituir);
            substituir = toupper(substituir);

            if (substituir == 'A') {
                media = (notaC + notaB) / 2;
            } else if (substituir == 'B') {
                media = (notaA + notaC) / 2;
            } else {
                printf("Grau inválido. Nenhuma substituição feita.\n");
            }

            if (media >= 6.0) {
                printf("APROVADO\n");
            } else {
                printf("REPROVADO\n");
            }
        }

        printf("Média final do aluno %d: %.2f\n", i, media);
        somaMedias += media;
    }

    float mediaGeral = somaMedias / x;
    printf("\nMédia geral da turma: %.2f\n", mediaGeral);

    return 0;
}