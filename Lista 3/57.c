/*Faca um programa que conte quantos numeros primos existem entre a e b, onde a e b
sao numeros informados pelo usuario.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    int a;
    int b;
    int cont1; // numero que vai testar se e primo (++1)
    int cont2 = 1; // numero para dividir por cont1 enquanto for menor ou igual a ele.
    int cont3 = 0; // quantidade de numeros que o cont1 e divisivel
    int cont4 = 1;
    
    printf ("Informe o valor inical A: ");
    scanf ("%d", &a);
    printf ("\nInforme o valor final B: ");
    scanf ("%d", &b);
    
    cont1 = a;
    num = b;
    
    if (a<b)
    {
    while (cont1 < num)
    {
        while (cont2 <= cont1)
        {
            if (cont1%cont2 == 0) {cont3 = cont3 + 1;} 
            cont2 = cont2 + 1;
        }
        if (cont3 <= 2) {cont4 = cont4 + 1;} 
        cont1 = cont1 + 1;
        cont2 = 1;
        cont3 = 0;
    }
    printf ("\nEntre %d e %d existem %d numeros primos", a, b, cont4-1);
    }
    else if (a==b) {printf ("Os numeros sao iguais");}
    else {printf ("Intervalo Invalido (B maior que A)");}
    
    return 0;
}