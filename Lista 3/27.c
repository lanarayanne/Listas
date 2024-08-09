/*Em Matematica, o numero harmonico designado por H(n) define-se como sendo a soma da serie harmonica:
H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Faca um programa que leia um valor n inteiro e positivo e apresente o valor de H(n)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1;
    float num, numh= 0;
    
    printf ("Informe um numero: ");
    scanf ("%f", &num);
    
    
    while (cont <= num)
    {
        numh = numh + (1.0/cont);
        cont = cont  + 1 ;
    }
    
    printf ("\nNumero Harmonico H(%.f) = %.2f", num, numh);
   
    
return 0;
}
s