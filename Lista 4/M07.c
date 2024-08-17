/* Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos sao da forma: ˜
A[i][j] = 2*i + 7*j 2 se i < j;
A[i][j] = 3*i^2 1 se i = j ;
A[i][j] = 4*i^3 5*j^2 + 1 se i > j.
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int matriz[10][10]= {0};
	
	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
			if (i<j){
			    matriz[i][j]=(2*i)+(7*j);
			}
			if (i==j) {
			    matriz[i][j]=(3*pow(i, 2))+1; //3*i^2 1 // falta um sinal entao coloquei + igual o primeiro
			}
			if (i>j){
			    matriz[i][j]=(4*pow(i, 3))+(5*pow(j, 2)); //4*i^3 5*j^2 + 1 se i > j. // falta um sinal entao coloquei + igual o primeiro
			}
		}
	}

	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
		    printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}


	return 0;
}