#include <stdio.h>

int main()
{
    int x, y, quociente, resto;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    quociente = x / y;
    resto = x % y;

    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

return 0;
}