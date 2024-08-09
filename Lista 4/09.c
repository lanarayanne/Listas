/*Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores
lidos na ordem inversa.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vetor [6] = {0};
    int i=0;
    printf ("Insira 6 valores PARES: \n");
    
    while (i<6)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetor [i]);
        if (vetor[i]%2==0) {i=i+1;}
    }
    
    for (int i=5; i>=0; i--)
    {
        printf ("%d ", vetor[i]);
    }
    
return 0;
}