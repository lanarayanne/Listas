/*Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme

a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os ele-
mentos acima da diagonal principal. Imprima a matriz original e a matriz transformada.́*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int matriz_triangular[4][4] = {0};
	int matriz[4][4]= {0};
	srand(time(NULL));

	for (int m=0; m<3; m++) {
		for (int n=0; n<3; n++) {
			matriz[m][n] = rand() %20 + 1;
		}
	}
	
	printf("\nMatriz:\n");
	
	for (int m=0; m<3; m++) {
		for (int n=0; n<3; n++) {
			printf ("%d ", matriz[m][n]);
		}
		printf("\n");
	}
	
	printf("\nMatriz triangular:\n");
	
	for (int m=0; m<3; m++) {
		for (int n=0; n<3; n++) {
		    if (m<n){
		        matriz_triangular[m][n]=0;
		    }
		    else{
		        matriz_triangular[m][n]=matriz[m][n];
		    }
			printf ("%d ", matriz_triangular[m][n]);
		}
		printf("\n");
	}
	
	
	return 0;
}