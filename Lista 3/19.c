/*Escreva um algoritmo que leia um numero inteiro entre 100 e 999 e imprima na saida cada um dos algarismos que compoem o numero*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0; // contagem dos ciclos
    int num, dig, rest, divi = 100;
    
    printf ("Insira um numero de 3 dígitos: ");
    scanf ("%d", &num);
    
    do 
    {
        dig = num/divi;
        rest = num%divi;
        printf ("%d\n", dig);
        num = rest;
        divi = divi/10;
    } while (rest != 0);

return 0;
}