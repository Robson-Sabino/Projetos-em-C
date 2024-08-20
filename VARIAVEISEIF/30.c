// Cálculo simples divisão

#include <stdio.h>
int main()
{
    float Primeiro, Segundo, Divisao;
    printf("\nDigite o numero que deseja dividir:\n\n\n");
    scanf("%f", &Primeiro);
    printf("\nPor quanto deseja dividilo?:\n\n\n");
    scanf("%f", &Segundo);
    if (Segundo == 0)
    {
        printf("\nImpossivel dividir por '0'\n\n\n");
    }
    else
    {
        Divisao = Primeiro / Segundo;
        printf("\nResultado da divisao é:%.2f\n\n\n", Divisao);
    }

    return 0;
}