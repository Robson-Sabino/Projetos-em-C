// Contador de letras dinâmicas

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra[10], letra[2];
    int tem = 0;
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    int quantidade = strlen(palavra);
    printf("Digite uma letra:\n");
    scanf("%s", letra);
    for (int i = 0; i < quantidade; i++)
    {
        if (palavra[i] == letra[0])
            tem = tem + 1;
    }
    if (tem > 0)
        printf("existe %i letra %s", tem, letra);
    else
        printf("Não existe letra %s na frase digitada", letra);
    printf("\n\n");
    return 0;
}