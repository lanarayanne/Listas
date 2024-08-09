/*Escreva um programa que leia um inteiro nao negativo n e imprima a soma dos n primeiros numeros primos.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    int cont1 = 1; // numero que vai testar se e primo (++1)
    int cont2 = 1; // numero para dividir por cont1 enquanto for menor ou igual a ele.
    int cont3 = 0; // quantidade de numeros que o cont1 e divisivel
    int cont4 = 0; // quantidade de numeros primos
    int soma = 0;
    
    printf ("Informe um numero (inteiro, positivo): ");
    scanf ("%d", &num); //quantidade que tem que imprimir
    
    while (cont4 < num)
    {
        while (cont2 <= cont1)
        {
            if (cont1%cont2 == 0) {cont3 = cont3 + 1;} //1
            cont2 = cont2 + 1; //2 - encerra
        }
        if (cont3 <= 2) {printf ("%d ", cont1); soma = soma + cont1; cont4=cont4+ 1;} //imprime 1 e cont4=1
        cont1 = cont1 + 1; //2
        cont2 = 1;
        cont3 = 0;
    }
    
    printf ("\nSoma dos %d primeiros numeros primos = %d", num, soma);
    return 0;
}