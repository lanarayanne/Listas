/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posicao onde se encontram o maior e o menor valor*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  vetor[5] = {0};
    int i = 0, maior, menor, pmaior, pmenor;
    
    printf ("Informe 5 numeros:\n");
    printf ("%d) ", i+1);
    scanf ("%d", &vetor[i]);
    maior = vetor [i];
    menor = vetor [i];
    pmaior = i+1;
    pmenor = i+1;
    
    for (i=1; i<5; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetor[i]);
        if (vetor[i]>maior) {maior = vetor[i]; pmaior = i+1;}
        if (vetor[i]<menor) {menor = vetor[i]; pmenor = i+1;}
    }
    
    printf ("\nPosicao do maior = %d", pmaior);
    printf ("\nPosicao do menor = %d", pmenor);
    
    return 0;
}