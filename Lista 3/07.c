/*. Fac¸a um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua media. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int soma= 0, num, cont = 1, cont2 = 0;
    float media;

    while (cont <=10)
    {
        printf (" %d) Valor: ", cont);
        scanf ("%d", &num);
            if (num >= 0) {soma= soma + num; cont2= cont2 + 1;}
            else {soma = soma + 0;}
            cont = cont + 1;
        
    }
    
    media = soma/cont2;
    printf ("Media: %d / %d =  %.2f", soma, cont2, media);

return 0;
}