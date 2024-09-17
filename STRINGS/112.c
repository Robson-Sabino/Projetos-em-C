// Identificador de substring 2

#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavraUm[30];
    char palavraDois[30];
    int tamanhoUm = sizeof(palavraUm) / sizeof(palavraUm[0]);
    int tamanhoDois = sizeof(palavraDois) / sizeof(palavraDois[0]);
    int existe = 0;
    printf("Digite a palavra 1:\n");
    scanf("%s", palavraUm);
    printf("\n");
    printf("Digite a palavra 2:\n");
    scanf("%s", palavraDois);
    for (int i = 0; i <= tamanhoDois - tamanhoUm; i++)
    {
        for (int j = 0; j < tamanhoUm; j++)
        {
            if (palavraDois[i + j] != palavraUm[j])
            {
                printf("Existe");
                existe = 1;
                break;
            }
        }
    }
    if (existe == 0)
        printf("Não existe");
    printf("\n\n");
    return 0;
}