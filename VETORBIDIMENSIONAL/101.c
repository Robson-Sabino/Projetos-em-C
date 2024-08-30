// Pedindo notas e mostransdo relatório individual

#include <stdio.h>
int main()
{
    float notaAluno[4], somaNotaaluno[4], soma = 0, media[4];
    int contAluno = 1, possicaoVetor = 0;
    for (int i = 0; i < 4; i++)
        notaAluno[i] = 0;
    for (int i = 0; i < 5; i++)
        media[i] = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite as notas do aluno %i \n", contAluno);
        for (int i = 0; i < 4; i++)
        {
            scanf("%f", &notaAluno[i]);
            soma = soma + notaAluno[i];
            if (i == 3)
            {
                somaNotaaluno[possicaoVetor] = soma;
                media[possicaoVetor] = soma / 4;
                possicaoVetor = possicaoVetor + 1;
            }
        }

        contAluno = contAluno + 1;
        soma = 0;
        for (int i = 0; i < 4; i++)
            notaAluno[i] = 0;
        printf("\n");
    }
    contAluno = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("A soma das notas do aluno %i é %.2f, e a media é %.2f\n", contAluno, somaNotaaluno[i], media[i]);
        contAluno = contAluno + 1;
    }
    printf("\n");
    return 0;
}