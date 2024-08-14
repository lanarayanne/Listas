/*Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 >
· · · > A11, ou seja, esta ordenado em ordem crescente at  ́ e o sexto elemento, e a partir  ́
desse elemento esta ordenado em ordem decrescente. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float vetor[11] ={0};
    float vetor_copia[11] = {0};
    float vetor_ordenado[10] = {0};
    float min = INFINITY;
    float max = -INFINITY;
    int localizador;
    
    printf ("Informe os valores do Vetor:\n");
    
    for (int i=0; i<11; i++){
        printf ("%d) ", i+1);
        scanf("%f", &vetor[i]);
    }
    
    for(int i=0; i<11;i++){
        vetor_copia[i] = vetor[i];
    }
    
    for (int i=0; i<6; i++){
        for (int j=0; j<11; j++){
            if (vetor_copia[j]<min) {
                min = vetor_copia[j];
                localizador = j;
            }
        }
        vetor_copia[localizador] = INFINITY;
        vetor_ordenado[i] = min;
        min = INFINITY;
    }
    
    for(int i=0; i<11;i++){
        vetor_copia[i] = vetor[i];
    }
    
    for (int i=6; i<11; i++){
        for (int j=0; j<11; j++){
            if (vetor_copia[j]>max) {
                max = vetor_copia[j];
                localizador = j;
            }
        }
        vetor_copia[localizador] = -INFINITY;
        vetor_ordenado[i] = max;
        max = -INFINITY;
    }
    
    
    for (int i=0; i<11; i++){
        printf ("%.2f ", vetor_ordenado[i]);    
    }
    
    
    return 0;
}