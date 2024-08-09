/* Fac ̧a um programa que leia um vetor de 15 posic ̧oes e o compacte, ou seja, elimine as  ̃
posic ̧oes com valor zero. Para isso, todos os elementos  ̃ a frente do valor zero, devem ser `
movidos uma posic ̧ao para tr  ̃ as no vetor.  ́ */

#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int vetor [15]= {0};
    int num, tamanho=15, cont_zero=0;
    
    printf("Preencha o vetor com 15 valores\n");
    for (int i=0; i<15; i++){
        printf ("%d)", i+1);
        scanf ("%d", &num);
    }
    
    for (int i=0; i<tamanho; i++){
        if (vetor[i] == 0){
            cont_zero ++;
            for (int j=i; j<tamanho; j++){
                vetor[j] = vetor[j+1];    
            }
            tamanho--;
        }
    }
    
    for (int i=0; i<(tamanho); i++){
        printf ("%d ", vetor[i]);
    }
    
    return 0;
}