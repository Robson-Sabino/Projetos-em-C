
// Obtendo somente maiores que 10 e menores que 20

#include <stdio.h>
int main()
{
    int vetor[10] = {9, 11, 21, 14, 44, 25, 78, 16, 90, 1};
    for (int i = 0; i < 11; i++)
    {
        if (vetor[i] > 10 && vetor[i] < 20)
        {
            printf("%i, ", vetor[i]);
        }
    }
    printf("\n\n\n");
    return 0;
}