#include <stdio.h>
#include <locale.h>
#define PI 3.14
int main()
{
setlocale(LC_ALL, "Portuguese");	
	float raio, area;
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	area = raio * raio * PI;
	
	printf("A área do circulo é: %.2f\n", area);
	
	return 0;
}