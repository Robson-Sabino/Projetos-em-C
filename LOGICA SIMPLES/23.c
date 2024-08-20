//Calculo simples de subitração
#include <stdio.h>
int main()
{
    int num1, num2, result;
    printf("\nSUBITRACAO\n\n");
    printf("\nInforme o primeiro numero:");
    scanf("%i", &num1);
    printf("\nInforme o segundo numero:");
    scanf("%i", &num2);
    result = num1 - num2;
    printf("\nO resultado é:%i\n\n", result);
    return 0;
}