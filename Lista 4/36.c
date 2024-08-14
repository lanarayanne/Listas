/*Leia um vetor com 10 numeros reais, ordene os elementos deste vetor, e no final escreva  ́
os elementos do vetor ordenado.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float vetor[10] ={0};
    float vetor_ordenado[10] = {0};
    float min = INFINITY;
    int localizador;
    
    printf ("Informe os valores do Vetor:\n");
    
    for (int i=0; i<10; i++){
        printf ("%d) ", i+1);
        scanf("%f", &vetor[i]);
    }
    
    min = vetor[0];
    
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (vetor[j]<min) {
                min = vetor[j];
                localizador = j;
            }
        }
        vetor[localizador] = INFINITY;
        vetor_ordenado[i] = min;
        min = INFINITY;
    }
    
    for (int i=0; i<10; i++){
        printf ("%.2f ", vetor_ordenado[i]);    
    }
    
    
    return 0;
}