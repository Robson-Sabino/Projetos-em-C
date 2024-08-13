// A tabuada
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero:");
    scanf("%i", &numero);
    for (int i = 1; i < 11; i++)
    {
        printf("\n%i * %i = %i",numero,i,numero * i);
    }
    printf("\n\n");
    return 0;
}