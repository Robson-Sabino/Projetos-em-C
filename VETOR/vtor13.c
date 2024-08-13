// Obtendo somente ímpares do vetor

#include <stdio.h>
int main()
{
    int v[10] = {34,22,45,12,11,55,29,20,80,92};
    int entre[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        entre[i] = v[i];
    }
    return 0;
}