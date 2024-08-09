/*Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é múltiplo do segundo. (Dica: Use o operador resto.)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Insira o primeiro numero: ");
    scanf ("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf ("%d", &num2);
    int resto = num1%num2;
    
    if (resto==0) 
    {printf ("%d e multiplo de %d", num1, num2);}
    if (resto!=0)
    {printf ("%d nao e multiplo de %d", num1, num2);}
    
    return 0;
}
