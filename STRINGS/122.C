// Identificador do maior

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char palavras[5][10];
    char maiorPalavra[10];
    int maior = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a palavra %d: ", i + 1);
        scanf("%s", palavras[i]);
        if (strlen(palavras[i]) >= maior)
        {
            strcpy(maiorPalavra, palavras[i]);
            maior = strlen(palavras[i]);
        }
    }
    printf("%s\n", maiorPalavra);
    return 0;
}
