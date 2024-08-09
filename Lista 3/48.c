/* Faca um programa que some os termos de valor par da sequencia de Fibonacci, cujos
valores nao ultrapassem quatro milhoes. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int fim = 4000000, cont1=0, cont2=1, cont3, soma=0;
    
    printf ("%d %d ", cont1, cont2);
    
    while (cont3 < fim)
    {
        cont3 = cont1 + cont2;
        if (cont3 < fim) 
        {
            printf ("%d ", cont3);
            if (cont3%2 == 0) {soma=soma+cont3;}
        }
        cont1 = cont2;
        cont2 = cont3;
    } 
    printf ("\nSoma dos numeros pares da sequencia de Fibonacci menores que 4.000.000 = %d", soma);
    return 0;
}