// Fatorial

#include <stdio.h>
int main()
{
    int n1, f = 1;
    printf("Digite o numero que deseja descobrir o fatorial:\n");
    scanf("%i", &n1);
    if (n1 < 0 || n1 > 10)
    {
        printf("Numero invalido");
    }
    else
    {
        for (int i = 1; i <= n1; i++)
        {
            f = f * i;
        }
        printf("%i", f);
    }
    printf("\n\n\n");
    return 0;
}