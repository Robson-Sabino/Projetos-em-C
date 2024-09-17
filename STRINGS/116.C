// Contador de letras

#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra[10];
    int tem = 0;
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    int quantidade = strlen(palavra);
    for (int i = 0; i < quantidade; i++)
    {
        if (palavra[i] == 79 || palavra[i] == 111)
            tem = + 1;
    }
    if (tem > 0)
        printf("existe %i letra O", tem);
    else
        printf("Não existe letra O");
    printf("\n\n");
    return 0;
}