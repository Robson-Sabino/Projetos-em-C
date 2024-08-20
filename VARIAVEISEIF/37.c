// Par ou Ímpar

#include <stdio.h>
int main()
{
    int num;
    printf("\nDigite um numero\n");
    scanf("%i", &num);
    num % 2 == 1 ? printf("impar") : printf("par");
    return 0;
}