#include <stdio.h>

int main()
{
    int a, b;
    int soma, produto;
    float quociente;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    soma = a + b;
    produto = a * b;

    if (b != 0)
    {
        quociente = (float)a / b;
        printf("Quociente: %.2f\n", quociente);
    }
    else
    {
        printf("Nao e possivel dividir por zero.\n");
    }

    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);

    return 0;
}