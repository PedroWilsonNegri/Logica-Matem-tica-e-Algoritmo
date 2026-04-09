#include <stdio.h>

int main()
{
    float salario_fixo, vendas, comissao, salario_final;

    printf("Digite o salario fixo em R$: ");
    scanf("%f", &salario_fixo);

    printf("Digite o total de vendas em R$: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.15;
    salario_final = salario_fixo + comissao;

    printf("Salario fixo: R$ %.2f\n", salario_fixo);
    printf("Salario final: R$ %.2f\n", salario_final);

    return 0;
}