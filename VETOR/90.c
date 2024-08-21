// Vetor de idades
#include <stdio.h>
int main()
{
    int i = 0, menor = 0, maior = 0, idade[] = {13, 21, 52, 19, 99, 11, 17};

    for (i; i < 7; i++)
    {
        if (i == 0)
        {
            i = 0;
        }
        if (idade[i] >= 18 && idade[i] <= 70)
        {
            maior++;
        }
        else if (idade[i] < 18 || idade[i] > 70)
        {
            menor++;
        }
    }
    if (maior < menor)
    {
        printf("A maioria pode dirigir\n");
    }
    else
    {
        printf("A maioria nao pode dirigir\n");
    }
    return 0;
}