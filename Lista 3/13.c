/*Fac¸a um programa que leia um numero inteiro positivo par N e imprima todos os numeros 
pares de 0 ate N em ordem crescente*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0, num;
    
    printf ("Insira um numero par: ");
    scanf ("%d", &num);
    
    if (num%2 == 0)
    {

        while (cont <= num)
        {
            if (cont%2 == 0) 
            {
                printf ("%d\n", cont);
            }
        cont = cont + 1;
        }
    }
    else {printf ("O numero inserido nao e par");}
    
return 0;
}