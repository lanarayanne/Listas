/** 
 
  15. Leia uma cadeia de caracteres e converta todos os caracteres para maiuscula. ´ Dica:
subtraia 32 dos caracteres cujo codigo ASCII est ´ a entre 65 e 90
 
**/

#include <stdio.h>

int main()
{
    char palavra[50];
    int i=0;
    
    
    printf("Digite uma palavra: ");
    scanf("%50[^\n]", palavra);
    
    while(palavra[i] != '\0'){
        if(palavra[i]>=97 && palavra[i]<=122){
            palavra[i]=palavra[i]-32;
        }
        i++;
    }
    
    i=0;
    
    printf("Letra maiuscula: ");
    while(palavra[i] != '\0'){
        printf("%c", palavra[i]);
        i++;
    }

    return 0;
}