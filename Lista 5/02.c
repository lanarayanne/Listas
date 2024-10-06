/**
2. Crie um programa que calcula o comprimento de uma string (nao use a funcao strlen)
**/

#include <stdio.h>


int main()
{
    char string [1000];
    int i=0, tamanho=0;
    
    printf("Digite uma frase:\n");
    scanf("%1000[^\n]", string);
    
    while (string[i] != '\0'){
        if (string[i] == '\n'){
            string[i] = '\0';
        }
        i++;
        
    }
    
    i=0;
    
    while (string[i] != '\0'){
        tamanho++;
        i++;
    }
    
    printf ("\nFrase: %s\nTamanho= %d", string, tamanho);
    return 0;
}