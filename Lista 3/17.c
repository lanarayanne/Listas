/*Faca um programa que leia um numero inteiro positivo n e calcule a soma dos n primeiros
numeros naturais.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0; // contagem dos ciclos
    int num; // Numero que sera lido
    int soma=0;
    
    printf ("Insira um numero inteiro: ");
    scanf ("%d", &num);

    while (cont <= num)
    {
        printf ("%d\n", cont);
        soma = soma + cont;
        cont= cont +1;
    }
    printf ("A soma dos %d primeiros numeros e %d", num, soma);
    
return 0;
}