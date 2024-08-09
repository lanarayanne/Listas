/*Leia um numero positivo do usuario, entao, calcule e imprima a sequencia Fibonacci ate
o primeiro numero superior ao numero lido. Exemplo: se o usuario informou o numero
30, a sequencia a ser impressa sera 0 1 1 2 3 5 8 13 21 34.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, cont1=0, cont2=1, cont3;
    
    printf("Informe um numero inteiro positivo: ");
    scanf ("%d", &num);
    
    printf ("%d %d ", cont1, cont2);
    
    while (cont2 <= num)
    {
        cont3 = cont1 + cont2;
        printf ("%d ", cont3);
        cont1 = cont2;
        cont2 = cont3;
    } 
    
    return 0;
}