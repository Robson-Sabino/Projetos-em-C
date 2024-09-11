// Descriptografar palavras

#include <stdio.h>

int main(void)
{
    char segredo[] = {86, 79, 67, 69, 39, 67, 79, 78, 83, 69, 71, 85, 73, 85};
    int tamanho = sizeof(segredo) / sizeof(segredo[0]);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%c", segredo[i]);
    }
    printf("\n\n");
    return 0;
}