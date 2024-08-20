// Pedir notas e mostar a menor, maior e média
#include <stdio.h>
int main(void)
{
    int nota[10], menor = 0, maior = 0, media = 0, i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite a nota %d:", i + 1);
        scanf("%i", &nota[i]);

        if (menor == 0)
        {
            menor = nota[i];
        }
        else if (nota[i] < menor)
        {
            menor = nota[i];
        }
        if (nota[i] > maior)
        {
            maior = nota[i];
        }

        media += nota[i];
    }
    media = media / i;

    i = printf("\nA menor nota e: %i", menor);
    printf("\nA maior nota e: %i", maior);
    printf("\nA media nota e: %i", media);
    printf("\n\n");
    return 0;
}