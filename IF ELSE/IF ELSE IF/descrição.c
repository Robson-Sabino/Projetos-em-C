#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero:\n");
    scanf("%i", &numero);
    if (numero > 10)
    {
        printf("Desconhecido\n");
    }
    else if (numero == 0)
    {
        printf("Zero\n");
    }
    else if (numero == 1)
    {
        printf("Um\n");
    }
    else if (numero == 2)
    {
        printf("Dois\n");
    }
    else if (numero == 3)
    {
        printf("Três\n");
    }
    else if (numero == 4)
    {
        printf("Quatro\n");
    }
    else if (numero == 5)
    {
        printf("Cinco\n");
    }
    else if (numero == 6)
    {
        printf("Seis\n");
    }
    else if (numero == 7)
    {
        printf("Sete");
    }
    else if (numero == 8)
    {
        printf("Oito");
    }
    else if (numero == 9)
    {
        printf("Nove");
    }
    else if (numero == 10)
    {
        printf("Dez");
    }
        return 0;
}