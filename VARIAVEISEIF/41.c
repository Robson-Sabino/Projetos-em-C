// Notas e reprovações

#include <stdio.h>
int main()
{
    printf("\nx2\n");
    float n1, n2, n3, n4, media = 0;
    printf("\nDigite a primeira nota:\n");
    scanf("%f", &n1);
    printf("\nDigite a primeira nota:\n");
    scanf("%f", &n2);
    printf("\nDigite a primeira nota:\n");
    scanf("%f", &n3);
    printf("\nDigite a primeira nota:\n");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    if ( media < 7)
    {
        printf("Reprovado!\n\n");
    }
    else
    {
        printf("Aprovado!");
    }

    return 0;
}