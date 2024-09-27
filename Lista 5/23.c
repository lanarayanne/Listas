/**

     Escreva um programa que recebe uma string S e inteiros n˜ ao-negativos I e J e imprima
 o segmento S[I..J].
 
 
**/

#include <stdio.h>

int main()
{
	char frase[10000];
	int i, j;
	int l=0, tam=0;
	
	printf("Frase: ");
	scanf ("%10000[^\n]", frase);
	
	while(frase[l] != '\0'){
	    tam++;
	    l++;
	}
	
	printf("Informe o indice i: ");
    scanf("%d", &i);
    
	while(i>=tam){
	    printf("\nIndice maior que o tamanho da frase, tente novamente: ");
    	scanf("%d", &i);
	}
	
	printf("Informe o indice j: ");
	scanf("%d", &j);
	
	while(j>=tam){
    	printf("\nIndice maior que o tamanho da frase, tente novamente: ");
    	scanf("%d", &j);
	}
	
	
	printf("\nFrase de %d a %d\n", i, j);
	
	for(l=(i-1); l<j; l++){
	    printf("%c", frase[l]);
	}
	return 0;
}