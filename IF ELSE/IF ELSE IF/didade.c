#include <stdio.h>
int main()
{
    int idade;
    printf("\nQual sua idade\n");
    scanf("%i", &idade);
    if (idade == 0)
    {
        printf("\nBebe.\n");
    }
    else if (idade <= 10)
    {
        printf("\nCriança\n");
    }
    else if (idade <= 18)
    {
        printf("\nAdolescente\n");
    }
    else if (idade >= 18 && idade < 70)
    {
        printf("\nAdulto\n");
    }
    else if (idade >= 70)
    {
        printf("\nIdoso\n");
    }
    return 0;
}