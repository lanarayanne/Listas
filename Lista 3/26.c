/*Faca um algoritmo que encontre o primeiro multiplo de 11, 13 ou 17 apos um numero dado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=0;
    
    printf ("Informe um numero: ");
    scanf ("%d", &num);
    
    cont = num;
  
    while (cont%11 != 0 && cont%13 != 0 && cont%17 != 0)
    {
        cont =  cont + 1;
    }
    
    if (cont%11 == 0) {printf ("\n Primeiro multiplo de 11, 13 ou 17 depois de %d = %d (multiplo de 11)", num, cont);}
    if (cont%13 == 0) {printf ("\n Primeiro multiplo de 11, 13 ou 17 depois de %d = %d (multiplo de 13)", num, cont);}
    if (cont%17 == 0) {printf ("\n Primeiro multiplo de 11, 13 ou 17 depois de %d = %d (multiplo de 17)", num, cont);}
    
return 0;
}