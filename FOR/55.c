// Contando até 0 a partir do sugerido
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero:");
    scanf("%i", &numero);
    for (int i = numero; i >= 0; i--)
    {
        printf("Numero %i\n\n", i);
    }
    return 0;
}