#include <stdio.h>

/*Primero exemplo de ponteiro explicado pelo Murilo*/

void soma(int n1, int n2, int* r)
{
    n1 = 5;
    n2 = 4;
    *r = n1 + n2;
}

int main()
{

    int a = 1;
    int b = 2;
    int c = 0;
    soma(a, b, &c);
    printf("resultado eh : %i", c);
    printf("resultado eh : %i", a);
    printf("resultado eh : %i", b);
}