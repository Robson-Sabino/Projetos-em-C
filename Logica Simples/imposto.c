//Calculo de porcentagem de imposto
#include <stdio.h>
int main()
{
    float salario, desconto, resultado;
    printf("Informe o salario do funcionario: \n");
    scanf("%f", &salario);
    resultado = salario / 100;
    desconto = resultado * 65.5;
    printf("O salario liquido e:%.2f, e o desconto e:%.2f/2\n", salario, desconto);
    return 0;
}