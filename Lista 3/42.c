/* Fac¸a um programa que leia um conjunto nao determinado de valores, um de cada vez, e ˜
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
a entrada de dados com um valor negativo ou zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float num, total, quad, cubo, raiz;
    
    printf ("Digite um valor (Encerre com 0 ou um numero negativo): ");
    scanf ("%f", &num);
    
    while (num > 0)
    {
        quad = num*num;
        cubo = num*num*num;
        raiz = sqrt (num);
        
        printf ("Quadrado = %.2f", quad);
        printf ("\nCubo = %.2f", cubo);
        printf ("\nRaiz Quadrada = %.2f", raiz);
        
        printf ("\n\nDigite um valor: ");
    scanf ("%f", &num);
    
    }
    printf ("\n\nPrograma Encerrado");

return 0;
}