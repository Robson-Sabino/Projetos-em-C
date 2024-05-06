// Pedir infinitas notas e mostrar menor
#include <stdio.h>
int main()
{
    float menor, notas;
    int i = 0;
    while (notas >= 0)
    {
        printf("Nota %i\n", i + 1);
        scanf("%f", &notas);
        if (notas >= 0 && notas < menor)
        {
            menor = notas;
        }
        if (i == 0)
        {
            menor = notas;
        }
        i++;
    }
    printf("A menor nota e: %.1f\n", menor);
    return 0;
}