// Pedindo e desenhando

#include <stdio.h>
int main()
{
    int matriz[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    printf("Digite 9 numeros para preencher a matriz:\n");
    for (int i = 0; i < 3; i++)
        for (int d = 0; d < 3; d++)
            scanf("%i", &matriz[i][d]);
    printf("A matriz 3x3 é:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("[");
        for (int j = 0; j < 3; j++)
        {
            printf("%i", matriz[i][j]);
            if (j < 2)
                printf(", ");
        }
        printf("] ");
    }
    printf("\n\n");
    return 0;
}