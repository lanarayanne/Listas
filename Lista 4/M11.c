/*Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao na diago-  ̃
nal secundaria.  ́*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

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
	
	for (int m=0; m<3; m++) {
		for (int n=0; n<3; n++) {
			if (cont_m==m && cont_n==n){
		    soma = soma + matriz[cont_m][cont_n];
		    cont_m++;
		    cont_n--;
		    }
		}
	}
	
	printf("Soma diagonal secundaria = %d", soma);

	return 0;
}