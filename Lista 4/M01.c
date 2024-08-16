/*40) Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    
    int matriz [4][4];
    int cont_10=0;
    
    printf("Preencha a matriz 4x4 (por linha)\n");
    
    for (int m=0;m<4;m++){
        for(int n=0;n<4;n++){
            scanf("%d", &matriz[m][n]);
            if (matriz[m][n]>10){
                cont_10++;
            }
        }
    }
    
    printf("\nTotal de numeros maiores que 10: %d", cont_10);
    
    
    return 0;
}
