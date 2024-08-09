/* Faca um programa que simula o lancamento de dois dados, d1 e d2, n vezes, e tem como
saida o numero de cada dado e a relacao entre eles (>,<,=) de cada lancamento.*/ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1 = 1.0, d2 = 1.0, vezes, cont = 1;
    
    printf ("Informe a quantidade de lancamentos: ");
    scanf ("%d", &vezes);
        
    while (cont <= vezes)
    {
        printf ("%d) Informe o valor de D1: ", cont);
        scanf ("%d", &d1);
        printf ("%d) Informe o valor de D2: ", cont);
        scanf ("%d", &d2);
        
        if (d1 > 0 && d1 <=6 && d2 > 0 && d2 <=6)
        {
        if (d1>d2) {printf ("%d > %d\n\n", d1, d2);}
        if (d1<d2) {printf ("%d < %d\n\n", d1, d2);}
        if (d1==d2) {printf ("%d = %d\n\n", d1, d2);}
        cont= cont + 1;
        }
        else
        {
            if (d1<= 0 || d1>6) {printf("Valor D1 invalido\n\n");}
            if (d2<= 0 || d2>6) {printf("Valor D2 invalido\n\n");} 
        }
    } 
        
return 0;
}