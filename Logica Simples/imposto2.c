//Calculo de porcentagem de imposto dinamico
#include <stdio.h>
int main()
{
    float salario, porcentagem, imposto, salarionovo;
    printf("Informe o salario do funcionario:\n");
    scanf("%f", &salario);
    printf("Informe a porcenmtagem do desconto:\n");
    scanf("%f", &porcentagem);
    imposto = (salario / 100) * porcentagem;
    salarionovo = salario - imposto;
    printf("O salario e %.2f,e %.2f de imposto\n", salarionovo, imposto);
    return 0;
}