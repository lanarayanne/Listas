/*Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele- ´
mentos repetidos*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  vetor[20] = {0};
    int cont, i=0, j=0;
    
    printf ("Informe 20 numeros:\n");
    
    for (int i=0; i<20; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetor[i]);
    }
    
    printf ("\nValores não repetidos :");
    
    for (i = 0; i<20; i++)
    {
        cont=0;
        for (j=0; j<20;j++)
        {
            if (vetor[i] == vetor[j]) {cont = cont + 1;}
        }
        if (cont==1) {printf ("%d ", vetor[i]);}
    }
    
    return 0;
}