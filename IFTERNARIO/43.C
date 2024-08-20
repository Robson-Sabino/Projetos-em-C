// Homem ou mulher

#include <stdio.h>
int main()
{
    int tESTE;
    printf("Digite 0 para Mulher ou 1 para homem:\n");
    scanf("%i", &tESTE);
    tESTE == 1 ? printf("Homem\n\n\n") : (tESTE < 0 || tESTE > 1 ? printf("Trans\n\n\n") : printf("Mulher\n\n\n"));
    return 0;
}