// Jogo da Velha

#include <stdio.h>
int main()
{
    setbuf(stdout, NULL);
    int cordenadas = 1, jogodaVelha[3][3], linha = 0, coluna = 0, jogador = 0, fim = 0;
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
    int f = 0;
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
        for (int j = 0; j < 2; j++)
        {
            if (jogodaVelha[0][0] == j && jogodaVelha[0][1] == j && jogodaVelha[0][2] == j ||
                jogodaVelha[1][0] == j && jogodaVelha[1][1] == j && jogodaVelha[1][2] == j ||
                jogodaVelha[2][0] == j && jogodaVelha[2][1] == j && jogodaVelha[2][2] == j ||
                jogodaVelha[0][0] == j && jogodaVelha[1][0] == j && jogodaVelha[2][0] == j ||
                jogodaVelha[0][1] == j && jogodaVelha[1][1] == j && jogodaVelha[2][1] == j ||
                jogodaVelha[0][2] == j && jogodaVelha[1][2] == j && jogodaVelha[2][2] == j ||
                jogodaVelha[0][0] == j && jogodaVelha[1][1] == j && jogodaVelha[2][2] == j ||
                jogodaVelha[0][2] == j && jogodaVelha[1][1] == j && jogodaVelha[2][0] == j)
            {
                if (jogador = 1)
                {
                    printf("O jogador 1 venceu\n\n");
                    break;
                }
                else
                {
                    printf("O jogador 2 venceu\n\n");
                    break;
                }
            }
        }
        cordenadas = 1;
    }
    printf("\nVelha, não houve ganhadores!!\n\n");
    printf("\n\n");
    return 0;
}