// Sequência de mensagem com While aninhado
#include <stdio.h>
int main()
{
    int i = 1;
    int x = 1;
    while (i < 41)
    {   
        x = 1;
        while (x < 4)
        {
            printf("%i %i\n", i, x);
            x++;
        }
        i++;
    }
printf("\n\n");
return 0;
}