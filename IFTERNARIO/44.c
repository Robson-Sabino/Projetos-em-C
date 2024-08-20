// Par ou impar?

#include <stdio.h>
int main()
{
    int n1;
    printf("Digite o numero que deseja saber se é par ou impar\n");
    scanf("%i", &n1);
    n1 = n1%2;
    printf(n1 == 1 ? ("Impar\n\n\n") : ("Par\n\n\n"));
    return 0;
}