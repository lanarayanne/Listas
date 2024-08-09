/* vetor de 10 numeros, escrever os numeros primos do vetor e qual a posição dele*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetor [10] = {0};
    int tamanho= 10;
    
    printf("Informe 10 valores\n");
    
    for (int i=0; i<tamanho; i++)
    {
        printf ("%d)", i);
        scanf ("%d", &vetor[i]);
    }
    
    for (int i=0; i<tamanho; i++)
    {
        int cont=1;
        int contnum=0;
        
        while (cont<=vetor[i])
        {
            if (vetor[i]%cont == 0) {contnum = contnum +1;}
            cont = cont+1;
        }
        if (contnum<=2) { printf ("\nNumero primo: %d | Posição: %d", vetor[i], i);}
    }
    
}