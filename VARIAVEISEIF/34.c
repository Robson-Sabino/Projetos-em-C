// Sistema de comparação

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Digite o primeiro numero:");
    scanf("%i", &num1);
    printf("Digite o segundo numero:");
    scanf("%i", &num2);
    if (num1 > num2)
    {
        printf("\nO número %i maior que %i\n", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("\nO número %i maior que %i\n", num2, num1);
    }
    else if (num1 == num2)
    {
        printf("\nAmbos os números são iguais\n");
    }

    return 0;
}