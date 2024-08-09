/* ler 10 numeros e armazenar em vetor v. Crie 2 novos vetores v1 e v2, v1 vai armazenar os valores 
ímpares e v2 os pares, os novos vetores terao no max 10 elementos, no fim imprimir apenas os usados*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetorv [10] = {0};
    int vetorv1 [10] = {0};
    int vetorv2 [10] = {0};
    int contpar=0, contimpar=0;
    int tamanho= 10;
    int j;
    
    printf("Informe 10 valores\n");
    
    for (int i=0; i<tamanho; i++)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetorv[i]);
    }
    
    j = 0;
    for (int i=0; i<tamanho; i++)
    {
        if (vetorv[i]%2 == 0) 
        {
            vetorv2[j] = vetorv[i]; 
            contpar = contpar+1;
            j=j+1;
        }
    }
    
    j = 0;
    for (int i=0; i<tamanho; i++)
    {
        if (vetorv[i]%2 != 0) 
        {
            vetorv1[j] = vetorv[i]; 
            contimpar=contimpar+1;
            j=j+1;
        }
    }
    
    printf ("\nVetor V2: ");
    for (int j=0; j<contpar; j++)
    {
        printf ("%d ", vetorv2[j]);
    }
    
    printf ("\nVetor V1: ");
    for (int j=0; j<contimpar; j++)
    {
        printf ("%d ", vetorv1[j]);
    }
    
    return 0;
}