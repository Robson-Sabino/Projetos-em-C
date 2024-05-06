// Contando até 0 a partir do sugerido
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um nemero:\n");
    scanf("%i", &numero);
    int i = numero;
    while (i >= 0)
    {
        printf("Numero %i\n\n", i);
        i--;
    }
    return 0;
}