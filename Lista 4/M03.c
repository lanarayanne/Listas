/*Fac ̧a um programa que preenche uma matriz com o produto do valor da linha e da coluna
de cada elemento. Em seguida, imprima na tela a matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5]={0};
    
    for (int m=0;m<5;m++){
        for (int n=0;n<5;n++){
            matriz[m][n]=m*n;
            printf ("%d ", matriz[m][n]);
        }
        printf("\n");
    }

    return 0;
}