/*Fac¸a um programa que leia um numero inteiro positivo impar N e imprima todos os
numeros impares de 1 ate N em ordem decrescente*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0; // contagem dos ciclos
    int num; // Numero que sera lido
    int cont2; // Valor que vai aparecer na contagem
    
    printf ("Insira um numero impar: ");
    scanf ("%d", &num);
    
    cont2 = num;
    
    if (num%2 != 0)
    {

        while (cont <= num)
        {
            if (cont%2 == 0) 
            {
                printf ("%d\n", cont2);
                cont2= cont2 - 2; // proximo numero impar
            }
        cont = cont + 1;
        }
    } else {printf ("O numero inserido nao e impar");}
    
return 0;
}