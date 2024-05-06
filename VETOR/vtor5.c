// Adicionando valores no vetor
#include <stdio.h>
int main(void)
{
    int valor = -564, nota[200];
    for(int i = 0; i < 200; i++)
    {
        nota[i] = valor;
        valor++;
        printf("%i\n", &nota[i]);
        
    }
    return 0;
}