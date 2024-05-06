// Super While aninhado
#include <stdio.h>
int main()
{
    int a = 1, b = 1, c = 1;
    while (a < 101)
    {
        b = 1;
        while (b < 101)
        {
            c = 1;
            while (c < 101)
            {
                printf("%i %i %i\n", a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
    return 0;
}