/*Faca um programa que determine o mostre os cinco primeiros multiplos de 3,
considerando numeros maiores que 0*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num = 1, cont = 1;
    
    while (num > 0 && cont <=5)
    {
        if (num%3 == 0) 
        {   
            printf ("\n%d", num);
            cont = cont + 1;
            num = num + 1;
        }
        else {num++;}
    }
    
return 0;
}