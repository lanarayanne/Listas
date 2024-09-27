/**

    Fac ¸a um programa que receba duas frases distintas e imprima de maneira invertida,
    trocando as letras A por *.
**/

#include <stdio.h>

int main()
{
	char frase1[10000];
	char frase2[10000];
	char nada;
	int i=0, tam1=0, tam2=0;
	
	printf("Frase 1: ");
	scanf("%10000[^\n]", frase1);
	scanf("%c", &nada);
	printf("Frase 2: ");
	scanf("%10000[^\n]", frase2);
	
	while (frase1[i] != '\0' ) {
	    tam1++;
	    i++;
	}
	
	i=0;
	
	while (frase2[i] != '\0' ) {
	    tam2++;
	    i++;
	}
	
	i=tam1;

	while (i>=0) {
	    
	    if(frase1[i] == 'a' || frase1[i] == 'A'){
	        printf("*");
	    }
	    else{
	        printf("%c", frase1[i]);
	    }
	    i--;
	}
	
	printf("\n");
	i=tam2;
	
	while (i>=0) {
	    
	    if(frase2[i] == 'a' || frase2[i] == 'A'){
	        printf("*");
	    }
	    else{
	        printf("%c", frase2[i]);
	    }
	    i--;
	}
	
	return 0;
}