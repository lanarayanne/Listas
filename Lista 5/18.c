/** 
 
    18. Fac¸a um programa em que troque todas as ocorrencias de uma letra L1 pela letra L2 em ˆ
    uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuario
 
**/

#include <stdio.h>

int main()
{
    char frase[1000];
    char l1, l11, l2, l22;
    int i=0, procurar_letra=0;
    
    
    printf("Digite uma frase: ");
    scanf("%10000[^\n]", frase);
    
    printf("Escolha a letra que sera substituida: ");
    scanf(" %c", &l1);
    printf("Escolha a letra que ira substituir %c: ", l1);
    scanf(" %c", &l2);
    
    if (l2 >= 65 && l2 <= 90){ 
        l2 = l2 + 32; // l2 minusculo
    }
    
    
    if (l1 >= 65 && l1<= 90){ //
        l11 = l1+32;
        l22 = l2+32;
    }
    
    if (l1 >= 97 && l1<= 122){
        l11 = l1-32;
        l22 = l2-32;
    }
    
    while(frase[i] != '\0'){
        if (frase[i] == l1 || frase[i] == l11){
            procurar_letra = 1;
            break;
        }
        i++;
    }
    
    i=0;
    
    while(frase[i] != '\0'){
        if (frase[i] == l1){
           frase[i] = l2;
        }
        if (frase[i] == l11){
            frase[i] = l22;
        }
        i++;
    }
    
    i=0;
    
    printf("Resultado: ");
    
    if(procurar_letra){
        while(frase[i] != '\0'){
        printf("%c", frase[i]);
        i++;
        }
    }
    else {
        printf ("\nA letra %c nao existe na frase: ", l1);
    }
    
    return 0;
}