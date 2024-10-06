/**
3. Crie um programa que compara duas strings (nao use a funcao strcmp).
**/

#include <stdio.h>


int main()
{
    char string1 [1000];
    char string2 [1000];
    int i=0, igual=0;
    char nada;
    
    printf("Digite uma frase: ");
    scanf("%1000[^\n]", string1);
    
    scanf("%c", &nada);
    
    printf("\nDigite outra frase: ");
    scanf("%1000[^\n]", string2);

    
    while (string1[i] != '\0' && string2[i] != '0'){
        if (string1[i] != string2[i]){
            igual = 1;
        }
        i++;
    }
    
    if (igual == 0){
        printf ("\nAs frases sao iguais");
    }
    else {
        printf ("\nAs frases sao diferentes");
    }
    
    return 0;
}