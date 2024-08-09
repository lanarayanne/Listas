/*Faca um algoritmo que leia um numero positivo e imprima seus divisores */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=1;
  
    printf("Informe um numero: ");
    scanf ("%d", &num);

    while (cont <= num)
    {
       if (num%cont == 0) {printf ("\n%d", cont);}
        cont = cont + 1;
    }

return 0;
}