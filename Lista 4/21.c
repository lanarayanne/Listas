/*Faça um programa que receba do usuario dois vetores, A e B, com 10 numeros inteiros cada. Crie um novo vetor denominado C calculando C = A - B. 
Mostre na tela os dados do vetor C.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA [10] = {0};
    int vetorB [10] = {0};
    int vetorC [10] = {0};
    
    printf ("Informe os valores do vetor A\n");
    printf ("Obs.: apenas inteiros\n");
    
    for (int i=0; i<10; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetorA [i]);
    }
    
    printf ("Informe os valores do vetor B\n");
    printf ("Obs.: apenas inteiros\n");
    
    for (int i=0; i<10; i++) //&- Operador unário que identifica o endereço do 1 byte da variável 
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetorB [i]);
    }
    
    printf ("Vetor C = ");
    
    for (int i=0; i<10; i++) 
    {
        vetorC [i] = vetorA [i] - vetorB [i];
        printf ("%d ", vetorC [i]);
    }
    
    return 0;
}