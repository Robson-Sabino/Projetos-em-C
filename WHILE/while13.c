// A tabuada
#include <stdio.h>
int main()
{
    int numero, i = 1;
    printf("Digite um numero:\n");
    scanf("%i", &numero);
    while (i < 11)
    {
        printf("%i * %i = %i\n\n", numero, i, numero * i);
        i++;
    }
    return 0;
}