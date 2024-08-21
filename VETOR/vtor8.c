// Contador de repetidos
#include <stdio.h>
int main()
{
    int resultado = 0, vetor[] = {34, 22, 34, 98, 74, 34, 41, 12, 56, 34, 78};

    for (int i = 0; i <= 11; i++)
    {
        for (int x = 0; x < i; x++)
        {
            if (vetor[x] == vetor[i])
            {
                resultado ++;
            }
        }
    }
printf("comparando valores ,%d,%d\n", vetor[x], vetor[i]);
return 0;
}