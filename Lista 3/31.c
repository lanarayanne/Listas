/*31. Fac¸a um programa que calcule e escreva o valor de S
S = 1/1 + 3/2 + 5/3 + 7/4 ... 99/ 50 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dividendo = 1.0, divisor = 1.0, termo = 1.0;
    float divisao, soma = 0.0;
    
   
    while (termo <= 50)
    {
        divisao = dividendo/divisor;
        soma = soma + divisao;
        dividendo = dividendo + 2;
        divisor = divisor + 1;
        termo = termo + 1;
    }
printf ("S = %.2f", soma);
return 0;
}