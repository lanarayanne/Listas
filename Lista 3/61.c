/*Fac¸a um programa que calcule o maior numero palindromo feito a partir do produto de
dois numeros de 3 diıgitos. Ex: O maior palindromo feito a partir do produto de dois
numeros de dois digitos e 9009 = 91*99.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1=100;
    int num2=100;
    int multi;
    int dig1, dig2, dig3, dig4, dig5, dig6, rest, maior;
    
    multi = num1*num2;
    maior = multi;
    
    while (num2 <= 999)
    {
    num1 = 100;
        while (num1<=999)
        {
        multi = num1*num2;
        
            dig1 = multi/100000;
            
        if (dig1>0)
        {
            rest = multi%100000;
            dig2 = rest/10000;
            rest = rest%10000;
            dig3 = rest/1000;
            rest= rest%1000;
            dig4 = rest/100;
            rest = rest%100;
            dig5 = rest/10;
            rest = rest%10;
            dig6 = rest;
            
            if (dig1 == dig6 && dig2 == dig5 && dig3 == dig4) 
            {
                if (multi > maior) {maior = multi;}
            }
        }
        num1 = num1 + 1;
        }
    num2 = num2+1;
    }
    
    printf ("\n\nMaior palindromo formado pela multiplicacao de dois numeros de 3 digitos = %d", maior);
        
    return 0;
}