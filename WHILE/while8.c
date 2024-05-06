// Media de notas
#include <stdio.h>
int main()
{
    float notas, media;
    int i = 1;
    while (i < 11)
    {
        printf("Nota %i\n", i);
        scanf("%f", &notas);
        media = notas + media;
        i ++;
    }
    notas = media / 10;
    printf("sua media e: %.1f\n", notas);
    return 0;
}