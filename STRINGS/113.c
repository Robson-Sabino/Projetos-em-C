// Identificador de substring 1

#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra[] = {65,83,68,70,71,65,83,68,70,65,83,68,70,71,65,65,83,68,65,83,68,70,71,72,65,83,68,68,70,65,83,68,70,81,65,68,70};
    int tamanho = sizeof(palavra) / sizeof(palavra[0]);
    int existe = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (palavra[i] == 65 && palavra[i + 1] == 83 && palavra[i + 2] == 68 && palavra[i + 3] == 70 && palavra[i + 4] == 71 && palavra[i + 5] == 72)
        {
            printf("A sequência existe");
            existe = 1;
            break;
        }
    }
    if (existe == 0)
        printf("A sequência não existe");
    printf("\n\n");
    return 0;
}



