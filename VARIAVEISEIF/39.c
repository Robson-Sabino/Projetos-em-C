// Aposentado, H e M

#include <stdio.h>
int main()
{
    int num = 0, idade = 0;

    printf("\nMe informe se o usuario é Homem digitando 1 ou Mulher digitando 0:\n");
    scanf("%i", &num);
    printf("\nDigite a idade do usuario:\n");
    scanf("%i", &idade);
    if (num == 0 && idade >= 60)
    {
        printf("\nPode aposentar\n");
    }
    else if (num == 0 && idade < 60)
    {
        printf("\nNão pode aposentar\n");
    }
    else if (num == 1 && idade >= 65)
    {
        printf("\nPode aposentar\n");
    }
    else if (num == 1 && idade < 65)
    {
        printf("\nNão pode aposentar\n");
    }
    return 0;
}