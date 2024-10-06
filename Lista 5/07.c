/**
    7. Fac¸a um programa que conte o n´umero de 1’s que aparecem em um string. Exemplo:
 0011001-> 3
 
**/

#include <stdio.h>

int main()
{
    char string [1000];
    int cont=0;
    int i=0;
    
    printf("Preencha a String com numeros: ");
    scanf("%1000[^\n]", string);
    
    while (string[i] != '\0'){
        if (string[i] == 49){
            cont++;
        }
        i++;
    }
    
    printf("Contagem de 1: %d", cont);
    
    return 0;
}