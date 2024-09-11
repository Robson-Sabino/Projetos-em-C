// Sort Array ASC

#include <stdio.h>
int main()
{
    int vetor[12] = {23, 12, 54, 22, 67, 92, 41, 11, 80, 99, 54, 15};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int teste = 0;

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                teste = vetor[j];
                if (j < tamanho - 1)
                {    
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = teste;
                }
            }
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%i", vetor[i]);
        if (i < tamanho - 1)
            printf(",");
    }
    printf("\n\n");
    return 0;
}