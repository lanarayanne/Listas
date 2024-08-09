/* Faca um programa que calcule o terno pitagorico a, b, c, para o qual a+b+c = 1000. Um
terno pitagorico e um conjunto de tres numeros naturais, a, b, c, para a qual,
a^2 + b^2 = c^2 --> c = raiz (a2 + b)
ex 3^2 + 4^2 = 5^2 */ //= 12

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
    int a, b, c;
    
    for (a=1; a<=1000; a++)
    {
        for (b=1; b<=1000; b++)
        {
            for (c=1; c<=1000;c++)
            {
                if (a+b+c==1000 && a*a + b*b == c*c) {printf ("\na=%d, b=%d, c=%d", a,b,c);}
            }
        }
    }

return 0;
}