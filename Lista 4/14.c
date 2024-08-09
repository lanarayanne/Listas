/*Faca um programa que leia um vetor de 10 posicoes e verifique se existem valores iguais
e os escreva na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  vetor[10] = {0};
    
    printf ("Informe 10 numeros:\n");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetor[i]);
    }
    
    for (int i=0; i<10; i++)
    {
        for (int j=i+1; j<10; j++)
        {
            if (vetor [i] == vetor[j]) {printf ("%d ", vetor[i]); break;} // quando encontrar pelo menos um valor repetido - PARA
        }
    }
    
    return 0;
}