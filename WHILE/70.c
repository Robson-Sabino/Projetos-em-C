// sequencia de mensagem com While aninhado ao contrario
#include <stdio.h>
int main()
{
    int i = 1, x = 4;
    while (i < 41)
    {
        x = 4;
        while (x >= 0)
        {
            printf("%i %i\n", i, x);
            x--;
        }
        i++;
    }
printf("\n\n");
return 0;
}