// Pedir notas e mostrar a menor, maior e média
#include <stdio.h>
int main()
{
    float media = 0, notas = 0, menor = 0, maior = 0;
    int i = 0;
    while (notas >= 0)
    {
        printf("Nota %i\n", i+1);
        scanf("%f", &notas);
        if (notas > maior)
        {
            maior = notas;
        }
        if (notas >= 0 && notas < menor)
        {
            menor = notas;
        }
        if (i == 0)
        {
            menor = notas;
        }
        if (notas >= 0)
        {
            media = notas + media;
        }
        if (notas >= 0)
        {
            i++;
        }
    }
    printf("A menor nota e %.2f\n", menor);
    printf("A maior nota e %.2f\n", maior);
    printf("Sua media e %.2f\n", (media / i));
    return 0;
}