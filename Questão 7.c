#include <stdio.h>

int main()
{
    float r, h, area, volume;
    float pi = 3.14;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);

    area = 2 * pi * r * (h + r);
    volume = pi * r * r * h;

    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}