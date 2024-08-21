// Contador de repetidos
#include <stdio.h>
int main()
{
    int i, x, vetor[] = {34, 22, 34, 98, 74, 34, 41, 12, 56, 34, 78}, cont[11] = {0};

    for ( i = 0; i <= 11; i++)
    {
        for ( x = 0; x < i; x++)
        {
            if (vetor[i] == vetor[x])
            {
                cont[i] ++;
            }
        }
    }

return 0;
}