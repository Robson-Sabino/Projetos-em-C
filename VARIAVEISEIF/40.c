// Adultos e Gênero

#include <stdio.h>
int main()
{
    int num = 0, idade = 0;

    printf("\nMe informe se o usuario é Homem digitando 1 ou Mulher digitando 0:\n");
    scanf("%i", &num);
    printf("\nDigite a idade do usuario:\n");
    scanf("%i", &idade);
    if (num == 0 && idade <= 10)
    {
        printf("\nMulher e criança\n");
    }
    else if (num == 0 && idade > 10 && idade <= 18)
    {
        printf("\nMulher e adolescente\n");
    }
    else if (num == 0 && idade > 18)
    {
        printf("\nMulher e adulta\n");
    }
    else if (num == 1 && idade <= 10)
    {
        printf("\nHomem e criança\n");
    }
    else if (num == 1 && idade > 10 && idade <= 18)
    {
        printf("\nHomem e adolescente\n");
    }
    else if (num == 1 && idade > 18)
    {
        printf("\nHomem e adulto\n");
    }
    return 0;
}
