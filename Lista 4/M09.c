/*  9. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao abaixo da ˜
diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int matriz[3][3]= {0};
	int soma=0;
	
	printf("Preencha uma matriz 3x3: ");
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			scanf("%d", &matriz[i][j]);
			if (i>j){
			    soma=soma+matriz[i][j];
			}
			
		}
	}
	
	printf("\nMatriz:\n");
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
		    printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Soma dos elementos abaixo da diagonal principal: %d", soma);

	return 0;
}