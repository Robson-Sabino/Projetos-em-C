#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Digite um numero:");
    scanf("%i", &num1);
    printf("Digite o segundo numero:");
    scanf("%i", &num2);
    if (num1 > num2)
    {
        printf("\n%i é maior que %i\n", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("\n%i é maior que %i\n", num2, num1);
    }
    else if (num1 == num2)
    {
        printf("\nTanto %i, quanto %i sao iguais\n",num2,num1);                        
    }


    return 0;
}