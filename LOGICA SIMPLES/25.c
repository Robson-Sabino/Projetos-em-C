// troca de variavel 2
#include <stdio.h>
int main()
{
    int x = 1, y = 2, z = 3, k = 4, i = 5;
    int q;
    q = x;
    x = y;
    y = z;
    z = k;
    k = i;
    i = q;
    printf("X:%i,Y:%i,Z:%i,K:%i,I:%i\n", x, y, z, k, i);
    return 0;
}