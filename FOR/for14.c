// Pedir notas e mostar a menor
#include <stdio.h>
int main(void)
{
    int nota[10];
    int menor = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota %d:", i + 1);
        scanf("%i", &nota[i]);

        if (menor == 0)
        {
           menor = nota[i]; 
        } else if (nota[i] < menor)
        {
            menor = nota[i];
        }
    }
    printf("\nA maior nota e: %i", menor);
    printf("\n\n");
    return 0;
}