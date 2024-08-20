// Homem ou Mulher

#include <stdio.h>
int main()
{
    int hOMEN, mULHER, tESTE;
    printf("Digite 0 para Mulher ou 1 para homem:\n");
    scanf("%i", &tESTE);
    if (tESTE == 1)
    {
        printf("Homem\n\n\n");
    }
    else if (tESTE == 0)
    {
        printf("Mulher\n\n\n");
    }
    else
    {
        printf("Desconhecido\n\n\n");
    }

    return 0;
}