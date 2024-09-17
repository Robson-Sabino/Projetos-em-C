// Contador de caracteres

#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[10];
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    int quantidade = strlen(nome);
    for (int i = 0; i < quantidade; i++)
    {
        printf("%c", nome[i]);
    }
    printf(", %i", quantidade);
    printf("\n\n");
    return 0;
}