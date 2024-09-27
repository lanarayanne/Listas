/**
    8. Escreva um programa que substitui as ocorrencias de um caractere 0 em uma string por
 outro caractere 1.
 
**/

#include <stdio.h>

int main()
{
    char string [1000];
    int i=0;
    
    printf("Preencha a String com numeros: ");
    scanf("%1000[^\n]", string);
    
    while (string[i] != '\0'){
        if (string[i] == '0'){
            string[i] = '1';
        }
        i++;
    }
    
    i=0;
    
    while (string[i] != '\0'){
        printf ("%c", string[i]);
        i++;
    }
    
    return 0;
}