/* Elabore um programa que faca leitura de varios numeros inteiros, ate que se digite um
numero negativo. O programa tem que retornar o maior e o menor numero lido. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
    int num, maior = 0, menor;
    
    printf ("Digite um valor inteiro (< 0 para encerrar): ");
    scanf ("%d", &num);
    menor = num;
    maior = num;
    
    while (num>=0)
    {
        if (num>maior) {maior = num;}
        if (num<menor) {menor = num;}
        
        printf ("Digite um valor inteiro: ");
        scanf ("%d", &num);
    }
    
    printf ("\nMaior numero: %d", maior);
    printf ("\nMenor numero: %d", menor);

return 0;
}