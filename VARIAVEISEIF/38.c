// Transformando números negativos em positivo

#include <stdio.h>
int main()
{
    int num;
    printf("\nDigite um numero\n");
    scanf("%i", &num);
    if (num < 0)
    {
        num = num * -1;
    }
    printf("%i", num);
    return 0;
}