/* 30- programa que leia 2 vetores de 10 numeros e criar um vetor intersecção - que contem valores 
presentes em amobs, mas não contenha valores repetidos*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetor1 [10] = {0};
    int vetor2 [10] = {0};
    int vetorIntersec [10] = {0};
    int tamanho = 10;
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
        for (int j=0; j<tamanho; j++)
        {
            cont=0;
            for (int k=0; k<tamanho; k++)
                {
                    if (vetor1[i]!=vetorIntersec[k]) {cont=cont+1;}
                }
                if (cont==tamanho)
                    {
                        if (vetor1[i]==vetor2[j])
                        {
                            vetorIntersec[l] = vetor1[i];
                            cont2=cont2+1;
                            l=l+1;
                        }
                    }
        }
    }
    
    printf ("\nVetor intersecção: ");
    
    for (int i=0; i<cont2; i++)
    {
        printf ("%d ", vetorIntersec[i]);
    }
    
    return 0;
}