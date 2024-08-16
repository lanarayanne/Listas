/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5]={0};
    
    for (int m=0;m<5;m++){
        for (int n=0;n<5;n++){
            if (m==n){
                matriz[m][n] = 1;
            }
            else {
                matriz[m][n] = 0;
            }
            printf ("%d ", matriz[m][n]);
        }
        printf("\n");
    }
    
    
    return 0;
}
