/* Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas posições 
pares os valores do pimeiro e nas posições ímpares os valores do segundo*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA [10] = {0}; 
    int vetorB [10] = {0};
    
    printf ("Informe os valores de A:\n");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetorA[i]);
    }
    
    printf ("Informe os valores de B:\n");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetorB[i]);
    }
    
    int vetorC [20]={0};
    int a = 0;
    int b = 0;
    
    for (int j=0; j<=20; j++)
    {
        if (j%2==0) {vetorC[j] = vetorA[a]; a=a+1;}
        else {vetorC[j] = vetorB[b]; b=b+1;}
    }
    
    printf ("\nVetor C\n");
    
    for (int j=0; j<=20; j++)
    {
        printf ("%d ", vetorC [j]);
    }
    
    return 0;
}