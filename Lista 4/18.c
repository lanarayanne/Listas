/*Fac¸a um programa que leia um vetor de 10 numeros. Leia um numero x. Conte os
multiplos de um numero inteiro x num vetor e mostre-os na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  vetor[10] = {0};
    int num;
    
    printf ("Informe 10 valores:\n");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetor[i]);
    }
    
    printf ("Informe um numero inteiro: ");
    scanf ("%d", &num);
    
    for (int i=0; i<10; i++)
    {
        if (vetor[i]%num == 0) { printf ("%d ", vetor[i]);}
    }
    
    printf ("Sao multiplos de %d", num);
    return 0;
}