// Calculo de porcentagem de impostos
#include <stdio.h>
int main()
{
    float salario, desconto, resultado;
    printf("Informe o salario do funcionario: \n");
    scanf("%f", &salario);
    resultado = salario / 100;
    desconto = resultado * 65.5;
    salario = salario - desconto;
    printf("O salario liquido é:%.2f, e o desconto é:%.2f de impostos\n", salario, desconto);
    return 0;
}