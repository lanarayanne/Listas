/**

      25. Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem
 alfab´ etica. Dica: ‘a’ ´ e menor do que ‘b’.
 
 
**/

#include <stdio.h>

int main()
{
	char palavra1[50];
	char palavra2[50];
	char nada;
	int i=0, encontrado=0, tam1=0, tam2=0, resposta=0, maior, menor;
	
	printf("Primeira palavra: ");
	scanf ("%50[^\n]", palavra1);
	scanf("%c", &nada);
	
	while(palavra1[i] != '\0'){
	    tam1++;
	    i++;
	}
	
	printf("Segunda palavra: ");
	scanf ("%50[^\n]", palavra2);
	
	i=0;
	
	while(palavra2[i] != '\0'){
	    tam2++;
	    i++;
	}
	
	if (tam1 >= tam2){
	    maior = tam1;
	    menor = tam2;
	}
	else{
	    maior = tam2;
	    menor = tam1;
	}
	
	i=0;
	
	while (i<menor){
	    if (palavra1[i] > palavra2[i]){
	        printf("%s vem antes na ordem alfabetica", palavra1);
	        resposta=1;
	        break;
	    }
	    else if(palavra1[i] < palavra2[i]){
	        printf("%s vem antes na ordem alfabetica", palavra2);
	        resposta=1;
	        break;
	    }
	    i++;
	}
	
	if (!resposta){
	    
	    if (tam1 == tam2){
	        printf("As palavras sao iguais");
	    }
	    
        if(tam1>tam2){
            printf("%s vem antes na ordem alfabetica", palavra2);
        }
        
        if(tam1<tam2){
            printf("%s vem antes na ordem alfabetica", palavra1);
	    }
	}
	
	
	
	return 0;
}