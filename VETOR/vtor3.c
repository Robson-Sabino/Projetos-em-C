// Mostrando a nota especifica
#include <stdio.h>
int main(void)
{
    int numero = 0, nota[] = {12, 65, 85, 78, 45, 15, 58, 45, 75, 58, 9};
    printf("Digite a nota que deseja acessar:");
    scanf("%i", &numero);
    if (numero >= 0 && numero <= 10)
    {
        printf("A nota e: %i", nota[numero]);
    }
    else
    {
        printf("Nota não encontrada");
    }
    printf("\n\n\n");
    return 0;
}