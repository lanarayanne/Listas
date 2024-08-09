/* Faca um programa que receba do usuario um vetor com 10 posicoes. Em seguida devera
ser impresso o maior e o menor elemento do vetor.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vetor [10] = {0};
    int i=0;

    printf ("Insira 10 valores: \n");
    printf ("%d)", i+1);
    scanf ("%d", &vetor [0]);
    int maior = vetor[0];
    int menor = vetor[0];
    
    for (int i=1; i<10; i++)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetor [i]);
        if (vetor[i] > maior) {maior = vetor[i];}
        if (vetor[i] < menor) {menor = vetor[i];}
    }
    
    printf ("\nMaior: %d", maior );
    printf ("\nMenor: %d", menor );
    
return 0;
}