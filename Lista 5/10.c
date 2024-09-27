/**
    10. Faca um programa que receba uma palavra e a imprima de tr´ as-para-frente
 
**/

#include <stdio.h>

int main()
{
    char palavra [50];
    int i=0;
    int tamanho=0;
    
    printf("Palavra: ");
    scanf("%50[^\n]", palavra);
    
    while (palavra[i] != '\0'){
        tamanho++;
        i++;
    }
    
    i= tamanho;
    
    while (i>=0){
        printf("%c", palavra[i]);
        i--;
    }
    
    
    return 0;
}