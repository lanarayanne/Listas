/*Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula de conversão é C = P ∗ 2, 54, sendo C o comprimento em centímetros e P o comprimento em polegadas*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir o comprimento em polegadas: ");
    scanf ("%f", &a );
    double b= a*2.54;
    printf("O comprimento em centímetros eh igual a %.2f ", b );
    return 0;
}

