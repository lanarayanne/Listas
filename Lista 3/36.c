/* . Faca um programa que calcule a diferenca entre a soma dos quadrados dos primeiros
100 numeros naturais e o quadrado da soma. Ex: A soma dos quadrados dos dez pri- ´
meiros numeros naturais ´ e, ´
1^2 + 2^2 + ... + 10^2 = 385
O quadrado da soma dos dez primeiros numeros naturais ´ e, ´
(1 + 2 + ... + 10)^2 = 552 = 3025
A diferenc¸a entre a soma dos quadrados dos dez primeiros numeros naturais e o qua- ´
drado da soma e 3025-385 = 2640. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1, num = 1, soma=0, soma2=0, quad, sub;
    
    while (cont <=100)
    {
        soma = soma + num;
        num = num + 1;
        cont = cont + 1;
    }
    
    quad = soma * soma;
    printf ("%d - ", quad);
    
    num = 1, cont = 1;
    
    while (cont <= 100)
    {
        num = cont*cont;
        soma2 = soma2 + num;
        cont = cont + 1;
    }
    printf ("%d", soma2);
    sub = quad - soma2;
    printf (" = %d", sub);
    
return 0;
}