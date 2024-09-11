// Verificador de palavras

#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavraUm[5];
    char palavraDois[5];
    int tamanhoUm = sizeof(palavraUm) / sizeof(palavraUm[0]);
    int tamanhoDois = sizeof(palavraDois) / sizeof(palavraDois[0]);
    int existe = 0;
    printf("Digite a palavra 1:\n");
    scanf("%s", &palavraUm);
    printf("\n");
    printf("Digite a palavra 2:\n");
    scanf("%s", &palavraDois);
    for (int i = 0; i < tamanhoUm; i++)
    {
    }
    if (existe == 0)
        printf("A sequência não existe");
    printf("\n\n");
    return 0;
}