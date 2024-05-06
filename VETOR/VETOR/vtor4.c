// Identificando o maior
#include <stdio.h>
int main(void)
{
    int maior, menor, nota[] = {23, 46, 86, 34, 6, 8, 65, 1, 12, 45, 69, 8, 345, 2, 37, 678, 43, 3, 576, 231, 67};
    menor = nota[0];
    maior = nota[0];
    for (int i = 0; i < 21; i++)
    {
        if (nota[i] > maior)
        {
            maior = nota[i];
        }
        if (nota[i] < menor)
        {
            menor = nota[i];
        }
    }
    printf("A nota maior: %i, e a menor: % i\n", maior, menor);
    return 0;
}