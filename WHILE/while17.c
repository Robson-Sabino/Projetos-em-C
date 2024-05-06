// Fatorial
#include <stdio.h>
int main()
{
    int numero, contador, fatorial = 1;
    printf("Digite o contador que deseja saber o fatorial:\n");
    scanf("%i", &numero);
    contador = numero;
    if (contador > 0 && contador <= 10)
    {
        while (contador > 0)
        {
            fatorial = contador * fatorial;
            contador--;
        }
        printf("O fatorial de %i e %i\n", numero, fatorial);
    }
    else
    {
        printf("Número invalido\n");
    }
    return 0;
}