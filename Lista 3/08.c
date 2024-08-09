/*Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor lido. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, maior, menor, cont=1;

    while (cont <=10)
    {
        printf (" %d) Valor: ", cont);
        scanf ("%d", &num);
            if (num > maior) {maior = num;}
            if (num < menor) {menor = num;}
        cont = cont + 1;
    }
    
    printf ("Maior: %d\nMenor: %d", maior, menor);

return 0;
}