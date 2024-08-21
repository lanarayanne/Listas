/*23. Fac¸a um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A2*/

#include <stdio.h>
#include<math.h>

int main(){
    int matriz_a[3][3]={0};
    int matriz_b[3][3]={0};
    int matriz_c[3][3]={0};
    
    printf("Preencha a matriz A 3x3:\n");
    
    for (int i=0; i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d", &matriz_a[i][j]);
        }
    }
    
    printf("Matriz B:\n");
    
    for (int i=0; i<3;i++){
        for (int j=0;j<3;j++){
            matriz_b[i][j]=pow(matriz_a[i][j],2);
            printf("%d " , matriz_b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
}