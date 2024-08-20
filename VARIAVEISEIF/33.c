// Idades e suas descrições

#include <stdio.h>
int main()
{
    int idade;
    printf("\nQual sua idade?\n");
    scanf("%i", &idade);
    if (idade == 0)
    {
        printf("\nBebe\n\n\n");
    }
    else if (idade <= 10)
    {
        printf("\nCriança\n\n\n");
    }
    else if (idade <= 18)
    {
        printf("\nAdolescente\n\n\n\n");
    }
    else if (idade >= 18 && idade < 70)
    {
        printf("\nAdulto\n\n\n\n");
    }
    else if (idade >= 70)
    {
        printf("\nIdoso\n\n\n\n");
    }
    return 0;
}