/*Faca um programa que leia um numero inteiro positivo impar N e imprima todos os numeros impares de 1 ate N em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0; // contagem dos ciclos
    int num; // Numero que sera lido
    int cont2; // Começa sendo 1 e a cada ciclo que cont/2 tem resto, ele aumenta 2 valores.
    
    printf ("Insira um numero impar: ");
    scanf ("%d", &num);
    
    cont2 = 1;
    
    if (num%2 != 0)
    {

        while (cont <= num)
        {
            if (cont%2 == 0) 
            {
                printf ("%d\n", cont2);
                cont2= cont2 + 2; // proximo numero impar
            }
        cont = cont + 1;
        }
    } else {printf ("O numero inserido nao e impar");}
    
return 0;
}