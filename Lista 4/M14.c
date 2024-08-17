/*Fac ̧a um programa para gerar automaticamente numeros entre 0 e 99 de uma cartela de  ́
bingo. Sabendo que cada cartela devera conter 5 linhas de 5 n  ́ umeros, gere estes dados  ́
de modo a nao ter n  ̃ umeros repetidos dentro das cartelas. O programa deve exibir na  ́
tela a cartela gerada.́*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int matriz[5][5]= {0};
	int cont=0;
	int soma=1;
	int num;
	
	int linha=0;
	int coluna=0;
	int teste = 0;
	
	
	
	
	while (linha<5){
	    while (coluna<5){
	        num = rand() %100;
	       // scanf("%d", &num);
	  
	        for (int m=0; m<=linha; m++){
	            for (int n=0; n<=5; n++){
	                if (num==matriz[m][n]){
	                    teste=1;
	                    break;
	                }
	            }
	        }
	        
	        if (teste==0){
	            matriz[linha][coluna]=num;
	            coluna++;
	        }
	        teste = 0;
	        
	    }
	    coluna=0;
	    linha++;
	}
	

		   
	printf("\nCartela\n");
	
	for (int m=0; m<5; m++) {
		for (int n=0; n<5; n++) {
			printf ("%d ", matriz[m][n]);
		}
		printf("\n");
	}
	
	return 0;
}