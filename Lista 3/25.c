/*Faca um programa que some todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1000, cont=1, soma=0;
  
    while (cont < num)
    {
        if (cont%3 == 0 || cont%5 == 0) {printf ("\n%d", cont); soma = soma + cont;}
        cont = cont + 1;
    }
    printf ("\nSoma de todos numeros naturais menores que %d multiplos de 3 ou 5 = %d  ", num, soma);
return 0;
}
