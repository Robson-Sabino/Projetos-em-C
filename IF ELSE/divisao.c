#include <stdio.h>
int main()
{
    float Primeiro, Segundo, Divisao;
    printf("\nDigite o numero que deseja dividir:\n");
    scanf("%f", &Primeiro);
    printf("\nPor quanto deseja dividilo?:\n");
    scanf("%f", &Segundo);
    if (Segundo == 0)
    {
        printf("\nImpossivel dividir por '0'\n");
    }
    else
    {
        Divisao = Primeiro / Segundo;
        printf("\nResultado da divisao é:%.2f\n", Divisao);
    }

    return 0;
}