/* Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos
na ordem inversa.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vetor [6] = {0};

    printf ("Insira 6 valores: \n");
    
    for (int i=0; i<6; i++)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetor [i]);
    }
    
    for (int i=5; i>=0; i--)
    {
        printf ("%d ", vetor[i]);
    }
    
return 0;
}