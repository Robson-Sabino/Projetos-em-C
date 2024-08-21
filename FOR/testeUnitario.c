// Teste unitario
#include <stdio.h>

int somar(int n1, int n2)
{
    n1 = n1+1;
    return n1 + n2;
}

int main()
{
    int n1, n2, r;

    n1 = 3;
    n2 = 3;
    r = somar(n1, n2);
    if (r == 6)
    {
        printf("Sucesso!!");
    }
    else
    {
        printf("Falha");
    }

    n1 = 9;
    n2 = 2;
    r = somar(n1, n2);
    if (r == 11)
    {
        printf("Sucesso!!");
    }
    else
    {
        printf("Falha");
    }
}