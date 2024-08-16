/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac ̧ao (linha e a coluna) do  ̃
maior valor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4]={0};
    int maior;
    int localizador_linha, localizador_coluna;
    
    printf("Preencha a matriz 4x4:\n");
    
    for (int m=0;m<4;m++){
        for (int n=0;n<4;n++){
            scanf("%d", &matriz[m][n]);
            
            if (m==0 && n==0){
                maior = matriz[m][n];
            }
            else {
                if (matriz[m][n]>maior){
                    maior = matriz[m][n];
                    localizador_linha = m;
                    localizador_coluna = n;
                }
            }
            
        }
    }
    
    for (int m=0;m<4;m++){
        for (int n=0;n<4;n++){
            printf ("%d ", matriz[m][n]);
        }
        printf("\n");
    }
        
    printf("\nMaior numero:%d\nLinha: %d\nColuna: %d", maior, localizador_linha, localizador_coluna);

    return 0;
}
