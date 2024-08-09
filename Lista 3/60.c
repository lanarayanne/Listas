/*Fac¸a um programa que leia varios n ´ umeros, calcule e mostre: ´
(a) A soma dos numeros digitados ´
(b) A quantidade de numeros digitados ´
(c) A media dos n ´ umeros digitados ´
(d) O maior numero digitado ´
(e) O menor numero digitado ´
(f) A media dos n ´ umeros pares
Finalize a entrada de dados caso o usuario informe o valor 0.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num, soma=0, quant=0, maior, menor, somapares=0, quantpares=0;
    float media=0, medpares=0;
    
    printf ("Digite um numero ");
    scanf ("%d", &num);
    
    maior = num;
    menor = num;
    
    while (num != 0)
    {
        soma = soma + num;
        quant = quant + 1;
        media = (float)soma/(float)quant;
        if (num > maior) {maior = num;}
        if (num < menor) {menor = num;}
        if (num%2 == 0) 
        {
            somapares = somapares + num;
            quantpares = quantpares + 1;
            medpares = (float)somapares/(float)quantpares;
        }
    
    printf ("Digite um numero ");
    scanf ("%d", &num);    
    }
    
    printf ("\nPrograma Encerrado");
    printf ("\n(a)Soma dos numeros digitados = %d", soma);
    printf ("\n(b)Quantidade de numeros digitados = %d", quant);
    printf ("\n(c)Media de numeros digitados = %.2f", media);
    printf ("\n(d)Maior numero digitado = %d", maior);
    printf ("\n(e)Menor numero digitado = %d", menor);
    printf ("\n(f)Media dos numeros pares = %.2f", medpares);
 
    
    return 0;
}