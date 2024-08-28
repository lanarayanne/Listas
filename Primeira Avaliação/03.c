/*3) (2,0)  Faça um programa que some todos os números naturais abaixo de 500 que são múltiplos de 4 ou 7.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;
    int numero=1;
    
    for (numero=1; numero<=500; numero++){
        if (numero%4==0 || numero%7==0){
            // printf("%d ", numero);
            soma = soma + numero;
        }
    }
    
    printf ("\nSoma de todos os números naturais abaixo de 500 que são múltiplos de 4 ou 7 = %d", soma);

    return 0;
}