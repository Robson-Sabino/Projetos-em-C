// Pedir notas e mostar a maior
#include <stdio.h>
int main(void)
{
    int nota[10];
    int maior = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota %d:", i + 1);
        scanf("%i", &nota[i]);

        if (nota[i] > maior)
        {
            maior = nota[i];
        }
    }
    printf("\nA maior nota e: %i", maior);
    printf("\n\n");
    return 0;
}