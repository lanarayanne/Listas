/* Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posic¸ao˜
das matrizes lidas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matriz_a[4][4]= {0};
	int matriz_b[4][4]= {0};
	int matriz_maior[4][4]= {0};
	
	printf ("Preencha a primeira matriz 4x4: ");

	for (int m=0; m<4; m++) {
		for (int n=0; n<4; n++) {
			scanf("%d", &matriz_a[m][n]);
		}
	}
	
	printf ("Preencha a segunda matriz 4x4: ");

	for (int m=0; m<4; m++) {
		for (int n=0; n<4; n++) {
			scanf("%d", &matriz_b[m][n]);
		}
	}
	
	for (int m=0; m<4; m++) {
		for (int n=0; n<4; n++) {
		    if (matriz_a[m][n]>=matriz_b[m][n]){
		        matriz_maior[m][n]=matriz_a[m][n];
		    }
		    else{
		        matriz_maior[m][n]=matriz_b[m][n];
		    }
		}
	}
	
	printf("\nMatriz dos maiores valores de cada posicao:\n");
	
	for (int m=0; m<4; m++) {
		for (int n=0; n<4; n++) {
		    printf("%d ", matriz_maior[m][n]);
		}
		printf("\n");
	}


	return 0;
}