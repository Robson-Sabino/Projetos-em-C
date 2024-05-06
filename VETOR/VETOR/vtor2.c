// Mostrando a primeira e última nota
#include <stdio.h>
int main(void)
{
    int nota[] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota %d:\n", i + 1);
        scanf("%i", &nota[i]);
    }
    printf("A primeira nota e: %i, e a ultima e: %i\n", nota[0], nota[4]);
    return 0;
}