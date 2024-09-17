// Copia de strings

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[10], invertida[10];
    int possicao = 0;
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    for (int i = tamanho - 1; i >= 0; i--)
    {
        invertida[possicao] = palavra[i];
        possicao = possicao + 1;
    }
    printf("A palavra digitada foi %s e o inversodela é %s", palavra, invertida);
    printf("\n");
    return 0;
}