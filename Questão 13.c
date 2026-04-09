#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
 	float preco_fabrica, impostos, revendedor, preco_final;
 	
 	printf("Informe o preço de fabrica do automovel: R$");
 	scanf("%f", &preco_fabrica);
 	
 	impostos = preco_fabrica * 0.45;
 	revendedor = preco_fabrica * 0.28;
 	preco_final = preco_fabrica + impostos + revendedor;
 	
 	printf("O preço final do carro é: R$ %.2f\n", preco_final);
 	
    return 0;
}