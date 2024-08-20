// Dias de idade

#include <stdio.h>
int main()
{
    int idade;
    printf("\nQual a sua idade?\n");
    scanf("%i", &idade);
    idade = idade * 365;
    if (idade < 0)
    {
        printf("\nNao e uma idade valida\n");
    }
    else if (idade > (365*100))
    {
        printf("\nNao existe alguem tao velho\n");
    }
    else if (idade == 0)
    {
        printf("\nO usuario ainda nao nasceu\n");
    }
    else
    {
        printf("\nO usuario ja viveu %i dias.\n", idade);
    }

    return 0;
}