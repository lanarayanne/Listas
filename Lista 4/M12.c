/*Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.́*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int matriz_transposta[3][3] = {0};
	int matriz[3][3]= {0};
	int soma =0;
	int cont_m=0;
	int cont_n=2;
	
	printf("Preencha a matriz: ");

	for (int m=0; m<3; m++) {
		for (int n=0; n<3; n++) {
			scanf ("%d", &matriz[m][n]);
		}
	}
	
	printf("\nMatriz:\n");
	
	for (int m=0; m<3; m++) {
		for (int n=0; n<3; n++) {
			printf ("%d ", matriz[m][n]);
		}
		printf("\n");
	}
	
	printf("\nMatriz transposta:\n");
	
	for (int m=0; m<3; m++) {
		for (int n=0; n<3; n++) {
			matriz_transposta[m][n]=matriz[n][m];
		}
	}
	
	for (int m=0; m<3; m++) {
		for (int n=0; n<3; n++) {
			printf ("%d ", matriz_transposta[m][n]);
		}
		printf("\n");
	}
	
	
	return 0;
}