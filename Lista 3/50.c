/* Chico tem 1.50 metro e cresce 2 centimetros por ano, enquanto Ze tem 1.10 metros e
cresce 3 centimetros por ano. Escreva um programa que calcule e imprima quantos anos
serao necessarios para que Ze seja maior que Chico. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chico = 1.50, ze=1.10;
    int ano=1;
    
    printf ("\nAltura de Chico: %.2f m", chico);
    printf ("\nAltura de Ze: %.2f m", ze);
    
    while (ze < chico)
    {
        ze = ze + 0.03;
        chico = chico + 0.02;
        printf ("\n\nAno = %d", ano);
        printf ("\nAltura de Chico: %.2f m", chico);
        printf ("\nAltura de Ze: %.2f m", ze);
        ano = ano + 1;
    }
    
    printf ("\n\nApos %d anos, Ze sera maior que Chico", ano-1);

    return 0;
}