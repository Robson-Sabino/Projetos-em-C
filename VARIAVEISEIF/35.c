// Idade por ano e drescrição

#include <stdio.h>
int main()
{
    int anoNascido, anoAtual, idade;
    printf("\nDigite o ano de nascimento:\n");
    scanf("%i", &anoNascido);
    printf("\nDigite o ano atual:\n");
    scanf("%i", &anoAtual);
    idade = anoAtual - anoNascido;
    if (anoNascido > anoAtual)
    {
        printf("\nO usuario ainda não nasceu\n");
    }
    else if (anoNascido == anoAtual)
    {
        printf("\nO usuario nasceu esse ano\n");
    }
    else if (idade <= 10)
    {
        printf("\nO usuario tem %i anos e é criança.\n", idade);
    }
    else if (idade <= 18)
    {
        printf("\nO usuario tem %ianos e é adolecente\n", idade);
    }
    else if (idade > 18 && idade <= 70)
    {
        printf("\nO usuario tem %i ano e é adulto\n", idade);
    }
    else if (idade > 70)
    {
        printf("\nO usuario tem %i anos e é velho\n", idade);
    }

    return 0;
}