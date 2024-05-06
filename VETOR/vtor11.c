// Somar Todos

#include <stdio.h>
int main()
{
    int v[10] = {3, 7, 6, 4, 1, 9, 8, 2, 15, 5};
    int i;
    int soma;
    for (i = 0; i < 10; i++)
    {
        soma = v[i] + soma;
    }
    printf("A soma de todos os elementos do vetor é %d\n\n", soma);
    return 0;
}