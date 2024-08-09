/*Escreva um programa que leia um numero inteiro positivo n e em seguida imprima n
linhas do chamado Triangulo de Floyd. Para n = 6, temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num, linha=1, num2=1, quant=0;
    int cont = 0;
    
    printf ("Informe um numero (inteiro, positivo): ");
    scanf ("%d", &num);
    
    while (linha<=num)
    {
        printf ("%d ", num2);
        num2 = num2 + 1;
        quant = quant + 1;
        if (quant == linha) {printf ("\n"); linha = linha + 1; quant = 0;}
    }
    
}
