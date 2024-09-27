/** 
 
  14. Fac¸a um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor ASCII ´
de cada caractere da palavra. Imprima a string resultante.
 
**/

#include <stdio.h>

int main()
{
    char palavra[50];
    int i=0;
    
    
    printf("Digite uma palavra: ");
    scanf("%50[^\n]", palavra);
    
    while(palavra[i] != '\0'){
        palavra[i]=palavra[i]+1;
        i++;
    }
    
    i=0;
    
    printf("Somando 1 na tabela ASCII: ");
    while(palavra[i] != '\0'){
        printf("%c", palavra[i]);
        i++;
    }

    return 0;
}