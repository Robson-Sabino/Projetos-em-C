// Transferindo ao contrário
#include <stdio.h>
int main()
{
    int i = 0, x = 5, invertido[6], vetor[] = {22, 41, 12, 56, 34, 78};

    while (i <= 5)
    {
        invertido[i] = vetor[x];
        i++;
        x--;
    }
    for (int j = 0; j < 6; j++)
    {
        printf("%i,", invertido[j]);
    }

    return 0;
}