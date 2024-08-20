// Mostrando varias mensagens e varias variáveis
#include <stdio.h>
int main()
{
    int idade = 0, anonascimento = 0;
    float peso = 0;
    printf("\nDigite a sua idade:\n");
    scanf("%i", &idade);
    printf("\nDigite seu ano de nascimento:\n");
    scanf("%i", &anonascimento);
    printf("\nQual seu peso:\n");
    scanf("%f", &peso);
    printf("\nSua idade é %i, seu ano de nascimento é %i e seu peso é %.2fkg.\n\n\n", idade, anonascimento, peso);
    return 0;
}