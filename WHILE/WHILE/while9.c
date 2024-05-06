// Média de infinitas notas
#include <stdio.h>
int main()
{
    float notas, media = 0;
    int i = 0;
    while (notas >= 0)
    {
        printf("Nota %i\n", i + 1);
        scanf("%f", &notas);
        if (notas >= 0)
        {
            media = notas + media;
            i++;
        }
    }
    notas = media / i;
    printf("sua media e: %.1f\n", notas);
    return 0;
}