#include <stdio.h>
#include <locale.h>
int main()
{ 
setlocale(LC_ALL, "Portuguese");

	int x;
	int y;
	int s;

	printf("Insira o primeiro número: ");
	scanf("%d", &x);

	printf("Insira o segundo número: ");
	scanf("%d", &y);

	s=x*y;

	printf("Resultado da multiplicação: %d\n", s);

return 0;
}