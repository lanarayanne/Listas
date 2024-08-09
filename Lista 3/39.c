/* Faca um programa que calcule a area de um triangulo, cuja base e altura sao fornecidas
pelo usuario. Esse programa nao pode permitir a entrada de dados invalidos, ou seja,
medidas menores ou iguais a 0. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
    float altura, base, area;
    
    printf ("Informe a base do triangulo: ");
    scanf ("%f", &base);
    
    printf ("Informe a altura do triangulo: ");
    scanf ("%f", &altura);
    
    while (altura>0 && base>0)
    {
        area= (base*altura)/2;
        printf ("Area do triangulo de base= %.2f e altura= %.2f = %.2f\n", base, altura, area);
        
        printf ("\nInforme a base do triangulo: ");
        scanf ("%f", &base);
        
        printf ("Informe a altura do triangulo: ");
        scanf ("%f", &altura);
        
    }
    
    if (base<=0) {printf ("Valor da base Invalido");}
    if (altura<=0) {printf ("Valor da altura Invalido");}

return 0;
}