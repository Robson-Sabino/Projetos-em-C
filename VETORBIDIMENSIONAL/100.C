// Pedindo notas de alunos

#include <stdio.h>
int main()
{
    float notaAluno[5], soma = 0;
    int contAluno = 1;
    for (int i = 0; i < 5; i++)
        notaAluno[i] = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Digite as notas do aluno %i \n", contAluno);
        for (int i = 0; i < 5; i++)
        {
            scanf("%f", &notaAluno[i]);
            soma = soma + notaAluno[i];
        }
        printf("A soma das notas do aluno %i é %f\n", contAluno, soma);
        contAluno = contAluno + 1;
        soma = 0;
        printf("\n");
    }
    printf("\n");
    return 0;
}