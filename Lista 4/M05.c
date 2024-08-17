/*5*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matriz[5][5]= {0};
	int X;
	int cont=0, cont_total_num=0;
	
	printf ("Preencha uma matriz 5x5: ");

	for (int m=0; m<5; m++) {
		for (int n=0; n<5; n++) {
			scanf("%d", &matriz[m][n]);
			cont_total_num++;
		}
	}

	printf("\nInforme um valor: ");
	scanf("%d", &X);

	for (int m=0; m<5; m++) {
		for (int n=0; n<5; n++) {
			printf ("%d ", matriz[m][n]);
		}
		printf("\n");
	}

	for (int m=0; m<5; m++) {
		for (int n=0; n<5; n++) {
			if (matriz[m][n]==X) {
				printf ("\nLinha: %d   Coluna: %d", m,n);
			}
			else {
				cont++;
			}
		}
	}

	if (cont==cont_total_num) {
		printf("\n%d nao encontrado!", X);
	}

	return 0;
}
