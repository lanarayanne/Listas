/*Faca um programa que leia um numero inteiro positivo N e imprima todos os numeros naturais de 0 ate N em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0, num;
    
    printf ("Insira um numero: ");
    scanf ("%d", &num);
    
    while (cont <= num)
    {
        printf ("%d\n", cont);
        cont = cont + 1;
    }
    
return 0;
}