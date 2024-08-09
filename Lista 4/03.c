/* Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vetor [10] = {0};
    int quad [10] = {0};
    
    printf ("Insira 10 valores: \n");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetor [i]);
        quad[i] = vetor[i] * vetor [i];
    }
    
    printf ("\nConjunto inserido: ");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d ", vetor[i]);
    }
    
    printf ("\nQuadrado do conjunto inserido: ");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d ", quad[i]);
    }
    
    
return 0;
}