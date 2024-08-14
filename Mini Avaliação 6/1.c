/*1) (1 ponto)  Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). 
Gere outro numero formado pelos dígitos invertidos do numero lido. Exemplo: 123 gerou o número 321.*/

#include<stdio.h>
#include<stdlib.h>

int main (){
    
    float num;
    int copianum;
    
    printf("Informe um numero inteiro positivo entre 100 e 999: ");
    scanf("%f", &num);
    
    while (num<100 || num>999 || num != (int)num){
        printf ("\nNumero invalido, tente novamente!");
        printf("\nInforme um numero inteiro positivo entre 100 e 999: ");
        scanf("%f", &num);
    }
        
    copianum = (int)num;
    
    int primeiro_digito=copianum/100;
    int segundo_digito=(copianum%100)/10;
    int terceiro_digito=(copianum%100)%10;
    
    printf("O numero %d ao contrario e %d%d%d", (int)num, terceiro_digito, segundo_digito, primeiro_digito);
    

    return 0;
}