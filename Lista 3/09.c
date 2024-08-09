/*Faca um programa que leia um numero inteiro N e depois imprima os N primeiros numeros naturais impares.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, cont=0, cont2=0;
    
    printf (" Informe a quantidade de numeros impares: ");
    scanf ("%d", &num);
    
    while (cont2 < num)
    {
            if (cont%2 !=0) 
            {
                cont2 = cont2+1;
                printf ("%d\n", cont);
            }
        cont = cont + 1;   
    }

return 0;
}