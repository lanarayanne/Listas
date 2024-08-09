/*Fac¸a um programa que leia um numero inteiro positivo par N e imprima todos os numeros pares de 0 ate N em ordem decrescente*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0; // contagem dos ciclos
    int num; // Numero que sera lido
    int cont2; // Começa sendo o numero e a cada ciclo que cont divide por 2, ele diminui 2 valores.
    
    printf ("Insira um numero par: ");
    scanf ("%d", &num);
    
    cont2 = num;
    
    if (num%2 == 0)
    {

        while (cont <= num)
        {
            if (cont%2 == 0) 
            {
                printf ("%d\n", cont2);
                cont2= cont2 - 2; // o numero par anterior
            }
        cont = cont + 1;
        }
    } {printf ("O numero inserido nao e par");}
    
return 0;
}