//Troca de variavel 1
#include <stdio.h>
int main()
{
    int x = 1, y = 2;
    int z;
    z = x;
    x = y;
    y = z;
    printf("O valor de X e %i e de Y e %i\n", x, y);

    return 0;
}