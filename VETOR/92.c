// Contador de repetidos
#include <stdio.h>
int main()
{
    int robson, regina, vetor[] = {34, 22, 34, 98, 74, 34, 41, 12, 56, 34, 78}, cont = 0, rep[10];
    for (int z = 0; z < 11; z++)
    {
        rep[z] = 0;
    }
    for (robson = 0; robson < 11; robson++)
    {
        for (regina = robson + 1; regina < 11; regina++)
        {
            if (vetor[regina] == vetor[robson])
            {
                int existe = 0;
                for (int i = 0; i < 11; i++)
                    if(vetor[regina] == rep[i])
                        existe = 1;
                if (existe == 0)
                {
                    cont++;
                }
                
            }
        }
        rep[robson] = vetor[robson];
    }
    printf("%i", cont);
    printf("\n\n\n");
    return 0;
}