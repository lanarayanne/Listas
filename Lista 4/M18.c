/* 8. Fac¸a um programa que permita ao usuario entrar com uma matriz de 3 x 3 n ´ umeros ´
inteiros. Em seguida, gere um array unidimensional pela soma dos numeros de cada ´
coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:
5 -8 10
1 2 15
25 10 7
Vai gerar um vetor, onde cada posic¸ao˜ e a soma das colunas da matriz. A primeira ´
posic¸ao ser ˜ a 5 + 1 + 25, e assim por diante: ´
31 4 3
́*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int matriz[3][3]={0};
	int vetor[3]={0};
	
	printf("Preencha a matriz 3x3:\n");
	
	for (int m=0;m<3;m++){
	    for (int n=0; n<3; n++){
	        scanf("%d", &matriz[m][n]);
	    }
	}
	
	for (int m=0;m<3;m++){
	    for (int n=0; n<3; n++){
	        if (m==0){
	            vetor[n]=vetor[n] + matriz[m][n];
	        }
	        if (m==1){
	            vetor[n]=vetor[n] + matriz[m][n];
	        }
	        if (m==2){
	            vetor[n]=vetor[n] + matriz[m][n];
	        }
	    }
	}
	
	printf("\nResultado:\n");
	
	for (int i=0; i<3; i++){
	    printf("%d ", vetor[i]);
	    
	}
	
	return 0;
}