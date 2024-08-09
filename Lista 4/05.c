/* Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vetor [10] = {0};
    int cont=0;
    
    printf ("Insira 10 valores: \n");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetor [i]);
        if (vetor[i]%2 == 0) {cont = cont + 1;}
    }
    
    printf ("Contem %d valores pares", cont);
    
return 0;
}