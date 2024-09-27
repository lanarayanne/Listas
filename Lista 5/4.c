/**
4. faca um programa que leia um nome e imprima as 4 primeiras letras do nome.
**/

#include <stdio.h>


int main()
{
    char nome [50];
    int i=0;
    int tamanho=0;
    
    printf("Digite um Nome: ");
    scanf("%50[^\n]", nome);
    
    printf("4 primeiras letras: ");
    
    while (i < 4 && nome[i] != '\0'){
        printf("%c", nome[i]);
        tamanho=tamanho+1;
        i++;
    
    }
    if (tamanho < 4){
            printf("\nO nome tem menos de 4 letras");
        }
    
    return 0;
}