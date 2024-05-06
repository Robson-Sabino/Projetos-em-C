// Contando ate o numero sugerido
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um nemero:\n");
    scanf("%i", &numero);
    int i = 1;
    while (i <= numero)
    {
        printf("Numero %i\n\n", i);
        i ++;
    }
    return 0;
}