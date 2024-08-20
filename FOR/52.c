//Super for aninhado
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        for (int x = 1; x <= 100; x++)
        {
            for (int y = 1; y <= 100; y++)
            {
                printf("Olá %i %i %i\n", i, x, y);
            }
        }
    }
    return 0;
}