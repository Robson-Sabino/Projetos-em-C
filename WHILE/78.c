// Pedir infinitas notas e mostrar maior
#include <stdio.h>
int main()
{
    float maior, notas;
    int i = 0;
    while (notas >= 0)
    {
        printf("Nota %i\n", i + 1);
        scanf("%f", &notas);
        if (notas >= 0 )
        {
            maior = notas;
        }
        i++;
    }
    printf("A maior nota e: %.1f\n", maior);
    return 0;
}