/*Fac¸a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a
quantidade de numeros negativos e a soma dos numeros positivos desse vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[10] = {0};
    float soma = 0;
    int cont = 0;
    
    printf ("Informe 10 numeros:\n");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%f", &vetor[i]);
        if (vetor[i]>0) {soma = soma+vetor[i];}
        if (vetor[i]<0) {cont = cont +1;}
    }
    
    printf ("\nSoma dos numeros positivos = %.2f", soma);
    printf ("\nQuantidade de numeros negativos = %d", cont);
    
    return 0;
}