/*Faca um programa que peca ao usuario para digitar 10 valores e some-os. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int soma= 0, num, cont = 1;

    while (cont <=10)
    {
        printf (" %d) Valor: ", cont);
        scanf ("%d", &num);
        soma= soma + num;
        cont = cont + 1;
    }
    
    printf ("Soma: %d", soma);

return 0;
}