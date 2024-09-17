// Identificador do maior

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra1[10], palavraTeste[10];
    for (int i = 1; i < 6; i++)
    {
        printf("Digite a palavra %i:\n", i);
        scanf("%s", palavra1);
        int quantidade1 = strlen(palavra1);
    }
    
    printf("%s", palavra1);
    printf("\n\n");
    return 0;
}