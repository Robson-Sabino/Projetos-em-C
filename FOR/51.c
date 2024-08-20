// Sequência de mensagens com for aninhado ao contrário
#include <stdio.h>
int main()
{
    for (int i=1; i<41; i++)      
    {
        for (int x=4; x>=0; x--)
        {
            printf("Olá %i %i\n", i, x);
        }
    }
    return 0;
}