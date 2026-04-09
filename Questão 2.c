#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
int numero, antecessor, sucessor;
	printf("digite um número: ");
	scanf("%d", &numero); 

	antecessor = numero -1;
	sucessor = numero +1;
	
printf("antecessor: %d\n", antecessor);
printf("sucessor: %d\n", sucessor);
	return 0;
}