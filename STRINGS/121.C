// Trocador de letras

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra[10], x[2] = "X";
    int numero = 0;
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    int quantidade = strlen(palavra);
    printf("Digite um numero que esteja entre a quantidade de litras digitadas na palavra anterior:\n");
    scanf("%i", &numero);
    palavra[numero] = x[0];
    printf("%s", palavra);
    printf("\n\n");
    return 0;
}