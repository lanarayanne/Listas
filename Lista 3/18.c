/*Escreva um algoritmo que leia certa quantidade de numeros e imprima o maior deles e
quantas vezes o maior numero foi lido. A quantidade de numeros a serem lidos deve ser
fornecida pelo usuario.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int cont=0; // contagem dos ciclos
    int num; // Numero que sera lido
    int soma=0; // quantas vezes o numero foi o maior
    int quant; // quantidade de numeros
    float maior= -INFINITY; // Dentro da biblioteca math.h
    
    
    printf ("Insira a quantidade de numeros: ");
    scanf ("%d", &quant);

    while (cont < quant)
    {
        printf ("%d) Informe o numero:", cont+1);
        scanf ("%d", &num);
        if (num > maior) 
        {
            maior = num;
            soma = 1; // Reinia a soma toda vez que encontrar um maior
        } else if (num == maior){soma = soma + 1;} // Se num não for maior e o numero for igual ao maior -> somar +1;
        //Se o num naõ for o maior e não for igual ao maior, então ele sera menor.
        cont = cont + 1;
    }

    printf ("\nO maior numero e %.f \nQuantidade de vezes: %d", maior, soma);
    
return 0;
}