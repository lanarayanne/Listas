/*. Faca um programa que leia 10 inteiros e imprima sua media. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int soma= 0, num, cont = 1;
    float media;

    while (cont <=10)
    {
        printf (" %d) Valor: ", cont);
        scanf ("%d", &num);
        soma= soma + num;
        cont = cont + 1;
    }
    
    media = soma/10.0;
    printf ("Media: %d / 10 =  %.2f", soma, media);

return 0;
}