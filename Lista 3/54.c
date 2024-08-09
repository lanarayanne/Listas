/*Fac¸a um programa que receba um numero inteiro maior do que 1, e verifique se o numero
fornecido e primo ou nao.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num, cont=1, cont2=0, divi;
    
    printf ("Informe um numero (inteiro, positivo): ");
    scanf ("%d", &num);
    
    while (cont <= num)
    {
        divi = num%cont;
        if (divi == 0) {cont2 = cont2+ 1;}
        cont = cont + 1;
    }
    
    if (cont2 <= 2) {printf ("\nO numero %d e primo", num);}
    if (cont2 > 2) {printf ("\nO numero %d NAO e primo", num);}
    
}