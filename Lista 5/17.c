/** 
 
    17. Leia um vetor contendo letras de uma frase inclusive os espac¸os em branco. Retirar os
    espac¸os em branco do vetor e depois escrever o vetor resultante.
 
**/

#include <stdio.h>

int main()
{
    char frase[1000];
    int i=0;
    
    
    printf("Digite uma frase: ");
    scanf("%10000[^\n]", frase);
    
    while(frase[i] != '\0'){
        if(frase[i]== ' '){
            int j=i;
            while(frase[j] != '\0'){
                frase[j]=frase[j+1];
                j++;
            }
        }
        i++;
    }
    
    i=0;
    
    printf("Sem espacos: ");
    while(frase[i] != '\0'){
        printf("%c", frase[i]);
        i++;
    }

    return 0;
}