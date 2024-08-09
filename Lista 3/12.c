/*Faca um programa que leia um numero inteiro positivo N e imprima todos os numeros naturais de 0 ate N em ordem decrescente*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0, num, cont2;
    
    printf ("Insira um numero: ");
    scanf ("%d", &num);
    
    cont2=num;
    
    while (cont <= num)
    {
        printf ("%d\n", cont2);
        cont2 = cont2 - 1;
        cont = cont + 1;
    }
    
return 0;
}