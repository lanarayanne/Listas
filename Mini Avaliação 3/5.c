/*Escreva um programa que leia cinco números inteiros e então determine e imprima o maior e o menor inteiro do grupo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, num5;
    printf("Insira o primeiro numero: ");
    scanf ("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf ("%d", &num2);
    printf("Insira o terceiro numero: ");
    scanf ("%d", &num3);
    printf("Insira o quarto numero: ");
    scanf ("%d", &num4);
    printf("Insira o quinto numero: ");
    scanf ("%d", &num5);
    
        printf ("O maior numero e: " );
    if (num1>num2 && num1>num3 && num1>num4 && num1>num5) 
    {printf ("%d", num1);}
    if (num2>num1 && num2>num3 && num2>num4 && num2>num5)
    {printf ("%d", num2);}
    if (num3>num1 && num3>num2 && num3>num4 && num3>num5)
    {printf ("%d", num3);}
    if (num4>num1 && num4>num2 && num4>num3 && num4>num5)
    {printf ("%d", num4);}
    if (num5>num1 && num5>num2 && num5>num3 && num5>num4)
    {printf ("%d", num5);}
    
        printf ("\nO menor numero e: " );
    if (num1<num2 && num1<num3 && num1<num4 && num1<num5) 
    {printf ("%d", num1);}
    if (num2<num1 && num2<num3 && num2<num4 && num2<num5)
    {printf ("%d", num2);}
    if (num3<num1 && num3<num2 && num3<num4 && num3<num5)
    {printf ("%d", num3);}
    if (num4<num1 && num4<num2 && num4<num3 && num4<num5)
    {printf ("%d", num4);}
    if (num5<num1 && num5<num2 && num5<num3 && num5<num4)
    {printf ("%d", num5);}
    
    return 0;
}
