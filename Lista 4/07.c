/* Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posicão que ele se encontra.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vetor [10] = {0};
    int i=0, posicao=0;

    printf ("Insira 10 valores: \n");
    printf ("%d)", i+1);
    scanf ("%d", &vetor [0]);
    
    int maior = vetor[0];
    
    for (int i=1; i<10; i++)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetor [i]);
        if (vetor[i] > maior) {maior = vetor[i]; posicao = i + 1;}
    }
    
    printf ("\nMaior: %d", maior );
    printf ("\nPosição: %d", posicao);
    
return 0;
}