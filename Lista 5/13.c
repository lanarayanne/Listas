/** 
 
  13. Ler uma frase e contar quantos caracteres s˜ ao brancos. Lembre-se que uma frase ´ e um
 conjunto de caracteres (vetor).
 
**/

#include <stdio.h>

int main()
{
    char string[10000];
    int cont=0;
    int i=0;
    
    
    printf("Digite uma frase: ");
    scanf("%10000[^\n]", string);
    
    while(string[i] != '\0'){
        if(string[i] == ' '){
            cont++;
        }
        i++;
    }
    
    printf("Quantidade de espacos: %d", cont);

    return 0;
}