/** 
    Fac ¸a um programa que receba do usu´ ario uma string. O programa imprime a string sem
    suas vogais
**/

#include <stdio.h>

int main()
{
    char string[10000];
    int i=0;
    
    printf("Digite uma frase: ");
    scanf("%10000[^\n]", string);
    
    while(string[i] != '\0'){
        if (string[i] != 'a' && string[i] != 'A' && 
            string[i] != 'e' && string[i] != 'E' && 
            string[i] != 'i' && string[i] != 'I' &&
            string[i] != 'o' && string[i] != 'O' &&
            string[i] != 'u' && string[i] != 'U'){
                printf ("%c", string[i]);
            }
        i++;
    }

    return 0;
}