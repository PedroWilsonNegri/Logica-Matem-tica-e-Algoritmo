#include <stdio.h>

int main()
{ 

	int a;
	int b;
	int temp;

	printf("Insira o valor de A: ");
	scanf("%d", &a);

	printf("Insira o valor de B: ");
	scanf("%d", &b);
	
	temp = a;
	a = b;
	b = temp;

	printf("O valor de A: %d\n", a);
	printf("O valor de B: %d\n", b);
	
return 0;
}