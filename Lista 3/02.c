/*Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira
vez deve usar a estrutura de repeticao for, a segunda while, e a terceira do while.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num = 1, cont = 1;
    
    printf ("for\n");
    for (num=1; num <=100; num++) {printf ("%d, ", num);}
    printf ("\n\n");
    
    num = 1;
    printf ("while\n");
    while (num <=100)
    {
        printf ("%d, ", num);
        num = num + 1;
    }
    printf ("\n\n");
    
    num = 1;
    printf ("do while\n");
    do
    {
        printf ("%d, ", num);
        num = num + 1;
    }while (num <=100);
    
return 0;
}