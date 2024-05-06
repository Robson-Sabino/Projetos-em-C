// Mostrando notas a partir do vetor
#include <stdio.h>
int main(void)
{
    int nota[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota %d:\n", i + 1);
        scanf("%i", &nota[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%i ", nota[j]);
    }
    return 0;
}