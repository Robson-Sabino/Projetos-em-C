// bubblesort
//  Reordenação de vetor
#include <stdio.h>
int main()
{
    int x = 1, aux, vetor[] = {56, 54, 87, 25, 21, 23, 22, 544, 467, 884, 11, 4, 1, 67};
    for(int i = 0; i <= 14; i++)
    {
        if(vetor[i] > vetor[i+1] && i < 13 )
        {
            aux = vetor[i];
            vetor[i] = vetor[i+1];
            vetor[i+1] = aux;
            x = 0;
        }
        if(i == 13 && x == 0)
        {
            x = 1;
            i = -1;
        }
    }
    for(int i = 0; i < 14; i++)
    {
    printf("%i,", vetor[i]);
    }
    return 0;
}