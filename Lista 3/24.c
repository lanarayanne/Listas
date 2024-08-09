/*Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores
desse numero, com excecao dele proprio. Ex: a soma dos divisores do numero 66 e
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=1, soma;
  
    printf("Informe um numero: ");
    scanf ("%d", &num);

    while (cont < num)
    {
       if (num%cont == 0) {printf ("\n%d", cont); soma = soma + cont;}
        cont = cont + 1;
    }
    
    printf ("\nSoma de todos os divisores de %d exceto ele mesmo = %d", num, soma);
return 0;
}