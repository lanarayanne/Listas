/* Faca um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem dois valores X e Y 
quaisquer correspondentes a duas posicoes no vetor. Ao final seu programa devera escrever a soma 
dos valores encontrados nas respectivas posicoes X e Y */

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vetor [8] = {0};
    int X, Y, pX, pY, soma; //px e py são as posições reais no vetor

    printf ("Insira 8 valores: \n");
    
    for (int i=0; i<8; i++)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetor [i]);
    }
    
    printf ("\nInforme uma posição: ");
    scanf ("%d", &X);
    printf ("\nInforme uma posição: ");
    scanf ("%d", &Y);
    
    pX = X-1;
    pY = Y-1;
    soma = vetor[pX] + vetor [pY];
    
    printf ("\n %d + %d = %d", vetor[pX], vetor[pY], soma);
    
return 0;
}