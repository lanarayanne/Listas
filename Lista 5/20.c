/**

     Fac ¸a um programa que preencha um vetor com os modelos de cinco carros (exemplos de
    modelos: Fusca, Gol, Vectra, etc.). Preencha outro vetor com o consumo desses carros,
    isto ´ e, quantos quilˆ ometros cada um deles faz com um litro de combust´ ıvel. Calcule e
    mostre:
     (a) O modelo de carro mais economico;
     (b) Quantos litros de combustivel cada um dos carros cadastrados consomem para
     percorrer uma distˆ ancia de 1.000 quilometros

**/

#include <stdio.h>

int main()
{
	char modelo[5][50];
	float consumo[5];
	float litros_consumidos[5];
	int i=0, menor;
	
	printf("Preencha as informacoes para 5 carros\n");

	while (i<5) {
	    
		printf("\nModelo: ");
		scanf("%s", modelo[i]);
		
		printf("Consumo (Km/L): ");
		scanf("%f", &consumo[i]);
		
		if (i == 0){
		    menor = consumo[i];
		}
		
		if (consumo[i] < menor){
		    menor=consumo[i];
		}
		i++;
	}
	
	for(i=0; i<5; i++){
	    litros_consumidos[i]=consumo[i]*1000;
	}

	i=0;
	
	printf("\n\nMais economico: %d (Km/L))", menor);

	while (i<5) {
		if (consumo[i] == menor) {
			printf("\n%s", modelo[i]);
		}
		i++;
	}
	
	i=0;
	
	printf("\n\nLitros consumidos em 1.000 Km: ");

	while (i<5) {
		printf("\n%s", modelo[i]);
		printf("\t%.2f", litros_consumidos[i]);
		i++;
	}


	return 0;
}