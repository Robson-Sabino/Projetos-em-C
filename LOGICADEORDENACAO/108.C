// Mostrar sem repetir

#include <stdio.h>
int main(void)
{
    int vetor[12] = {23, 22, 54, 22, 67, 22, 41, 22, 80, 22, 54, 22};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int repetido = 0;

    for (int i = 0; i < tamanho; i++)
    {
        repetido = 0;

        for (int j = 0; j < i; j++)
        {
            if (vetor[i] == vetor[j])
            {
                repetido = 1;
                break;
            }
        }
        if (repetido == 0)
        {
            printf("%i", vetor[i]);
            if(i < 7)
                printf(",");
        }
    }
    printf("\n\n");
    return 0;
}