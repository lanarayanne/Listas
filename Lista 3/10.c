/*Faca um programa que calcule e mostre a soma dos 50 primeiros numeros pares*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0, cont2=0, soma = 0;
    
    while (cont2 < 50)
    {
            if (cont%2 ==0) 
            {
                cont2 = cont2+1;
                printf ("%d\n", cont);
                soma = soma + cont;
            }
        cont = cont + 1;   
    }
    
    printf ("Soma dos 50 primeiros numeros pares = %d", soma);
    

return 0;
}