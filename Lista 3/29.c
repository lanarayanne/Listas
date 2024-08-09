/*Escreva um programa para calcular o valor da serie, para 5 termos.
S = 0 + 1/2! + 2/4! + 3/6! + 4/8!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont2, termo = 1, num;
    float multi=1.0, soma = 0.0;
    
    num = 2;
    cont2 = num;
    
    while (termo < 5)
    {
        cont2 = num;
        multi = 1.0;
        while (cont2 >= 1) 
        {
            multi = multi * cont2;
            cont2 = cont2 - 1;
        }
        soma = soma + (termo / multi);
        termo = termo + 1;
        num = num + 2;
        cont2 = num;
    }
    
    printf ("Serie S = 0 + 1/2! + 2/4! + 3/6! + 4/8! =  %.4f", soma);
    
return 0;
}