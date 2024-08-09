/*31) Fac¸a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uniao˜
entre os 2 vetores anteriores, ou seja, que contem os n ´ umeros dos dois vetores. N ´ ao˜
deve conter numeros repetidos. */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int vetor1 [10] = {0};
    int vetor2 [10] = {0};
    int vetorUniao [20] = {0};
    int tamanho = 10;
    int tamanhouniao = 20;
    int cont=0, cont2=0;
    int l=0;
    
   
    printf("Informe 10 valores para o primeiro vetor\n");
    
    for (int i=0; i<tamanho; i++)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetor1[i]);
    }
    
    printf("\nInforme 10 valores para o segundo vetor\n");
    
    for (int i=0; i<tamanho; i++)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetor2[i]);
    }
    
    for (int i=0; i<tamanho; i++)
    {
        cont=0;
        for (int k=0; k<tamanhouniao; k++)
            {
                if (vetor1[i]!=vetorUniao[k]) {cont=cont+1;}
            }
            if (cont==tamanhouniao)
                {
                    vetorUniao[l] = vetor1[i];
                    cont2=cont2+1;
                    l=l+1;
                }
    }

    for (int i=0; i<tamanho; i++)
        {
            cont=0;
            for (int k=0; k<tamanhouniao; k++)
                {
                    if (vetor2[i]!=vetorUniao[k]) {cont=cont+1;}
                }
                if (cont==tamanhouniao)
                    {
                        vetorUniao[l] = vetor2[i];
                        cont2=cont2+1;
                        l=l+1;
                    }
        }
    
    printf ("\nVetor intersecção: ");
    
    for (int i=0; i<cont2; i++)
    {
        printf ("%d ", vetorUniao[i]);
    }
    
    return 0;
}