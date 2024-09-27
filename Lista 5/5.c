/**
5. Digite um nome, calcule e retorne quantas letras tem esse nome
**/

#include <stdio.h>


int main()
{
    char nome [50];
    int i=0;
    int tamanho=0;
    
    printf("Digite um Nome: ");
    scanf("%50[^\n]", nome);
    
    while ( nome[i] != '\0'){
        tamanho=tamanho+1;
        i++;
    
    }
    printf("\nQuantidade de letras = %d", tamanho);
    
    return 0;
}