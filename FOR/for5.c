// Sequencia de mensagem com for aninhado
#include <stdio.h>
int main()
{
    for (int i = 1; i < 41; i++)
    {
        for (int x = 1; x < 4; x++)
        {
            printf("Olá %i %i\n", i, x);
        }
    }
    return 0;
}