#include <stdio.h>

 int main()
 {
	 float centimetros, polegadas;
	 
	 printf("Digite o valor em centrimetros: ");
	 scanf("%f", &centimetros);
	 
	 polegadas = centimetros * 2.54;
	 
	 printf("O valor em polegadas: %.2f\n", polegadas);
	 
	 return 0;
 }