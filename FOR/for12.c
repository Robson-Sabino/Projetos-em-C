// A tabuada
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero:");
    scanf("%i", &numero);
    for (int i = 1; i < 11; i++)
    {
        printf("%i*%i=%i\n\n",numero,i,numero * i);
    }
    return 0;
}