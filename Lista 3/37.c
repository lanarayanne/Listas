/* Escreve um programa que verifique quais numeros entre 1000 e 9999 (inclusive) pos-
suem a propriedade seguinte: a soma dos dois digitos de mais baixa ordem com os dois
digitos de mais alta ordem elevada ao quadrado e igual ao proprio numero. Por exemplo,
para o inteiro 3025, temos que:
30 + 25 = 55
55^2 = 3025 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1000, num = cont, umdois, tresquatro, soma, quad;
    
    while (cont >= 1000 && cont <=9999)
    {
        umdois = num/100;
        tresquatro = (num%100);
        soma = umdois + tresquatro;
        quad = soma*soma;
        if (quad == num) {printf ("\n%d", num);}
        cont = cont + 1;
        num = cont;
    }
    
return 0;
}