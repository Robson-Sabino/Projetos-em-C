// Mostrando a nota especifica
#include <stdio.h>
int main(void)
{
    int numero = 0, nota[] = {12, 65, 85, 78, 45, 15, 58, 45, 75, 58, 9};
        printf("Digite a nota que deseja acessar:\n");
        scanf("%i", &numero);
        if (numero >= 0 && numero <= 10)
        {
            printf("A nota e: %i\n", nota[numero]);
        }
        else
        {
            printf("Nota não encontrada");
        }

    return 0;
}