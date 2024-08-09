/*Faca um programa que calcula a associac¸ao em paralelo de dois resistores R1 e R2
fornecidos pelo usuario via teclado. O programa fica pedindo estes valores e calculando
ate que o usuario entre com um valor para resistencia igual a zero. R = R1 ∗ R2 / R1 + R2*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float r, total, mult=1, soma=0;
    
    printf ("Informe a resistencia (0 para encerrar): ");
    scanf ("%f", &r);
    
    while (r != 0)
    {
        mult= mult*r;
        soma= soma + r;
        total = mult/soma;
        printf ("Resistencia em paralelo = %.2f", total);
        
        printf ("\n\nInforme a resistencia (0 para encerrar): ");
        scanf ("%f", &r);
    
    }
    printf ("Programa Encerrado");

return 0;
}