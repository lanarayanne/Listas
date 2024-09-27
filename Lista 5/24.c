/**

     24. Escreva um programa que recebe do usu´ ario uma string S, um caractere C, e uma
 posic ¸˜ ao I e devolve o ´ ındice da primeira posic¸˜ ao da string onde foi encontrado o caractere
 C. A procura deve comec ¸ar a partir da posic ¸˜ ao I.
 
 
**/

#include <stdio.h>

int main()
{
	char frase[10000];
	char c;
	int index;
	int i=0, tam=0, encontrado=0;
	
	printf("Frase: ");
	scanf ("%10000[^\n]", frase);
	
	while(frase[i] != '\0'){
	    tam++;
	    i++;
	}
	
	printf("Tamanho = %d", tam);
	
	printf("\nInforme o caractere: ");
    scanf(" %c", &c);
    
    if(c > 65 && c <90){ //maiusculo
        c = c + 32;
    }
	
	printf("Informe o indice i: ");
    scanf("%d", &index);
    
	while(index>=tam){
	    printf("Indice maior que o tamanho da frase, tente novamente: ");
    	scanf("%d", &index);
	}
	
	printf("\nLocalizacao de %c apos posicao %d: ",c, index);
	
	for(i=index; i<tam; i++){
	    if(frase[i] == c){
	        printf("%d", i+1);
	        encontrado = 1;
	        break;
	    }
	}
	
	if (!encontrado){
	    printf("Nao encontrado");
	}
	return 0;
}