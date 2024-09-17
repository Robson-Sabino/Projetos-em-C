// Criptografar Palavras

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[10], invertida[10];
    int possicao = 0;
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++)
    {
        invertida[i] = palavra[i] + 1;
    }
    printf("%s", invertida);
    printf("\n");
    return 0;
}