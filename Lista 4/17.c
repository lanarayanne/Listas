
/*Leia um vetor de 10 posicoes e atribua valor 0 para todos os elementos que possuırem
valores negativos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  vetor[10] = {0};
    
    printf ("Informe 10 valores:\n");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%f", &vetor[i]);
        if (vetor[i]<0) {vetor[i]=0;}
    }
    
        for (int i=0; i<10; i++)
        {
            printf ("%.f ",vetor[i]);
        }
       
    return 0;
}
