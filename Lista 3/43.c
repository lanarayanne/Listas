/* Fac¸a um programa que leia um numero indeterminado de idades de individuos (pare
quando for informada a idade 0), e calcule a idade media desse grupo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float cont = 0, idade, soma=0, media;
    
    printf ("Digite a idade (Encerre com 0): ");
    scanf ("%f", &idade);
    
    while (idade > 0)
    {
        cont = cont + 1;
        soma = soma + idade;
        printf ("Digite a idade: ");
        scanf ("%f", &idade);
    }
    
    media = soma/cont;
    printf ("Media das idades de %.2f pessoas = %.2f", cont, media);

return 0;
}