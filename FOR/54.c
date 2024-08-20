// Contando ate o numero sugerido
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um nemero:");
    scanf("%i", &numero);
    for (int i = 1; i <= numero; i++)
    {
        printf("Numero %i\n\n", i);
    }
    return 0;
}