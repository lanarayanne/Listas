/* 26.  faça um programa que calcule o desvio pdrão de um vetor v, com n=10 numeros ́
em que m é a média do vetor*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float vetor [3] = {0};
    float tamanho= 10, soma=0, dif=0, quaddif=0, somaquaddif=0, media=0, desvpad=0;
    
    printf("Informe 10 valores\n");
    
    for (int i=0; i<tamanho; i++)
    {
        printf ("%d)", i+1);
        scanf ("%f", &vetor[i]);
        soma = soma + vetor [i];
    }
    
    media= soma/tamanho;
    
    for (int i=0; i<tamanho; i++)
    {
        dif = vetor[i]-media;
        quaddif = dif*dif;
        somaquaddif = somaquaddif + quaddif;
    }
    
    desvpad = sqrt(somaquaddif/tamanho);
    
    printf ("\nDesvio padrão = %.2f", desvpad);
    return 0;
}