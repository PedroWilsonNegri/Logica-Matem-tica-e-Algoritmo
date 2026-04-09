#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float media_1, media_2, soma, media_das_medias;
	
	media_1= (7 + 8 + 9)/ 3;
	media_2= (4 + 5 + 6)/ 3;	

	soma = media_1	+ media_2;
	media_das_medias = soma / 2;
	
	printf("A média dos numeros 7, 8 e 9 è: %.2f\n",media_1);
	printf("A média dos numeros 4, 5 e 6 è: %.2f\n",media_2);
	printf("A soma das duas médias è: %.2f\n",soma);
	printf("A média das médias è: %.2f\n",media_das_medias);
	
	return 0;
}