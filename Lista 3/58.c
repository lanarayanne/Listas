/*Fac¸a um programa que some os numeros primos existentes entre ´ a e b, onde a e b sao˜
numeros informados pelo usu ´ ario.*/

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
    int soma = 0;
    
    printf ("Informe o valor inical A: ");
    scanf ("%d", &a);
    printf ("\nInforme o valor final B: ");
    scanf ("%d", &b);
    
    cont1 = a;
    num = b;
    
    if (a<b)
    {
    while (cont1 <= b)
    {
        while (cont2 <= cont1)
        {
            if (cont1%cont2 == 0) {cont3 = cont3 + 1;} 
            cont2 = cont2 + 1;
        }
        if (cont3 <= 2) {printf ("%d ", cont1); cont4 = cont4 + 1; soma = soma + cont1;} 
        cont1 = cont1 + 1;
        cont2 = 1;
        cont3 = 0;
    }
    printf ("\nSoma dos numeros primos entre %d e %d = %d", a, b, soma);
    }
    else if (a==b) {printf ("Os numeros sao iguais");}
    else {printf ("Intervalo Invalido (B maior que A)");}
    
    return 0;
}