/** 
 
 12. Fac ¸a um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui
 essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais
 da palavra dada por esse caractere.
 
**/

#include <stdio.h>

int main()
{
    char string[10000];
    char caractere;
    int cont=0;
    int i=0;
    
    
    printf("Digite uma frase: ");
    scanf("%10000[^\n]", string);
    
    while(string[i] != '\0'){
        if (string[i] == 'a' || string[i] == 'A' || 
            string[i] == 'e' || string[i] == 'E' || 
            string[i] == 'i' || string[i] == 'I' ||
            string[i] == 'o' || string[i] == 'O' ||
            string[i] == 'u' || string[i] == 'U'){
                cont++;
            }
        i++;
    }
    
    printf("Escolha um caractere: ");
    scanf(" %c", &caractere);
    
    i=0;
    
    while(string[i] != '\0'){
        if (string[i] == 'a' || string[i] == 'A' || 
            string[i] == 'e' || string[i] == 'E' || 
            string[i] == 'i' || string[i] == 'I' ||
            string[i] == 'o' || string[i] == 'O' ||
            string[i] == 'u' || string[i] == 'U'){
                string[i] = caractere;
            }
        i++;
    }
    
    i=0;
    
    printf("Quantidade de vogais: %d\n", cont);
    printf("Frase com vogais substituidas:\n");
    
    while(string[i] != '\0'){
        printf ("%c", string[i]);
        i++;
    }

    return 0;
}