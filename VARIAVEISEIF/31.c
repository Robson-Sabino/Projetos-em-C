// Idade para dirigir

#include <stdio.h>
int main()
{
    int idade;
    printf("Qual a sua idade?\n");
    scanf("%i", &idade);
    if (idade >= 18 && idade <= 70)
    {
        printf("\nQue bom! Você pode dirigir!\n\n\n");
    }
    else
    {
        printf("\nQue pena você não pode dirigir!\n\n\n");
    }
    return 0;
}