/**

    19. Escreva um programa que leia a idade e o primeiro nome de varias pessoas. Seu pro
    grama deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa
    deve escrever o nome e a idade das pessoas mais jovens e mais velhas.

**/

#include <stdio.h>

int main()
{
	char nome[10000][50];
	int idade[10000]={0};
	int i=0, j=0, maior=-1, menor=500, cont=0;
	
	printf("Para encerrar, informe uma idade negativa\n");

	while (idade[i]>=0) {
	    
		printf("Idade: ");
		scanf("%d", &idade[i]);
		
		if(idade[i] < 0){
		    break;
		}

		if(idade[i]>130) {
			printf("\nInforme uma idade valida: ");
			scanf("%d", &idade[i]);
		}
		
		if(idade[i]>=maior) {
			maior=idade[i];
		}
		if(idade[i]<=menor) {
			menor=idade[i];
		}
		
		printf("Primeiro nome: ");
		scanf("%s", nome[i]);
		
		cont++;
		i++;
	}

	i=0;
	
	printf("\n\nMais velhos: %d anos", maior);

	while (i<cont) {
		if (idade[i] == maior) {
			printf("\n%s", nome[i]);
		}
		i++;
	}
	
	i=0;
	
	printf("\n\nMais novos: %d anos", menor);

	while (i<cont) {
		if (idade[i] == menor) {
			printf("\n%s", nome[i]);
		}
		i++;
	}


	return 0;
}