/**
     9. Entre com um nome e imprima o nome somente se a primeira letra do nome for “a”
 (mai´uscula ou min´ uscula).
 
**/

#include <stdio.h>

int main()
{
    char nome [50];
    int i=0;
    
    printf("Nome: ");
    scanf("%50[^\n]", nome);
    
    if(nome[0] == 'a' || nome[0] == 'A'){
        while (nome[i] != '\0'){
            printf ("%c", nome[i]);
            i++;
        }
    }
    
    return 0;
}