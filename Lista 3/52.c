/*Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
de um banco e retorne quantas notas de cada valor serao necessarias para atender ao
saque com a menor quantidade de notas possıvel. Serao utilizadas notas de 100, 50,
20, 10, 5, 2 e 1 real.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int valor;
    int cont100 = 0, cont50 = 0, cont20 = 0, cont10 = 0, cont5 = 0, cont2 = 0, cont1 = 0;
    
    printf ("Informe o valor: ");
    scanf ("%d", &valor);
    
    while (valor>=100)
    {
        cont100 = cont100 + 1;
        valor = valor - 100;
    }
    
    while (valor>=50)
    {
        cont50 = cont50 + 1;
        valor = valor - 50;
    }
    
    while (valor>=20)
    {
        cont20 = cont20 + 1;
        valor = valor - 20;
    }
    
    while (valor>=10)
    {
        cont10 = cont10 + 1;
        valor = valor - 10;
    }
    
    while (valor>=5)
    {
        cont5 = cont5 + 1;
        valor = valor - 5;
    }
    
    while (valor>=1)
    {
        cont1 = cont1 + 1;
        valor = valor - 1;
    }
    
    printf ("\nQuant de 100 = %d", cont100);
    printf ("\nQuant de 50 = %d", cont50);
    printf ("\nQuant de 20 = %d", cont20);
    printf ("\nQuant de 10 = %d", cont10);
    printf ("\nQuant de 5 = %d", cont5);
    printf ("\nQuant de 2 = %d", cont2);
    printf ("\nQuant de 1 = %d", cont1);
    
}