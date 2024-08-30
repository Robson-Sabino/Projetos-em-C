// Obtendo somente ímpares do vetor

#include <stdio.h>
int main()
{
    int vetor[10] = {34, 22, 45, 12, 11, 55, 29, 20, 80, 92};
    int mod;
    int contadorImpar = 0;
    int impar[10] = {0};
    for (int i = 0; i < 10; i++)
        impar[i] = 0;
    for (int i = 0; i < 10; i++)
    {
        mod = vetor[i] % 2;
        if (mod == 1)
        {
            impar[contadorImpar] = vetor[i];
            contadorImpar = contadorImpar + 1;
        }
    }
    for (int i = 0; impar[i] > 0; i++)
    {
        if (impar[i] > 0)
        {
            printf("%i, ", impar[i]);
        }
    }
    return 0;
}