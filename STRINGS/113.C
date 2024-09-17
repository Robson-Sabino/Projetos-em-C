// Extrator de texto 1

#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[] = "<ul><li>Exercício</li></ul>";
    int dentroTag = 0;

    printf("Texto extraído: ");
    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == '<')
        {
            dentroTag = 1;
        }
        else if (frase[i] == '>')
        {
            dentroTag = 0;
        }
        else if (!dentroTag)
        {
            printf("%c", frase[i]);
        }
    }

    printf("\n");
    return 0;
}