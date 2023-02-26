//Calculo simples de soma
#include <stdio.h>
int main()
{
    int num1, num2, result;
    printf("\nInforme o primeiro numero:");
    scanf("%i", &num1);
    printf("\nInforme o segundo numero:");
    scanf("%i", &num2);
    result = num1 + num2;
    printf("\nO resultado e:%i\n\n", result);
    return 0;
}