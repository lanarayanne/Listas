/** 
 
    16. Escreva um programa para converter uma cadeia de caracteres de letras maiusculas em ´
    letras minusculas
 
**/

#include <stdio.h>

int main()
{
    char palavra[50];
    int i=0;
    
    
    printf("Digite uma palavra: ");
    scanf("%50[^\n]", palavra);
    
    while(palavra[i] != '\0'){
        if(palavra[i]>=65 && palavra[i]<=90){
            palavra[i]=palavra[i]+32;
        }
        i++;
    }
    
    i=0;
    
    printf("Letra minuscula: ");
    while(palavra[i] != '\0'){
        printf("%c", palavra[i]);
        i++;
    }

    return 0;
}