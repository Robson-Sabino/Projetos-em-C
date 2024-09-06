// Jogo da Velha

#include <stdio.h>
int main()
{
    setbuf(stdout, NULL);
    int cordenadas = 1, jogodaVelha[3][3], linha = 0, coluna = 0, jogador = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            jogodaVelha[i][j] = 2;
    printf("Esse é o Jogo da Velha, para jogar vc deve indicar a possição que deseja marcar\ndeve ser utilizado as cordenadas de Linhas e Colunas para fazer sua jogada");
    printf("\n\n");
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%i[", cordenadas);
        for (int j = 0; j < 3; j++)
        {
            printf("%i", jogodaVelha[i][j]);
            if (j < 2)
                printf(",");
        }
        cordenadas = cordenadas + 1;
        printf("]\n");
    }
    cordenadas = 1;
    for (int d = 0; d < 9; d++)
    {

        printf("\nJogador %i, Digite as cordenadas Linha / Coluna\n", jogador + 1);
        scanf("%i", &linha);
        scanf("%i", &coluna);
        printf("\n");
        if (jogador == 0)
        {
            jogodaVelha[linha - 1][coluna - 1] = 1;
            jogador = 1;
        }
        else
        {
            jogodaVelha[linha - 1][coluna - 1] = 0;
            jogador = 0;
        }
        if (jogodaVelha[0][0] < 2 && jogodaVelha[0][0] == jogodaVelha[0][1] && jogodaVelha[0][0] == jogodaVelha[0][2])
        {
            if (jogador = 0)
            {
                printf("O jogador 1 venceu");
            }
            else
            {
                printf("O jogador 2 venceu");
            }
        }
        printf("  1 2 3\n");
        for (int i = 0; i < 3; i++)
        {
            printf("%i[", cordenadas);
            for (int j = 0; j < 3; j++)
            {
                printf("%i", jogodaVelha[i][j]);
                if (j < 2)
                    printf(",");
            }
            cordenadas = cordenadas + 1;
            printf("]\n");
        }
        cordenadas = 1;
    }
    printf("\n\n");
    return 0;
}