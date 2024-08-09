/*Fac¸a um programa que possua um vetor denominado A que armazene 6 numeros inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posições 
    A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0]+A[1]+A[5];
    
    printf ("A soma de %d + %d + %d = %d", A[0], A[1], A[5], soma);
    
    A [3] = 100;
    
    printf ("\n");
    
    for (int i= 0; i<6; i++)
    {
        printf ("\n%d", A[i]);
    }
    
    return 0;
}