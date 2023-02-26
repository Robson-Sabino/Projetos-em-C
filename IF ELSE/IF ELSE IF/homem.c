#include <stdio.h>
int main()
{
    int hOMEN, mULHER, tESTE;
    printf("Digite 0 para Mulher ou 1 para homem:\n");
    scanf("%i", &tESTE);
    if (tESTE == 1)
    {
        printf("Homem");
    }
    else if (tESTE == 0)
    {
        printf("Mulher");
    }
    else
    {
        printf("Desconhecido");
    }

    return 0;
}