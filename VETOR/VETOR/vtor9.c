//Maior, menor e a média
#include <stdio.h>
int main()
{
    float media;
    int i = 0, maior, menor, vetor[] = {1, 54, 29, 97, 32, 11, 54, 59, 18, 36, 66, 98, 82, 51};
    menor = vetor[0];
    maior = vetor[0];
    for( i ; i <= 13; i++)
    {
        media = vetor[i] + media;
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if(vetor[i] < menor)
        {
            menor = vetor[i];
        }

    }
    printf("A maior nota e: %i, a menor e: %i, e a media e: %.2f\n" ,maior,menor,media/i);
    return 0;
}