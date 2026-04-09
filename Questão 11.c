#include <stdio.h>

int main()
{
	float compra, pago;
	int troco, troco_original, n100, n50, n20, n10, n5, n2, n1, c50, c25, c10, c5, c1;
	
	printf("Digite o valor da compra: R$ ");
	scanf("%f", &compra);
	
	printf("Digite o valor pago: R$ ");
	scanf("%f", &pago);
	
	if (pago < compra)
	{
    printf("Valor pago insuficiente para efetuar a compra.\n");
	}
	else
	{
	    troco = (int)((pago - compra) * 100 + 0.5);
	    troco_original = troco;
	
	    n100 = troco / 10000;
	    troco = troco % 10000;
	
	    n50 = troco / 5000;
	    troco = troco % 5000;
	
	    n20 = troco / 2000;
	    troco = troco % 2000;
	
	    n10 = troco / 1000;
	    troco = troco % 1000;
	
	    n5 = troco / 500;
	    troco = troco % 500;
	
	    n2 = troco / 200;
	    troco = troco % 200;
	
	    n1 = troco / 100;
	    troco = troco % 100;
	
	    c50 = troco / 50;
	    troco = troco % 50;
	
	    c25 = troco / 25;
	    troco = troco % 25;
	
	    c10 = troco / 10;
	    troco = troco % 10;
	
	    c5 = troco / 5;
	    troco = troco % 5;
	
	    c1 = troco / 1;
	    troco = troco % 1;
	}
	    printf("-----------Troco-----------\n");
	    printf("Troco: R$ %.2f\n\n", troco_original / 100.0);
	
	    printf("Cedulas:\n");
	    printf("Nota de R$100,00: %d\n", n100);
	    printf("Nota de R$50,00: %d\n", n50);
	    printf("Nota de R$20,00: %d\n", n20);
	    printf("Nota de R$10,00: %d\n", n10);
	    printf("Nota de R$5,00: %d\n", n5);
	    printf("Nota de R$2,00: %d\n\n", n2);
	
	    printf("Moedas:\n");
	    printf("Moeda de R$1,00: %d\n", n1);
	    printf("Moeda de R$0,50: %d\n", c50);
	    printf("Moeda de R$0,25: %d\n", c25);
	    printf("Moeda de R$0,10: %d\n", c10);
	    printf("Moeda de R$0,05: %d\n", c5);
	    printf("Moeda de R$0,01: %d\n", c1);
	    
	    return 0;
	
}