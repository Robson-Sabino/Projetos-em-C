// Verificador de palavras

#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra[5];
    int tamanho = sizeof(palavra) / sizeof(palavra[0]);
    int existe = 0;
    printf("Digite uma palavra:\n");
    scanf("%s", &palavra);
    for (int i = 0; i < tamanho; i++)
    {
        if (palavra[i] == 68 && palavra[i + 1] == 79)
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