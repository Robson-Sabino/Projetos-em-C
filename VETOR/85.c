// Mostrando notas a partir do vetor
#include <stdio.h>
int main(void)
{
    int nota[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota %d:", i + 1);
        scanf("%i", &nota[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%i,", nota[j]);
    }
    printf("\n\n\n");
    return 0;
}