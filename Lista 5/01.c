/**
1. Faca um programa que entao leia uma string e a imprima
**/

#include <stdio.h>


int main()
{
    char string [200];
    printf("Digite uma frase:\n");
    scanf("%200[^\n]", string);
    
    printf ("\n%s", string);
    return 0;
}