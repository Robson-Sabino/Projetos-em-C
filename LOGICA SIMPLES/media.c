// atividade de media simples
#include <stdio.h>
int main()
{
    float nota1, nota2, nota3, nota4, media;
    printf("\nMEDIA SIMPLES DE NOTAS\n\n");
    printf("Infome a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Infome a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Infome a terceira nota:\n");
    scanf("%f", &nota3);
    printf("Infome a quarta nota:\n");
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A media das notas e:%f\n\n", media);

    return 0;
}