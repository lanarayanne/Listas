/*2. Fac¸a um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A ∗ B.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    
    int matriz_a[3][3]={0};
    int matriz_b[3][3]={0};
    int matriz_c[3][3]={0};
    
    printf("Preencha a matriz A 3x3:\n");
    
    for (int i=0; i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d", &matriz_a[i][j]);
        }
    }
    
    printf("Preencha a matriz B 3x3:\n");
    
    for (int i=0; i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d", &matriz_b[i][j]);
        }
    }
    
    printf("Matriz C:\n");
    
    for (int i=0; i<3;i++){
        for (int j=0;j<3;j++){
            matriz_c[i][j]=matriz_a[i][j] * matriz_b[i][j];
            printf("%d ", matriz_c[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}